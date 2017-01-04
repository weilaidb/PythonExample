static int          msglevel                =MSG_LEVEL_INFO;
typedef struct _WLAN_FRAME_ACTION  WLAN_FRAME_ACTION, *PWLAN_FRAME_ACTION;
typedef struct _WLAN_FRAME_MSRREQ  WLAN_FRAME_MSRREQ, *PWLAN_FRAME_MSRREQ;
typedef struct _WLAN_FRAME_MSRREP  WLAN_FRAME_MSRREP, *PWLAN_FRAME_MSRREP;
typedef struct _WLAN_FRAME_TPCREQ  WLAN_FRAME_TPCREQ, *PWLAN_FRAME_TPCREQ;
typedef struct _WLAN_FRAME_TPCREP  WLAN_FRAME_TPCREP, *PWLAN_FRAME_TPCREP;
#define ACTION_MSRREQ       0
#define ACTION_MSRREP       1
#define ACTION_TPCREQ       2
#define ACTION_TPCREP       3
#define ACTION_CHSW         4
static bool s_bRxMSRReq(PSMgmtObject pMgmt, PWLAN_FRAME_MSRREQ pMSRReq,
unsigned int uLength)
static bool s_bRxTPCReq(PSMgmtObject pMgmt, PWLAN_FRAME_TPCREQ pTPCReq, unsigned char byRate, unsigned char byRSSI)
bool
IEEE11hbMgrRxAction (
void *pMgmtHandle,
void *pRxPacket
)
bool IEEE11hbMSRRepTx (
void *pMgmtHandle
)
