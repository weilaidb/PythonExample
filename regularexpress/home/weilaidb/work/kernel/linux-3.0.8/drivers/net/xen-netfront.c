static const struct ethtool_ops xennet_ethtool_ops;
struct netfront_cb ;
#define NETFRONT_SKB_CB(skb)	((struct netfront_cb *)((skb)->cb))
#define RX_COPY_THRESHOLD 256
#define GRANT_INVALID_REF	0
#define NET_TX_RING_SIZE __CONST_RING_SIZE(xen_netif_tx, PAGE_SIZE)
#define NET_RX_RING_SIZE __CONST_RING_SIZE(xen_netif_rx, PAGE_SIZE)
#define TX_MAX_TARGET min_t(int, NET_RX_RING_SIZE, 256)
struct netfront_info ;
struct netfront_rx_info ;
static void skb_entry_set_link(union skb_entry *list, unsigned short id)
static int skb_entry_is_link(const union skb_entry *list)
static void add_id_to_freelist(unsigned *head, union skb_entry *list,
unsigned short id)
static unsigned short get_id_from_freelist(unsigned *head,
union skb_entry *list)
static int xennet_rxidx(RING_IDX idx)
static struct sk_buff *xennet_get_rx_skb(struct netfront_info *np,
RING_IDX ri)
static grant_ref_t xennet_get_rx_ref(struct netfront_info *np,
RING_IDX ri)
static int xennet_sysfs_addif(struct net_device *netdev);
static void xennet_sysfs_delif(struct net_device *netdev);
#define xennet_sysfs_addif(dev) (0)
#define xennet_sysfs_delif(dev) do  while (0)
static int xennet_can_sg(struct net_device *dev)
static void rx_refill_timeout(unsigned long data)
static int netfront_tx_slot_available(struct netfront_info *np)
static void xennet_maybe_wake_tx(struct net_device *dev)
static void xennet_alloc_rx_buffers(struct net_device *dev)
static int xennet_open(struct net_device *dev)
static void xennet_tx_buf_gc(struct net_device *dev)
static void xennet_make_frags(struct sk_buff *skb, struct net_device *dev,
struct xen_netif_tx_request *tx)
static int xennet_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int xennet_close(struct net_device *dev)
static void xennet_move_rx_slot(struct netfront_info *np, struct sk_buff *skb,
grant_ref_t ref)
static int xennet_get_extras(struct netfront_info *np,
struct xen_netif_extra_info *extras,
RING_IDX rp)
static int xennet_get_responses(struct netfront_info *np,
struct netfront_rx_info *rinfo, RING_IDX rp,
struct sk_buff_head *list)
static int xennet_set_skb_gso(struct sk_buff *skb,
struct xen_netif_extra_info *gso)
static RING_IDX xennet_fill_frags(struct netfront_info *np,
struct sk_buff *skb,
struct sk_buff_head *list)
static int checksum_setup(struct net_device *dev, struct sk_buff *skb)
static int handle_incoming_queue(struct net_device *dev,
struct sk_buff_head *rxq)
static int xennet_poll(struct napi_struct *napi, int budget)
static int xennet_change_mtu(struct net_device *dev, int mtu)
static void xennet_release_tx_bufs(struct netfront_info *np)
static void xennet_release_rx_bufs(struct netfront_info *np)
static void xennet_uninit(struct net_device *dev)
static u32 xennet_fix_features(struct net_device *dev, u32 features)
static int xennet_set_features(struct net_device *dev, u32 features)
static const struct net_device_ops xennet_netdev_ops = ;
static struct net_device * __devinit xennet_create_dev(struct xenbus_device *dev)
static int __devinit netfront_probe(struct xenbus_device *dev,
const struct xenbus_device_id *id)
static void xennet_end_access(int ref, void *page)
static void xennet_disconnect_backend(struct netfront_info *info)
static int netfront_resume(struct xenbus_device *dev)
static int xen_net_read_mac(struct xenbus_device *dev, u8 mac[])
static irqreturn_t xennet_interrupt(int irq, void *dev_id)
static int setup_netfront(struct xenbus_device *dev, struct netfront_info *info)
static int talk_to_netback(struct xenbus_device *dev,
struct netfront_info *info)
static int xennet_connect(struct net_device *dev)
static void netback_changed(struct xenbus_device *dev,
enum xenbus_state backend_state)
static const struct xennet_stat  xennet_stats[] = ;
static int xennet_get_sset_count(struct net_device *dev, int string_set)
static void xennet_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 * data)
static void xennet_get_strings(struct net_device *dev, u32 stringset, u8 * data)
static const struct ethtool_ops xennet_ethtool_ops =
;
static ssize_t show_rxbuf_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_rxbuf_min(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t show_rxbuf_max(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_rxbuf_max(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t show_rxbuf_cur(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute xennet_attrs[] = ;
static int xennet_sysfs_addif(struct net_device *netdev)
static void xennet_sysfs_delif(struct net_device *netdev)
static struct xenbus_device_id netfront_ids[] = ;
static int __devexit xennet_remove(struct xenbus_device *dev)
static struct xenbus_driver netfront_driver = ;
static int __init netif_init(void)
module_init(netif_init);
static void __exit netif_exit(void)
module_exit(netif_exit);
MODULE_DESCRIPTION("Xen virtual network device frontend");
MODULE_LICENSE("GPL");
MODULE_ALIAS("xen:vif");
MODULE_ALIAS("xennet");
