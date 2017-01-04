#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_MODULE_NAME		"sunvnet"
#define DRV_MODULE_VERSION	"1.0"
#define DRV_MODULE_RELDATE	"June 25, 2007"
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_DESCRIPTION("Sun LDOM virtual network driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
static struct vio_version vnet_versions[] = ;
static inline u32 vnet_tx_dring_avail(struct vio_dring_state *dr)
static int vnet_handle_unknown(struct vnet_port *port, void *arg)
static int vnet_send_attr(struct vio_driver_state *vio)
static int handle_attr_info(struct vio_driver_state *vio,
struct vio_net_attr_info *pkt)
static int handle_attr_ack(struct vio_driver_state *vio,
struct vio_net_attr_info *pkt)
static int handle_attr_nack(struct vio_driver_state *vio,
struct vio_net_attr_info *pkt)
static int vnet_handle_attr(struct vio_driver_state *vio, void *arg)
static void vnet_handshake_complete(struct vio_driver_state *vio)
static struct sk_buff *alloc_and_align_skb(struct net_device *dev,
unsigned int len)
static int vnet_rx_one(struct vnet_port *port, unsigned int len,
struct ldc_trans_cookie *cookies, int ncookies)
static int vnet_send_ack(struct vnet_port *port, struct vio_dring_state *dr,
u32 start, u32 end, u8 vio_dring_state)
static u32 next_idx(u32 idx, struct vio_dring_state *dr)
static u32 prev_idx(u32 idx, struct vio_dring_state *dr)
static struct vio_net_desc *get_rx_desc(struct vnet_port *port,
struct vio_dring_state *dr,
u32 index)
static int put_rx_desc(struct vnet_port *port,
struct vio_dring_state *dr,
struct vio_net_desc *desc,
u32 index)
static int vnet_walk_rx_one(struct vnet_port *port,
struct vio_dring_state *dr,
u32 index, int *needs_ack)
static int vnet_walk_rx(struct vnet_port *port, struct vio_dring_state *dr,
u32 start, u32 end)
static int vnet_rx(struct vnet_port *port, void *msgbuf)
static int idx_is_pending(struct vio_dring_state *dr, u32 end)
static int vnet_ack(struct vnet_port *port, void *msgbuf)
static int vnet_nack(struct vnet_port *port, void *msgbuf)
static int handle_mcast(struct vnet_port *port, void *msgbuf)
static void maybe_tx_wakeup(struct vnet *vp)
static void vnet_event(void *arg, int event)
static int __vnet_tx_trigger(struct vnet_port *port)
struct vnet_port *__tx_port_find(struct vnet *vp, struct sk_buff *skb)
struct vnet_port *tx_port_find(struct vnet *vp, struct sk_buff *skb)
static int vnet_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void vnet_tx_timeout(struct net_device *dev)
static int vnet_open(struct net_device *dev)
static int vnet_close(struct net_device *dev)
static struct vnet_mcast_entry *__vnet_mc_find(struct vnet *vp, u8 *addr)
static void __update_mc_list(struct vnet *vp, struct net_device *dev)
static void __send_mc_list(struct vnet *vp, struct vnet_port *port)
static void vnet_set_rx_mode(struct net_device *dev)
static int vnet_change_mtu(struct net_device *dev, int new_mtu)
static int vnet_set_mac_addr(struct net_device *dev, void *p)
static void vnet_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 vnet_get_msglevel(struct net_device *dev)
static void vnet_set_msglevel(struct net_device *dev, u32 value)
static const struct ethtool_ops vnet_ethtool_ops = ;
static void vnet_port_free_tx_bufs(struct vnet_port *port)
static int __devinit vnet_port_alloc_tx_bufs(struct vnet_port *port)
static LIST_HEAD(vnet_list);
static DEFINE_MUTEX(vnet_list_mutex);
static const struct net_device_ops vnet_ops = ;
static struct vnet * __devinit vnet_new(const u64 *local_mac)
static struct vnet * __devinit vnet_find_or_create(const u64 *local_mac)
static const char *local_mac_prop = "local-mac-address";
static struct vnet * __devinit vnet_find_parent(struct mdesc_handle *hp,
u64 port_node)
static struct ldc_channel_config vnet_ldc_cfg = ;
static struct vio_driver_ops vnet_vio_ops = ;
static void __devinit print_version(void)
const char *remote_macaddr_prop = "remote-mac-address";
static int __devinit vnet_port_probe(struct vio_dev *vdev,
const struct vio_device_id *id)
static int vnet_port_remove(struct vio_dev *vdev)
static const struct vio_device_id vnet_port_match[] = ;
MODULE_DEVICE_TABLE(vio, vnet_port_match);
static struct vio_driver vnet_port_driver = ;
static int __init vnet_init(void)
static void __exit vnet_exit(void)
module_init(vnet_init);
module_exit(vnet_exit);
