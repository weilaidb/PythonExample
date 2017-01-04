#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int au1000_debug = 5;
static int au1000_debug = 3;
#define AU1000_DEF_MSG_ENABLE	(NETIF_MSG_DRV	| \
NETIF_MSG_PROBE	| \
NETIF_MSG_LINK)
#define DRV_NAME	"au1000_eth"
#define DRV_VERSION	"1.7"
#define DRV_AUTHOR	"Pete Popov <ppopov@embeddedalley.com>"
#define DRV_DESC	"Au1xxx on-chip Ethernet driver"
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION(DRV_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
static void au1000_enable_mac(struct net_device *dev, int force_reset)
static int au1000_mdio_read(struct net_device *dev, int phy_addr, int reg)
static void au1000_mdio_write(struct net_device *dev, int phy_addr,
int reg, u16 value)
static int au1000_mdiobus_read(struct mii_bus *bus, int phy_addr, int regnum)
static int au1000_mdiobus_write(struct mii_bus *bus, int phy_addr, int regnum,
u16 value)
static int au1000_mdiobus_reset(struct mii_bus *bus)
static void au1000_hard_stop(struct net_device *dev)
static void au1000_enable_rx_tx(struct net_device *dev)
static void
au1000_adjust_link(struct net_device *dev)
static int au1000_mii_probe(struct net_device *dev)
static struct db_dest *au1000_GetFreeDB(struct au1000_private *aup)
void au1000_ReleaseDB(struct au1000_private *aup, struct db_dest *pDB)
static void au1000_reset_mac_unlocked(struct net_device *dev)
static void au1000_reset_mac(struct net_device *dev)
static void
au1000_setup_hw_rings(struct au1000_private *aup, u32 rx_base, u32 tx_base)
static int au1000_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int au1000_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void
au1000_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static void au1000_set_msglevel(struct net_device *dev, u32 value)
static u32 au1000_get_msglevel(struct net_device *dev)
static const struct ethtool_ops au1000_ethtool_ops = ;
static int au1000_init(struct net_device *dev)
static inline void au1000_update_rx_stats(struct net_device *dev, u32 status)
static int au1000_rx(struct net_device *dev)
static void au1000_update_tx_stats(struct net_device *dev, u32 status)
static void au1000_tx_ack(struct net_device *dev)
static irqreturn_t au1000_interrupt(int irq, void *dev_id)
static int au1000_open(struct net_device *dev)
static int au1000_close(struct net_device *dev)
static netdev_tx_t au1000_tx(struct sk_buff *skb, struct net_device *dev)
static void au1000_tx_timeout(struct net_device *dev)
static void au1000_multicast_list(struct net_device *dev)
static int au1000_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static const struct net_device_ops au1000_netdev_ops = ;
static int __devinit au1000_probe(struct platform_device *pdev)
static int __devexit au1000_remove(struct platform_device *pdev)
static struct platform_driver au1000_eth_driver = ;
MODULE_ALIAS("platform:au1000-eth");
static int __init au1000_init_module(void)
static void __exit au1000_exit_module(void)
module_init(au1000_init_module);
module_exit(au1000_exit_module);
