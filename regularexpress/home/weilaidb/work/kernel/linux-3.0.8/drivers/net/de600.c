static const char version[] = "de600.c: $Revision: 1.41-2.5 $,  Bjorn Ekwall (bj0rn@blox.se)\n";
#define DE600_SLOW_DOWN	udelay(delay_time)
static unsigned int check_lost = 1;
module_param(check_lost, bool, 0);
MODULE_PARM_DESC(check_lost, "If set then check for unplugged de600");
static unsigned int delay_time = 10;
module_param(delay_time, int, 0);
MODULE_PARM_DESC(delay_time, "DE-600 deley on I/O in microseconds");
static volatile int		rx_page;
#define TX_PAGES 2
static volatile int		tx_fifo[TX_PAGES];
static volatile int		tx_fifo_in;
static volatile int		tx_fifo_out;
static volatile int		free_tx_pages = TX_PAGES;
static int			was_down;
static DEFINE_SPINLOCK(de600_lock);
static inline u8 de600_read_status(struct net_device *dev)
static inline u8 de600_read_byte(unsigned char type, struct net_device *dev)
static int de600_open(struct net_device *dev)
static int de600_close(struct net_device *dev)
static inline void trigger_interrupt(struct net_device *dev)
static int de600_start_xmit(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t de600_interrupt(int irq, void *dev_id)
static int de600_tx_intr(struct net_device *dev, int irq_status)
static void de600_rx_intr(struct net_device *dev)
static const struct net_device_ops de600_netdev_ops = ;
static struct net_device * __init de600_probe(void)
static int adapter_init(struct net_device *dev)
static struct net_device *de600_dev;
static int __init de600_init(void)
static void __exit de600_exit(void)
module_init(de600_init);
module_exit(de600_exit);
MODULE_LICENSE("GPL");
