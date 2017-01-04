#define __80211MGR_H__
#define WLAN_MIN_ARRAY          1
#define WLAN_EID_SSID           0
#define WLAN_EID_SUPP_RATES     1
#define WLAN_EID_FH_PARMS       2
#define WLAN_EID_DS_PARMS       3
#define WLAN_EID_CF_PARMS       4
#define WLAN_EID_TIM            5
#define WLAN_EID_IBSS_PARMS     6
#define WLAN_EID_COUNTRY        7
#define WLAN_EID_CHALLENGE      16
#define WLAN_EID_PWR_CONSTRAINT 32
#define WLAN_EID_PWR_CAPABILITY 33
#define WLAN_EID_TPC_REQ        34
#define WLAN_EID_TPC_REP        35
#define WLAN_EID_SUPP_CH        36
#define WLAN_EID_CH_SWITCH      37
#define WLAN_EID_MEASURE_REQ    38
#define WLAN_EID_MEASURE_REP    39
#define WLAN_EID_QUIET          40
#define WLAN_EID_IBSS_DFS       41
#define WLAN_EID_ERP            42
#define WLAN_EID_RSN            48
#define WLAN_EID_EXTSUPP_RATES  50
#define WLAN_EID_RSN_WPA        221
#define WLAN_EID_ERP_NONERP_PRESENT             0x01
#define WLAN_EID_ERP_USE_PROTECTION             0x02
#define WLAN_EID_ERP_BARKER_MODE                0x04
#define WLAN_MGMT_REASON_RSVD                       0
#define WLAN_MGMT_REASON_UNSPEC                     1
#define WLAN_MGMT_REASON_PRIOR_AUTH_INVALID         2
#define WLAN_MGMT_REASON_DEAUTH_LEAVING             3
#define WLAN_MGMT_REASON_DISASSOC_INACTIVE          4
#define WLAN_MGMT_REASON_DISASSOC_AP_BUSY           5
#define WLAN_MGMT_REASON_CLASS2_NONAUTH             6
#define WLAN_MGMT_REASON_CLASS3_NONASSOC            7
#define WLAN_MGMT_REASON_DISASSOC_STA_HASLEFT       8
#define WLAN_MGMT_REASON_CANT_ASSOC_NONAUTH         9
#define WLAN_MGMT_REASON_DISASSOC_PWR_CAP_UNACCEPT      10
#define WLAN_MGMT_REASON_DISASSOC_SUPP_CH_UNACCEPT      11
#define WLAN_MGMT_REASON_INVALID_IE                 13
#define WLAN_MGMT_REASON_MIC_FAILURE                14
#define WLAN_MGMT_REASON_4WAY_HANDSHAKE_TIMEOUT     15
#define WLAN_MGMT_REASON_GRPKEY_UPDATE_TIMEOUT      16
#define WLAN_MGMT_REASON_4WAY_INFO_DIFFERENT        17
#define WLAN_MGMT_REASON_MULTCAST_CIPHER_INVALID    18
#define WLAN_MGMT_REASON_UNCAST_CIPHER_INVALID      19
#define WLAN_MGMT_REASON_AKMP_INVALID               20
#define WLAN_MGMT_REASON_RSNE_UNSUPPORTED           21
#define WLAN_MGMT_REASON_RSNE_CAP_INVALID           22
#define WLAN_MGMT_REASON_80211X_AUTH_FAILED         23
#define WLAN_MGMT_STATUS_SUCCESS                        0
#define WLAN_MGMT_STATUS_UNSPEC_FAILURE                 1
#define WLAN_MGMT_STATUS_CAPS_UNSUPPORTED               10
#define WLAN_MGMT_STATUS_REASSOC_NO_ASSOC               11
#define WLAN_MGMT_STATUS_ASSOC_DENIED_UNSPEC            12
#define WLAN_MGMT_STATUS_UNSUPPORTED_AUTHALG            13
#define WLAN_MGMT_STATUS_RX_AUTH_NOSEQ                  14
#define WLAN_MGMT_STATUS_CHALLENGE_FAIL                 15
#define WLAN_MGMT_STATUS_AUTH_TIMEOUT                   16
#define WLAN_MGMT_STATUS_ASSOC_DENIED_BUSY              17
#define WLAN_MGMT_STATUS_ASSOC_DENIED_RATES             18
#define WLAN_MGMT_STATUS_ASSOC_DENIED_SHORTPREAMBLE     19
#define WLAN_MGMT_STATUS_ASSOC_DENIED_PBCC              20
#define WLAN_MGMT_STATUS_ASSOC_DENIED_AGILITY           21
#define WLAN_MGMT_STATUS_ASSOC_REJECT_BCS_SPECTRUM_MNG  22
#define WLAN_MGMT_STATUS_ASSOC_REJECT_BCS_PWR_CAP       23
#define WLAN_MGMT_STATUS_ASSOC_REJECT_BCS_SUPP_CH       24
#define WLAN_MGMT_STATUS_SHORTSLOTTIME_UNSUPPORTED      25
#define WLAN_MGMT_STATUS_DSSSOFDM_UNSUPPORTED           26
#define WLAN_MGMT_STATUS_INVALID_IE                     40
#define WLAN_MGMT_STATUS_GROUP_CIPHER_INVALID           41
#define WLAN_MGMT_STATUS_PAIRWISE_CIPHER_INVALID        42
#define WLAN_MGMT_STATUS_AKMP_INVALID                   43
#define WLAN_MGMT_STATUS_UNSUPPORT_RSN_IE_VER           44
#define WLAN_MGMT_STATUS_INVALID_RSN_IE_CAP             45
#define WLAN_MGMT_STATUS_CIPHER_REJECT                  46
#define WLAN_AUTH_ALG_OPENSYSTEM                0
#define WLAN_AUTH_ALG_SHAREDKEY                 1
#define WLAN_BEACON_OFF_TS                  0
#define WLAN_BEACON_OFF_BCN_INT             8
#define WLAN_BEACON_OFF_CAPINFO             10
#define WLAN_BEACON_OFF_SSID                12
#define WLAN_DISASSOC_OFF_REASON            0
#define WLAN_ASSOCREQ_OFF_CAP_INFO          0
#define WLAN_ASSOCREQ_OFF_LISTEN_INT        2
#define WLAN_ASSOCREQ_OFF_SSID              4
#define WLAN_ASSOCRESP_OFF_CAP_INFO         0
#define WLAN_ASSOCRESP_OFF_STATUS           2
#define WLAN_ASSOCRESP_OFF_AID              4
#define WLAN_ASSOCRESP_OFF_SUPP_RATES       6
#define WLAN_REASSOCREQ_OFF_CAP_INFO        0
#define WLAN_REASSOCREQ_OFF_LISTEN_INT      2
#define WLAN_REASSOCREQ_OFF_CURR_AP         4
#define WLAN_REASSOCREQ_OFF_SSID            10
#define WLAN_REASSOCRESP_OFF_CAP_INFO       0
#define WLAN_REASSOCRESP_OFF_STATUS         2
#define WLAN_REASSOCRESP_OFF_AID            4
#define WLAN_REASSOCRESP_OFF_SUPP_RATES     6
#define WLAN_PROBEREQ_OFF_SSID              0
#define WLAN_PROBERESP_OFF_TS               0
#define WLAN_PROBERESP_OFF_BCN_INT          8
#define WLAN_PROBERESP_OFF_CAP_INFO         10
#define WLAN_PROBERESP_OFF_SSID             12
#define WLAN_AUTHEN_OFF_AUTH_ALG            0
#define WLAN_AUTHEN_OFF_AUTH_SEQ            2
#define WLAN_AUTHEN_OFF_STATUS              4
#define WLAN_AUTHEN_OFF_CHALLENGE           6
#define WLAN_DEAUTHEN_OFF_REASON            0
#define WLAN_11i_CSS_USE_GROUP              0
#define WLAN_11i_CSS_WEP40                  1
#define WLAN_11i_CSS_TKIP                   2
#define WLAN_11i_CSS_CCMP                   4
#define WLAN_11i_CSS_WEP104                 5
#define WLAN_11i_CSS_UNKNOWN                255
#define WLAN_11i_AKMSS_802_1X               1
#define WLAN_11i_AKMSS_PSK                  2
#define WLAN_11i_AKMSS_UNKNOWN              255
#define MEASURE_TYPE_BASIC      0
#define MEASURE_TYPE_CCA        1
#define MEASURE_TYPE_RPI        2
#define MEASURE_MODE_ENABLE     0x02
#define MEASURE_MODE_REQ        0x04
#define MEASURE_MODE_REP        0x08
#define MEASURE_MODE_LATE       0x01
#define MEASURE_MODE_INCAPABLE  0x02
#define MEASURE_MODE_REFUSED    0x04
typedef struct tagWLAN_IE __attribute__ ((__packed__))
WLAN_IE, *PWLAN_IE;
typedef struct tagWLAN_IE_SSID __attribute__ ((__packed__))
WLAN_IE_SSID, *PWLAN_IE_SSID;
typedef struct tagWLAN_IE_SUPP_RATES __attribute__ ((__packed__))
WLAN_IE_SUPP_RATES,  *PWLAN_IE_SUPP_RATES;
typedef struct _WLAN_IE_FH_PARMS  WLAN_IE_FH_PARMS,  *PWLAN_IE_FH_PARMS;
typedef struct tagWLAN_IE_DS_PARMS __attribute__ ((__packed__))
WLAN_IE_DS_PARMS,  *PWLAN_IE_DS_PARMS;
typedef struct tagWLAN_IE_CF_PARMS __attribute__ ((__packed__))
WLAN_IE_CF_PARMS,  *PWLAN_IE_CF_PARMS;
typedef struct tagWLAN_IE_TIM __attribute__ ((__packed__))
WLAN_IE_TIM,  *PWLAN_IE_TIM;
typedef struct tagWLAN_IE_IBSS_PARMS __attribute__ ((__packed__))
WLAN_IE_IBSS_PARMS, *PWLAN_IE_IBSS_PARMS;
typedef struct tagWLAN_IE_CHALLENGE __attribute__ ((__packed__))
WLAN_IE_CHALLENGE,  *PWLAN_IE_CHALLENGE;
typedef struct tagWLAN_IE_RSN_EXT  WLAN_IE_RSN_EXT, *PWLAN_IE_RSN_EXT;
typedef struct tagWLAN_IE_RSN_AUTH  WLAN_IE_RSN_AUTH, *PWLAN_IE_RSN_AUTH;
typedef struct tagWLAN_IE_RSN  WLAN_IE_RSN, *PWLAN_IE_RSN;
typedef struct tagWLAN_IE_ERP __attribute__ ((__packed__))
WLAN_IE_ERP,  *PWLAN_IE_ERP;
typedef struct _MEASEURE_REQ  MEASEURE_REQ, *PMEASEURE_REQ,
MEASEURE_REQ_BASIC, *PMEASEURE_REQ_BASIC,
MEASEURE_REQ_CCA, *PMEASEURE_REQ_CCA,
MEASEURE_REQ_RPI, *PMEASEURE_REQ_RPI;
typedef struct _MEASEURE_REP_BASIC  MEASEURE_REP_BASIC, *PMEASEURE_REP_BASIC;
typedef struct _MEASEURE_REP_CCA  MEASEURE_REP_CCA, *PMEASEURE_REP_CCA;
typedef struct _MEASEURE_REP_RPI  MEASEURE_REP_RPI, *PMEASEURE_REP_RPI;
typedef union _MEASEURE_REP  MEASEURE_REP, *PMEASEURE_REP;
typedef struct _WLAN_IE_MEASURE_REQ  WLAN_IE_MEASURE_REQ, *PWLAN_IE_MEASURE_REQ;
typedef struct _WLAN_IE_MEASURE_REP  WLAN_IE_MEASURE_REP, *PWLAN_IE_MEASURE_REP;
typedef struct _WLAN_IE_CH_SW  WLAN_IE_CH_SW, *PWLAN_IE_CH_SW;
typedef struct _WLAN_IE_QUIET  WLAN_IE_QUIET, *PWLAN_IE_QUIET;
typedef struct _WLAN_IE_COUNTRY  WLAN_IE_COUNTRY, *PWLAN_IE_COUNTRY;
typedef struct _WLAN_IE_PW_CONST  WLAN_IE_PW_CONST, *PWLAN_IE_PW_CONST;
typedef struct _WLAN_IE_PW_CAP  WLAN_IE_PW_CAP, *PWLAN_IE_PW_CAP;
typedef struct _WLAN_IE_SUPP_CH  WLAN_IE_SUPP_CH, *PWLAN_IE_SUPP_CH;
typedef struct _WLAN_IE_TPC_REQ  WLAN_IE_TPC_REQ, *PWLAN_IE_TPC_REQ;
typedef struct _WLAN_IE_TPC_REP  WLAN_IE_TPC_REP, *PWLAN_IE_TPC_REP;
typedef struct _WLAN_IE_IBSS_DFS  WLAN_IE_IBSS_DFS, *PWLAN_IE_IBSS_DFS;
typedef struct tagWLAN_FR_MGMT  WLAN_FR_MGMT,  *PWLAN_FR_MGMT;
typedef struct tagWLAN_FR_BEACON  WLAN_FR_BEACON, *PWLAN_FR_BEACON;
typedef struct tagWLAN_FR_IBSSATIM  WLAN_FR_IBSSATIM, *PWLAN_FR_IBSSATIM;
typedef struct tagWLAN_FR_DISASSOC  WLAN_FR_DISASSOC, *PWLAN_FR_DISASSOC;
typedef struct tagWLAN_FR_ASSOCREQ  WLAN_FR_ASSOCREQ, *PWLAN_FR_ASSOCREQ;
typedef struct tagWLAN_FR_ASSOCRESP  WLAN_FR_ASSOCRESP, *PWLAN_FR_ASSOCRESP;
typedef struct tagWLAN_FR_REASSOCREQ  WLAN_FR_REASSOCREQ, *PWLAN_FR_REASSOCREQ;
typedef struct tagWLAN_FR_REASSOCRESP  WLAN_FR_REASSOCRESP, *PWLAN_FR_REASSOCRESP;
typedef struct tagWLAN_FR_PROBEREQ  WLAN_FR_PROBEREQ, *PWLAN_FR_PROBEREQ;
typedef struct tagWLAN_FR_PROBERESP  WLAN_FR_PROBERESP, *PWLAN_FR_PROBERESP;
typedef struct tagWLAN_FR_AUTHEN  WLAN_FR_AUTHEN, *PWLAN_FR_AUTHEN;
typedef struct tagWLAN_FR_DEAUTHEN  WLAN_FR_DEAUTHEN, *PWLAN_FR_DEAUTHEN;
void
vMgrEncodeBeacon(
PWLAN_FR_BEACON  pFrame
);
void
vMgrDecodeBeacon(
PWLAN_FR_BEACON  pFrame
);
void
vMgrEncodeIBSSATIM(
PWLAN_FR_IBSSATIM   pFrame
);
void
vMgrDecodeIBSSATIM(
PWLAN_FR_IBSSATIM   pFrame
);
void
vMgrEncodeDisassociation(
PWLAN_FR_DISASSOC  pFrame
);
void
vMgrDecodeDisassociation(
PWLAN_FR_DISASSOC  pFrame
);
void
vMgrEncodeAssocRequest(
PWLAN_FR_ASSOCREQ  pFrame
);
void
vMgrDecodeAssocRequest(
PWLAN_FR_ASSOCREQ  pFrame
);
void
vMgrEncodeAssocResponse(
PWLAN_FR_ASSOCRESP  pFrame
);
void
vMgrDecodeAssocResponse(
PWLAN_FR_ASSOCRESP  pFrame
);
void
vMgrEncodeReassocRequest(
PWLAN_FR_REASSOCREQ  pFrame
);
void
vMgrDecodeReassocRequest(
PWLAN_FR_REASSOCREQ  pFrame
);
void
vMgrEncodeProbeRequest(
PWLAN_FR_PROBEREQ  pFrame
);
void
vMgrDecodeProbeRequest(
PWLAN_FR_PROBEREQ  pFrame
);
void
vMgrEncodeProbeResponse(
PWLAN_FR_PROBERESP  pFrame
);
void
vMgrDecodeProbeResponse(
PWLAN_FR_PROBERESP  pFrame
);
void
vMgrEncodeAuthen(
PWLAN_FR_AUTHEN  pFrame
);
void
vMgrDecodeAuthen(
PWLAN_FR_AUTHEN  pFrame
);
void
vMgrEncodeDeauthen(
PWLAN_FR_DEAUTHEN  pFrame
);
void
vMgrDecodeDeauthen(
PWLAN_FR_DEAUTHEN  pFrame
);
void
vMgrEncodeReassocResponse(
PWLAN_FR_REASSOCRESP  pFrame
);
void
vMgrDecodeReassocResponse(
PWLAN_FR_REASSOCRESP  pFrame
);
