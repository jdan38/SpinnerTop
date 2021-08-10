using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LobbyManager : MonoBehaviourPunCallbacks
{
    [Header("Login UI")]
    public InputField playerNameInputField;
    public GameObject uI_LoginGameobject;

    [Header("Lobby UI")]
    public GameObject uI_LobbyGameobject;
    public GameObject uI_3DGameobject;

    [Header("Connection Status UI")]
    public GameObject uI_ConnectionStatusGameobject;
    public Text connectionStatusText;
    public bool showCennectionStatus = false;



    #region UNITY Methods
    // Start is called before the first frame update
    void Start()
    {

        if (PhotonNetwork.IsConnected)
        {
            //Activating only Lobby UI
            uI_LobbyGameobject.SetActive(true);
            uI_3DGameobject.SetActive(true);
            uI_ConnectionStatusGameobject.SetActive(false);

            uI_LoginGameobject.SetActive(false);
        }
        else
        {
            //Activating only Login UI since we did not connect to Photon yet.
            uI_LobbyGameobject.SetActive(false);
            uI_3DGameobject.SetActive(false);
            uI_ConnectionStatusGameobject.SetActive(false);

            uI_LoginGameobject.SetActive(true);
        }
    }

    // Update is called once per frame
    void Update()
    {

        if (showCennectionStatus)
        {
            connectionStatusText.text = "Connection Status: " + PhotonNetwork.NetworkClientState;
        }
    }

    #endregion







    #region UI Callback Methods
    public void OnEnterGameButtonClicked()
    {
        


        string playerName = playerNameInputField.text;

        if(!string.IsNullOrEmpty(playerName))
        {
            uI_LobbyGameobject.SetActive(false);
            uI_3DGameobject.SetActive(false);
            uI_ConnectionStatusGameobject.SetActive(true);

            showCennectionStatus = true;
            uI_LoginGameobject.SetActive(false);


            if (!PhotonNetwork.IsConnected)
            {
                PhotonNetwork.LocalPlayer.NickName = playerName;

                PhotonNetwork.ConnectUsingSettings();
            }
        }
        else
        {
            Debug.Log("Player name is invalid or empty!");
        }
    }



    public void onQuickMatchButtonClicked()
    {
        //SceneManager.LoadScene("Scene_Loading");
        SceneLoader.Instance.LoadScene("Scene_PlayerSelection");
    }


    #endregion





    #region PHOTON Callback Methods
    public override void OnConnected()
    
    {
        Debug.Log("We connected to Internet");
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log(PhotonNetwork.LocalPlayer.NickName+ " is connected to Photon Server");

        uI_LobbyGameobject.SetActive(true);
        uI_3DGameobject.SetActive(true);
        uI_ConnectionStatusGameobject.SetActive(false);

        uI_LoginGameobject.SetActive(false);
    }

    #endregion
}

