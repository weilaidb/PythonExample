#define __BSSDB_H__
#define MAX_NODE_NUM             64
#define MAX_BSS_NUM              42
#define LOST_BEACON_COUNT      	 10
#define MAX_PS_TX_BUF            32
#define ADHOC_LOST_BEACON_COUNT  30
#define MAX_INACTIVE_COUNT       300
#define USE_PROTECT_PERIOD       10
#define ERP_RECOVER_COUNT        30
#define BSS_CLEAR_COUNT           1
#define RSSI_STAT_COUNT          10
#define MAX_CHECK_RSSI_COUNT     8
#define WLAN_STA_AUTH            BIT0
#define WLAN_STA_ASSOC           BIT1
#define WLAN_STA_PS              BIT2
#define WLAN_STA_TIM             BIT3
#define WLAN_STA_PERM            BIT4
#define WLAN_STA_AUTHORIZED      BIT5
#define MAX_RATE            12
#define MAX_WPA_IE_LEN      64
typedef enum _NDIS_802_11_NETWORK_TYPE
NDIS_802_11_NETWORK_TYPE, *PNDIS_802_11_NETWORK_TYPE;
typedef struct tagSERPObject ERPObject, *PERPObject;
typedef struct tagSRSNCapObject SRSNCapObject, *PSRSNCapObject;
typedef struct tagKnownBSS __attribute__ ((__packed__))
KnownBSS , *PKnownBSS;
typedef enum tagNODE_STATE  NODE_STATE, *PNODE_STATE;
typedef struct tagKnownNodeDB  KnownNodeDB, *PKnownNodeDB;
PKnownBSS
BSSpSearchBSSList(
void *hDeviceContext,
unsigned char *pbyDesireBSSID,
unsigned char *pbyDesireSSID,
CARD_PHY_TYPE ePhyType
);
PKnownBSS
BSSpAddrIsInBSSList(
void *hDeviceContext,
unsigned char *abyBSSID,
PWLAN_IE_SSID pSSID
);
void
BSSvClearBSSList(
void *hDeviceContext,
bool bKeepCurrBSSID
);
bool
BSSbInsertToBSSList(
void *hDeviceContext,
unsigned char *abyBSSIDAddr,
QWORD qwTimestamp,
unsigned short wBeaconInterval,
unsigned short wCapInfo,
unsigned char byCurrChannel,
PWLAN_IE_SSID pSSID,
PWLAN_IE_SUPP_RATES pSuppRates,
PWLAN_IE_SUPP_RATES pExtSuppRates,
PERPObject psERP,
PWLAN_IE_RSN pRSN,
PWLAN_IE_RSN_EXT pRSNWPA,
PWLAN_IE_COUNTRY pIE_Country,
PWLAN_IE_QUIET pIE_Quiet,
unsigned int uIELength,
unsigned char *pbyIEs,
void *pRxPacketContext
);
bool
BSSbUpdateToBSSList(
void *hDeviceContext,
QWORD qwTimestamp,
unsigned short wBeaconInterval,
unsigned short wCapInfo,
unsigned char byCurrChannel,
bool bChannelHit,
PWLAN_IE_SSID pSSID,
PWLAN_IE_SUPP_RATES pSuppRates,
PWLAN_IE_SUPP_RATES pExtSuppRates,
PERPObject psERP,
PWLAN_IE_RSN pRSN,
PWLAN_IE_RSN_EXT pRSNWPA,
PWLAN_IE_COUNTRY pIE_Country,
PWLAN_IE_QUIET pIE_Quiet,
PKnownBSS pBSSList,
unsigned int uIELength,
unsigned char *pbyIEs,
void *pRxPacketContext
);
bool
BSSDBbIsSTAInNodeDB(void *hDeviceContext, unsigned char *abyDstAddr,
unsigned int *puNodeIndex);
void
BSSvCreateOneNode(void *hDeviceContext, unsigned int *puNodeIndex);
void
BSSvUpdateAPNode(
void *hDeviceContext,
unsigned short *pwCapInfo,
PWLAN_IE_SUPP_RATES pItemRates,
PWLAN_IE_SUPP_RATES pExtSuppRates
);
void
BSSvSecondCallBack(
void *hDeviceContext
);
void
BSSvUpdateNodeTxCounter(
void *hDeviceContext,
unsigned char byTsr0,
unsigned char byTsr1,
unsigned char *pbyBuffer,
unsigned int uFIFOHeaderSize
);
void
BSSvRemoveOneNode(
void *hDeviceContext,
unsigned int uNodeIndex
);
void
BSSvAddMulticastNode(
void *hDeviceContext
);
void
BSSvClearNodeDBTable(
void *hDeviceContext,
unsigned int uStartIndex
);
void
BSSvClearAnyBSSJoinRecord(
void *hDeviceContext
);
