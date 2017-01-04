static int          msglevel                = MSG_LEVEL_INFO;
static SChannelTblElement sChannelTbl[CB_MAX_CHANNEL+1] =
;
static  struct
ChannelRuleTab[] =
;
#define NUM_RULES	ARRAY_SIZE(ChannelRuleTab)
BOOL
ChannelValid(unsigned int CountryCode, unsigned int ChannelIndex)
BOOL
CHvChannelGetList (
unsigned int       uCountryCodeIdx,
PBYTE      pbyChannelTable
)
void CHvInitChannelTable(void *pDeviceHandler)
BYTE CHbyGetChannelMapping(BYTE byChannelNumber)
