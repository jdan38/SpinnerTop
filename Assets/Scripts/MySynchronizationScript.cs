using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class MySynchronizationScript : MonoBehaviour, IPunObservable
{

    Rigidbody rb;
    PhotonView photonView;

    Vector3 networkedPosition;
    Quaternion networkedRotaion;

    public bool synchronizedVelocity = true;
    public bool synchronizeAngularVelocity = true;
    public bool isTeleportEnabled = true;
    public float teleportIfDistanceGreaterThan = 1.0f;

    private float distance;
    private float angle;

    private GameObject battleArenaGameObject;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
        photonView = GetComponent<PhotonView>();

        networkedPosition = new Vector3();
        networkedRotaion = new Quaternion();

        battleArenaGameObject = GameObject.Find("BattleArena");
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        if (!photonView.IsMine)
        {
            rb.position = Vector3.MoveTowards(rb.position, networkedPosition, distance*(1.0f/ PhotonNetwork.SerializationRate));
            rb.rotation = Quaternion.RotateTowards(rb.rotation, networkedRotaion, angle*(1.0f / PhotonNetwork.SerializationRate));
        }

        
    }



    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            //Then, photonView is mine and I am the one who controls this player.
            //should send position, velocity
            stream.SendNext(rb.position-battleArenaGameObject.transform.position);
            stream.SendNext(rb.rotation);

            if (synchronizedVelocity)
            {
                stream.SendNext(rb.velocity);
            }

            if (synchronizedVelocity)
            {
                stream.SendNext(rb.angularVelocity);
            }
           
        }
        else 
        {
            networkedPosition =  (Vector3)stream.ReceiveNext()+battleArenaGameObject.transform.position;
            networkedRotaion = (Quaternion)stream.ReceiveNext();

            if (isTeleportEnabled)
            {
                if (Vector3.Distance(rb.position, networkedPosition) > teleportIfDistanceGreaterThan)
                {
                    rb.position = networkedPosition;
                }
            }

            if (synchronizedVelocity || synchronizeAngularVelocity)
            {
                float lag = Mathf.Abs((float)(PhotonNetwork.Time - info.SentServerTime));

                if (synchronizedVelocity)
                {
                    rb.velocity = (Vector3)stream.ReceiveNext();

                    networkedPosition += rb.velocity * lag;

                    distance = Vector3.Distance(rb.position, networkedPosition);
                }


                if (synchronizeAngularVelocity)
                {
                    rb.angularVelocity = (Vector3)stream.ReceiveNext();

                    networkedRotaion = Quaternion.Euler(rb.angularVelocity * lag) * networkedRotaion;


                    angle = Quaternion.Angle(rb.rotation, networkedRotaion);
                }
            }


        }
    }
}
