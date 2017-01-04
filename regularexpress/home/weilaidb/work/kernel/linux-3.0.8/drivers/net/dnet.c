#undef DEBUG
static u16 dnet_readw_mac(struct dnet *bp, u16 reg)
static void dnet_writew_mac(struct dnet *bp, u16 reg, u16 val)
static void __dnet_set_hwaddr(struct dnet *bp)
static void __devinit dnet_get_hwaddr(struct dnet *bp)
static int dnet_mdio_read(struct mii_bus *bus, int mii_id, int regnum)
static int dnet_mdio_write(struct mii_bus *bus, int mii_id, int regnum,
u16 value)
static int dnet_mdio_reset(struct mii_bus *bus)
static void dnet_handle_link_change(struct net_device *dev)
static int dnet_mii_probe(struct net_device *dev)
static int dnet_mii_init(struct dnet *bp)
static int dnet_phy_marvell_fixup(struct phy_device *phydev)
static void dnet_update_stats(struct dnet *bp)
static int dnet_poll(struct napi_struct *napi, int budget)
static irqreturn_t dnet_interrupt(int irq, void *dev_id)
static inline void dnet_print_skb(struct sk_buff *skb)
#define dnet_print_skb(skb)	do  while (0)
static netdev_tx_t dnet_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void dnet_reset_hw(struct dnet *bp)
static void dnet_init_hw(struct dnet *bp)
static int dnet_open(struct net_device *dev)
static int dnet_close(struct net_device *dev)
static inline void dnet_print_pretty_hwstats(struct dnet_stats *hwstat)
static struct net_device_stats *dnet_get_stats(struct net_device *dev)
static int dnet_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int dnet_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int dnet_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void dnet_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops dnet_ethtool_ops = ;
static const struct net_device_ops dnet_netdev_ops = ;
static int __devinit dnet_probe(struct platform_device *pdev)
static int __devexit dnet_remove(struct platform_device *pdev)
static struct platform_driver dnet_driver = ;
static int __init dnet_init(void)
static void __exit dnet_exit(void)
module_init(dnet_init);
module_exit(dnet_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Dave DNET Ethernet driver");
MODULE_AUTHOR("Ilya Yanok <yanok@emcraft.com>, "
"Matteo Vit <matteo.vit@dave.eu>");
