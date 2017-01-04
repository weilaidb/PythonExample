#define __BSSDB_H__
#define MAX_NODE_NUM             64
#define MAX_BSS_NUM              42
#define LOST_BEACON_COUNT        10
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
#define MAX_WPA_IE_LEN      64
typedef struct tagSERPObject  ERPObject, *PERPObject;
typedef struct tagSRSNCapObject  SRSNCapObject, *PSRSNCapObject;
typedef struct tagKnownBSS  __attribute__ ((__packed__))
KnownBSS , *PKnownBSS;
typedef enum tagNODE_STATE  NODE_STATE, *PNODE_STATE;
typedef struct tagKnownNodeDB  KnownNodeDB, *PKnownNodeDB;
PKnownBSS BSSpSearchBSSList(void *hDeviceContext,
PBYTE pbyDesireBSSID,
PBYTE pbyDesireSSID,
CARD_PHY_TYPE ePhyType);
PKnownBSS BSSpAddrIsInBSSList(void *hDeviceContext,
PBYTE abyBSSID,
PWLAN_IE_SSID pSSID);
void BSSvClearBSSList(void *hDeviceContext, BOOL bKeepCurrBSSID);
BOOL BSSbInsertToBSSList(void *hDeviceContext,
PBYTE abyBSSIDAddr,
QWORD qwTimestamp,
WORD wBeaconInterval,
WORD wCapInfo,
BYTE byCurrChannel,
PWLAN_IE_SSID pSSID,
PWLAN_IE_SUPP_RATES pSuppRates,
PWLAN_IE_SUPP_RATES pExtSuppRates,
PERPObject psERP,
PWLAN_IE_RSN pRSN,
PWLAN_IE_RSN_EXT pRSNWPA,
PWLAN_IE_COUNTRY pIE_Country,
PWLAN_IE_QUIET pIE_Quiet,
unsigned int uIELength,
PBYTE pbyIEs,
void *pRxPacketContext);
BOOL BSSbUpdateToBSSList(void *hDeviceContext,
QWORD qwTimestamp,
WORD wBeaconInterval,
WORD wCapInfo,
BYTE byCurrChannel,
BOOL bChannelHit,
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
PBYTE pbyIEs,
void *pRxPacketContext);
BOOL BSSbIsSTAInNodeDB(void *hDeviceContext,
PBYTE abyDstAddr,
unsigned int *puNodeIndex);
void BSSvCreateOneNode(void *hDeviceContext, unsigned int *puNodeIndex);
void BSSvUpdateAPNode(void *hDeviceContext,
PWORD pwCapInfo,
PWLAN_IE_SUPP_RATES pItemRates,
PWLAN_IE_SUPP_RATES pExtSuppRates);
void BSSvSecondCallBack(void *hDeviceContext);
void BSSvUpdateNodeTxCounter(void *hDeviceContext,
PSStatCounter pStatistic,
BYTE byTSR,
BYTE byPktNO);
void BSSvRemoveOneNode(void *hDeviceContext,
unsigned int uNodeIndex);
void BSSvAddMulticastNode(void *hDeviceContext);
void BSSvClearNodeDBTable(void *hDeviceContext,
unsigned int uStartIndex);
void BSSvClearAnyBSSJoinRecord(void *hDeviceContext);
