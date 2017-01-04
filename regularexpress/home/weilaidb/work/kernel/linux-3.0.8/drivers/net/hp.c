static const char version[] =
"hp.c:v1.10 9/23/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define DRV_NAME "hp"
static unsigned int hppclan_portlist[] __initdata =
;
#define HP_IO_EXTENT	32
#define HP_DATAPORT		0x0c
#define HP_ID			0x07
#define HP_CONFIGURE	0x08
#define	 HP_RUN			0x01
#define	 HP_IRQ			0x0E
#define	 HP_DATAON		0x10
#define NIC_OFFSET		0x10
#define HP_START_PG		0x00
#define HP_8BSTOP_PG	0x80
#define HP_16BSTOP_PG	0xFF
static int hp_probe1(struct net_device *dev, int ioaddr);
static void hp_reset_8390(struct net_device *dev);
static void hp_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void hp_block_input(struct net_device *dev, int count,
struct sk_buff *skb , int ring_offset);
static void hp_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page);
static void hp_init_card(struct net_device *dev);
static char irqmap[16] __initdata= ;
static int __init do_hp_probe(struct net_device *dev)
struct net_device * __init hp_probe(int unit)
static int __init hp_probe1(struct net_device *dev, int ioaddr)
static void
hp_reset_8390(struct net_device *dev)
static void
hp_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void
hp_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void
hp_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
static void __init
hp_init_card(struct net_device *dev)
#define MAX_HP_CARDS	4
static struct net_device *dev_hp[MAX_HP_CARDS];
static int io[MAX_HP_CARDS];
static int irq[MAX_HP_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s) (assigned)");
MODULE_DESCRIPTION("HP PC-LAN ISA ethernet driver");
MODULE_LICENSE("GPL");
int __init
init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit
cleanup_module(void)
