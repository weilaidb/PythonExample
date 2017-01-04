static const char *version =
"lne390.c: Driver revision v0.99.1, 01/09/2000\n";
#define DRV_NAME "lne390"
static int lne390_probe1(struct net_device *dev, int ioaddr);
static void lne390_reset_8390(struct net_device *dev);
static void lne390_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page);
static void lne390_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset);
static void lne390_block_output(struct net_device *dev, int count, const unsigned char *buf, const int start_page);
#define LNE390_START_PG		0x00
#define LNE390_STOP_PG		0x80
#define LNE390_ID_PORT		0xc80
#define LNE390_IO_EXTENT	0x20
#define LNE390_SA_PROM		0x16
#define LNE390_RESET_PORT	0xc84
#define LNE390_NIC_OFFSET	0x00
#define LNE390_ADDR0		0x00
#define LNE390_ADDR1		0x80
#define LNE390_ADDR2		0xe5
#define LNE390_ID0	0x10009835
#define LNE390_ID1	0x11009835
#define LNE390_CFG1		0xc84
#define LNE390_CFG2		0xc90
#define LNE390_D_PROBE	0x01
#define LNE390_D_RX_PKT	0x02
#define LNE390_D_TX_PKT	0x04
#define LNE390_D_IRQ	0x08
#define LNE390_DEBUG	0
static unsigned char irq_map[] __initdata = ;
static unsigned int shmem_mapA[] __initdata = ;
static unsigned int shmem_mapB[] __initdata = ;
static int __init do_lne390_probe(struct net_device *dev)
struct net_device * __init lne390_probe(int unit)
static int __init lne390_probe1(struct net_device *dev, int ioaddr)
static void lne390_reset_8390(struct net_device *dev)
static void
lne390_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void lne390_block_input(struct net_device *dev, int count, struct sk_buff *skb,
int ring_offset)
static void lne390_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
#define MAX_LNE_CARDS	4
static struct net_device *dev_lne[MAX_LNE_CARDS];
static int io[MAX_LNE_CARDS];
static int irq[MAX_LNE_CARDS];
static int mem[MAX_LNE_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(mem, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s)");
MODULE_PARM_DESC(mem, "memory base address(es)");
MODULE_DESCRIPTION("Mylex LNE390A/B EISA Ethernet driver");
MODULE_LICENSE("GPL");
int __init init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit cleanup_module(void)
