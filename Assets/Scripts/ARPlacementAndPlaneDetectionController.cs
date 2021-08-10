using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using TMPro;

public class ARPlacementAndPlaneDetectionController : MonoBehaviour
{
    ARPlaneManager m_ARPlaneManger;
    ARPlacementManger m_ARPlacementManager;

    public GameObject placeButton;
    public GameObject adjustButton;
    public GameObject searchForGameButton;
    public GameObject scaleSlider;


    public TextMeshProUGUI informUIPanel_text;

    private void Awake()
    {
        m_ARPlaneManger = GetComponent<ARPlaneManager>();
        m_ARPlacementManager = GetComponent<ARPlacementManger>();
    }

    // Start is called before the first frame update
    void Start()
    {
        placeButton.SetActive(true);
        scaleSlider.SetActive(true);
        adjustButton.SetActive(false);
        searchForGameButton.SetActive(false);

        informUIPanel_text.text = "Move phone to detect planes and place the Battle Arena!";
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void DisableARPlacementAndPlaneDetection()
    {
        m_ARPlaneManger.enabled = false;
        m_ARPlacementManager.enabled = false;
        SetAllPlanesActiveOrDeactive(false);

        scaleSlider.SetActive(false);

        placeButton.SetActive(false);
        adjustButton.SetActive(true);
        searchForGameButton.SetActive(true);

        informUIPanel_text.text = " Great! You placed the AREANA..Now, search for games to BATTLE!";
    }

    public void EnableARPlacementAndPlaneDetection()
    {
        m_ARPlaneManger.enabled = true;
        m_ARPlacementManager.enabled = true;
        SetAllPlanesActiveOrDeactive(true);

        scaleSlider.SetActive(true);

        placeButton.SetActive(true);
        adjustButton.SetActive(false);
        searchForGameButton.SetActive(false);

        informUIPanel_text.text = "Move phone to detect planes and place the Battle Arena!";
    }

    private void SetAllPlanesActiveOrDeactive(bool value)
    {
        foreach (var plane in m_ARPlaneManger.trackables)
        {
            plane.gameObject.SetActive(value);
        }

    }
}
