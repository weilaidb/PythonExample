static int          msglevel                =MSG_LEVEL_INFO;
const BYTE acbyIERate[MAX_RATE] =
;
#define AUTORATE_TXOK_CNT       0x0400
#define AUTORATE_TXFAIL_CNT     0x0064
#define AUTORATE_TIMEOUT        10
void s_vResetCounter(PKnownNodeDB psNodeDBTable);
void s_vResetCounter(PKnownNodeDB psNodeDBTable)
BYTE
DATARATEbyGetRateIdx (
BYTE byRate
)
#define AUTORATE_TXCNT_THRESHOLD        20
#define AUTORATE_INC_THRESHOLD          30
WORD
RATEwGetRateIdx(
BYTE byRate
)
void RATEvParseMaxRate(
void *pDeviceHandler,
PWLAN_IE_SUPP_RATES pItemRates,
PWLAN_IE_SUPP_RATES pItemExtRates,
BOOL bUpdateBasicRate,
PWORD pwMaxBasicRate,
PWORD pwMaxSuppRate,
PWORD pwSuppRate,
PBYTE pbyTopCCKRate,
PBYTE pbyTopOFDMRate
)
#define AUTORATE_TXCNT_THRESHOLD        20
#define AUTORATE_INC_THRESHOLD          30
void
RATEvTxRateFallBack(
void *pDeviceHandler,
PKnownNodeDB psNodeDBTable
)
BYTE
RATEuSetIE (
PWLAN_IE_SUPP_RATES pSrcRates,
PWLAN_IE_SUPP_RATES pDstRates,
unsigned int                uRateLen
)
