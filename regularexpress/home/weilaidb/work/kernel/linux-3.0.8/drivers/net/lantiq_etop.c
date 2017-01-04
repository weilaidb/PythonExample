#define LTQ_ETOP_MDIO		0x11804
#define MDIO_REQUEST		0x80000000
#define MDIO_READ		0x40000000
#define MDIO_ADDR_MASK		0x1f
#define MDIO_ADDR_OFFSET	0x15
#define MDIO_REG_MASK		0x1f
#define MDIO_REG_OFFSET		0x10
#define MDIO_VAL_MASK		0xffff
#define PPE32_CGEN		0x800
#define LQ_PPE32_ENET_MAC_CFG	0x1840
#define LTQ_ETOP_ENETS0		0x11850
#define LTQ_ETOP_MAC_DA0	0x1186C
#define LTQ_ETOP_MAC_DA1	0x11870
#define LTQ_ETOP_CFG		0x16020
#define LTQ_ETOP_IGPLEN		0x16080
#define MAX_DMA_CHAN		0x8
#define MAX_DMA_CRC_LEN		0x4
#define MAX_DMA_DATA_LEN	0x600
#define ETOP_FTCU		BIT(28)
#define ETOP_MII_MASK		0xf
#define ETOP_MII_NORMAL		0xd
#define ETOP_MII_REVERSE	0xe
#define ETOP_PLEN_UNDER		0x40
#define ETOP_CGEN		0x800
#define LTQ_ETOP_TX_CHANNEL	1
#define LTQ_ETOP_RX_CHANNEL	6
#define IS_TX(x)		(x == LTQ_ETOP_TX_CHANNEL)
#define IS_RX(x)		(x == LTQ_ETOP_RX_CHANNEL)
#define ltq_etop_r32(x)		ltq_r32(ltq_etop_membase + (x))
#define ltq_etop_w32(x, y)	ltq_w32(x, ltq_etop_membase + (y))
#define ltq_etop_w32_mask(x, y, z)	\
ltq_w32_mask(x, y, ltq_etop_membase + (z))
#define DRV_VERSION	"1.0"
static void __iomem *ltq_etop_membase;
struct ltq_etop_chan ;
struct ltq_etop_priv ;
static int
ltq_etop_alloc_skb(struct ltq_etop_chan *ch)
static void
ltq_etop_hw_receive(struct ltq_etop_chan *ch)
static int
ltq_etop_poll_rx(struct napi_struct *napi, int budget)
static int
ltq_etop_poll_tx(struct napi_struct *napi, int budget)
static irqreturn_t
ltq_etop_dma_irq(int irq, void *_priv)
static void
ltq_etop_free_channel(struct net_device *dev, struct ltq_etop_chan *ch)
static void
ltq_etop_hw_exit(struct net_device *dev)
static int
ltq_etop_hw_init(struct net_device *dev)
static void
ltq_etop_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int
ltq_etop_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
ltq_etop_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
ltq_etop_nway_reset(struct net_device *dev)
static const struct ethtool_ops ltq_etop_ethtool_ops = ;
static int
ltq_etop_mdio_wr(struct mii_bus *bus, int phy_addr, int phy_reg, u16 phy_data)
static int
ltq_etop_mdio_rd(struct mii_bus *bus, int phy_addr, int phy_reg)
static void
ltq_etop_mdio_link(struct net_device *dev)
static int
ltq_etop_mdio_probe(struct net_device *dev)
static int
ltq_etop_mdio_init(struct net_device *dev)
static void
ltq_etop_mdio_cleanup(struct net_device *dev)
static int
ltq_etop_open(struct net_device *dev)
static int
ltq_etop_stop(struct net_device *dev)
static int
ltq_etop_tx(struct sk_buff *skb, struct net_device *dev)
static int
ltq_etop_change_mtu(struct net_device *dev, int new_mtu)
static int
ltq_etop_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int
ltq_etop_set_mac_address(struct net_device *dev, void *p)
static void
ltq_etop_set_multicast_list(struct net_device *dev)
static u16
ltq_etop_select_queue(struct net_device *dev, struct sk_buff *skb)
static int
ltq_etop_init(struct net_device *dev)
static void
ltq_etop_tx_timeout(struct net_device *dev)
static const struct net_device_ops ltq_eth_netdev_ops = ;
static int __init
ltq_etop_probe(struct platform_device *pdev)
static int __devexit
ltq_etop_remove(struct platform_device *pdev)
static struct platform_driver ltq_mii_driver = ;
int __init
init_ltq_etop(void)
static void __exit
exit_ltq_etop(void)
module_init(init_ltq_etop);
module_exit(exit_ltq_etop);
MODULE_AUTHOR("John Crispin <blogic@openwrt.org>");
MODULE_DESCRIPTION("Lantiq SoC ETOP");
MODULE_LICENSE("GPL");
