static const char version[] =
"smc-ultra.c:v2.02 2/3/98 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define DRV_NAME "smc-ultra"
static unsigned int ultra_portlist[] __initdata =
;
static int ultra_probe1(struct net_device *dev, int ioaddr);
static int ultra_probe_isapnp(struct net_device *dev);
static int ultra_open(struct net_device *dev);
static void ultra_reset_8390(struct net_device *dev);
static void ultra_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void ultra_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void ultra_block_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page);
static void ultra_pio_get_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void ultra_pio_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void ultra_pio_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page);
static int ultra_close_card(struct net_device *dev);
static struct isapnp_device_id ultra_device_ids[] __initdata = ;
MODULE_DEVICE_TABLE(isapnp, ultra_device_ids);
#define START_PG		0x00
#define ULTRA_CMDREG	0
#define	 ULTRA_RESET	0x80
#define	 ULTRA_MEMENB	0x40
#define IOPD	0x02
#define IOPA	0x07
#define ULTRA_NIC_OFFSET  16
#define ULTRA_IO_EXTENT 32
#define EN0_ERWCNT		0x08
static void ultra_poll(struct net_device *dev)
static int __init do_ultra_probe(struct net_device *dev)
struct net_device * __init ultra_probe(int unit)
static const struct net_device_ops ultra_netdev_ops = ;
static int __init ultra_probe1(struct net_device *dev, int ioaddr)
static int __init ultra_probe_isapnp(struct net_device *dev)
static int
ultra_open(struct net_device *dev)
static void
ultra_reset_8390(struct net_device *dev)
static void
ultra_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void
ultra_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void
ultra_block_output(struct net_device *dev, int count, const unsigned char *buf,
int start_page)
static void ultra_pio_get_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page)
static void ultra_pio_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void ultra_pio_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page)
static int
ultra_close_card(struct net_device *dev)
#define MAX_ULTRA_CARDS	4
static struct net_device *dev_ultra[MAX_ULTRA_CARDS];
static int io[MAX_ULTRA_CARDS];
static int irq[MAX_ULTRA_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s) (assigned)");
MODULE_DESCRIPTION("SMC Ultra/EtherEZ ISA/PnP Ethernet driver");
MODULE_LICENSE("GPL");
int __init
init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit
cleanup_module(void)
