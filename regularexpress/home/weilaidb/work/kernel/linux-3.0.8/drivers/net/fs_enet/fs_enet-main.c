MODULE_AUTHOR("Pantelis Antoniou <panto@intracom.gr>");
MODULE_DESCRIPTION("Freescale Ethernet Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
static int fs_enet_debug = -1;
module_param(fs_enet_debug, int, 0);
MODULE_PARM_DESC(fs_enet_debug,
"Freescale bitmapped debugging message enable value");
static void fs_enet_netpoll(struct net_device *dev);
static void fs_set_multicast_list(struct net_device *dev)
static void skb_align(struct sk_buff *skb, int align)
static int fs_enet_rx_napi(struct napi_struct *napi, int budget)
static int fs_enet_rx_non_napi(struct net_device *dev)
static void fs_enet_tx(struct net_device *dev)
static irqreturn_t
fs_enet_interrupt(int irq, void *dev_id)
void fs_init_bds(struct net_device *dev)
void fs_cleanup_bds(struct net_device *dev)
static struct sk_buff *tx_skb_align_workaround(struct net_device *dev,
struct sk_buff *skb)
static int fs_enet_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void fs_timeout(struct net_device *dev)
static void generic_adjust_link(struct  net_device *dev)
static void fs_adjust_link(struct net_device *dev)
static int fs_init_phy(struct net_device *dev)
static int fs_enet_open(struct net_device *dev)
static int fs_enet_close(struct net_device *dev)
static struct net_device_stats *fs_enet_get_stats(struct net_device *dev)
static void fs_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int fs_get_regs_len(struct net_device *dev)
static void fs_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *p)
static int fs_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int fs_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int fs_nway_reset(struct net_device *dev)
static u32 fs_get_msglevel(struct net_device *dev)
static void fs_set_msglevel(struct net_device *dev, u32 value)
static const struct ethtool_ops fs_ethtool_ops = ;
static int fs_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
extern int fs_mii_connect(struct net_device *dev);
extern void fs_mii_disconnect(struct net_device *dev);
#define IS_FEC(match) ((match)->data == &fs_fec_ops)
#define IS_FEC(match) 0
static const struct net_device_ops fs_enet_netdev_ops = ;
static struct of_device_id fs_enet_match[];
static int __devinit fs_enet_probe(struct platform_device *ofdev)
static int fs_enet_remove(struct platform_device *ofdev)
static struct of_device_id fs_enet_match[] = ;
MODULE_DEVICE_TABLE(of, fs_enet_match);
static struct platform_driver fs_enet_driver = ;
static int __init fs_init(void)
static void __exit fs_cleanup(void)
static void fs_enet_netpoll(struct net_device *dev)
module_init(fs_init);
module_exit(fs_cleanup);
