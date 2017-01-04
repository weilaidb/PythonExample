#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static char version[] =
"v0.4 2001-05-15 David Huggins-Daines <dhd@debian.org> and others\n";
#define EI_SHIFT(x)	(ei_local->reg_offset[x])
#define ei_inb(port)	in_8(port)
#define ei_outb(val, port)	out_8(port, val)
#define ei_inb_p(port)	in_8(port)
#define ei_outb_p(val, port)	out_8(port, val)
#define WD_START_PG			0x00
#define CABLETRON_RX_START_PG		0x00
#define CABLETRON_RX_STOP_PG		0x30
#define CABLETRON_TX_START_PG		CABLETRON_RX_STOP_PG
#define DAYNA_8390_BASE		0x80000
#define DAYNA_8390_MEM		0x00000
#define CABLETRON_8390_BASE	0x90000
#define CABLETRON_8390_MEM	0x00000
#define INTERLAN_8390_BASE	0xE0000
#define INTERLAN_8390_MEM	0xD0000
enum mac8390_type ;
static const char *cardname[] = ;
static const int word16[] = ;
static const int useresources[] = ;
enum mac8390_access ;
extern int mac8390_memtest(struct net_device *dev);
static int mac8390_initdev(struct net_device *dev, struct nubus_dev *ndev,
enum mac8390_type type);
static int mac8390_open(struct net_device *dev);
static int mac8390_close(struct net_device *dev);
static void mac8390_no_reset(struct net_device *dev);
static void interlan_reset(struct net_device *dev);
static void sane_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr, int ring_page);
static void sane_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void sane_block_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page);
static void dayna_memcpy_fromcard(struct net_device *dev, void *to,
int from, int count);
static void dayna_memcpy_tocard(struct net_device *dev, int to,
const void *from, int count);
static void dayna_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr, int ring_page);
static void dayna_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void dayna_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page);
#define memcpy_fromio(a, b, c)	memcpy((a), (void *)(b), (c))
#define memcpy_toio(a, b, c)	memcpy((void *)(a), (b), (c))
#define memcmp_withio(a, b, c)	memcmp((a), (void *)(b), (c))
static void slow_sane_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr, int ring_page);
static void slow_sane_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void slow_sane_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page);
static void word_memcpy_tocard(unsigned long tp, const void *fp, int count);
static void word_memcpy_fromcard(void *tp, unsigned long fp, int count);
static enum mac8390_type __init mac8390_ident(struct nubus_dev *dev)
static enum mac8390_access __init mac8390_testio(volatile unsigned long membase)
static int __init mac8390_memsize(unsigned long membase)
static bool __init mac8390_init(struct net_device *dev, struct nubus_dev *ndev,
enum mac8390_type cardtype)
struct net_device * __init mac8390_probe(int unit)
MODULE_AUTHOR("David Huggins-Daines <dhd@debian.org> and others");
MODULE_DESCRIPTION("Macintosh NS8390-based Nubus Ethernet driver");
MODULE_LICENSE("GPL");
static struct net_device *dev_mac8390[15];
int init_module(void)
void cleanup_module(void)
static const struct net_device_ops mac8390_netdev_ops = ;
static int __init mac8390_initdev(struct net_device *dev,
struct nubus_dev *ndev,
enum mac8390_type type)
static int mac8390_open(struct net_device *dev)
static int mac8390_close(struct net_device *dev)
static void mac8390_no_reset(struct net_device *dev)
static void interlan_reset(struct net_device *dev)
static void dayna_memcpy_fromcard(struct net_device *dev, void *to, int from,
int count)
static void dayna_memcpy_tocard(struct net_device *dev, int to,
const void *from, int count)
static void sane_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr, int ring_page)
static void sane_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void sane_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
static void dayna_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr, int ring_page)
static void dayna_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void dayna_block_output(struct net_device *dev, int count,
const unsigned char *buf,
int start_page)
static void slow_sane_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr,
int ring_page)
static void slow_sane_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void slow_sane_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
static void word_memcpy_tocard(unsigned long tp, const void *fp, int count)
static void word_memcpy_fromcard(void *tp, unsigned long fp, int count)
