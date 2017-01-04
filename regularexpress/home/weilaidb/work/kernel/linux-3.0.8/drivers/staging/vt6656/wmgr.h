#define __WMGR_H__
#define PROBE_DELAY                  100
#define SWITCH_CHANNEL_DELAY         200
#define WLAN_SCAN_MINITIME           25
#define WLAN_SCAN_MAXTIME            100
#define TRIVIAL_SYNC_DIFFERENCE      0
#define DEFAULT_IBSS_BI              100
#define WCMD_ACTIVE_SCAN_TIME   20
#define WCMD_PASSIVE_SCAN_TIME  100
#define DEFAULT_MSDU_LIFETIME           512
#define DEFAULT_MSDU_LIFETIME_RES_64us  8000
#define DEFAULT_MGN_LIFETIME            8
#define DEFAULT_MGN_LIFETIME_RES_64us   125
#define MAKE_BEACON_RESERVED            10
#define TIM_MULTICAST_MASK           0x01
#define TIM_BITMAPOFFSET_MASK        0xFE
#define DEFAULT_DTIM_PERIOD             1
#define AP_LONG_RETRY_LIMIT             4
#define DEFAULT_IBSS_CHANNEL            6
#define timer_expire(timer, next_tick) mod_timer(&timer, RUN_AT(next_tick))
typedef void (*TimerFunction)(unsigned long);
typedef unsigned char NDIS_802_11_MAC_ADDRESS[ETH_ALEN];
typedef struct _NDIS_802_11_AI_REQFI
NDIS_802_11_AI_REQFI, *PNDIS_802_11_AI_REQFI;
typedef struct _NDIS_802_11_AI_RESFI
NDIS_802_11_AI_RESFI, *PNDIS_802_11_AI_RESFI;
typedef struct _NDIS_802_11_ASSOCIATION_INFORMATION
NDIS_802_11_ASSOCIATION_INFORMATION, *PNDIS_802_11_ASSOCIATION_INFORMATION;
typedef struct tagSAssocInfo  SAssocInfo, *PSAssocInfo;
typedef enum tagWMAC_AUTHENTICATION_MODE  WMAC_AUTHENTICATION_MODE, *PWMAC_AUTHENTICATION_MODE;
typedef enum tagWMAC_CONFIG_MODE  WMAC_CONFIG_MODE, *PWMAC_CONFIG_MODE;
typedef enum tagWMAC_SCAN_TYPE  WMAC_SCAN_TYPE, *PWMAC_SCAN_TYPE;
typedef enum tagWMAC_SCAN_STATE  WMAC_SCAN_STATE, *PWMAC_SCAN_STATE;
typedef enum tagWMAC_BSS_STATE  WMAC_BSS_STATE, *PWMAC_BSS_STATE;
typedef enum tagWMAC_CURRENT_MODE  WMAC_CURRENT_MODE, *PWMAC_CURRENT_MODE;
typedef enum tagWMAC_POWER_MODE  WMAC_POWER_MODE, *PWMAC_POWER_MODE;
typedef struct tagSTxMgmtPacket  STxMgmtPacket, *PSTxMgmtPacket;
typedef struct tagSRxMgmtPacket  SRxMgmtPacket, *PSRxMgmtPacket;
typedef struct tagSMgmtObject
SMgmtObject, *PSMgmtObject;
void vMgrObjectInit(void *hDeviceContext);
void vMgrAssocBeginSta(void *hDeviceContext,
PSMgmtObject pMgmt,
PCMD_STATUS pStatus);
void vMgrReAssocBeginSta(void *hDeviceContext,
PSMgmtObject pMgmt,
PCMD_STATUS pStatus);
void vMgrDisassocBeginSta(void *hDeviceContext,
PSMgmtObject pMgmt,
PBYTE abyDestAddress,
WORD wReason,
PCMD_STATUS pStatus);
void vMgrAuthenBeginSta(void *hDeviceContext,
PSMgmtObject pMgmt,
PCMD_STATUS pStatus);
void vMgrCreateOwnIBSS(void *hDeviceContext,
PCMD_STATUS pStatus);
void vMgrJoinBSSBegin(void *hDeviceContext,
PCMD_STATUS pStatus);
void vMgrRxManagePacket(void *hDeviceContext,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket);
void vMgrDeAuthenBeginSta(void *hDeviceContext,
PSMgmtObject pMgmt,
PBYTE abyDestAddress,
WORD wReason,
PCMD_STATUS pStatus);
BOOL bMgrPrepareBeaconToSend(void *hDeviceContext,
PSMgmtObject pMgmt);
BOOL bAdd_PMKID_Candidate(void *hDeviceContext,
PBYTE pbyBSSID,
PSRSNCapObject psRSNCapObj);
void vFlush_PMKID_Candidate(void *hDeviceContext);
