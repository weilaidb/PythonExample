#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
#define DRV_MODULE_NAME		"ep93xx-eth"
#define DRV_MODULE_VERSION	"0.1"
#define RX_QUEUE_ENTRIES	64
#define TX_QUEUE_ENTRIES	8
#define MAX_PKT_SIZE		2044
#define PKT_BUF_SIZE		2048
#define REG_RXCTL		0x0000
#define  REG_RXCTL_DEFAULT	0x00073800
#define REG_TXCTL		0x0004
#define  REG_TXCTL_ENABLE	0x00000001
#define REG_MIICMD		0x0010
#define  REG_MIICMD_READ	0x00008000
#define  REG_MIICMD_WRITE	0x00004000
#define REG_MIIDATA		0x0014
#define REG_MIISTS		0x0018
#define  REG_MIISTS_BUSY	0x00000001
#define REG_SELFCTL		0x0020
#define  REG_SELFCTL_RESET	0x00000001
#define REG_INTEN		0x0024
#define  REG_INTEN_TX		0x00000008
#define  REG_INTEN_RX		0x00000007
#define REG_INTSTSP		0x0028
#define  REG_INTSTS_TX		0x00000008
#define  REG_INTSTS_RX		0x00000004
#define REG_INTSTSC		0x002c
#define REG_AFP			0x004c
#define REG_INDAD0		0x0050
#define REG_INDAD1		0x0051
#define REG_INDAD2		0x0052
#define REG_INDAD3		0x0053
#define REG_INDAD4		0x0054
#define REG_INDAD5		0x0055
#define REG_GIINTMSK		0x0064
#define  REG_GIINTMSK_ENABLE	0x00008000
#define REG_BMCTL		0x0080
#define  REG_BMCTL_ENABLE_TX	0x00000100
#define  REG_BMCTL_ENABLE_RX	0x00000001
#define REG_BMSTS		0x0084
#define  REG_BMSTS_RX_ACTIVE	0x00000008
#define REG_RXDQBADD		0x0090
#define REG_RXDQBLEN		0x0094
#define REG_RXDCURADD		0x0098
#define REG_RXDENQ		0x009c
#define REG_RXSTSQBADD		0x00a0
#define REG_RXSTSQBLEN		0x00a4
#define REG_RXSTSQCURADD	0x00a8
#define REG_RXSTSENQ		0x00ac
#define REG_TXDQBADD		0x00b0
#define REG_TXDQBLEN		0x00b4
#define REG_TXDQCURADD		0x00b8
#define REG_TXDENQ		0x00bc
#define REG_TXSTSQBADD		0x00c0
#define REG_TXSTSQBLEN		0x00c4
#define REG_TXSTSQCURADD	0x00c8
#define REG_MAXFRMLEN		0x00e8
struct ep93xx_rdesc
;
#define RDESC1_NSOF		0x80000000
#define RDESC1_BUFFER_INDEX	0x7fff0000
#define RDESC1_BUFFER_LENGTH	0x0000ffff
struct ep93xx_rstat
;
#define RSTAT0_RFP		0x80000000
#define RSTAT0_RWE		0x40000000
#define RSTAT0_EOF		0x20000000
#define RSTAT0_EOB		0x10000000
#define RSTAT0_AM		0x00c00000
#define RSTAT0_RX_ERR		0x00200000
#define RSTAT0_OE		0x00100000
#define RSTAT0_FE		0x00080000
#define RSTAT0_RUNT		0x00040000
#define RSTAT0_EDATA		0x00020000
#define RSTAT0_CRCE		0x00010000
#define RSTAT0_CRCI		0x00008000
#define RSTAT0_HTI		0x00003f00
#define RSTAT1_RFP		0x80000000
#define RSTAT1_BUFFER_INDEX	0x7fff0000
#define RSTAT1_FRAME_LENGTH	0x0000ffff
struct ep93xx_tdesc
;
#define TDESC1_EOF		0x80000000
#define TDESC1_BUFFER_INDEX	0x7fff0000
#define TDESC1_BUFFER_ABORT	0x00008000
#define TDESC1_BUFFER_LENGTH	0x00000fff
struct ep93xx_tstat
;
#define TSTAT0_TXFP		0x80000000
#define TSTAT0_TXWE		0x40000000
#define TSTAT0_FA		0x20000000
#define TSTAT0_LCRS		0x10000000
#define TSTAT0_OW		0x04000000
#define TSTAT0_TXU		0x02000000
#define TSTAT0_ECOLL		0x01000000
#define TSTAT0_NCOLL		0x001f0000
#define TSTAT0_BUFFER_INDEX	0x00007fff
struct ep93xx_descs
;
struct ep93xx_priv
;
#define rdb(ep, off)		__raw_readb((ep)->base_addr + (off))
#define rdw(ep, off)		__raw_readw((ep)->base_addr + (off))
#define rdl(ep, off)		__raw_readl((ep)->base_addr + (off))
#define wrb(ep, off, val)	__raw_writeb((val), (ep)->base_addr + (off))
#define wrw(ep, off, val)	__raw_writew((val), (ep)->base_addr + (off))
#define wrl(ep, off, val)	__raw_writel((val), (ep)->base_addr + (off))
static int ep93xx_mdio_read(struct net_device *dev, int phy_id, int reg)
static void ep93xx_mdio_write(struct net_device *dev, int phy_id, int reg, int data)
static int ep93xx_rx(struct net_device *dev, int processed, int budget)
static int ep93xx_have_more_rx(struct ep93xx_priv *ep)
static int ep93xx_poll(struct napi_struct *napi, int budget)
static int ep93xx_xmit(struct sk_buff *skb, struct net_device *dev)
static void ep93xx_tx_complete(struct net_device *dev)
static irqreturn_t ep93xx_irq(int irq, void *dev_id)
static void ep93xx_free_buffers(struct ep93xx_priv *ep)
static int ep93xx_alloc_buffers(struct ep93xx_priv *ep)
static int ep93xx_start_hw(struct net_device *dev)
static void ep93xx_stop_hw(struct net_device *dev)
static int ep93xx_open(struct net_device *dev)
static int ep93xx_close(struct net_device *dev)
static int ep93xx_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void ep93xx_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int ep93xx_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ep93xx_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ep93xx_nway_reset(struct net_device *dev)
static u32 ep93xx_get_link(struct net_device *dev)
static const struct ethtool_ops ep93xx_ethtool_ops = ;
static const struct net_device_ops ep93xx_netdev_ops = ;
static struct net_device *ep93xx_dev_alloc(struct ep93xx_eth_data *data)
static int ep93xx_eth_remove(struct platform_device *pdev)
static int ep93xx_eth_probe(struct platform_device *pdev)
static struct platform_driver ep93xx_eth_driver = ;
static int __init ep93xx_eth_init_module(void)
static void __exit ep93xx_eth_cleanup_module(void)
module_init(ep93xx_eth_init_module);
module_exit(ep93xx_eth_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ep93xx-eth");
