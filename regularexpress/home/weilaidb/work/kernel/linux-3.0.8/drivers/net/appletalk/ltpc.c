static int debug;
#define DEBUG_VERBOSE 1
#define DEBUG_UPPER 2
#define DEBUG_LOWER 4
static int io;
static int irq;
static int dma;
static DEFINE_SPINLOCK(txqueue_lock);
static DEFINE_SPINLOCK(mbox_lock);
static int do_read(struct net_device *dev, void *cbuf, int cbuflen,
void *dbuf, int dbuflen);
static int sendup_buffer (struct net_device *dev);
static unsigned long dma_mem_alloc(int size)
static unsigned char *ltdmabuf;
static unsigned char *ltdmacbuf;
struct ltpc_private
;
struct xmitQel ;
static struct xmitQel *xmQhd, *xmQtl;
static void enQ(struct xmitQel *qel)
static struct xmitQel *deQ(void)
static struct xmitQel qels[16];
static unsigned char mailbox[16];
static unsigned char mboxinuse[16] = ;
static int wait_timeout(struct net_device *dev, int c)
static int getmbox(void)
static void handlefc(struct net_device *dev)
static void handlefd(struct net_device *dev)
static void handlewrite(struct net_device *dev)
static void handleread(struct net_device *dev)
static void handlecommand(struct net_device *dev)
static unsigned char rescbuf[2] = ;
static unsigned char resdbuf[2];
static int QInIdle;
static void idle(struct net_device *dev)
static int do_write(struct net_device *dev, void *cbuf, int cbuflen,
void *dbuf, int dbuflen)
static int do_read(struct net_device *dev, void *cbuf, int cbuflen,
void *dbuf, int dbuflen)
static struct timer_list ltpc_timer;
static netdev_tx_t ltpc_xmit(struct sk_buff *skb, struct net_device *dev);
static int read_30 ( struct net_device *dev)
static int set_30 (struct net_device *dev,int x)
static int sendup_buffer (struct net_device *dev)
static irqreturn_t
ltpc_interrupt(int irq, void *dev_id)
static int ltpc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void set_multicast_list(struct net_device *dev)
static int ltpc_poll_counter;
static void ltpc_poll(unsigned long l)
static netdev_tx_t ltpc_xmit(struct sk_buff *skb, struct net_device *dev)
static int __init ltpc_probe_dma(int base, int dma)
static const struct net_device_ops ltpc_netdev = ;
struct net_device * __init ltpc_probe(void)
static int __init ltpc_setup(char *str)
__setup("ltpc=", ltpc_setup);
static struct net_device *dev_ltpc;
MODULE_LICENSE("GPL");
module_param(debug, int, 0);
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(dma, int, 0);
static int __init ltpc_module_init(void)
module_init(ltpc_module_init);
static void __exit ltpc_cleanup(void)
module_exit(ltpc_cleanup);
