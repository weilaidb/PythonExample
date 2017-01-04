int ipoib_max_conn_qp = 128;
module_param_named(max_nonsrq_conn_qp, ipoib_max_conn_qp, int, 0444);
MODULE_PARM_DESC(max_nonsrq_conn_qp,
"Max number of connected-mode QPs per interface "
"(applied only if shared receive queue is not available)");
static int data_debug_level;
module_param_named(cm_data_debug_level, data_debug_level, int, 0644);
MODULE_PARM_DESC(cm_data_debug_level,
"Enable data path debug tracing for connected mode if > 0");
#define IPOIB_CM_IETF_ID 0x1000000000000000ULL
#define IPOIB_CM_RX_UPDATE_TIME (256 * HZ)
#define IPOIB_CM_RX_TIMEOUT     (2 * 256 * HZ)
#define IPOIB_CM_RX_DELAY       (3 * 256 * HZ)
#define IPOIB_CM_RX_UPDATE_MASK (0x3)
static struct ib_qp_attr ipoib_cm_err_attr = ;
#define IPOIB_CM_RX_DRAIN_WRID 0xffffffff
static struct ib_send_wr ipoib_cm_rx_drain_wr = ;
static int ipoib_cm_tx_handler(struct ib_cm_id *cm_id,
struct ib_cm_event *event);
static void ipoib_cm_dma_unmap_rx(struct ipoib_dev_priv *priv, int frags,
u64 mapping[IPOIB_CM_RX_SG])
static int ipoib_cm_post_receive_srq(struct net_device *dev, int id)
static int ipoib_cm_post_receive_nonsrq(struct net_device *dev,
struct ipoib_cm_rx *rx,
struct ib_recv_wr *wr,
struct ib_sge *sge, int id)
static struct sk_buff *ipoib_cm_alloc_rx_skb(struct net_device *dev,
struct ipoib_cm_rx_buf *rx_ring,
int id, int frags,
u64 mapping[IPOIB_CM_RX_SG])
static void ipoib_cm_free_rx_ring(struct net_device *dev,
struct ipoib_cm_rx_buf *rx_ring)
static void ipoib_cm_start_rx_drain(struct ipoib_dev_priv *priv)
static void ipoib_cm_rx_event_handler(struct ib_event *event, void *ctx)
static struct ib_qp *ipoib_cm_create_rx_qp(struct net_device *dev,
struct ipoib_cm_rx *p)
static int ipoib_cm_modify_rx_qp(struct net_device *dev,
struct ib_cm_id *cm_id, struct ib_qp *qp,
unsigned psn)
static void ipoib_cm_init_rx_wr(struct net_device *dev,
struct ib_recv_wr *wr,
struct ib_sge *sge)
static int ipoib_cm_nonsrq_init_rx(struct net_device *dev, struct ib_cm_id *cm_id,
struct ipoib_cm_rx *rx)
static int ipoib_cm_send_rep(struct net_device *dev, struct ib_cm_id *cm_id,
struct ib_qp *qp, struct ib_cm_req_event_param *req,
unsigned psn)
static int ipoib_cm_req_handler(struct ib_cm_id *cm_id, struct ib_cm_event *event)
static int ipoib_cm_rx_handler(struct ib_cm_id *cm_id,
struct ib_cm_event *event)
static void skb_put_frags(struct sk_buff *skb, unsigned int hdr_space,
unsigned int length, struct sk_buff *toskb)
void ipoib_cm_handle_rx_wc(struct net_device *dev, struct ib_wc *wc)
static inline int post_send(struct ipoib_dev_priv *priv,
struct ipoib_cm_tx *tx,
unsigned int wr_id,
u64 addr, int len)
void ipoib_cm_send(struct net_device *dev, struct sk_buff *skb, struct ipoib_cm_tx *tx)
void ipoib_cm_handle_tx_wc(struct net_device *dev, struct ib_wc *wc)
int ipoib_cm_dev_open(struct net_device *dev)
static void ipoib_cm_free_rx_reap_list(struct net_device *dev)
void ipoib_cm_dev_stop(struct net_device *dev)
static int ipoib_cm_rep_handler(struct ib_cm_id *cm_id, struct ib_cm_event *event)
static struct ib_qp *ipoib_cm_create_tx_qp(struct net_device *dev, struct ipoib_cm_tx *tx)
static int ipoib_cm_send_req(struct net_device *dev,
struct ib_cm_id *id, struct ib_qp *qp,
u32 qpn,
struct ib_sa_path_rec *pathrec)
static int ipoib_cm_modify_tx_init(struct net_device *dev,
struct ib_cm_id *cm_id, struct ib_qp *qp)
static int ipoib_cm_tx_init(struct ipoib_cm_tx *p, u32 qpn,
struct ib_sa_path_rec *pathrec)
static void ipoib_cm_tx_destroy(struct ipoib_cm_tx *p)
static int ipoib_cm_tx_handler(struct ib_cm_id *cm_id,
struct ib_cm_event *event)
struct ipoib_cm_tx *ipoib_cm_create_tx(struct net_device *dev, struct ipoib_path *path,
struct ipoib_neigh *neigh)
void ipoib_cm_destroy_tx(struct ipoib_cm_tx *tx)
static void ipoib_cm_tx_start(struct work_struct *work)
static void ipoib_cm_tx_reap(struct work_struct *work)
static void ipoib_cm_skb_reap(struct work_struct *work)
void ipoib_cm_skb_too_long(struct net_device *dev, struct sk_buff *skb,
unsigned int mtu)
static void ipoib_cm_rx_reap(struct work_struct *work)
static void ipoib_cm_stale_task(struct work_struct *work)
static ssize_t show_mode(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t set_mode(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(mode, S_IWUSR | S_IRUGO, show_mode, set_mode);
int ipoib_cm_add_mode_attr(struct net_device *dev)
static void ipoib_cm_create_srq(struct net_device *dev, int max_sge)
int ipoib_cm_dev_init(struct net_device *dev)
void ipoib_cm_dev_cleanup(struct net_device *dev)
