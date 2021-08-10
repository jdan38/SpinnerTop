using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


public class ARPlacementManger : MonoBehaviour
{

    ARRaycastManager m_ARRaycastmanger;
    static List<ARRaycastHit> raycast_Hits = new List<ARRaycastHit>();

    public Camera aRCamera;

    public GameObject battleArenaGameobject;


    private void Awake()
    {
        m_ARRaycastmanger = GetComponent<ARRaycastManager>();
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 centerOfScreen = new Vector3(Screen.width / 2, Screen.height / 2);
        Ray ray = aRCamera.ScreenPointToRay(centerOfScreen);


        if (m_ARRaycastmanger.Raycast(ray,raycast_Hits,TrackableType.PlaneWithinPolygon))
        {

            //Interserction
            Pose hitPose = raycast_Hits[0].pose;

            Vector3 positionToBePlaced = hitPose.position;

            base.transform.position = positionToBePlaced;

        }


    }
}
