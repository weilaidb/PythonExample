void ActivateBAEntry(struct ieee80211_device* ieee, PBA_RECORD pBA, u16 Time)
void DeActivateBAEntry( struct ieee80211_device* ieee, PBA_RECORD pBA)
u8 TxTsDeleteBA( struct ieee80211_device* ieee, PTX_TS_RECORD	pTxTs)
u8 RxTsDeleteBA( struct ieee80211_device* ieee, PRX_TS_RECORD	pRxTs)
void ResetBaEntry( PBA_RECORD pBA)
static struct sk_buff* ieee80211_ADDBA(struct ieee80211_device* ieee, u8* Dst, PBA_RECORD pBA, u16 StatusCode, u8 type)
static struct sk_buff* ieee80211_DELBA(
struct ieee80211_device* ieee,
u8*		         dst,
PBA_RECORD		 pBA,
TR_SELECT		 TxRxSelect,
u16			 ReasonCode
)
void ieee80211_send_ADDBAReq(struct ieee80211_device* ieee, u8*	dst, PBA_RECORD	pBA)
void ieee80211_send_ADDBARsp(struct ieee80211_device* ieee, u8* dst, PBA_RECORD pBA, u16 StatusCode)
void ieee80211_send_DELBA(struct ieee80211_device* ieee, u8* dst, PBA_RECORD pBA, TR_SELECT TxRxSelect, u16 ReasonCode)
int ieee80211_rx_ADDBAReq( struct ieee80211_device* ieee, struct sk_buff *skb)
int ieee80211_rx_ADDBARsp( struct ieee80211_device* ieee, struct sk_buff *skb)
int ieee80211_rx_DELBA(struct ieee80211_device* ieee,struct sk_buff *skb)
void
TsInitAddBA(
struct ieee80211_device* ieee,
PTX_TS_RECORD	pTS,
u8		Policy,
u8		bOverwritePending
)
void
TsInitDelBA( struct ieee80211_device* ieee, PTS_COMMON_INFO pTsCommonInfo, TR_SELECT TxRxSelect)
void BaSetupTimeOut(unsigned long data)
void TxBaInactTimeout(unsigned long data)
void RxBaInactTimeout(unsigned long data)
