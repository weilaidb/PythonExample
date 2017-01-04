static int          msglevel                =MSG_LEVEL_INFO;
const WORD             awHWRetry0[5][5] = ;
const WORD             awHWRetry1[5][5] = ;
void s_vCheckSensitivity(void *hDeviceContext);
void s_vCheckPreEDThreshold(void *hDeviceContext);
void s_uCalculateLinkQual(void *hDeviceContext);
PKnownBSS BSSpSearchBSSList(void *hDeviceContext,
PBYTE pbyDesireBSSID,
PBYTE pbyDesireSSID,
CARD_PHY_TYPE ePhyType)
void BSSvClearBSSList(void *hDeviceContext, BOOL bKeepCurrBSSID)
PKnownBSS BSSpAddrIsInBSSList(void *hDeviceContext,
PBYTE abyBSSID,
PWLAN_IE_SSID pSSID)
;
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
void *pRxPacketContext)
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
void *pRxPacketContext)
BOOL BSSbIsSTAInNodeDB(void *hDeviceContext,
PBYTE abyDstAddr,
unsigned int *puNodeIndex)
;
void BSSvCreateOneNode(void *hDeviceContext, unsigned int *puNodeIndex)
;
void BSSvRemoveOneNode(void *hDeviceContext, unsigned int uNodeIndex)
;
void BSSvUpdateAPNode(void *hDeviceContext,
PWORD pwCapInfo,
PWLAN_IE_SUPP_RATES pSuppRates,
PWLAN_IE_SUPP_RATES pExtSuppRates)
;
void BSSvAddMulticastNode(void *hDeviceContext)
;
void BSSvSecondCallBack(void *hDeviceContext)
void BSSvUpdateNodeTxCounter(void *hDeviceContext,
PSStatCounter pStatistic,
BYTE byTSR,
BYTE byPktNO)
void BSSvClearNodeDBTable(void *hDeviceContext,
unsigned int uStartIndex)
;
void s_vCheckSensitivity(void *hDeviceContext)
void s_uCalculateLinkQual(void *hDeviceContext)
void BSSvClearAnyBSSJoinRecord(void *hDeviceContext)
void s_vCheckPreEDThreshold(void *hDeviceContext)
