static const u8 tid_to_ac[] = ;
static inline int iwl4965_get_ac_from_tid(u16 tid)
static inline int
iwl4965_get_fifo_from_tid(struct iwl_rxon_context *ctx, u16 tid)
static void iwl4965_tx_cmd_build_basic(struct iwl_priv *priv,
struct sk_buff *skb,
struct iwl_tx_cmd *tx_cmd,
struct ieee80211_tx_info *info,
struct ieee80211_hdr *hdr,
u8 std_id)
#define RTS_DFAULT_RETRY_LIMIT		60
static void iwl4965_tx_cmd_build_rate(struct iwl_priv *priv,
struct iwl_tx_cmd *tx_cmd,
struct ieee80211_tx_info *info,
__le16 fc)
static void iwl4965_tx_cmd_build_hwcrypto(struct iwl_priv *priv,
struct ieee80211_tx_info *info,
struct iwl_tx_cmd *tx_cmd,
struct sk_buff *skb_frag,
int sta_id)
int iwl4965_tx_skb(struct iwl_priv *priv, struct sk_buff *skb)
static inline int iwl4965_alloc_dma_ptr(struct iwl_priv *priv,
struct iwl_dma_ptr *ptr, size_t size)
static inline void iwl4965_free_dma_ptr(struct iwl_priv *priv,
struct iwl_dma_ptr *ptr)
void iwl4965_hw_txq_ctx_free(struct iwl_priv *priv)
int iwl4965_txq_ctx_alloc(struct iwl_priv *priv)
void iwl4965_txq_ctx_reset(struct iwl_priv *priv)
void iwl4965_txq_ctx_stop(struct iwl_priv *priv)
static int iwl4965_txq_ctx_activate_free(struct iwl_priv *priv)
static void iwl4965_tx_queue_stop_scheduler(struct iwl_priv *priv,
u16 txq_id)
static int iwl4965_tx_queue_set_q2ratid(struct iwl_priv *priv, u16 ra_tid,
u16 txq_id)
static int iwl4965_txq_agg_enable(struct iwl_priv *priv, int txq_id,
int tx_fifo, int sta_id, int tid, u16 ssn_idx)
int iwl4965_tx_agg_start(struct iwl_priv *priv, struct ieee80211_vif *vif,
struct ieee80211_sta *sta, u16 tid, u16 *ssn)
static int iwl4965_txq_agg_disable(struct iwl_priv *priv, u16 txq_id,
u16 ssn_idx, u8 tx_fifo)
int iwl4965_tx_agg_stop(struct iwl_priv *priv, struct ieee80211_vif *vif,
struct ieee80211_sta *sta, u16 tid)
int iwl4965_txq_check_empty(struct iwl_priv *priv,
int sta_id, u8 tid, int txq_id)
static void iwl4965_non_agg_tx_status(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
const u8 *addr1)
static void
iwl4965_tx_status(struct iwl_priv *priv, struct iwl_tx_info *tx_info,
bool is_agg)
int iwl4965_tx_queue_reclaim(struct iwl_priv *priv, int txq_id, int index)
static int iwl4965_tx_status_reply_compressed_ba(struct iwl_priv *priv,
struct iwl_ht_agg *agg,
struct iwl_compressed_ba_resp *ba_resp)
void iwl4965_hwrate_to_tx_control(struct iwl_priv *priv, u32 rate_n_flags,
struct ieee80211_tx_info *info)
void iwl4965_rx_reply_compressed_ba(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
const char *iwl4965_get_tx_fail_reason(u32 status)
