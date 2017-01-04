#define DRV_NAME		"3c507"
#define DRV_VERSION		"1.10a"
#define DRV_RELDATE		"11/17/2001"
static const char version[] =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE " Donald Becker (becker@scyld.com)\n";
#define NET_DEBUG 1
static unsigned int net_debug = NET_DEBUG;
#define debug net_debug
#define	 CUC_START	 0x0100
#define	 CUC_RESUME	 0x0200
#define	 CUC_SUSPEND 0x0300
#define	 RX_START	 0x0010
#define	 RX_RESUME	 0x0020
#define	 RX_SUSPEND	 0x0030
#define CMD_EOL		0x8000
#define CMD_SUSP	0x4000
#define CMD_INTR	0x2000
enum commands ;
struct net_local ;
#define	SA_DATA		0
#define MISC_CTRL	6
#define RESET_IRQ	10
#define SIGNAL_CA	11
#define ROM_CONFIG	13
#define MEM_CONFIG	14
#define IRQ_CONFIG	15
#define EL16_IO_EXTENT 16
#define ID_PORT		0x100
#define iSCB_STATUS	0x8
#define iSCB_CMD		0xA
#define iSCB_CBL		0xC
#define iSCB_RFA		0xE
#define SCB_BASE		((unsigned)64*1024 - (dev->mem_end - dev->mem_start))
#define CONFIG_CMD	0x0018
#define SET_SA_CMD	0x0024
#define SA_OFFSET	0x002A
#define IDLELOOP	0x30
#define TDR_CMD		0x38
#define TDR_TIME	0x3C
#define DUMP_CMD	0x40
#define DIAG_CMD	0x48
#define SET_MC_CMD	0x4E
#define DUMP_DATA	0x56
#define TX_BUF_START	0x0100
#define NUM_TX_BUFS 	5
#define TX_BUF_SIZE 	(1518+14+20+16)
#define RX_BUF_START	0x2000
#define RX_BUF_SIZE 	(1518+14+18)
#define RX_BUF_END		(dev->mem_end - dev->mem_start)
#define TX_TIMEOUT (HZ/20)
static unsigned short init_words[] = ;
static int	el16_probe1(struct net_device *dev, int ioaddr);
static int	el16_open(struct net_device *dev);
static netdev_tx_t el16_send_packet(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t el16_interrupt(int irq, void *dev_id);
static void el16_rx(struct net_device *dev);
static int	el16_close(struct net_device *dev);
static void el16_tx_timeout (struct net_device *dev);
static void hardware_send_packet(struct net_device *dev, void *buf, short length, short pad);
static void init_82586_mem(struct net_device *dev);
static const struct ethtool_ops netdev_ethtool_ops;
static void init_rx_bufs(struct net_device *);
static int io = 0x300;
static int irq;
static int mem_start;
struct net_device * __init el16_probe(int unit)
static const struct net_device_ops netdev_ops = ;
static int __init el16_probe1(struct net_device *dev, int ioaddr)
static int el16_open(struct net_device *dev)
static void el16_tx_timeout (struct net_device *dev)
static netdev_tx_t el16_send_packet (struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t el16_interrupt(int irq, void *dev_id)
static int el16_close(struct net_device *dev)
static void init_rx_bufs(struct net_device *dev)
static void init_82586_mem(struct net_device *dev)
static void hardware_send_packet(struct net_device *dev, void *buf, short length, short pad)
static void el16_rx(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 level)
static const struct ethtool_ops netdev_ethtool_ops = ;
static struct net_device *dev_3c507;
module_param(io, int, 0);
module_param(irq, int, 0);
MODULE_PARM_DESC(io, "EtherLink16 I/O base address");
MODULE_PARM_DESC(irq, "(ignored)");
int __init init_module(void)
void __exit
cleanup_module(void)
MODULE_LICENSE("GPL");
