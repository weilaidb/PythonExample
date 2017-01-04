static const char version1[] =
"ne-h8300.c:v1.00 2004/04/11 ysato\n";
#define EI_SHIFT(x)	(ei_local->reg_offset[x])
#define DRV_NAME "ne-h8300"
static const char version[] =
"8390.c:v1.10cvs 9/23/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define NE_BASE	 (dev->base_addr)
#define NE_CMD	 	0x00
#define NE_DATAPORT	(ei_status.word16?0x20:0x10)
#define NE_RESET	(ei_status.word16?0x3f:0x1f)
#define NE_IO_EXTENT	(ei_status.word16?0x40:0x20)
#define NESM_START_PG	0x40
#define NESM_STOP_PG	0x80
static int ne_probe1(struct net_device *dev, int ioaddr);
static int ne_open(struct net_device *dev);
static int ne_close(struct net_device *dev);
static void ne_reset_8390(struct net_device *dev);
static void ne_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void ne_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void ne_block_output(struct net_device *dev, const int count,
const unsigned char *buf, const int start_page);
static u32 reg_offset[16];
static int __init init_reg_offset(struct net_device *dev,unsigned long base_addr)
static int __initdata h8300_ne_count = 0;
static unsigned long __initdata h8300_ne_base[] = ;
static int h8300_ne_irq[] = ;
static unsigned long __initdata h8300_ne_base[] = ;
static int h8300_ne_irq[] = ;
static inline int init_dev(struct net_device *dev)
static int __init do_ne_probe(struct net_device *dev)
static void cleanup_card(struct net_device *dev)
struct net_device * __init ne_probe(int unit)
static const struct net_device_ops ne_netdev_ops = ;
static int __init ne_probe1(struct net_device *dev, int ioaddr)
static int ne_open(struct net_device *dev)
static int ne_close(struct net_device *dev)
static void ne_reset_8390(struct net_device *dev)
static void ne_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void ne_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void ne_block_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page)
#define MAX_NE_CARDS	1
static struct net_device *dev_ne[MAX_NE_CARDS];
static int io[MAX_NE_CARDS];
static int irq[MAX_NE_CARDS];
static int bad[MAX_NE_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(bad, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s)");
MODULE_DESCRIPTION("H8/300 NE2000 Ethernet driver");
MODULE_LICENSE("GPL");
int init_module(void)
void cleanup_module(void)
