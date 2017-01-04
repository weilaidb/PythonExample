void
VNTWIFIvSetOPMode (
void *pMgmtHandle,
WMAC_CONFIG_MODE eOPMode
)
void
VNTWIFIvSetIBSSParameter (
void *pMgmtHandle,
unsigned short wBeaconPeriod,
unsigned short wATIMWindow,
unsigned int uChannel
)
PWLAN_IE_SSID
VNTWIFIpGetCurrentSSID (
void *pMgmtHandle
)
unsigned int
VNTWIFIpGetCurrentChannel (
void *pMgmtHandle
)
unsigned short
VNTWIFIwGetAssocID (
void *pMgmtHandle
)
unsigned char
VNTWIFIbyGetMaxSupportRate (
PWLAN_IE_SUPP_RATES pSupportRateIEs,
PWLAN_IE_SUPP_RATES pExtSupportRateIEs
)
unsigned char
VNTWIFIbyGetACKTxRate (
unsigned char byRxDataRate,
PWLAN_IE_SUPP_RATES pSupportRateIEs,
PWLAN_IE_SUPP_RATES pExtSupportRateIEs
)
void
VNTWIFIvSetAuthenticationMode (
void *pMgmtHandle,
WMAC_AUTHENTICATION_MODE eAuthMode
)
void
VNTWIFIvSetEncryptionMode (
void *pMgmtHandle,
WMAC_ENCRYPTION_MODE eEncryptionMode
)
bool
VNTWIFIbConfigPhyMode (
void *pMgmtHandle,
CARD_PHY_TYPE ePhyType
)
void
VNTWIFIbGetConfigPhyMode (
void *pMgmtHandle,
void *pePhyType
)
void
VNTWIFIvQueryBSSList(void *pMgmtHandle, unsigned int *puBSSCount, void **pvFirstBSS)
void
VNTWIFIvGetNextBSS (
void *pMgmtHandle,
void *pvCurrentBSS,
void **pvNextBSS
)
void
VNTWIFIvUpdateNodeTxCounter(
void *pMgmtHandle,
unsigned char *pbyDestAddress,
bool bTxOk,
unsigned short wRate,
unsigned char *pbyTxFailCount
)
void
VNTWIFIvGetTxRate(
void *pMgmtHandle,
unsigned char *pbyDestAddress,
unsigned short *pwTxDataRate,
unsigned char *pbyACKRate,
unsigned char *pbyCCKBasicRate,
unsigned char *pbyOFDMBasicRate
)
unsigned char
VNTWIFIbyGetKeyCypher(
void *pMgmtHandle,
bool bGroupKey
)
bool
VNTWIFIbSetPMKIDCache (
void *pMgmtObject,
unsigned long ulCount,
void *pPMKIDInfo
)
unsigned short
VNTWIFIwGetMaxSupportRate(
void *pMgmtObject
)
void
VNTWIFIvSet11h (
void *pMgmtObject,
bool b11hEnable
)
bool
VNTWIFIbMeasureReport(
void *pMgmtObject,
bool bEndOfReport,
void *pvMeasureEID,
unsigned char byReportMode,
unsigned char byBasicMap,
unsigned char byCCAFraction,
unsigned char *pbyRPIs
)
bool
VNTWIFIbChannelSwitch(
void *pMgmtObject,
unsigned char byNewChannel
)
