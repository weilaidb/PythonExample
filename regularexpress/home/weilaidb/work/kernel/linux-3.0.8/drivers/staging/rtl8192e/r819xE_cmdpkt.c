RT_STATUS cmpk_message_handle_tx(
struct r8192_priv *priv,
u8*	code_virtual_address,
u32	packettype,
u32	buffer_len)
static void cmpk_count_txstatistic(struct r8192_priv *priv, cmpk_txfb_t *pstx_fb)
static void cmpk_handle_tx_feedback(struct r8192_priv *priv, u8 *pmsg)
static void cmpk_handle_interrupt_status(struct r8192_priv *priv, u8 *pmsg)
static void cmpk_handle_query_config_rx(struct r8192_priv *priv, u8 *pmsg)
static void cmpk_count_tx_status(struct r8192_priv *priv, cmpk_tx_status_t *pstx_status)
static void cmpk_handle_tx_status(struct r8192_priv *priv, u8 *pmsg)
static void cmpk_handle_tx_rate_history(struct r8192_priv *priv, u8 *pmsg)
u32 cmpk_message_handle_rx(struct r8192_priv *priv, struct ieee80211_rx_stats *pstats)
