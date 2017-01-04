#define __DATARATE_H__
#define FALLBACK_PKT_COLLECT_TR_H  50
#define FALLBACK_PKT_COLLECT_TR_L  10
#define FALLBACK_POLL_SECOND       5
#define FALLBACK_RECOVER_SECOND    30
#define FALLBACK_THRESHOLD         15
#define UPGRADE_THRESHOLD          5
#define UPGRADE_CNT_THRD           3
#define RETRY_TIMES_THRD_H         2
#define RETRY_TIMES_THRD_L         1
void
RATEvParseMaxRate(
void *pDeviceHandler,
PWLAN_IE_SUPP_RATES pItemRates,
PWLAN_IE_SUPP_RATES pItemExtRates,
bool bUpdateBasicRate,
unsigned short *pwMaxBasicRate,
unsigned short *pwMaxSuppRate,
unsigned short *pwSuppRate,
unsigned char *pbyTopCCKRate,
unsigned char *pbyTopOFDMRate
);
void
RATEvTxRateFallBack(
void *pDeviceHandler,
PKnownNodeDB psNodeDBTable
);
unsigned char
RATEuSetIE(
PWLAN_IE_SUPP_RATES pSrcRates,
PWLAN_IE_SUPP_RATES pDstRates,
unsigned int uRateLen
);
unsigned short
wGetRateIdx(
unsigned char byRate
);
unsigned char
DATARATEbyGetRateIdx(
unsigned char byRate
);
