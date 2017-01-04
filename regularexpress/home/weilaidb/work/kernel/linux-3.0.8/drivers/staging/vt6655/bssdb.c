static int          msglevel                =MSG_LEVEL_INFO;
const unsigned short awHWRetry0[5][5] = ;
const unsigned short awHWRetry1[5][5] = ;
void s_vCheckSensitivity(
void *hDeviceContext
);
void s_uCalculateLinkQual(
void *hDeviceContext
);
void s_vCheckPreEDThreshold(
void *hDeviceContext
);
PKnownBSS
BSSpSearchBSSList(
void *hDeviceContext,
unsigned char *pbyDesireBSSID,
unsigned char *pbyDesireSSID,
CARD_PHY_TYPE  ePhyType
)
void
BSSvClearBSSList(
void *hDeviceContext,
bool bKeepCurrBSSID
)
PKnownBSS
BSSpAddrIsInBSSList(
void *hDeviceContext,
unsigned char *abyBSSID,
PWLAN_IE_SSID pSSID
)
;
bool
BSSbInsertToBSSList (
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
)
bool
BSSbUpdateToBSSList (
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
)
bool
BSSDBbIsSTAInNodeDB(void *pMgmtObject, unsigned char *abyDstAddr,
unsigned int *puNodeIndex)
;
void
BSSvCreateOneNode(void *hDeviceContext, unsigned int *puNodeIndex)
;
void
BSSvRemoveOneNode(
void *hDeviceContext,
unsigned int uNodeIndex
)
;
void
BSSvUpdateAPNode(
void *hDeviceContext,
unsigned short *pwCapInfo,
PWLAN_IE_SUPP_RATES pSuppRates,
PWLAN_IE_SUPP_RATES pExtSuppRates
)
;
void
BSSvAddMulticastNode(
void *hDeviceContext
)
;
bool cc=false;
unsigned int status;
void
BSSvSecondCallBack(
void *hDeviceContext
)
void
BSSvUpdateNodeTxCounter(
void *hDeviceContext,
unsigned char byTsr0,
unsigned char byTsr1,
unsigned char *pbyBuffer,
unsigned int uFIFOHeaderSize
)
void
BSSvClearNodeDBTable(
void *hDeviceContext,
unsigned int uStartIndex
)
;
void s_vCheckSensitivity(
void *hDeviceContext
)
void
BSSvClearAnyBSSJoinRecord (
void *hDeviceContext
)
void s_uCalculateLinkQual(
void *hDeviceContext
)
void s_vCheckPreEDThreshold(
void *hDeviceContext
)
