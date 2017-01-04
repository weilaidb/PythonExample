#define DRV_NAME "apne"
#define NE_BASE	 (dev->base_addr)
#define NE_CMD	 		0x00
#define NE_DATAPORT		0x10
#define NE_RESET		0x1f
#define NE_IO_EXTENT	        0x20
#define NE_EN0_ISR		0x07
#define NE_EN0_DCFG		0x0e
#define NE_EN0_RSARLO	        0x08
#define NE_EN0_RSARHI	        0x09
#define NE_EN0_RCNTLO	        0x0a
#define NE_EN0_RXCR		0x0c
#define NE_EN0_TXCR		0x0d
#define NE_EN0_RCNTHI	        0x0b
#define NE_EN0_IMR		0x0f
#define NE1SM_START_PG	0x20
#define NE1SM_STOP_PG 	0x40
#define NESM_START_PG	0x40
#define NESM_STOP_PG	0x80
struct net_device * __init apne_probe(int unit);
static int apne_probe1(struct net_device *dev, int ioaddr);
static void apne_reset_8390(struct net_device *dev);
static void apne_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void apne_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void apne_block_output(struct net_device *dev, const int count,
const unsigned char *buf, const int start_page);
static irqreturn_t apne_interrupt(int irq, void *dev_id);
static int init_pcmcia(void);
#define IOBASE 0x300
static const char version[] =
"apne.c:v1.1 7/10/98 Alain Malek (Alain.Malek@cryogen.ch)\n";
static int apne_owned;
struct net_device * __init apne_probe(int unit)
static int __init apne_probe1(struct net_device *dev, int ioaddr)
static void
apne_reset_8390(struct net_device *dev)
static void
apne_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void
apne_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void
apne_block_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page)
static irqreturn_t apne_interrupt(int irq, void *dev_id)
static struct net_device *apne_dev;
static int __init apne_module_init(void)
static void __exit apne_module_exit(void)
module_init(apne_module_init);
module_exit(apne_module_exit);
static int init_pcmcia(void)
MODULE_LICENSE("GPL");
