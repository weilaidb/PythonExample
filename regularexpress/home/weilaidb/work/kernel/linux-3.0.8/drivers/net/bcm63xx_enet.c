static char bcm_enet_driver_name[] = "bcm63xx_enet";
static char bcm_enet_driver_version[] = "1.0";
static int copybreak __read_mostly = 128;
module_param(copybreak, int, 0);
MODULE_PARM_DESC(copybreak, "Receive copy threshold");
static void __iomem *bcm_enet_shared_base;
static inline u32 enet_readl(struct bcm_enet_priv *priv, u32 off)
static inline void enet_writel(struct bcm_enet_priv *priv,
u32 val, u32 off)
static inline u32 enet_dma_readl(struct bcm_enet_priv *priv, u32 off)
static inline void enet_dma_writel(struct bcm_enet_priv *priv,
u32 val, u32 off)
static int do_mdio_op(struct bcm_enet_priv *priv, unsigned int data)
static int bcm_enet_mdio_read(struct bcm_enet_priv *priv, int mii_id,
int regnum)
static int bcm_enet_mdio_write(struct bcm_enet_priv *priv, int mii_id,
int regnum, u16 value)
static int bcm_enet_mdio_read_phylib(struct mii_bus *bus, int mii_id,
int regnum)
static int bcm_enet_mdio_write_phylib(struct mii_bus *bus, int mii_id,
int regnum, u16 value)
static int bcm_enet_mdio_read_mii(struct net_device *dev, int mii_id,
int regnum)
static void bcm_enet_mdio_write_mii(struct net_device *dev, int mii_id,
int regnum, int value)
static int bcm_enet_refill_rx(struct net_device *dev)
static void bcm_enet_refill_rx_timer(unsigned long data)
static int bcm_enet_receive_queue(struct net_device *dev, int budget)
static int bcm_enet_tx_reclaim(struct net_device *dev, int force)
static int bcm_enet_poll(struct napi_struct *napi, int budget)
static irqreturn_t bcm_enet_isr_mac(int irq, void *dev_id)
static irqreturn_t bcm_enet_isr_dma(int irq, void *dev_id)
static int bcm_enet_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int bcm_enet_set_mac_address(struct net_device *dev, void *p)
static void bcm_enet_set_multicast_list(struct net_device *dev)
static void bcm_enet_set_duplex(struct bcm_enet_priv *priv, int fullduplex)
static void bcm_enet_set_flow(struct bcm_enet_priv *priv, int rx_en, int tx_en)
static void bcm_enet_adjust_phy_link(struct net_device *dev)
static void bcm_enet_adjust_link(struct net_device *dev)
static int bcm_enet_open(struct net_device *dev)
static void bcm_enet_disable_mac(struct bcm_enet_priv *priv)
static void bcm_enet_disable_dma(struct bcm_enet_priv *priv, int chan)
static int bcm_enet_stop(struct net_device *dev)
struct bcm_enet_stats ;
#define GEN_STAT(m) sizeof(((struct bcm_enet_priv *)0)->m),		\
offsetof(struct bcm_enet_priv, m)
#define DEV_STAT(m) sizeof(((struct net_device_stats *)0)->m),		\
offsetof(struct net_device_stats, m)
static const struct bcm_enet_stats bcm_enet_gstrings_stats[] = ;
#define BCM_ENET_STATS_LEN	\
(sizeof(bcm_enet_gstrings_stats) / sizeof(struct bcm_enet_stats))
static const u32 unused_mib_regs[] = ;
static void bcm_enet_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static int bcm_enet_get_sset_count(struct net_device *netdev,
int string_set)
static void bcm_enet_get_strings(struct net_device *netdev,
u32 stringset, u8 *data)
static void update_mib_counters(struct bcm_enet_priv *priv)
static void bcm_enet_update_mib_counters_defer(struct work_struct *t)
static void bcm_enet_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats,
u64 *data)
static int bcm_enet_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static int bcm_enet_set_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static void bcm_enet_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static int bcm_enet_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static void bcm_enet_get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *ecmd)
static int bcm_enet_set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *ecmd)
static struct ethtool_ops bcm_enet_ethtool_ops = ;
static int bcm_enet_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int compute_hw_mtu(struct bcm_enet_priv *priv, int mtu)
static int bcm_enet_change_mtu(struct net_device *dev, int new_mtu)
static void bcm_enet_hw_preinit(struct bcm_enet_priv *priv)
static const struct net_device_ops bcm_enet_ops = ;
static int __devinit bcm_enet_probe(struct platform_device *pdev)
static int __devexit bcm_enet_remove(struct platform_device *pdev)
struct platform_driver bcm63xx_enet_driver = ;
static int __devinit bcm_enet_shared_probe(struct platform_device *pdev)
static int __devexit bcm_enet_shared_remove(struct platform_device *pdev)
struct platform_driver bcm63xx_enet_shared_driver = ;
static int __init bcm_enet_init(void)
static void __exit bcm_enet_exit(void)
module_init(bcm_enet_init);
module_exit(bcm_enet_exit);
MODULE_DESCRIPTION("BCM63xx internal ethernet mac driver");
MODULE_AUTHOR("Maxime Bizon <mbizon@freebox.fr>");
MODULE_LICENSE("GPL");
