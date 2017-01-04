static int debuglevel = 0;
static int automatic_resume = 0;
static int rfdadd = 0;
static int fifo=0x8;
#define DRV_NAME "sun3_82586"
#define DEBUG
#define SYSBUSVAL 0
#define SUN3_82586_TOTAL_SIZE	PAGE_SIZE
#define sun3_attn586()
#define sun3_reset586()
#define sun3_disint()
#define sun3_enaint()
#define sun3_active()
#define make32(ptr16) (p->memtop + (swab16((unsigned short) (ptr16))) )
#define make24(ptr32) (char *)swab32(( ((unsigned long) (ptr32)) - p->base))
#define make16(ptr32) (swab16((unsigned short) ((unsigned long)(ptr32) - (unsigned long) p->memtop )))
#define RECV_BUFF_SIZE 1536
#define XMIT_BUFF_SIZE 1536
#define NUM_XMIT_BUFFS 1
#define NUM_RECV_BUFFS_8 4
#define NUM_RECV_BUFFS_16 9
#define NUM_RECV_BUFFS_32 16
#define NO_NOPCOMMANDS
#define DELAY(x) mdelay(32 * x);
#define DELAY_16();
#define DELAY_18();
#define WAIT_4_SCB_CMD() \
#define WAIT_4_SCB_CMD_RUC()
#define WAIT_4_STAT_COMPL(addr)
static int     sun3_82586_probe1(struct net_device *dev,int ioaddr);
static irqreturn_t sun3_82586_interrupt(int irq,void *dev_id);
static int     sun3_82586_open(struct net_device *dev);
static int     sun3_82586_close(struct net_device *dev);
static int     sun3_82586_send_packet(struct sk_buff *,struct net_device *);
static struct  net_device_stats *sun3_82586_get_stats(struct net_device *dev);
static void    set_multicast_list(struct net_device *dev);
static void    sun3_82586_timeout(struct net_device *dev);
static int     init586(struct net_device *dev);
static int     check586(struct net_device *dev,char *where,unsigned size);
static void    alloc586(struct net_device *dev);
static void    startrecv586(struct net_device *dev);
static void   *alloc_rfa(struct net_device *dev,void *ptr);
static void    sun3_82586_rcv_int(struct net_device *dev);
static void    sun3_82586_xmt_int(struct net_device *dev);
static void    sun3_82586_rnr_int(struct net_device *dev);
struct priv
;
static int sun3_82586_close(struct net_device *dev)
static int sun3_82586_open(struct net_device *dev)
static int check586(struct net_device *dev,char *where,unsigned size)
static void alloc586(struct net_device *dev)
struct net_device * __init sun3_82586_probe(int unit)
static const struct net_device_ops sun3_82586_netdev_ops = ;
static int __init sun3_82586_probe1(struct net_device *dev,int ioaddr)
static int init586(struct net_device *dev)
static void *alloc_rfa(struct net_device *dev,void *ptr)
static irqreturn_t sun3_82586_interrupt(int irq,void *dev_id)
static void sun3_82586_rcv_int(struct net_device *dev)
static void sun3_82586_rnr_int(struct net_device *dev)
static void sun3_82586_xmt_int(struct net_device *dev)
static void startrecv586(struct net_device *dev)
static void sun3_82586_timeout(struct net_device *dev)
static int sun3_82586_send_packet(struct sk_buff *skb, struct net_device *dev)
static struct net_device_stats *sun3_82586_get_stats(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
#error This code is not currently supported as a module
static struct net_device *dev_sun3_82586;
int init_module(void)
void cleanup_module(void)
MODULE_LICENSE("GPL");
