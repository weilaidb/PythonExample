void
iwl_legacy_txq_update_write_ptr(struct iwl_priv *priv, struct iwl_tx_queue *txq)
EXPORT_SYMBOL(iwl_legacy_txq_update_write_ptr);
void iwl_legacy_tx_queue_unmap(struct iwl_priv *priv, int txq_id)
EXPORT_SYMBOL(iwl_legacy_tx_queue_unmap);
void iwl_legacy_tx_queue_free(struct iwl_priv *priv, int txq_id)
EXPORT_SYMBOL(iwl_legacy_tx_queue_free);
void iwl_legacy_cmd_queue_unmap(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_cmd_queue_unmap);
void iwl_legacy_cmd_queue_free(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_cmd_queue_free);
int iwl_legacy_queue_space(const struct iwl_queue *q)
EXPORT_SYMBOL(iwl_legacy_queue_space);
static int iwl_legacy_queue_init(struct iwl_priv *priv, struct iwl_queue *q,
int count, int slots_num, u32 id)
static int iwl_legacy_tx_queue_alloc(struct iwl_priv *priv,
struct iwl_tx_queue *txq, u32 id)
int iwl_legacy_tx_queue_init(struct iwl_priv *priv, struct iwl_tx_queue *txq,
int slots_num, u32 txq_id)
EXPORT_SYMBOL(iwl_legacy_tx_queue_init);
void iwl_legacy_tx_queue_reset(struct iwl_priv *priv, struct iwl_tx_queue *txq,
int slots_num, u32 txq_id)
EXPORT_SYMBOL(iwl_legacy_tx_queue_reset);
int iwl_legacy_enqueue_hcmd(struct iwl_priv *priv, struct iwl_host_cmd *cmd)
static void iwl_legacy_hcmd_queue_reclaim(struct iwl_priv *priv, int txq_id,
int idx, int cmd_idx)
void
iwl_legacy_tx_cmd_complete(struct iwl_priv *priv, struct iwl_rx_mem_buffer *rxb)
EXPORT_SYMBOL(iwl_legacy_tx_cmd_complete);
