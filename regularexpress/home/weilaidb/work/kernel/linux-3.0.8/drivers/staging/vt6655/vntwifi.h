#define __VNTWIFI_H__
#define RATE_1M         0
#define RATE_2M         1
#define RATE_5M         2
#define RATE_11M        3
#define RATE_6M         4
#define RATE_9M         5
#define RATE_12M        6
#define RATE_18M        7
#define RATE_24M        8
#define RATE_36M        9
#define RATE_48M       10
#define RATE_54M       11
#define RATE_AUTO      12
#define MAX_RATE       12
#define KEY_CTL_WEP         0x00
#define KEY_CTL_NONE        0x01
#define KEY_CTL_TKIP        0x02
#define KEY_CTL_CCMP        0x03
#define KEY_CTL_INVALID     0xFF
#define CHANNEL_MAX_24G         14
#define MAX_BSS_NUM             42
typedef enum tagWMAC_AUTHENTICATION_MODE  WMAC_AUTHENTICATION_MODE, *PWMAC_AUTHENTICATION_MODE;
typedef enum tagWMAC_ENCRYPTION_MODE  WMAC_ENCRYPTION_MODE, *PWMAC_ENCRYPTION_MODE;
typedef enum tagWMAC_CONFIG_MODE  WMAC_CONFIG_MODE, *PWMAC_CONFIG_MODE;
typedef enum tagWMAC_POWER_MODE  WMAC_POWER_MODE, *PWMAC_POWER_MODE;
#define VNTWIFIbIsShortSlotTime(wCapInfo)               \
WLAN_GET_CAP_INFO_SHORTSLOTTIME(wCapInfo)       \
#define VNTWIFIbIsProtectMode(byERP)                    \
((byERP & WLAN_EID_ERP_USE_PROTECTION) != 0)    \
#define VNTWIFIbIsBarkerMode(byERP)                     \
((byERP & WLAN_EID_ERP_BARKER_MODE) != 0)       \
#define VNTWIFIbIsShortPreamble(wCapInfo)               \
WLAN_GET_CAP_INFO_SHORTPREAMBLE(wCapInfo)       \
#define VNTWIFIbIsEncryption(wCapInfo)                  \
WLAN_GET_CAP_INFO_PRIVACY(wCapInfo)             \
#define VNTWIFIbIsESS(wCapInfo)                         \
WLAN_GET_CAP_INFO_ESS(wCapInfo)                 \
void
VNTWIFIvSetIBSSParameter (
void *pMgmtHandle,
unsigned short wBeaconPeriod,
unsigned short wATIMWindow,
unsigned int uChannel
);
void
VNTWIFIvSetOPMode (
void *pMgmtHandle,
WMAC_CONFIG_MODE eOPMode
);
PWLAN_IE_SSID
VNTWIFIpGetCurrentSSID(
void *pMgmtHandle
);
unsigned int
VNTWIFIpGetCurrentChannel(
void *pMgmtHandle
);
unsigned short
VNTWIFIwGetAssocID (
void *pMgmtHandle
);
unsigned char
VNTWIFIbyGetMaxSupportRate (
PWLAN_IE_SUPP_RATES pSupportRateIEs,
PWLAN_IE_SUPP_RATES pExtSupportRateIEs
);
unsigned char
VNTWIFIbyGetACKTxRate (
unsigned char byRxDataRate,
PWLAN_IE_SUPP_RATES pSupportRateIEs,
PWLAN_IE_SUPP_RATES pExtSupportRateIEs
);
void
VNTWIFIvSetAuthenticationMode (
void *pMgmtHandle,
WMAC_AUTHENTICATION_MODE eAuthMode
);
void
VNTWIFIvSetEncryptionMode (
void *pMgmtHandle,
WMAC_ENCRYPTION_MODE eEncryptionMode
);
bool
VNTWIFIbConfigPhyMode(
void *pMgmtHandle,
CARD_PHY_TYPE ePhyType
);
void
VNTWIFIbGetConfigPhyMode(
void *pMgmtHandle,
void *pePhyType
);
void
VNTWIFIvQueryBSSList(void *pMgmtHandle, unsigned int *puBSSCount,
void **pvFirstBSS);
void
VNTWIFIvGetNextBSS (
void *pMgmtHandle,
void *pvCurrentBSS,
void **pvNextBSS
);
void
VNTWIFIvUpdateNodeTxCounter(
void *pMgmtHandle,
unsigned char *pbyDestAddress,
bool bTxOk,
unsigned short wRate,
unsigned char *pbyTxFailCount
);
void
VNTWIFIvGetTxRate(
void *pMgmtHandle,
unsigned char *pbyDestAddress,
unsigned short *pwTxDataRate,
unsigned char *pbyACKRate,
unsigned char *pbyCCKBasicRate,
unsigned char *pbyOFDMBasicRate
);
unsigned char
VNTWIFIbyGetKeyCypher(
void *pMgmtHandle,
bool bGroupKey
);
bool
VNTWIFIbSetPMKIDCache (
void *pMgmtObject,
unsigned long ulCount,
void *pPMKIDInfo
);
bool
VNTWIFIbCommandRunning (
void *pMgmtObject
);
unsigned short
VNTWIFIwGetMaxSupportRate(
void *pMgmtObject
);
void
VNTWIFIvSet11h (
void *pMgmtObject,
bool b11hEnable
);
bool
VNTWIFIbMeasureReport(
void *pMgmtObject,
bool bEndOfReport,
void *pvMeasureEID,
unsigned char byReportMode,
unsigned char byBasicMap,
unsigned char byCCAFraction,
unsigned char *pbyRPIs
);
bool
VNTWIFIbChannelSwitch(
void *pMgmtObject,
unsigned char byNewChannel
);
