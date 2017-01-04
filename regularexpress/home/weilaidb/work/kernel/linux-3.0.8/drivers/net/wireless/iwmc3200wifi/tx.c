#define IWM_UMAC_PAGE_ALLOC_WRAP 0xffff
#define BYTES_TO_PAGES(n)	 (1 + ((n) >> ilog2(IWM_UMAC_PAGE_SIZE)) - \
(((n) & (IWM_UMAC_PAGE_SIZE - 1)) == 0))
#define pool_id_to_queue(id)	 ((id < IWM_TX_CMD_QUEUE) ? id : id - 1)
#define queue_to_pool_id(q)	 ((q < IWM_TX_CMD_QUEUE) ? q : q + 1)
static int iwm_tx_credit_get(struct iwm_tx_credit *tx_credit, int id)
static bool iwm_tx_credit_ok(struct iwm_priv *iwm, int id, int nb)
void iwm_tx_credit_inc(struct iwm_priv *iwm, int id, int total_freed_pages)
static void iwm_tx_credit_dec(struct iwm_priv *iwm, int id, int alloc_pages)
int iwm_tx_credit_alloc(struct iwm_priv *iwm, int id, int nb)
void iwm_tx_credit_init_pools(struct iwm_priv *iwm,
struct iwm_umac_notif_alive *alive)
#define IWM_UDMA_HDR_LEN	sizeof(struct iwm_umac_wifi_out_hdr)
static __le16 iwm_tx_build_packet(struct iwm_priv *iwm, struct sk_buff *skb,
int pool_id, u8 *buf)
static int iwm_tx_send_concat_packets(struct iwm_priv *iwm,
struct iwm_tx_queue *txq)
void iwm_tx_worker(struct work_struct *work)
int iwm_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
