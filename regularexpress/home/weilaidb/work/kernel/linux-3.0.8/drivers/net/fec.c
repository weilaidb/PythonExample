#if defined(CONFIG_ARM)
#define FEC_ALIGNMENT	0xf
#define FEC_ALIGNMENT	0x3
#define DRIVER_NAME	"fec"
#define FEC_QUIRK_ENET_MAC		(1 << 0)
#define FEC_QUIRK_SWAP_FRAME		(1 << 1)
static struct platform_device_id fec_devtype[] = ;
static unsigned char macaddr[ETH_ALEN];
module_param_array(macaddr, byte, NULL, 0);
MODULE_PARM_DESC(macaddr, "FEC Ethernet MAC address");
#if defined(CONFIG_M5272)
#if defined(CONFIG_NETtel)
#define	FEC_FLASHMAC	0xf0006006
#elif defined(CONFIG_GILBARCONAP) || defined(CONFIG_SCALES)
#define	FEC_FLASHMAC	0xf0006000
#elif defined(CONFIG_CANCam)
#define	FEC_FLASHMAC	0xf0020000
#elif defined (CONFIG_M5272C3)
#define	FEC_FLASHMAC	(0xffe04000 + 4)
#elif defined(CONFIG_MOD5272)
#define FEC_FLASHMAC 	0xffc0406b
#define	FEC_FLASHMAC	0
#define FEC_ENET_RX_PAGES	8
#define FEC_ENET_RX_FRSIZE	2048
#define FEC_ENET_RX_FRPPG	(PAGE_SIZE / FEC_ENET_RX_FRSIZE)
#define RX_RING_SIZE		(FEC_ENET_RX_FRPPG * FEC_ENET_RX_PAGES)
#define FEC_ENET_TX_FRSIZE	2048
#define FEC_ENET_TX_FRPPG	(PAGE_SIZE / FEC_ENET_TX_FRSIZE)
#define TX_RING_SIZE		16
#define TX_RING_MOD_MASK	15
#if (((RX_RING_SIZE + TX_RING_SIZE) * 8) > PAGE_SIZE)
#error "FEC: descriptor ring size constants too large"
#define FEC_ENET_HBERR	((uint)0x80000000)
#define FEC_ENET_BABR	((uint)0x40000000)
#define FEC_ENET_BABT	((uint)0x20000000)
#define FEC_ENET_GRA	((uint)0x10000000)
#define FEC_ENET_TXF	((uint)0x08000000)
#define FEC_ENET_TXB	((uint)0x04000000)
#define FEC_ENET_RXF	((uint)0x02000000)
#define FEC_ENET_RXB	((uint)0x01000000)
#define FEC_ENET_MII	((uint)0x00800000)
#define FEC_ENET_EBERR	((uint)0x00400000)
#define FEC_DEFAULT_IMASK (FEC_ENET_TXF | FEC_ENET_RXF | FEC_ENET_MII)
#define PKT_MAXBUF_SIZE		1518
#define PKT_MINBUF_SIZE		64
#define PKT_MAXBLR_SIZE		1520
#if defined(CONFIG_M523x) || defined(CONFIG_M527x) || defined(CONFIG_M528x) || \
defined(CONFIG_M520x) || defined(CONFIG_M532x) || defined(CONFIG_ARM)
#define	OPT_FRAME_SIZE	(PKT_MAXBUF_SIZE << 16)
#define	OPT_FRAME_SIZE	0
struct fec_enet_private ;
#define FEC_MMFR_ST		(1 << 30)
#define FEC_MMFR_OP_READ	(2 << 28)
#define FEC_MMFR_OP_WRITE	(1 << 28)
#define FEC_MMFR_PA(v)		((v & 0x1f) << 23)
#define FEC_MMFR_RA(v)		((v & 0x1f) << 18)
#define FEC_MMFR_TA		(2 << 16)
#define FEC_MMFR_DATA(v)	(v & 0xffff)
#define FEC_MII_TIMEOUT		1000
#define TX_TIMEOUT (2 * HZ)
static void *swap_buffer(void *bufaddr, int len)
static netdev_tx_t
fec_enet_start_xmit(struct sk_buff *skb, struct net_device *ndev)
static void
fec_restart(struct net_device *ndev, int duplex)
static void
fec_stop(struct net_device *ndev)
static void
fec_timeout(struct net_device *ndev)
static void
fec_enet_tx(struct net_device *ndev)
static void
fec_enet_rx(struct net_device *ndev)
static irqreturn_t
fec_enet_interrupt(int irq, void *dev_id)
static void __inline__ fec_get_mac(struct net_device *ndev)
static void fec_enet_adjust_link(struct net_device *ndev)
static int fec_enet_mdio_read(struct mii_bus *bus, int mii_id, int regnum)
static int fec_enet_mdio_write(struct mii_bus *bus, int mii_id, int regnum,
u16 value)
static int fec_enet_mdio_reset(struct mii_bus *bus)
static int fec_enet_mii_probe(struct net_device *ndev)
static int fec_enet_mii_init(struct platform_device *pdev)
static void fec_enet_mii_remove(struct fec_enet_private *fep)
static int fec_enet_get_settings(struct net_device *ndev,
struct ethtool_cmd *cmd)
static int fec_enet_set_settings(struct net_device *ndev,
struct ethtool_cmd *cmd)
static void fec_enet_get_drvinfo(struct net_device *ndev,
struct ethtool_drvinfo *info)
static struct ethtool_ops fec_enet_ethtool_ops = ;
static int fec_enet_ioctl(struct net_device *ndev, struct ifreq *rq, int cmd)
static void fec_enet_free_buffers(struct net_device *ndev)
static int fec_enet_alloc_buffers(struct net_device *ndev)
static int
fec_enet_open(struct net_device *ndev)
static int
fec_enet_close(struct net_device *ndev)
#define HASH_BITS	6
#define CRC32_POLY	0xEDB88320
static void set_multicast_list(struct net_device *ndev)
static int
fec_set_mac_address(struct net_device *ndev, void *p)
static const struct net_device_ops fec_netdev_ops = ;
static int fec_enet_init(struct net_device *ndev)
static int __devinit
fec_probe(struct platform_device *pdev)
static int __devexit
fec_drv_remove(struct platform_device *pdev)
static int
fec_suspend(struct device *dev)
static int
fec_resume(struct device *dev)
static const struct dev_pm_ops fec_pm_ops = ;
static struct platform_driver fec_driver = ;
static int __init
fec_enet_module_init(void)
static void __exit
fec_enet_cleanup(void)
module_exit(fec_enet_cleanup);
module_init(fec_enet_module_init);
MODULE_LICENSE("GPL");
