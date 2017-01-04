static const char version[] = "lance.c:v1.16 2006/11/09 dplatt@3do.com, becker@cesdis.gsfc.nasa.gov\n";
static unsigned int lance_portlist[] __initdata = ;
static int lance_probe1(struct net_device *dev, int ioaddr, int irq, int options);
static int __init do_lance_probe(struct net_device *dev);
static struct card  cards[] = ;
#define NUM_CARDS 3
static int lance_debug = LANCE_DEBUG;
static int lance_debug = 1;
#define LANCE_LOG_TX_BUFFERS 4
#define LANCE_LOG_RX_BUFFERS 4
#define TX_RING_SIZE			(1 << (LANCE_LOG_TX_BUFFERS))
#define TX_RING_MOD_MASK		(TX_RING_SIZE - 1)
#define TX_RING_LEN_BITS		((LANCE_LOG_TX_BUFFERS) << 29)
#define RX_RING_SIZE			(1 << (LANCE_LOG_RX_BUFFERS))
#define RX_RING_MOD_MASK		(RX_RING_SIZE - 1)
#define RX_RING_LEN_BITS		((LANCE_LOG_RX_BUFFERS) << 29)
#define PKT_BUF_SZ		1544
#define LANCE_DATA 0x10
#define LANCE_ADDR 0x12
#define LANCE_RESET 0x14
#define LANCE_BUS_IF 0x16
#define LANCE_TOTAL_SIZE 0x18
#define TX_TIMEOUT	(HZ/5)
struct lance_rx_head ;
struct lance_tx_head ;
struct lance_init_block ;
struct lance_private ;
#define LANCE_MUST_PAD          0x00000001
#define LANCE_ENABLE_AUTOSELECT 0x00000002
#define LANCE_MUST_REINIT_RING  0x00000004
#define LANCE_MUST_UNRESET      0x00000008
#define LANCE_HAS_MISSED_FRAME  0x00000010
static struct lance_chip_type  chip_table[] = ;
enum ;
static unsigned char lance_need_isa_bounce_buffers = 1;
static int lance_open(struct net_device *dev);
static void lance_init_ring(struct net_device *dev, gfp_t mode);
static netdev_tx_t lance_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int lance_rx(struct net_device *dev);
static irqreturn_t lance_interrupt(int irq, void *dev_id);
static int lance_close(struct net_device *dev);
static struct net_device_stats *lance_get_stats(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static void lance_tx_timeout (struct net_device *dev);
#define MAX_CARDS		8
static struct net_device *dev_lance[MAX_CARDS];
static int io[MAX_CARDS];
static int dma[MAX_CARDS];
static int irq[MAX_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(dma, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param(lance_debug, int, 0);
MODULE_PARM_DESC(io, "LANCE/PCnet I/O base address(es),required");
MODULE_PARM_DESC(dma, "LANCE/PCnet ISA DMA channel (ignored for some devices)");
MODULE_PARM_DESC(irq, "LANCE/PCnet IRQ number (ignored for some devices)");
MODULE_PARM_DESC(lance_debug, "LANCE/PCnet debug level (0-7)");
int __init init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit cleanup_module(void)
MODULE_LICENSE("GPL");
static int __init do_lance_probe(struct net_device *dev)
struct net_device * __init lance_probe(int unit)
static const struct net_device_ops lance_netdev_ops = ;
static int __init lance_probe1(struct net_device *dev, int ioaddr, int irq, int options)
static int
lance_open(struct net_device *dev)
static void
lance_purge_ring(struct net_device *dev)
static void
lance_init_ring(struct net_device *dev, gfp_t gfp)
static void
lance_restart(struct net_device *dev, unsigned int csr0_bits, int must_reinit)
static void lance_tx_timeout (struct net_device *dev)
static netdev_tx_t lance_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t lance_interrupt(int irq, void *dev_id)
static int
lance_rx(struct net_device *dev)
static int
lance_close(struct net_device *dev)
static struct net_device_stats *lance_get_stats(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
