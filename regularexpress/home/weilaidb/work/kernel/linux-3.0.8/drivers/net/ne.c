static const char version1[] =
"ne.c:v1.10 9/23/94 Donald Becker (becker@scyld.com)\n";
static const char version2[] =
"Last modified Nov 1, 2000 by Paul Gortmaker\n";
#define DRV_NAME "ne"
#define SUPPORT_NE_BAD_CLONES
#define BAD 0xbad
#define MAX_NE_CARDS	4
static struct platform_device *pdev_ne[MAX_NE_CARDS];
static int io[MAX_NE_CARDS];
static int irq[MAX_NE_CARDS];
static int bad[MAX_NE_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(bad, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es),required");
MODULE_PARM_DESC(irq, "IRQ number(s)");
MODULE_PARM_DESC(bad, "Accept card(s) with bad signatures");
MODULE_DESCRIPTION("NE1000/NE2000 ISA/PnP Ethernet driver");
MODULE_LICENSE("GPL");
#if !defined(MODULE) && (defined(CONFIG_ISA) || defined(CONFIG_M32R))
#define NEEDS_PORTLIST
static unsigned int netcard_portlist[] __initdata = ;
static struct isapnp_device_id isapnp_clone_list[] __initdata = ;
MODULE_DEVICE_TABLE(isapnp, isapnp_clone_list);
static struct
bad_clone_list[] __initdata = ;
#define NE_BASE	 (dev->base_addr)
#define NE_CMD	 	0x00
#define NE_DATAPORT	0x10
#define NE_RESET	0x1f
#define NE_IO_EXTENT	0x20
#define NE1SM_START_PG	0x20
#define NE1SM_STOP_PG 	0x40
#define NESM_START_PG	0x40
#define NESM_STOP_PG	0x80
#if defined(CONFIG_PLAT_MAPPI)
#  define DCR_VAL 0x4b
#elif defined(CONFIG_PLAT_OAKS32R)  || \
defined(CONFIG_MACH_TX49XX)
#  define DCR_VAL 0x48
#  define DCR_VAL 0x49
static int ne_probe1(struct net_device *dev, unsigned long ioaddr);
static int ne_probe_isapnp(struct net_device *dev);
static void ne_reset_8390(struct net_device *dev);
static void ne_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void ne_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void ne_block_output(struct net_device *dev, const int count,
const unsigned char *buf, const int start_page);
static int __init do_ne_probe(struct net_device *dev)
static int __init ne_probe_isapnp(struct net_device *dev)
static int __init ne_probe1(struct net_device *dev, unsigned long ioaddr)
static void ne_reset_8390(struct net_device *dev)
static void ne_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void ne_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void ne_block_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page)
static int __init ne_drv_probe(struct platform_device *pdev)
static int ne_drv_remove(struct platform_device *pdev)
static void ne_loop_rm_unreg(int all)
static int ne_drv_suspend(struct platform_device *pdev, pm_message_t state)
static int ne_drv_resume(struct platform_device *pdev)
#define ne_drv_suspend NULL
#define ne_drv_resume NULL
static struct platform_driver ne_driver = ;
static void __init ne_add_devices(void)
int __init init_module(void)
static int __init ne_init(void)
module_init(ne_init);
struct net_device * __init ne_probe(int unit)
static void __exit ne_exit(void)
module_exit(ne_exit);
