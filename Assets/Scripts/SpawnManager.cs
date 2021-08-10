using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;

public class SpawnManager : MonoBehaviourPunCallbacks
{

    public GameObject[] playerPrfabs;
    public Transform[] spawnPositions;

    public GameObject battleArenaGameObject;

    public enum RaiseEventCodes
    {
        PlayerSpwanEventCode = 0
    }

    // Start is called before the first frame update
    void Start()
    {
        PhotonNetwork.NetworkingClient.EventReceived += OnEvent;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnDestroy()
    {
        PhotonNetwork.NetworkingClient.EventReceived -= OnEvent;
    }

    #region Photon Callback Methods
    void OnEvent(EventData photonEvent)
    {
        if (photonEvent.Code == (byte)RaiseEventCodes.PlayerSpwanEventCode)
        {

            object[] data = (object[])photonEvent.CustomData;
            Vector3 receivedPosition = (Vector3)data[0];
            Quaternion receivedRotation = (Quaternion)data[1];
            int receivedPlayerSelectionData = (int)data[3];

            GameObject player = Instantiate(playerPrfabs[receivedPlayerSelectionData], receivedPosition+ battleArenaGameObject.transform.position, receivedRotation);
            PhotonView _photonView = player.GetComponent<PhotonView>();
            _photonView.ViewID = (int)data[2];


        }
    }



    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.IsConnectedAndReady)
        {

            //object playerSelectionNumber;
            //if (PhotonNetwork.LocalPlayer.CustomProperties.TryGetValue(MultiplayerARSpinnerTopGame.PLAYER_SELECTION_NUMBER, out playerSelectionNumber))
            //{
            //    //playerSelectionNumber = 3;
            //    Debug.Log("Player selection number is " + (int)playerSelectionNumber);

            //    int randomSpawnPoint = Random.Range(0, spawnPositions.Length - 1);
            //    Vector3 instantiatePosition = spawnPositions[randomSpawnPoint].position;
            //    //Vector3 instantiatePosition = spawnPositions[1].position;
            //    Debug.Log("instantiatePosition: " + instantiatePosition);

            //    PhotonNetwork.Instantiate(playerPrfabs[(int)playerSelectionNumber].name, instantiatePosition, Quaternion.identity);

            //}
            SpawnPlayer();

        }

    }

    #endregion


    #region Private Methods
    private void SpawnPlayer()
    {
        object playerSelectionNumber;
        if (PhotonNetwork.LocalPlayer.CustomProperties.TryGetValue(MultiplayerARSpinnerTopGame.PLAYER_SELECTION_NUMBER, out playerSelectionNumber))
        {
           
            Debug.Log("Player selection number is " + (int)playerSelectionNumber);

            int randomSpawnPoint = Random.Range(0, spawnPositions.Length - 1);
            Vector3 instantiatePosition = spawnPositions[randomSpawnPoint].position;

            GameObject playerGameobject = Instantiate(playerPrfabs[(int)playerSelectionNumber], instantiatePosition, Quaternion.identity);

            PhotonView _photonView = playerGameobject.GetComponent<PhotonView>();

            if (PhotonNetwork.AllocateViewID(_photonView))
            {
                object[] data = new object[]
                {

                    playerGameobject.transform.position- battleArenaGameObject.transform.position, playerGameobject.transform.rotation, _photonView.ViewID, playerSelectionNumber
                };


                RaiseEventOptions raiseEventOptions = new RaiseEventOptions
                {
                    Receivers = ReceiverGroup.Others,
                    CachingOption = EventCaching.AddToRoomCache


                };

                SendOptions sendOptions = new SendOptions
                {

                    Reliability = true

                };



                //Raise Events!
                PhotonNetwork.RaiseEvent((byte)RaiseEventCodes.PlayerSpwanEventCode,data, raiseEventOptions,sendOptions);

            }
            else
            {

                Debug.Log("Failed to allocate a viewId");
                Destroy(playerGameobject);
            }
        }
    }

    #endregion
}
