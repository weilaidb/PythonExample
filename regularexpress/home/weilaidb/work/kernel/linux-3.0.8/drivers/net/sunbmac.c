#define DRV_NAME	"sunbmac"
#define DRV_VERSION	"2.1"
#define DRV_RELDATE	"August 26, 2008"
#define DRV_AUTHOR	"David S. Miller (davem@davemloft.net)"
static char version[] =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE " " DRV_AUTHOR "\n";
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION("Sun BigMAC 100baseT ethernet driver");
MODULE_LICENSE("GPL");
#undef DEBUG_PROBE
#undef DEBUG_TX
#undef DEBUG_IRQ
#define DP(x)  printk x
#define DP(x)
#define DTX(x)  printk x
#define DTX(x)
#define DIRQ(x)  printk x
#define DIRQ(x)
#define DEFAULT_JAMSIZE    4
#define QEC_RESET_TRIES 200
static int qec_global_reset(void __iomem *gregs)
static void qec_init(struct bigmac *bp)
#define TX_RESET_TRIES     32
#define RX_RESET_TRIES     32
static void bigmac_tx_reset(void __iomem *bregs)
static void bigmac_rx_reset(void __iomem *bregs)
static void bigmac_stop(struct bigmac *bp)
static void bigmac_get_counters(struct bigmac *bp, void __iomem *bregs)
static void bigmac_clean_rings(struct bigmac *bp)
static void bigmac_init_rings(struct bigmac *bp, int from_irq)
#define MGMT_CLKON  (MGMT_PAL_INT_MDIO|MGMT_PAL_EXT_MDIO|MGMT_PAL_OENAB|MGMT_PAL_DCLOCK)
#define MGMT_CLKOFF (MGMT_PAL_INT_MDIO|MGMT_PAL_EXT_MDIO|MGMT_PAL_OENAB)
static void idle_transceiver(void __iomem *tregs)
static void write_tcvr_bit(struct bigmac *bp, void __iomem *tregs, int bit)
static int read_tcvr_bit(struct bigmac *bp, void __iomem *tregs)
static int read_tcvr_bit2(struct bigmac *bp, void __iomem *tregs)
static void put_tcvr_byte(struct bigmac *bp,
void __iomem *tregs,
unsigned int byte)
static void bigmac_tcvr_write(struct bigmac *bp, void __iomem *tregs,
int reg, unsigned short val)
static unsigned short bigmac_tcvr_read(struct bigmac *bp,
void __iomem *tregs,
int reg)
static void bigmac_tcvr_init(struct bigmac *bp)
static int bigmac_init_hw(struct bigmac *, int);
static int try_next_permutation(struct bigmac *bp, void __iomem *tregs)
static void bigmac_timer(unsigned long data)
static void bigmac_begin_auto_negotiation(struct bigmac *bp)
static int bigmac_init_hw(struct bigmac *bp, int from_irq)
static void bigmac_is_medium_rare(struct bigmac *bp, u32 qec_status, u32 bmac_status)
static void bigmac_tx(struct bigmac *bp)
static void bigmac_rx(struct bigmac *bp)
static irqreturn_t bigmac_interrupt(int irq, void *dev_id)
static int bigmac_open(struct net_device *dev)
static int bigmac_close(struct net_device *dev)
static void bigmac_tx_timeout(struct net_device *dev)
static int bigmac_start_xmit(struct sk_buff *skb, struct net_device *dev)
static struct net_device_stats *bigmac_get_stats(struct net_device *dev)
static void bigmac_set_multicast(struct net_device *dev)
static void bigmac_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static u32 bigmac_get_link(struct net_device *dev)
static const struct ethtool_ops bigmac_ethtool_ops = ;
static const struct net_device_ops bigmac_ops = ;
static int __devinit bigmac_ether_init(struct platform_device *op,
struct platform_device *qec_op)
static int __devinit bigmac_sbus_probe(struct platform_device *op)
static int __devexit bigmac_sbus_remove(struct platform_device *op)
static const struct of_device_id bigmac_sbus_match[] = ;
MODULE_DEVICE_TABLE(of, bigmac_sbus_match);
static struct platform_driver bigmac_sbus_driver = ;
static int __init bigmac_init(void)
static void __exit bigmac_exit(void)
module_init(bigmac_init);
module_exit(bigmac_exit);
