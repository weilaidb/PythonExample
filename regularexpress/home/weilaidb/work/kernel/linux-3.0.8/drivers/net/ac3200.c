static const char version[] =
"ac3200.c:v1.01 7/1/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define DRV_NAME	"ac3200"
#define AC_NIC_BASE	0x00
#define AC_SA_PROM	0x16
#define AC_ADDR0	0x00
#define AC_ADDR1	0x40
#define AC_ADDR2	0x90
#define AC_ID_PORT	0xC80
#define AC_EISA_ID	0x0110d305
#define AC_RESET_PORT	0xC84
#define AC_RESET	0x00
#define AC_ENABLE	0x01
#define AC_CONFIG	0xC90
#define AC_IO_EXTENT 0x20
static unsigned char config2irqmap[8] __initdata = ;
static int addrmap[8] =
;
static const char *port_name[4] = ;
#define config2irq(configval)	config2irqmap[((configval) >> 3) & 7]
#define config2mem(configval)	addrmap[(configval) & 7]
#define config2name(configval)	port_name[((configval) >> 6) & 3]
#define AC_START_PG		0x00
#define AC_STOP_PG		0x80
static int ac_probe1(int ioaddr, struct net_device *dev);
static int ac_open(struct net_device *dev);
static void ac_reset_8390(struct net_device *dev);
static void ac_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void ac_block_output(struct net_device *dev, const int count,
const unsigned char *buf, const int start_page);
static void ac_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static int ac_close_card(struct net_device *dev);
static int __init do_ac3200_probe(struct net_device *dev)
struct net_device * __init ac3200_probe(int unit)
static const struct net_device_ops ac_netdev_ops = ;
static int __init ac_probe1(int ioaddr, struct net_device *dev)
static int ac_open(struct net_device *dev)
static void ac_reset_8390(struct net_device *dev)
static void
ac_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void ac_block_input(struct net_device *dev, int count, struct sk_buff *skb,
int ring_offset)
static void ac_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
static int ac_close_card(struct net_device *dev)
#define MAX_AC32_CARDS	4
static struct net_device *dev_ac32[MAX_AC32_CARDS];
static int io[MAX_AC32_CARDS];
static int irq[MAX_AC32_CARDS];
static int mem[MAX_AC32_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(mem, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s)");
MODULE_PARM_DESC(mem, "Memory base address(es)");
MODULE_DESCRIPTION("Ansel AC3200 EISA ethernet driver");
MODULE_LICENSE("GPL");
static int __init ac3200_module_init(void)
static void cleanup_card(struct net_device *dev)
static void __exit ac3200_module_exit(void)
module_init(ac3200_module_init);
module_exit(ac3200_module_exit);
