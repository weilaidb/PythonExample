#define EI_SHIFT(x)	(ei_local->reg_offset[x])
#define ei_inb(port)   in_8(port)
#define ei_outb(val,port)  out_8(port,val)
#define ei_inb_p(port)   in_8(port)
#define ei_outb_p(val,port)  out_8(port,val)
static const char version[] =
"8390.c:v1.10cvs 9/23/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define DRV_NAME	"zorro8390"
#define NE_BASE		(dev->base_addr)
#define NE_CMD		(0x00*2)
#define NE_DATAPORT	(0x10*2)
#define NE_RESET	(0x1f*2)
#define NE_IO_EXTENT	(0x20*2)
#define NE_EN0_ISR	(0x07*2)
#define NE_EN0_DCFG	(0x0e*2)
#define NE_EN0_RSARLO	(0x08*2)
#define NE_EN0_RSARHI	(0x09*2)
#define NE_EN0_RCNTLO	(0x0a*2)
#define NE_EN0_RXCR	(0x0c*2)
#define NE_EN0_TXCR	(0x0d*2)
#define NE_EN0_RCNTHI	(0x0b*2)
#define NE_EN0_IMR	(0x0f*2)
#define NESM_START_PG	0x40
#define NESM_STOP_PG	0x80
#define WORDSWAP(a)	((((a)>>8)&0xff) | ((a)<<8))
static struct card_info  cards[] __devinitdata = ;
static int __devinit zorro8390_init_one(struct zorro_dev *z,
const struct zorro_device_id *ent);
static int __devinit zorro8390_init(struct net_device *dev,
unsigned long board, const char *name,
unsigned long ioaddr);
static int zorro8390_open(struct net_device *dev);
static int zorro8390_close(struct net_device *dev);
static void zorro8390_reset_8390(struct net_device *dev);
static void zorro8390_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr, int ring_page);
static void zorro8390_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void zorro8390_block_output(struct net_device *dev, const int count,
const unsigned char *buf,
const int start_page);
static void __devexit zorro8390_remove_one(struct zorro_dev *z);
static struct zorro_device_id zorro8390_zorro_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(zorro, zorro8390_zorro_tbl);
static struct zorro_driver zorro8390_driver = ;
static int __devinit zorro8390_init_one(struct zorro_dev *z,
const struct zorro_device_id *ent)
static const struct net_device_ops zorro8390_netdev_ops = ;
static int __devinit zorro8390_init(struct net_device *dev,
unsigned long board, const char *name,
unsigned long ioaddr)
static int zorro8390_open(struct net_device *dev)
static int zorro8390_close(struct net_device *dev)
static void zorro8390_reset_8390(struct net_device *dev)
static void zorro8390_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr, int ring_page)
static void zorro8390_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void zorro8390_block_output(struct net_device *dev, int count,
const unsigned char *buf,
const int start_page)
static void __devexit zorro8390_remove_one(struct zorro_dev *z)
static int __init zorro8390_init_module(void)
static void __exit zorro8390_cleanup_module(void)
module_init(zorro8390_init_module);
module_exit(zorro8390_cleanup_module);
MODULE_LICENSE("GPL");
