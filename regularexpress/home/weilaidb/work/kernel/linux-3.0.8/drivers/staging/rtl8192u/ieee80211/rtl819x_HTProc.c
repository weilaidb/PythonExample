u8 MCS_FILTER_ALL[16] = ;
u8 MCS_FILTER_1SS[16] = ;
u16 MCS_DATA_RATE[2][2][77] =
;
static u8 UNKNOWN_BORADCOM[3] = ;
static u8 LINKSYSWRT330_LINKSYSWRT300_BROADCOM[3] = ;
static u8 LINKSYSWRT350_LINKSYSWRT150_BROADCOM[3] = ;
static u8 NETGEAR834Bv2_BROADCOM[3] = ;
static u8 BELKINF5D8233V1_RALINK[3] = ;
static u8 BELKINF5D82334V3_RALINK[3] = ;
static u8 PCI_RALINK[3] = ;
static u8 EDIMAX_RALINK[3] = ;
static u8 AIRLINK_RALINK[3] = ;
static u8 CISCO_BROADCOM[3] = ;
void HTUpdateDefaultSetting(struct ieee80211_device* ieee)
void HTDebugHTCapability(u8* CapIE, u8* TitleString )
void HTDebugHTInfo(u8*	InfoIE, u8* TitleString)
bool IsHTHalfNmode40Bandwidth(struct ieee80211_device* ieee)
bool IsHTHalfNmodeSGI(struct ieee80211_device* ieee, bool is40MHz)
u16 HTHalfMcsToDataRate(struct ieee80211_device* ieee, 	u8	nMcsRate)
u16 HTMcsToDataRate( struct ieee80211_device* ieee, u8 nMcsRate)
u16  TxCountToDataRate( struct ieee80211_device* ieee, u8 nDataRate)
bool IsHTHalfNmodeAPs(struct ieee80211_device* ieee)
void HTIOTPeerDetermine(struct ieee80211_device* ieee)
u8 HTIOTActIsDisableMCS14(struct ieee80211_device* ieee, u8* PeerMacAddr)
bool HTIOTActIsDisableMCS15(struct ieee80211_device* ieee)
bool HTIOTActIsDisableMCSTwoSpatialStream(struct ieee80211_device* ieee, u8 *PeerMacAddr)
u8 HTIOTActIsDisableEDCATurbo(struct ieee80211_device* 	ieee, u8* PeerMacAddr)
u8 HTIOTActIsMgntUseCCK6M(struct ieee80211_network *network)
u8 HTIOTActIsCCDFsync(u8* PeerMacAddr)
void HTResetIOTSetting(
PRT_HIGH_THROUGHPUT		pHTInfo
)
void HTConstructCapabilityElement(struct ieee80211_device* ieee, u8* posHTCap, u8* len, u8 IsEncrypt)
void HTConstructInfoElement(struct ieee80211_device* ieee, u8* posHTInfo, u8* len, u8 IsEncrypt)
void HTConstructRT2RTAggElement(struct ieee80211_device* ieee, u8* posRT2RTAgg, u8* len)
u8 HT_PickMCSRate(struct ieee80211_device* ieee, u8* pOperateMCS)
u8 HTGetHighestMCSRate(struct ieee80211_device* ieee, u8* pMCSRateSet, u8* pMCSFilter)
u8 HTFilterMCSRate( struct ieee80211_device* ieee, u8* pSupportMCS, u8* pOperateMCS)
void HTSetConnectBwMode(struct ieee80211_device* ieee, HT_CHANNEL_WIDTH	Bandwidth, HT_EXTCHNL_OFFSET	Offset);
void HTOnAssocRsp(struct ieee80211_device *ieee)
void HTSetConnectBwModeCallback(struct ieee80211_device* ieee);
void HTInitializeHTInfo(struct ieee80211_device* ieee)
void HTInitializeBssDesc(PBSS_HT pBssHT)
void HTResetSelfAndSavePeerSetting(struct ieee80211_device* ieee, 	struct ieee80211_network * pNetwork)
void HTUpdateSelfAndPeerSetting(struct ieee80211_device* ieee, 	struct ieee80211_network * pNetwork)
void HTUseDefaultSetting(struct ieee80211_device* ieee)
u8 HTCCheck(struct ieee80211_device* ieee, u8*	pFrame)
void HTSetConnectBwMode(struct ieee80211_device* ieee, HT_CHANNEL_WIDTH	Bandwidth, HT_EXTCHNL_OFFSET	Offset)
void HTSetConnectBwModeCallback(struct ieee80211_device* ieee)
EXPORT_SYMBOL(HTUpdateSelfAndPeerSetting);
