#define DRV_NAME "stnic"
#define byte	unsigned char
#define half	unsigned short
#define word	unsigned int
#define vbyte	volatile unsigned char
#define vhalf	volatile unsigned short
#define vword	volatile unsigned int
#define STNIC_RUN	0x01
#define START_PG	0
#define STOP_PG		128
#define STNIC_CR	E8390_CMD
#define PG0_RSAR0	EN0_RSARLO
#define PG0_RSAR1	EN0_RSARHI
#define PG0_RBCR0	EN0_RCNTLO
#define PG0_RBCR1	EN0_RCNTHI
#define CR_RRD		E8390_RREAD
#define CR_RWR		E8390_RWRITE
#define CR_PG0		E8390_PAGE0
#define CR_STA		E8390_START
#define CR_RDMA		E8390_NODMA
static byte stnic_eadr[6] =
;
static struct net_device *stnic_dev;
static void stnic_reset (struct net_device *dev);
static void stnic_get_hdr (struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void stnic_block_input (struct net_device *dev, int count,
struct sk_buff *skb , int ring_offset);
static void stnic_block_output (struct net_device *dev, int count,
const unsigned char *buf, int start_page);
static void stnic_init (struct net_device *dev);
static inline void
STNIC_DELAY (void)
static inline byte
STNIC_READ (int reg)
static inline void
STNIC_WRITE (int reg, byte val)
static int __init stnic_probe(void)
static void
stnic_reset (struct net_device *dev)
static void
stnic_get_hdr (struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page)
static void
stnic_block_input (struct net_device *dev, int length, struct sk_buff *skb,
int offset)
static void
stnic_block_output (struct net_device *dev, int length,
const unsigned char *buf, int output_page)
static void
stnic_init (struct net_device *dev)
static void __exit stnic_cleanup(void)
module_init(stnic_probe);
module_exit(stnic_cleanup);
MODULE_LICENSE("GPL");
