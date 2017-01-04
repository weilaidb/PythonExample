#define EI_SHIFT(x)	(ei_local->reg_offset[x])
#define ei_inb(port)   in_8(port)
#define ei_outb(val,port)  out_8(port,val)
#define ei_inb_p(port)   in_8(port)
#define ei_outb_p(val,port)  out_8(port,val)
static const char version[] =
"8390.c:v1.10cvs 9/23/94 Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define NE_EN0_DCFG     (0x0e*2)
#define NESM_START_PG   0x0
#define NESM_STOP_PG    0x40
#define HYDRA_NIC_BASE 0xffe1
#define HYDRA_ADDRPROM 0xffc0
#define HYDRA_VERSION "v3.0alpha"
#define WORDSWAP(a)     ((((a)>>8)&0xff) | ((a)<<8))
static int __devinit hydra_init_one(struct zorro_dev *z,
const struct zorro_device_id *ent);
static int __devinit hydra_init(struct zorro_dev *z);
static int hydra_open(struct net_device *dev);
static int hydra_close(struct net_device *dev);
static void hydra_reset_8390(struct net_device *dev);
static void hydra_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr, int ring_page);
static void hydra_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void hydra_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page);
static void __devexit hydra_remove_one(struct zorro_dev *z);
static struct zorro_device_id hydra_zorro_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(zorro, hydra_zorro_tbl);
static struct zorro_driver hydra_driver = ;
static int __devinit hydra_init_one(struct zorro_dev *z,
const struct zorro_device_id *ent)
static const struct net_device_ops hydra_netdev_ops = ;
static int __devinit hydra_init(struct zorro_dev *z)
static int hydra_open(struct net_device *dev)
static int hydra_close(struct net_device *dev)
static void hydra_reset_8390(struct net_device *dev)
static void hydra_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr, int ring_page)
static void hydra_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void hydra_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
static void __devexit hydra_remove_one(struct zorro_dev *z)
static int __init hydra_init_module(void)
static void __exit hydra_cleanup_module(void)
module_init(hydra_init_module);
module_exit(hydra_cleanup_module);
MODULE_LICENSE("GPL");
