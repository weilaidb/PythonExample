#define GRETH_DEF_MSG_ENABLE	  \
(NETIF_MSG_DRV		| \
NETIF_MSG_PROBE	| \
NETIF_MSG_LINK		| \
NETIF_MSG_IFDOWN	| \
NETIF_MSG_IFUP		| \
NETIF_MSG_RX_ERR	| \
NETIF_MSG_TX_ERR)
static int greth_debug = -1;
module_param(greth_debug, int, 0);
MODULE_PARM_DESC(greth_debug, "GRETH bitmapped debugging message enable value");
static int macaddr[6];
module_param_array(macaddr, int, NULL, 0);
MODULE_PARM_DESC(macaddr, "GRETH Ethernet MAC address");
static int greth_edcl = 1;
module_param(greth_edcl, int, 0);
MODULE_PARM_DESC(greth_edcl, "GRETH EDCL usage indicator. Set to 1 if EDCL is used.");
static int greth_open(struct net_device *dev);
static netdev_tx_t greth_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static netdev_tx_t greth_start_xmit_gbit(struct sk_buff *skb,
struct net_device *dev);
static int greth_rx(struct net_device *dev, int limit);
static int greth_rx_gbit(struct net_device *dev, int limit);
static void greth_clean_tx(struct net_device *dev);
static void greth_clean_tx_gbit(struct net_device *dev);
static irqreturn_t greth_interrupt(int irq, void *dev_id);
static int greth_close(struct net_device *dev);
static int greth_set_mac_add(struct net_device *dev, void *p);
static void greth_set_multicast_list(struct net_device *dev);
#define GRETH_REGLOAD(a)	    (be32_to_cpu(__raw_readl(&(a))))
#define GRETH_REGSAVE(a, v)         (__raw_writel(cpu_to_be32(v), &(a)))
#define GRETH_REGORIN(a, v)         (GRETH_REGSAVE(a, (GRETH_REGLOAD(a) | (v))))
#define GRETH_REGANDIN(a, v)        (GRETH_REGSAVE(a, (GRETH_REGLOAD(a) & (v))))
#define NEXT_TX(N)      (((N) + 1) & GRETH_TXBD_NUM_MASK)
#define SKIP_TX(N, C)   (((N) + C) & GRETH_TXBD_NUM_MASK)
#define NEXT_RX(N)      (((N) + 1) & GRETH_RXBD_NUM_MASK)
static void greth_print_rx_packet(void *addr, int len)
static void greth_print_tx_packet(struct sk_buff *skb)
static inline void greth_enable_tx(struct greth_private *greth)
static inline void greth_disable_tx(struct greth_private *greth)
static inline void greth_enable_rx(struct greth_private *greth)
static inline void greth_disable_rx(struct greth_private *greth)
static inline void greth_enable_irqs(struct greth_private *greth)
static inline void greth_disable_irqs(struct greth_private *greth)
static inline void greth_write_bd(u32 *bd, u32 val)
static inline u32 greth_read_bd(u32 *bd)
static void greth_clean_rings(struct greth_private *greth)
static int greth_init_rings(struct greth_private *greth)
static int greth_open(struct net_device *dev)
static int greth_close(struct net_device *dev)
static netdev_tx_t
greth_start_xmit(struct sk_buff *skb, struct net_device *dev)
static netdev_tx_t
greth_start_xmit_gbit(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t greth_interrupt(int irq, void *dev_id)
static void greth_clean_tx(struct net_device *dev)
static inline void greth_update_tx_stats(struct net_device *dev, u32 stat)
static void greth_clean_tx_gbit(struct net_device *dev)
static int greth_rx(struct net_device *dev, int limit)
static inline int hw_checksummed(u32 status)
static int greth_rx_gbit(struct net_device *dev, int limit)
static int greth_poll(struct napi_struct *napi, int budget)
static int greth_set_mac_add(struct net_device *dev, void *p)
static u32 greth_hash_get_index(__u8 *addr)
static void greth_set_hash_filter(struct net_device *dev)
static void greth_set_multicast_list(struct net_device *dev)
static u32 greth_get_msglevel(struct net_device *dev)
static void greth_set_msglevel(struct net_device *dev, u32 value)
static int greth_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int greth_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int greth_get_regs_len(struct net_device *dev)
static void greth_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static void greth_get_regs(struct net_device *dev, struct ethtool_regs *regs, void *p)
static const struct ethtool_ops greth_ethtool_ops = ;
static struct net_device_ops greth_netdev_ops = ;
static inline int wait_for_mdio(struct greth_private *greth)
static int greth_mdio_read(struct mii_bus *bus, int phy, int reg)
static int greth_mdio_write(struct mii_bus *bus, int phy, int reg, u16 val)
static int greth_mdio_reset(struct mii_bus *bus)
static void greth_link_change(struct net_device *dev)
static int greth_mdio_probe(struct net_device *dev)
static inline int phy_aneg_done(struct phy_device *phydev)
static int greth_mdio_init(struct greth_private *greth)
static int __devinit greth_of_probe(struct platform_device *ofdev)
static int __devexit greth_of_remove(struct platform_device *of_dev)
static struct of_device_id greth_of_match[] = ;
MODULE_DEVICE_TABLE(of, greth_of_match);
static struct platform_driver greth_of_driver = ;
static int __init greth_init(void)
static void __exit greth_cleanup(void)
module_init(greth_init);
module_exit(greth_cleanup);
MODULE_AUTHOR("Aeroflex Gaisler AB.");
MODULE_DESCRIPTION("Aeroflex Gaisler Ethernet MAC driver");
MODULE_LICENSE("GPL");
