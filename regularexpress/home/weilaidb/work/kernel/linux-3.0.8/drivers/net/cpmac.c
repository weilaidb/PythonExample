MODULE_AUTHOR("Eugene Konev <ejka@imfi.kspu.ru>");
MODULE_DESCRIPTION("TI AR7 ethernet driver (CPMAC)");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:cpmac");
static int debug_level = 8;
static int dumb_switch;
module_param(debug_level, int, 0444);
module_param(dumb_switch, int, 0444);
MODULE_PARM_DESC(debug_level, "Number of NETIF_MSG bits to enable");
MODULE_PARM_DESC(dumb_switch, "Assume switch is not connected to MDIO bus");
#define CPMAC_VERSION "0.5.2"
#define CPMAC_SKB_SIZE		(ETH_FRAME_LEN + ETH_FCS_LEN + VLAN_HLEN)
#define CPMAC_QUEUES	8
#define CPMAC_TX_CONTROL		0x0004
#define CPMAC_TX_TEARDOWN		0x0008
#define CPMAC_RX_CONTROL		0x0014
#define CPMAC_RX_TEARDOWN		0x0018
#define CPMAC_MBP			0x0100
# define MBP_RXPASSCRC			0x40000000
# define MBP_RXQOS			0x20000000
# define MBP_RXNOCHAIN			0x10000000
# define MBP_RXCMF			0x01000000
# define MBP_RXSHORT			0x00800000
# define MBP_RXCEF			0x00400000
# define MBP_RXPROMISC			0x00200000
# define MBP_PROMISCCHAN(channel)	(((channel) & 0x7) << 16)
# define MBP_RXBCAST			0x00002000
# define MBP_BCASTCHAN(channel)		(((channel) & 0x7) << 8)
# define MBP_RXMCAST			0x00000020
# define MBP_MCASTCHAN(channel)		((channel) & 0x7)
#define CPMAC_UNICAST_ENABLE		0x0104
#define CPMAC_UNICAST_CLEAR		0x0108
#define CPMAC_MAX_LENGTH		0x010c
#define CPMAC_BUFFER_OFFSET		0x0110
#define CPMAC_MAC_CONTROL		0x0160
# define MAC_TXPTYPE			0x00000200
# define MAC_TXPACE			0x00000040
# define MAC_MII			0x00000020
# define MAC_TXFLOW			0x00000010
# define MAC_RXFLOW			0x00000008
# define MAC_MTEST			0x00000004
# define MAC_LOOPBACK			0x00000002
# define MAC_FDX			0x00000001
#define CPMAC_MAC_STATUS		0x0164
# define MAC_STATUS_QOS			0x00000004
# define MAC_STATUS_RXFLOW		0x00000002
# define MAC_STATUS_TXFLOW		0x00000001
#define CPMAC_TX_INT_ENABLE		0x0178
#define CPMAC_TX_INT_CLEAR		0x017c
#define CPMAC_MAC_INT_VECTOR		0x0180
# define MAC_INT_STATUS			0x00080000
# define MAC_INT_HOST			0x00040000
# define MAC_INT_RX			0x00020000
# define MAC_INT_TX			0x00010000
#define CPMAC_MAC_EOI_VECTOR		0x0184
#define CPMAC_RX_INT_ENABLE		0x0198
#define CPMAC_RX_INT_CLEAR		0x019c
#define CPMAC_MAC_INT_ENABLE		0x01a8
#define CPMAC_MAC_INT_CLEAR		0x01ac
#define CPMAC_MAC_ADDR_LO(channel)	(0x01b0 + (channel) * 4)
#define CPMAC_MAC_ADDR_MID		0x01d0
#define CPMAC_MAC_ADDR_HI		0x01d4
#define CPMAC_MAC_HASH_LO		0x01d8
#define CPMAC_MAC_HASH_HI		0x01dc
#define CPMAC_TX_PTR(channel)		(0x0600 + (channel) * 4)
#define CPMAC_RX_PTR(channel)		(0x0620 + (channel) * 4)
#define CPMAC_TX_ACK(channel)		(0x0640 + (channel) * 4)
#define CPMAC_RX_ACK(channel)		(0x0660 + (channel) * 4)
#define CPMAC_REG_END			0x0680
#define CPMAC_STATS_RX_GOOD		0x0200
#define CPMAC_STATS_RX_BCAST		0x0204
#define CPMAC_STATS_RX_MCAST		0x0208
#define CPMAC_STATS_RX_PAUSE		0x020c
#define CPMAC_STATS_RX_CRC		0x0210
#define CPMAC_STATS_RX_ALIGN		0x0214
#define CPMAC_STATS_RX_OVER		0x0218
#define CPMAC_STATS_RX_JABBER		0x021c
#define CPMAC_STATS_RX_UNDER		0x0220
#define CPMAC_STATS_RX_FRAG		0x0224
#define CPMAC_STATS_RX_FILTER		0x0228
#define CPMAC_STATS_RX_QOSFILTER	0x022c
#define CPMAC_STATS_RX_OCTETS		0x0230
#define CPMAC_STATS_TX_GOOD		0x0234
#define CPMAC_STATS_TX_BCAST		0x0238
#define CPMAC_STATS_TX_MCAST		0x023c
#define CPMAC_STATS_TX_PAUSE		0x0240
#define CPMAC_STATS_TX_DEFER		0x0244
#define CPMAC_STATS_TX_COLLISION	0x0248
#define CPMAC_STATS_TX_SINGLECOLL	0x024c
#define CPMAC_STATS_TX_MULTICOLL	0x0250
#define CPMAC_STATS_TX_EXCESSCOLL	0x0254
#define CPMAC_STATS_TX_LATECOLL		0x0258
#define CPMAC_STATS_TX_UNDERRUN		0x025c
#define CPMAC_STATS_TX_CARRIERSENSE	0x0260
#define CPMAC_STATS_TX_OCTETS		0x0264
#define cpmac_read(base, reg)		(readl((void __iomem *)(base) + (reg)))
#define cpmac_write(base, reg, val)	(writel(val, (void __iomem *)(base) + \
(reg)))
#define CPMAC_MDIO_VERSION		0x0000
#define CPMAC_MDIO_CONTROL		0x0004
# define MDIOC_IDLE			0x80000000
# define MDIOC_ENABLE			0x40000000
# define MDIOC_PREAMBLE			0x00100000
# define MDIOC_FAULT			0x00080000
# define MDIOC_FAULTDETECT		0x00040000
# define MDIOC_INTTEST			0x00020000
# define MDIOC_CLKDIV(div)		((div) & 0xff)
#define CPMAC_MDIO_ALIVE		0x0008
#define CPMAC_MDIO_LINK			0x000c
#define CPMAC_MDIO_ACCESS(channel)	(0x0080 + (channel) * 8)
# define MDIO_BUSY			0x80000000
# define MDIO_WRITE			0x40000000
# define MDIO_REG(reg)			(((reg) & 0x1f) << 21)
# define MDIO_PHY(phy)			(((phy) & 0x1f) << 16)
# define MDIO_DATA(data)		((data) & 0xffff)
#define CPMAC_MDIO_PHYSEL(channel)	(0x0084 + (channel) * 8)
# define PHYSEL_LINKSEL			0x00000040
# define PHYSEL_LINKINT			0x00000020
struct cpmac_desc ;
struct cpmac_priv ;
static irqreturn_t cpmac_irq(int, void *);
static void cpmac_hw_start(struct net_device *dev);
static void cpmac_hw_stop(struct net_device *dev);
static int cpmac_stop(struct net_device *dev);
static int cpmac_open(struct net_device *dev);
static void cpmac_dump_regs(struct net_device *dev)
static void cpmac_dump_desc(struct net_device *dev, struct cpmac_desc *desc)
static void cpmac_dump_all_desc(struct net_device *dev)
static void cpmac_dump_skb(struct net_device *dev, struct sk_buff *skb)
static int cpmac_mdio_read(struct mii_bus *bus, int phy_id, int reg)
static int cpmac_mdio_write(struct mii_bus *bus, int phy_id,
int reg, u16 val)
static int cpmac_mdio_reset(struct mii_bus *bus)
static int mii_irqs[PHY_MAX_ADDR] = ;
static struct mii_bus *cpmac_mii;
static int cpmac_config(struct net_device *dev, struct ifmap *map)
static void cpmac_set_multicast_list(struct net_device *dev)
static struct sk_buff *cpmac_rx_one(struct cpmac_priv *priv,
struct cpmac_desc *desc)
static int cpmac_poll(struct napi_struct *napi, int budget)
static int cpmac_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void cpmac_end_xmit(struct net_device *dev, int queue)
static void cpmac_hw_stop(struct net_device *dev)
static void cpmac_hw_start(struct net_device *dev)
static void cpmac_clear_rx(struct net_device *dev)
static void cpmac_clear_tx(struct net_device *dev)
static void cpmac_hw_error(struct work_struct *work)
static void cpmac_check_status(struct net_device *dev)
static irqreturn_t cpmac_irq(int irq, void *dev_id)
static void cpmac_tx_timeout(struct net_device *dev)
static int cpmac_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int cpmac_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int cpmac_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void cpmac_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *ring)
static int cpmac_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *ring)
static void cpmac_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops cpmac_ethtool_ops = ;
static void cpmac_adjust_link(struct net_device *dev)
static int cpmac_open(struct net_device *dev)
static int cpmac_stop(struct net_device *dev)
static const struct net_device_ops cpmac_netdev_ops = ;
static int external_switch;
static int __devinit cpmac_probe(struct platform_device *pdev)
static int __devexit cpmac_remove(struct platform_device *pdev)
static struct platform_driver cpmac_driver = ;
int __devinit cpmac_init(void)
void __devexit cpmac_exit(void)
module_init(cpmac_init);
module_exit(cpmac_exit);
