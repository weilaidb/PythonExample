static const char version[] =
"hp-plus.c:v1.10 9/24/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define DRV_NAME "hp-plus"
static unsigned int hpplus_portlist[] __initdata =
;
#define HP_ID			0x00
#define HP_PAGING		0x02
#define HPP_OPTION		0x04
#define HPP_OUT_ADDR	0x08
#define HPP_IN_ADDR		0x0A
#define HP_DATAPORT		0x0c
#define NIC_OFFSET		0x10
#define HP_IO_EXTENT	32
#define HP_START_PG		0x00
#define HP_STOP_PG		0x80
enum PageName ;
enum HP_Option ;
static int hpp_probe1(struct net_device *dev, int ioaddr);
static void hpp_reset_8390(struct net_device *dev);
static int hpp_open(struct net_device *dev);
static int hpp_close(struct net_device *dev);
static void hpp_mem_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void hpp_mem_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page);
static void hpp_mem_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void hpp_io_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void hpp_io_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page);
static void hpp_io_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static int __init do_hpp_probe(struct net_device *dev)
struct net_device * __init hp_plus_probe(int unit)
static const struct net_device_ops hpp_netdev_ops = ;
static int __init hpp_probe1(struct net_device *dev, int ioaddr)
static int
hpp_open(struct net_device *dev)
static int
hpp_close(struct net_device *dev)
static void
hpp_reset_8390(struct net_device *dev)
static void
hpp_io_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void
hpp_io_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void
hpp_mem_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void
hpp_mem_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void
hpp_io_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
static void
hpp_mem_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
#define MAX_HPP_CARDS	4
static struct net_device *dev_hpp[MAX_HPP_CARDS];
static int io[MAX_HPP_CARDS];
static int irq[MAX_HPP_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O port address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s); ignored if properly detected");
MODULE_DESCRIPTION("HP PC-LAN+ ISA ethernet driver");
MODULE_LICENSE("GPL");
int __init
init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit
cleanup_module(void)
