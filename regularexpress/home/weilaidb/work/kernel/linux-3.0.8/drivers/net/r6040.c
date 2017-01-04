#define DRV_NAME	"r6040"
#define DRV_VERSION	"0.27"
#define DRV_RELDATE	"23Feb2011"
#define PHY1_ADDR	1
#define PHY2_ADDR	3
#define PHY_MODE	0x3100
#define PHY_CAP		0x01E1
#define TX_TIMEOUT	(6000 * HZ / 1000)
#define R6040_IO_SIZE	256
#define MAX_MAC		2
#define MCR0		0x00
#define  MCR0_PROMISC	0x0020
#define  MCR0_HASH_EN	0x0100
#define MCR1		0x04
#define  MAC_RST	0x0001
#define MBCR		0x08
#define MT_ICR		0x0C
#define MR_ICR		0x10
#define MTPR		0x14
#define MR_BSR		0x18
#define MR_DCR		0x1A
#define MLSR		0x1C
#define MMDIO		0x20
#define  MDIO_WRITE	0x4000
#define  MDIO_READ	0x2000
#define MMRD		0x24
#define MMWD		0x28
#define MTD_SA0		0x2C
#define MTD_SA1		0x30
#define MRD_SA0		0x34
#define MRD_SA1		0x38
#define MISR		0x3C
#define MIER		0x40
#define  MSK_INT	0x0000
#define  RX_FINISH	0x0001
#define  RX_NO_DESC	0x0002
#define  RX_FIFO_FULL	0x0004
#define  RX_EARLY	0x0008
#define  TX_FINISH	0x0010
#define  TX_EARLY	0x0080
#define  EVENT_OVRFL	0x0100
#define  LINK_CHANGED	0x0200
#define ME_CISR		0x44
#define ME_CIER		0x48
#define MR_CNT		0x50
#define ME_CNT0		0x52
#define ME_CNT1		0x54
#define ME_CNT2		0x56
#define ME_CNT3		0x58
#define MT_CNT		0x5A
#define ME_CNT4		0x5C
#define MP_CNT		0x5E
#define MAR0		0x60
#define MAR1		0x62
#define MAR2		0x64
#define MAR3		0x66
#define MID_0L		0x68
#define MID_0M		0x6A
#define MID_0H		0x6C
#define MID_1L		0x70
#define MID_1M		0x72
#define MID_1H		0x74
#define MID_2L		0x78
#define MID_2M		0x7A
#define MID_2H		0x7C
#define MID_3L		0x80
#define MID_3M		0x82
#define MID_3H		0x84
#define PHY_CC		0x88
#define PHY_ST		0x8A
#define MAC_SM		0xAC
#define MAC_ID		0xBE
#define TX_DCNT		0x80
#define RX_DCNT		0x80
#define MAX_BUF_SIZE	0x600
#define RX_DESC_SIZE	(RX_DCNT * sizeof(struct r6040_descriptor))
#define TX_DESC_SIZE	(TX_DCNT * sizeof(struct r6040_descriptor))
#define MBCR_DEFAULT	0x012A
#define MCAST_MAX	3
#define DSC_OWNER_MAC	0x8000
#define DSC_RX_OK	0x4000
#define DSC_RX_ERR	0x0800
#define DSC_RX_ERR_DRI	0x0400
#define DSC_RX_ERR_BUF	0x0200
#define DSC_RX_ERR_LONG	0x0100
#define DSC_RX_ERR_RUNT	0x0080
#define DSC_RX_ERR_CRC	0x0040
#define DSC_RX_BCAST	0x0020
#define DSC_RX_MCAST	0x0010
#define DSC_RX_MCH_HIT	0x0008
#define DSC_RX_MIDH_HIT	0x0004
#define DSC_RX_IDX_MID_MASK 3
#define ICPLUS_PHY_ID	0x0243
MODULE_AUTHOR("Sten Wang <sten.wang@rdc.com.tw>,"
"Daniel Gimpelevich <daniel@gimpelevich.san-francisco.ca.us>,"
"Florian Fainelli <florian@openwrt.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("RDC R6040 NAPI PCI FastEthernet driver");
MODULE_VERSION(DRV_VERSION " " DRV_RELDATE);
#define RX_INTS			(RX_FIFO_FULL | RX_NO_DESC | RX_FINISH)
#define TX_INTS			(TX_FINISH)
#define INT_MASK		(RX_INTS | TX_INTS)
struct r6040_descriptor  __attribute__((aligned(32)));
struct r6040_private ;
static char version[] __devinitdata = DRV_NAME
": RDC R6040 NAPI net driver,"
"version "DRV_VERSION " (" DRV_RELDATE ")";
static int phy_table[] = ;
static int r6040_phy_read(void __iomem *ioaddr, int phy_addr, int reg)
static void r6040_phy_write(void __iomem *ioaddr,
int phy_addr, int reg, u16 val)
static int r6040_mdiobus_read(struct mii_bus *bus, int phy_addr, int reg)
static int r6040_mdiobus_write(struct mii_bus *bus, int phy_addr,
int reg, u16 value)
static int r6040_mdiobus_reset(struct mii_bus *bus)
static void r6040_free_txbufs(struct net_device *dev)
static void r6040_free_rxbufs(struct net_device *dev)
static void r6040_init_ring_desc(struct r6040_descriptor *desc_ring,
dma_addr_t desc_dma, int size)
static void r6040_init_txbufs(struct net_device *dev)
static int r6040_alloc_rxbufs(struct net_device *dev)
static void r6040_init_mac_regs(struct net_device *dev)
static void r6040_tx_timeout(struct net_device *dev)
static struct net_device_stats *r6040_get_stats(struct net_device *dev)
static void r6040_down(struct net_device *dev)
static int r6040_close(struct net_device *dev)
static int r6040_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int r6040_rx(struct net_device *dev, int limit)
static void r6040_tx(struct net_device *dev)
static int r6040_poll(struct napi_struct *napi, int budget)
static irqreturn_t r6040_interrupt(int irq, void *dev_id)
static void r6040_poll_controller(struct net_device *dev)
static int r6040_up(struct net_device *dev)
static void r6040_mac_address(struct net_device *dev)
static int r6040_open(struct net_device *dev)
static netdev_tx_t r6040_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void r6040_multicast_list(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int netdev_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static const struct ethtool_ops netdev_ethtool_ops = ;
static const struct net_device_ops r6040_netdev_ops = ;
static void r6040_adjust_link(struct net_device *dev)
static int r6040_mii_probe(struct net_device *dev)
static int __devinit r6040_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit r6040_remove_one(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(r6040_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, r6040_pci_tbl);
static struct pci_driver r6040_driver = ;
static int __init r6040_init(void)
static void __exit r6040_cleanup(void)
module_init(r6040_init);
module_exit(r6040_cleanup);
