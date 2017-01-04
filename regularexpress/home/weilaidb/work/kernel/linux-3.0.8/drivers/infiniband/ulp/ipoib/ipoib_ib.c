static int data_debug_level;
module_param(data_debug_level, int, 0644);
MODULE_PARM_DESC(data_debug_level,
"Enable data path debug tracing if > 0");
static DEFINE_MUTEX(pkey_mutex);
struct ipoib_ah *ipoib_create_ah(struct net_device *dev,
struct ib_pd *pd, struct ib_ah_attr *attr)
void ipoib_free_ah(struct kref *kref)
static void ipoib_ud_dma_unmap_rx(struct ipoib_dev_priv *priv,
u64 mapping[IPOIB_UD_RX_SG])
static void ipoib_ud_skb_put_frags(struct ipoib_dev_priv *priv,
struct sk_buff *skb,
unsigned int length)
static int ipoib_ib_post_receive(struct net_device *dev, int id)
static struct sk_buff *ipoib_alloc_rx_skb(struct net_device *dev, int id)
static int ipoib_ib_post_receives(struct net_device *dev)
static void ipoib_ib_handle_rx_wc(struct net_device *dev, struct ib_wc *wc)
static int ipoib_dma_map_tx(struct ib_device *ca,
struct ipoib_tx_buf *tx_req)
static void ipoib_dma_unmap_tx(struct ib_device *ca,
struct ipoib_tx_buf *tx_req)
static void ipoib_ib_handle_tx_wc(struct net_device *dev, struct ib_wc *wc)
static int poll_tx(struct ipoib_dev_priv *priv)
int ipoib_poll(struct napi_struct *napi, int budget)
void ipoib_ib_completion(struct ib_cq *cq, void *dev_ptr)
static void drain_tx_cq(struct net_device *dev)
void ipoib_send_comp_handler(struct ib_cq *cq, void *dev_ptr)
static inline int post_send(struct ipoib_dev_priv *priv,
unsigned int wr_id,
struct ib_ah *address, u32 qpn,
struct ipoib_tx_buf *tx_req,
void *head, int hlen)
void ipoib_send(struct net_device *dev, struct sk_buff *skb,
struct ipoib_ah *address, u32 qpn)
static void __ipoib_reap_ah(struct net_device *dev)
void ipoib_reap_ah(struct work_struct *work)
static void ipoib_ib_tx_timer_func(unsigned long ctx)
int ipoib_ib_dev_open(struct net_device *dev)
static void ipoib_pkey_dev_check_presence(struct net_device *dev)
int ipoib_ib_dev_up(struct net_device *dev)
int ipoib_ib_dev_down(struct net_device *dev, int flush)
static int recvs_pending(struct net_device *dev)
void ipoib_drain_cq(struct net_device *dev)
int ipoib_ib_dev_stop(struct net_device *dev, int flush)
int ipoib_ib_dev_init(struct net_device *dev, struct ib_device *ca, int port)
static void __ipoib_ib_dev_flush(struct ipoib_dev_priv *priv,
enum ipoib_flush_level level)
void ipoib_ib_dev_flush_light(struct work_struct *work)
void ipoib_ib_dev_flush_normal(struct work_struct *work)
void ipoib_ib_dev_flush_heavy(struct work_struct *work)
void ipoib_ib_dev_cleanup(struct net_device *dev)
void ipoib_pkey_poll(struct work_struct *work)
int ipoib_pkey_dev_delay_open(struct net_device *dev)
