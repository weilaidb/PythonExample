static const char version[] =
"es3210.c: Driver revision v0.03, 14/09/96\n";
static int es_probe1(struct net_device *dev, int ioaddr);
static void es_reset_8390(struct net_device *dev);
static void es_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page);
static void es_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset);
static void es_block_output(struct net_device *dev, int count, const unsigned char *buf, int start_page);
#define ES_START_PG	0x00
#define ES_STOP_PG	0x40
#define ES_IO_EXTENT	0x37
#define ES_ID_PORT	0xc80
#define ES_SA_PROM	0xc90
#define ES_RESET_PORT	0xc84
#define ES_NIC_OFFSET	0xca0
#define ES_ADDR0	0x02
#define ES_ADDR1	0x07
#define ES_ADDR2	0x01
#define ES_EISA_ID1	0x01012949
#define ES_EISA_ID2	0x02012949
#define ES_CFG1		0xcc0
#define ES_CFG2		0xcc1
#define ES_CFG3		0xcc2
#define ES_CFG4		0xcc3
#define ES_CFG5		0xcc4
#define ES_CFG6		0xc84
#define ES_D_PROBE	0x01
#define ES_D_RX_PKT	0x02
#define ES_D_TX_PKT	0x04
#define ED_D_IRQ	0x08
#define ES_DEBUG	0
static unsigned char lo_irq_map[] __initdata = ;
static unsigned char hi_irq_map[] __initdata = ;
static int __init do_es_probe(struct net_device *dev)
struct net_device * __init es_probe(int unit)
static int __init es_probe1(struct net_device *dev, int ioaddr)
static void es_reset_8390(struct net_device *dev)
static void
es_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void es_block_input(struct net_device *dev, int count, struct sk_buff *skb,
int ring_offset)
static void es_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
#define MAX_ES_CARDS	4
#define NAMELEN		8
static struct net_device *dev_es3210[MAX_ES_CARDS];
static int io[MAX_ES_CARDS];
static int irq[MAX_ES_CARDS];
static int mem[MAX_ES_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(mem, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s)");
MODULE_PARM_DESC(mem, "memory base address(es)");
MODULE_DESCRIPTION("Racal-Interlan ES3210 EISA ethernet driver");
MODULE_LICENSE("GPL");
int __init init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit
cleanup_module(void)
