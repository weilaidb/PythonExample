static const char version[] =
"e2100.c:v1.01 7/21/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define DRV_NAME "e2100"
static int e21_probe_list[] = ;
#define E21_NIC_OFFSET  0
#define E21_ASIC		0x10
#define E21_MEM_ENABLE	0x10
#define  E21_MEM_ON		0x05
#define  E21_MEM_ON_8	0x07
#define E21_MEM_BASE	0x11
#define E21_IRQ_LOW		0x12
#define E21_IRQ_HIGH	0x14
#define E21_MEDIA		0x14
#define  E21_ALT_IFPORT 0x02
#define  E21_BIG_MEM	0x04
#define E21_SAPROM		0x10
#define E21_IO_EXTENT	 0x20
static inline void mem_on(short port, volatile char __iomem *mem_base,
unsigned char start_page )
static inline void mem_off(short port)
#define E21_RX_START_PG		0x00
#define E21_RX_STOP_PG		0x30
#define E21_BIG_RX_STOP_PG	0xF0
#define E21_TX_START_PG		E21_RX_STOP_PG
static int e21_probe1(struct net_device *dev, int ioaddr);
static int e21_open(struct net_device *dev);
static void e21_reset_8390(struct net_device *dev);
static void e21_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void e21_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page);
static void e21_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static int e21_open(struct net_device *dev);
static int e21_close(struct net_device *dev);
static int  __init do_e2100_probe(struct net_device *dev)
struct net_device * __init e2100_probe(int unit)
static const struct net_device_ops e21_netdev_ops = ;
static int __init e21_probe1(struct net_device *dev, int ioaddr)
static int
e21_open(struct net_device *dev)
static void
e21_reset_8390(struct net_device *dev)
static void
e21_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void
e21_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void
e21_block_output(struct net_device *dev, int count, const unsigned char *buf,
int start_page)
static int
e21_close(struct net_device *dev)
#define MAX_E21_CARDS	4
static struct net_device *dev_e21[MAX_E21_CARDS];
static int io[MAX_E21_CARDS];
static int irq[MAX_E21_CARDS];
static int mem[MAX_E21_CARDS];
static int xcvr[MAX_E21_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(mem, int, NULL, 0);
module_param_array(xcvr, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s)");
MODULE_PARM_DESC(mem, " memory base address(es)");
MODULE_PARM_DESC(xcvr, "transceiver(s) (0=internal, 1=external)");
MODULE_DESCRIPTION("Cabletron E2100 ISA ethernet driver");
MODULE_LICENSE("GPL");
int __init init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit
cleanup_module(void)
