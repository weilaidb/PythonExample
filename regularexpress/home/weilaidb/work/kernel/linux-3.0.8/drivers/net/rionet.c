#define DRV_NAME        "rionet"
#define DRV_VERSION     "0.2"
#define DRV_AUTHOR      "Matt Porter <mporter@kernel.crashing.org>"
#define DRV_DESC        "Ethernet over RapidIO"
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION(DRV_DESC);
MODULE_LICENSE("GPL");
#define RIONET_DEFAULT_MSGLEVEL \
(NETIF_MSG_DRV          | \
NETIF_MSG_LINK         | \
NETIF_MSG_RX_ERR       | \
NETIF_MSG_TX_ERR)
#define RIONET_DOORBELL_JOIN	0x1000
#define RIONET_DOORBELL_LEAVE	0x1001
#define RIONET_MAILBOX		0
#define RIONET_TX_RING_SIZE	CONFIG_RIONET_TX_SIZE
#define RIONET_RX_RING_SIZE	CONFIG_RIONET_RX_SIZE
static LIST_HEAD(rionet_peers);
struct rionet_private ;
struct rionet_peer ;
static int rionet_check = 0;
static int rionet_capable = 1;
static struct rio_dev **rionet_active;
#define is_rionet_capable(src_ops, dst_ops)			\
((src_ops & RIO_SRC_OPS_DATA_MSG) &&	\
(dst_ops & RIO_DST_OPS_DATA_MSG) &&	\
(src_ops & RIO_SRC_OPS_DOORBELL) &&	\
(dst_ops & RIO_DST_OPS_DOORBELL))
#define dev_rionet_capable(dev) \
is_rionet_capable(dev->src_ops, dev->dst_ops)
#define RIONET_MAC_MATCH(x)	(*(u32 *)x == 0x00010001)
#define RIONET_GET_DESTID(x)	(*(u16 *)(x + 4))
static int rionet_rx_clean(struct net_device *ndev)
static void rionet_rx_fill(struct net_device *ndev, int end)
static int rionet_queue_tx_msg(struct sk_buff *skb, struct net_device *ndev,
struct rio_dev *rdev)
static int rionet_start_xmit(struct sk_buff *skb, struct net_device *ndev)
static void rionet_dbell_event(struct rio_mport *mport, void *dev_id, u16 sid, u16 tid,
u16 info)
static void rionet_inb_msg_event(struct rio_mport *mport, void *dev_id, int mbox, int slot)
static void rionet_outb_msg_event(struct rio_mport *mport, void *dev_id, int mbox, int slot)
static int rionet_open(struct net_device *ndev)
static int rionet_close(struct net_device *ndev)
static void rionet_remove(struct rio_dev *rdev)
static void rionet_get_drvinfo(struct net_device *ndev,
struct ethtool_drvinfo *info)
static u32 rionet_get_msglevel(struct net_device *ndev)
static void rionet_set_msglevel(struct net_device *ndev, u32 value)
static const struct ethtool_ops rionet_ethtool_ops = ;
static const struct net_device_ops rionet_netdev_ops = ;
static int rionet_setup_netdev(struct rio_mport *mport, struct net_device *ndev)
static int rionet_probe(struct rio_dev *rdev, const struct rio_device_id *id)
static struct rio_device_id rionet_id_table[] = ;
static struct rio_driver rionet_driver = ;
static int __init rionet_init(void)
static void __exit rionet_exit(void)
late_initcall(rionet_init);
module_exit(rionet_exit);
