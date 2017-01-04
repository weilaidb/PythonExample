static const char version[] =
"wd.c:v1.10 9/23/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define DRV_NAME "wd"
static unsigned int wd_portlist[] __initdata =
;
static int wd_probe1(struct net_device *dev, int ioaddr);
static int wd_open(struct net_device *dev);
static void wd_reset_8390(struct net_device *dev);
static void wd_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void wd_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void wd_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page);
static int wd_close(struct net_device *dev);
#define WD_START_PG		0x00
#define WD03_STOP_PG	0x20
#define WD13_STOP_PG	0x40
#define WD_CMDREG		0
#define	 WD_RESET		0x80
#define	 WD_MEMENB		0x40
#define WD_CMDREG5		5
#define	 ISA16			0x80
#define	 NIC16			0x40
#define WD_NIC_OFFSET	16
#define WD_IO_EXTENT	32
static int __init do_wd_probe(struct net_device *dev)
struct net_device * __init wd_probe(int unit)
static const struct net_device_ops wd_netdev_ops = ;
static int __init wd_probe1(struct net_device *dev, int ioaddr)
static int
wd_open(struct net_device *dev)
static void
wd_reset_8390(struct net_device *dev)
static void
wd_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void
wd_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void
wd_block_output(struct net_device *dev, int count, const unsigned char *buf,
int start_page)
static int
wd_close(struct net_device *dev)
#define MAX_WD_CARDS	4
static struct net_device *dev_wd[MAX_WD_CARDS];
static int io[MAX_WD_CARDS];
static int irq[MAX_WD_CARDS];
static int mem[MAX_WD_CARDS];
static int mem_end[MAX_WD_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(mem, int, NULL, 0);
module_param_array(mem_end, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s) (ignored for PureData boards)");
MODULE_PARM_DESC(mem, "memory base address(es)(ignored for PureData boards)");
MODULE_PARM_DESC(mem_end, "memory end address(es)");
MODULE_DESCRIPTION("ISA Western Digital wd8003/wd8013 ; SMC Elite, Elite16 ethernet driver");
MODULE_LICENSE("GPL");
int __init init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit
cleanup_module(void)
