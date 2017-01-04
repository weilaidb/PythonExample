extern unsigned short TxRate_iwconfig;
static int          msglevel                =MSG_LEVEL_INFO;
const unsigned char acbyIERate[MAX_RATE] =
;
#define AUTORATE_TXOK_CNT       0x0400
#define AUTORATE_TXFAIL_CNT     0x0064
#define AUTORATE_TIMEOUT        10
void s_vResetCounter (
PKnownNodeDB psNodeDBTable
);
void
s_vResetCounter (
PKnownNodeDB psNodeDBTable
)
unsigned char
DATARATEbyGetRateIdx (
unsigned char byRate
)
#define AUTORATE_TXCNT_THRESHOLD        20
#define AUTORATE_INC_THRESHOLD          30
unsigned short
wGetRateIdx(
unsigned char byRate
)
void
RATEvParseMaxRate (
void *pDeviceHandler,
PWLAN_IE_SUPP_RATES pItemRates,
PWLAN_IE_SUPP_RATES pItemExtRates,
bool bUpdateBasicRate,
unsigned short *pwMaxBasicRate,
unsigned short *pwMaxSuppRate,
unsigned short *pwSuppRate,
unsigned char *pbyTopCCKRate,
unsigned char *pbyTopOFDMRate
)
#define AUTORATE_TXCNT_THRESHOLD        20
#define AUTORATE_INC_THRESHOLD          30
void
RATEvTxRateFallBack (
void *pDeviceHandler,
PKnownNodeDB psNodeDBTable
)
unsigned char
RATEuSetIE (
PWLAN_IE_SUPP_RATES pSrcRates,
PWLAN_IE_SUPP_RATES pDstRates,
unsigned int uRateLen
)
