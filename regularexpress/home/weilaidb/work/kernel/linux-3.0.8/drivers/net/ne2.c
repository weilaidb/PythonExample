static const char *version = "ne2.c:v0.91 Nov 16 1998 Wim Dumon <wimpie@kotnet.org>\n";
#define DRV_NAME "ne2"
#define NE_BASE	 (dev->base_addr)
#define NE_CMD	 	0x00
#define NE_DATAPORT	0x10
#define NE_RESET	0x20
#define NE_IO_EXTENT	0x30
#define NE1SM_START_PG	0x20
#define NE1SM_STOP_PG 	0x40
#define NESM_START_PG	0x40
#define NESM_STOP_PG	0x80
static unsigned int addresses[7] __initdata =
;
static int irqs[4] __initdata = ;
static unsigned int dlink_addresses[4] __initdata =
;
static int dlink_irqs[8] __initdata = ;
struct ne2_adapters_t ;
static struct ne2_adapters_t ne2_adapters[] __initdata = ;
extern int netcard_probe(struct net_device *dev);
static int ne2_probe1(struct net_device *dev, int slot);
static void ne_reset_8390(struct net_device *dev);
static void ne_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void ne_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void ne_block_output(struct net_device *dev, const int count,
const unsigned char *buf, const int start_page);
static void __init dlink_put_eeprom(unsigned char value, unsigned int addr)
static void __init dlink_send_eeprom_bit(unsigned int bit, unsigned int addr)
static void __init dlink_send_eeprom_word(unsigned int value, unsigned int len, unsigned int addr)
static unsigned int __init dlink_get_eeprom(unsigned int eeaddr, unsigned int addr)
static int __init do_ne2_probe(struct net_device *dev)
struct net_device * __init ne2_probe(int unit)
static int ne2_procinfo(char *buf, int slot, struct net_device *dev)
static int __init ne2_probe1(struct net_device *dev, int slot)
static void ne_reset_8390(struct net_device *dev)
static void ne_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page)
static void ne_block_input(struct net_device *dev, int count, struct sk_buff *skb,
int ring_offset)
static void ne_block_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page)
#define MAX_NE_CARDS	4
static struct net_device *dev_ne[MAX_NE_CARDS];
static int io[MAX_NE_CARDS];
static int irq[MAX_NE_CARDS];
static int bad[MAX_NE_CARDS];
MODULE_LICENSE("GPL");
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(bad, int, NULL, 0);
MODULE_PARM_DESC(io, "(ignored)");
MODULE_PARM_DESC(irq, "(ignored)");
MODULE_PARM_DESC(bad, "(ignored)");
int __init init_module(void)
static void cleanup_card(struct net_device *dev)
void __exit cleanup_module(void)
