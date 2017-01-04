void iwl_txq_update_write_ptr(struct iwl_priv *priv, struct iwl_tx_queue *txq)
static inline dma_addr_t iwl_tfd_tb_get_addr(struct iwl_tfd *tfd, u8 idx)
static inline u16 iwl_tfd_tb_get_len(struct iwl_tfd *tfd, u8 idx)
static inline void iwl_tfd_set_tb(struct iwl_tfd *tfd, u8 idx,
dma_addr_t addr, u16 len)
static inline u8 iwl_tfd_get_num_tbs(struct iwl_tfd *tfd)
static void iwlagn_unmap_tfd(struct iwl_priv *priv, struct iwl_cmd_meta *meta,
struct iwl_tfd *tfd, int dma_dir)
void iwlagn_txq_free_tfd(struct iwl_priv *priv, struct iwl_tx_queue *txq)
int iwlagn_txq_attach_buf_to_tfd(struct iwl_priv *priv,
struct iwl_tx_queue *txq,
dma_addr_t addr, u16 len,
u8 reset)
static int iwlagn_tx_queue_init(struct iwl_priv *priv, struct iwl_tx_queue *txq)
void iwl_tx_queue_unmap(struct iwl_priv *priv, int txq_id)
void iwl_tx_queue_free(struct iwl_priv *priv, int txq_id)
void iwl_cmd_queue_unmap(struct iwl_priv *priv)
void iwl_cmd_queue_free(struct iwl_priv *priv)
int iwl_queue_space(const struct iwl_queue *q)
static int iwl_queue_init(struct iwl_priv *priv, struct iwl_queue *q,
int count, int slots_num, u32 id)
static int iwl_tx_queue_alloc(struct iwl_priv *priv,
struct iwl_tx_queue *txq, u32 id)
int iwl_tx_queue_init(struct iwl_priv *priv, struct iwl_tx_queue *txq,
int slots_num, u32 txq_id)
void iwl_tx_queue_reset(struct iwl_priv *priv, struct iwl_tx_queue *txq,
int slots_num, u32 txq_id)
int iwl_enqueue_hcmd(struct iwl_priv *priv, struct iwl_host_cmd *cmd)
static void iwl_hcmd_queue_reclaim(struct iwl_priv *priv, int txq_id, int idx)
void iwl_tx_cmd_complete(struct iwl_priv *priv, struct iwl_rx_mem_buffer *rxb)
