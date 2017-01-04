#define DRV_NAME	"3c503"
#define DRV_VERSION	"1.10a"
#define DRV_RELDATE	"11/17/2001"
static const char version[] =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE "  Donald Becker (becker@scyld.com)\n";
#define WRD_COUNT 4
static int el2_pio_probe(struct net_device *dev);
static int el2_probe1(struct net_device *dev, int ioaddr);
static unsigned int netcard_portlist[] __initdata =
;
#define EL2_IO_EXTENT	16
static int el2_open(struct net_device *dev);
static int el2_close(struct net_device *dev);
static void el2_reset_8390(struct net_device *dev);
static void el2_init_card(struct net_device *dev);
static void el2_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page);
static void el2_block_input(struct net_device *dev, int count, struct sk_buff *skb,
int ring_offset);
static void el2_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static const struct ethtool_ops netdev_ethtool_ops;
static int __init do_el2_probe(struct net_device *dev)
static int __init
el2_pio_probe(struct net_device *dev)
struct net_device * __init el2_probe(int unit)
static const struct net_device_ops el2_netdev_ops = ;
static int __init
el2_probe1(struct net_device *dev, int ioaddr)
static irqreturn_t el2_probe_interrupt(int irq, void *seen)
static int
el2_open(struct net_device *dev)
static int
el2_close(struct net_device *dev)
static void
el2_reset_8390(struct net_device *dev)
static void
el2_init_card(struct net_device *dev)
static void
el2_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
static void
el2_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void
el2_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops netdev_ethtool_ops = ;
#define MAX_EL2_CARDS	4
static struct net_device *dev_el2[MAX_EL2_CARDS];
static int io[MAX_EL2_CARDS];
static int irq[MAX_EL2_CARDS];
static int xcvr[MAX_EL2_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(xcvr, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s) (assigned)");
MODULE_PARM_DESC(xcvr, "transceiver(s) (0=internal, 1=external)");
MODULE_DESCRIPTION("3Com ISA EtherLink II, II/16 (3c503, 3c503/16) driver");
MODULE_LICENSE("GPL");
int __init
init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit
cleanup_module(void)
