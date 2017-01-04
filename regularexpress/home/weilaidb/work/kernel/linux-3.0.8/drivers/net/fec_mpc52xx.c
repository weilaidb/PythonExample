#define DRIVER_NAME "mpc52xx-fec"
struct mpc52xx_fec_priv ;
static irqreturn_t mpc52xx_fec_interrupt(int, void *);
static irqreturn_t mpc52xx_fec_rx_interrupt(int, void *);
static irqreturn_t mpc52xx_fec_tx_interrupt(int, void *);
static void mpc52xx_fec_stop(struct net_device *dev);
static void mpc52xx_fec_start(struct net_device *dev);
static void mpc52xx_fec_reset(struct net_device *dev);
static u8 mpc52xx_fec_mac_addr[6];
module_param_array_named(mac, mpc52xx_fec_mac_addr, byte, NULL, 0);
MODULE_PARM_DESC(mac, "six hex digits, ie. 0x1,0x2,0xc0,0x01,0xba,0xbe");
#define MPC52xx_MESSAGES_DEFAULT ( NETIF_MSG_DRV | NETIF_MSG_PROBE | \
NETIF_MSG_LINK | NETIF_MSG_IFDOWN | NETIF_MSG_IFUP)
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "debugging messages level");
static void mpc52xx_fec_tx_timeout(struct net_device *dev)
static void mpc52xx_fec_set_paddr(struct net_device *dev, u8 *mac)
static void mpc52xx_fec_get_paddr(struct net_device *dev, u8 *mac)
static int mpc52xx_fec_set_mac_address(struct net_device *dev, void *addr)
static void mpc52xx_fec_free_rx_buffers(struct net_device *dev, struct bcom_task *s)
static void
mpc52xx_fec_rx_submit(struct net_device *dev, struct sk_buff *rskb)
static int mpc52xx_fec_alloc_rx_buffers(struct net_device *dev, struct bcom_task *rxtsk)
static void mpc52xx_fec_adjust_link(struct net_device *dev)
static int mpc52xx_fec_open(struct net_device *dev)
static int mpc52xx_fec_close(struct net_device *dev)
static int mpc52xx_fec_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void mpc52xx_fec_poll_controller(struct net_device *dev)
static irqreturn_t mpc52xx_fec_tx_interrupt(int irq, void *dev_id)
static irqreturn_t mpc52xx_fec_rx_interrupt(int irq, void *dev_id)
static irqreturn_t mpc52xx_fec_interrupt(int irq, void *dev_id)
static struct net_device_stats *mpc52xx_fec_get_stats(struct net_device *dev)
static void mpc52xx_fec_reset_stats(struct net_device *dev)
static void mpc52xx_fec_set_multicast_list(struct net_device *dev)
static void mpc52xx_fec_hw_init(struct net_device *dev)
static void mpc52xx_fec_start(struct net_device *dev)
static void mpc52xx_fec_stop(struct net_device *dev)
static void mpc52xx_fec_reset(struct net_device *dev)
static int mpc52xx_fec_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int mpc52xx_fec_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 mpc52xx_fec_get_msglevel(struct net_device *dev)
static void mpc52xx_fec_set_msglevel(struct net_device *dev, u32 level)
static const struct ethtool_ops mpc52xx_fec_ethtool_ops = ;
static int mpc52xx_fec_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static const struct net_device_ops mpc52xx_fec_netdev_ops = ;
static int __devinit mpc52xx_fec_probe(struct platform_device *op)
static int
mpc52xx_fec_remove(struct platform_device *op)
static int mpc52xx_fec_of_suspend(struct platform_device *op, pm_message_t state)
static int mpc52xx_fec_of_resume(struct platform_device *op)
static struct of_device_id mpc52xx_fec_match[] = ;
MODULE_DEVICE_TABLE(of, mpc52xx_fec_match);
static struct platform_driver mpc52xx_fec_driver = ;
static int __init
mpc52xx_fec_init(void)
static void __exit
mpc52xx_fec_exit(void)
module_init(mpc52xx_fec_init);
module_exit(mpc52xx_fec_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dale Farnsworth");
MODULE_DESCRIPTION("Ethernet driver for the Freescale MPC52xx FEC");
