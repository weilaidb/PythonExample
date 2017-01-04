static const char *version = "smc-ultra32.c: 06/97 v1.00\n";
#define DRV_NAME "smc-ultra32"
static int ultra32_probe1(struct net_device *dev, int ioaddr);
static int ultra32_open(struct net_device *dev);
static void ultra32_reset_8390(struct net_device *dev);
static void ultra32_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void ultra32_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void ultra32_block_output(struct net_device *dev, int count,
const unsigned char *buf,
const int start_page);
static int ultra32_close(struct net_device *dev);
#define ULTRA32_CMDREG	0
#define	 ULTRA32_RESET	0x80
#define	 ULTRA32_MEMENB	0x40
#define ULTRA32_NIC_OFFSET 16
#define ULTRA32_IO_EXTENT 32
#define EN0_ERWCNT		0x08
#define ULTRA32_BASE	0xca0
#define ULTRA32_ID	0x1080a34d
#define ULTRA32_IDPORT	(-0x20)
#define ULTRA32_CFG1	0x04
#define ULTRA32_CFG2	0x05
#define ULTRA32_CFG3	(-0x18)
#define ULTRA32_CFG4	(-0x17)
#define ULTRA32_CFG5	(-0x16)
#define ULTRA32_CFG6	(-0x15)
#define ULTRA32_CFG7	0x0d
static void cleanup_card(struct net_device *dev)
struct net_device * __init ultra32_probe(int unit)
static const struct net_device_ops ultra32_netdev_ops = ;
static int __init ultra32_probe1(struct net_device *dev, int ioaddr)
static int ultra32_open(struct net_device *dev)
static int ultra32_close(struct net_device *dev)
static void ultra32_reset_8390(struct net_device *dev)
static void ultra32_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr,
int ring_page)
static void ultra32_block_input(struct net_device *dev,
int count,
struct sk_buff *skb,
int ring_offset)
static void ultra32_block_output(struct net_device *dev,
int count,
const unsigned char *buf,
int start_page)
#define MAX_ULTRA32_CARDS   4
static struct net_device *dev_ultra[MAX_ULTRA32_CARDS];
MODULE_DESCRIPTION("SMC Ultra32 EISA ethernet driver");
MODULE_LICENSE("GPL");
int __init init_module(void)
void __exit cleanup_module(void)
