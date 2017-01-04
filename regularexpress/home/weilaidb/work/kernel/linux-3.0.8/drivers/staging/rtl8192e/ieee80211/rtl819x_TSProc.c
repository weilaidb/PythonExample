void TsSetupTimeOut(unsigned long data)
void TsInactTimeout(unsigned long data)
void RxPktPendingTimeout(unsigned long data)
void TsAddBaProcess(unsigned long data)
void ResetTsCommonInfo(PTS_COMMON_INFO	pTsCommonInfo)
void ResetTxTsEntry(PTX_TS_RECORD pTS)
void ResetRxTsEntry(PRX_TS_RECORD pTS)
void TSInitialize(struct ieee80211_device *ieee)
void AdmitTS(struct ieee80211_device *ieee, PTS_COMMON_INFO pTsCommonInfo, u32 InactTime)
PTS_COMMON_INFO SearchAdmitTRStream(struct ieee80211_device *ieee, u8*	Addr, u8 TID, TR_SELECT	TxRxSelect)
void MakeTSEntry(
PTS_COMMON_INFO	pTsCommonInfo,
u8*		Addr,
PTSPEC_BODY	pTSPEC,
PQOS_TCLAS	pTCLAS,
u8		TCLAS_Num,
u8		TCLAS_Proc
)
bool GetTs(
struct ieee80211_device*	ieee,
PTS_COMMON_INFO			*ppTS,
u8*				Addr,
u8				TID,
TR_SELECT			TxRxSelect,
bool				bAddNewTs
)
void RemoveTsEntry(
struct ieee80211_device*	ieee,
PTS_COMMON_INFO			pTs,
TR_SELECT			TxRxSelect
)
void RemovePeerTS(struct ieee80211_device* ieee, u8* Addr)
void RemoveAllTS(struct ieee80211_device* ieee)
void TsStartAddBaProcess(struct ieee80211_device* ieee, PTX_TS_RECORD	pTxTS)
