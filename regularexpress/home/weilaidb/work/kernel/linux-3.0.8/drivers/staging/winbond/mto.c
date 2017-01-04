#define MTO_MAX_FRAG_TH_LEVELS		5
#define MTO_MAX_DATA_RATE_LEVELS	12
u16 MTO_Frag_Th_Tbl[MTO_MAX_FRAG_TH_LEVELS] = ;
static u8 MTO_Data_Rate_Tbl[MTO_MAX_DATA_RATE_LEVELS] = ;
static int retryrate_rec[MTO_MAX_DATA_RATE_LEVELS];
static u8 boSparseTxTraffic;
void MTO_Init(struct wbsoft_priv *adapter);
void TxRateReductionCtrl(struct wbsoft_priv *adapter);
void MTO_SetTxCount(struct wbsoft_priv *adapter, u8 t0, u8 index);
void MTO_TxFailed(struct wbsoft_priv *adapter);
void hal_get_dto_para(struct wbsoft_priv *adapter, char *buffer);
void MTO_Init(struct wbsoft_priv *adapter)
void MTO_SetTxCount(struct wbsoft_priv *adapter, u8 tx_rate, u8 index)
