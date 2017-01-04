static int debuglevel;
static int automatic_resume;
static int rfdadd;
static int fifo = 0x8;
#define DRV_NAME "ni52"
#define DEBUG
#define SYSBUSVAL 1
#define ni_attn586()
#define ni_reset586()
#define ni_disint()
#define ni_enaint()
#define make32(ptr16) ((void __iomem *)(p->memtop + (short) (ptr16)))
#define make24(ptr32) ((char __iomem *)(ptr32)) - p->base
#define make16(ptr32) ((unsigned short) ((char __iomem *)(ptr32)\
- p->memtop))
#define RECV_BUFF_SIZE 1524
#define XMIT_BUFF_SIZE 1524
#define NUM_XMIT_BUFFS 1
#define NUM_RECV_BUFFS_8  4
#define NUM_RECV_BUFFS_16 9
#define NO_NOPCOMMANDS
#define NI52_TOTAL_SIZE 16
#define NI52_ADDR0 0x02
#define NI52_ADDR1 0x07
#define NI52_ADDR2 0x01
static int     ni52_probe1(struct net_device *dev, int ioaddr);
static irqreturn_t ni52_interrupt(int irq, void *dev_id);
static int     ni52_open(struct net_device *dev);
static int     ni52_close(struct net_device *dev);
static netdev_tx_t ni52_send_packet(struct sk_buff *, struct net_device *);
static struct  net_device_stats *ni52_get_stats(struct net_device *dev);
static void    set_multicast_list(struct net_device *dev);
static void    ni52_timeout(struct net_device *dev);
static int     init586(struct net_device *dev);
static int     check586(struct net_device *dev, unsigned size);
static void    alloc586(struct net_device *dev);
static void    startrecv586(struct net_device *dev);
static void   __iomem *alloc_rfa(struct net_device *dev, void __iomem *ptr);
static void    ni52_rcv_int(struct net_device *dev);
static void    ni52_xmt_int(struct net_device *dev);
static void    ni52_rnr_int(struct net_device *dev);
struct priv ;
static void wait_for_scb_cmd(struct net_device *dev)
static void wait_for_scb_cmd_ruc(struct net_device *dev)
static void wait_for_stat_compl(void __iomem *p)
static int ni52_close(struct net_device *dev)
static int ni52_open(struct net_device *dev)
static int check_iscp(struct net_device *dev, void __iomem *addr)
static int check586(struct net_device *dev, unsigned size)
static void alloc586(struct net_device *dev)
static int irq = 9;
static int io = 0x300;
static long memstart;
static long memend;
struct net_device * __init ni52_probe(int unit)
static const struct net_device_ops ni52_netdev_ops = ;
static int __init ni52_probe1(struct net_device *dev, int ioaddr)
static int init586(struct net_device *dev)
static void __iomem *alloc_rfa(struct net_device *dev, void __iomem *ptr)
static irqreturn_t ni52_interrupt(int irq, void *dev_id)
static void ni52_rcv_int(struct net_device *dev)
static void ni52_rnr_int(struct net_device *dev)
static void ni52_xmt_int(struct net_device *dev)
static void startrecv586(struct net_device *dev)
static void ni52_timeout(struct net_device *dev)
static netdev_tx_t ni52_send_packet(struct sk_buff *skb,
struct net_device *dev)
static struct net_device_stats *ni52_get_stats(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static struct net_device *dev_ni52;
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(memstart, long, 0);
module_param(memend, long, 0);
MODULE_PARM_DESC(io, "NI5210 I/O base address,required");
MODULE_PARM_DESC(irq, "NI5210 IRQ number,required");
MODULE_PARM_DESC(memstart, "NI5210 memory base address,required");
MODULE_PARM_DESC(memend, "NI5210 memory end address,required");
int __init init_module(void)
void __exit cleanup_module(void)
MODULE_LICENSE("GPL");
