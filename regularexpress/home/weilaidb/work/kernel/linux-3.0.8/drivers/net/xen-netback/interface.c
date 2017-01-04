#define XENVIF_QUEUE_LENGTH 32
void xenvif_get(struct xenvif *vif)
void xenvif_put(struct xenvif *vif)
int xenvif_schedulable(struct xenvif *vif)
static int xenvif_rx_schedulable(struct xenvif *vif)
static irqreturn_t xenvif_interrupt(int irq, void *dev_id)
static int xenvif_start_xmit(struct sk_buff *skb, struct net_device *dev)
void xenvif_receive_skb(struct xenvif *vif, struct sk_buff *skb)
void xenvif_notify_tx_completion(struct xenvif *vif)
static struct net_device_stats *xenvif_get_stats(struct net_device *dev)
static void xenvif_up(struct xenvif *vif)
static void xenvif_down(struct xenvif *vif)
static int xenvif_open(struct net_device *dev)
static int xenvif_close(struct net_device *dev)
static int xenvif_change_mtu(struct net_device *dev, int mtu)
static u32 xenvif_fix_features(struct net_device *dev, u32 features)
static const struct xenvif_stat  xenvif_stats[] = ;
static int xenvif_get_sset_count(struct net_device *dev, int string_set)
static void xenvif_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 * data)
static void xenvif_get_strings(struct net_device *dev, u32 stringset, u8 * data)
static struct ethtool_ops xenvif_ethtool_ops = ;
static struct net_device_ops xenvif_netdev_ops = ;
struct xenvif *xenvif_alloc(struct device *parent, domid_t domid,
unsigned int handle)
int xenvif_connect(struct xenvif *vif, unsigned long tx_ring_ref,
unsigned long rx_ring_ref, unsigned int evtchn)
void xenvif_disconnect(struct xenvif *vif)
