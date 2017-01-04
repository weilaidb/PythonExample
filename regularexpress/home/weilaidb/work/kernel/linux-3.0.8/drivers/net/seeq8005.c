static const char version[] =
"seeq8005.c:v1.00 8/07/95 Hamish Coleman (hamish@zot.apana.org.au)\n";
static unsigned int seeq8005_portlist[] __initdata =
;
#define NET_DEBUG 1
static unsigned int net_debug = NET_DEBUG;
struct net_local ;
#define SA_ADDR0 0x00
#define SA_ADDR1 0x80
#define SA_ADDR2 0x4b
static int seeq8005_probe1(struct net_device *dev, int ioaddr);
static int seeq8005_open(struct net_device *dev);
static void seeq8005_timeout(struct net_device *dev);
static netdev_tx_t seeq8005_send_packet(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t seeq8005_interrupt(int irq, void *dev_id);
static void seeq8005_rx(struct net_device *dev);
static int seeq8005_close(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
#define tx_done(dev)	(inw(SEEQ_STATUS) & SEEQSTAT_TX_ON)
static void hardware_send_packet(struct net_device *dev, char *buf, int length);
extern void seeq8005_init(struct net_device *dev, int startp);
static inline void wait_for_buffer(struct net_device *dev);
static int io = 0x320;
static int irq = 10;
struct net_device * __init seeq8005_probe(int unit)
static const struct net_device_ops seeq8005_netdev_ops = ;
static int __init seeq8005_probe1(struct net_device *dev, int ioaddr)
static int seeq8005_open(struct net_device *dev)
static void seeq8005_timeout(struct net_device *dev)
static netdev_tx_t seeq8005_send_packet(struct sk_buff *skb,
struct net_device *dev)
inline void wait_for_buffer(struct net_device * dev)
static irqreturn_t seeq8005_interrupt(int irq, void *dev_id)
static void seeq8005_rx(struct net_device *dev)
static int seeq8005_close(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
void seeq8005_init(struct net_device *dev, int startp)
static void hardware_send_packet(struct net_device * dev, char *buf, int length)
static struct net_device *dev_seeq;
MODULE_LICENSE("GPL");
module_param(io, int, 0);
module_param(irq, int, 0);
MODULE_PARM_DESC(io, "SEEQ 8005 I/O base address");
MODULE_PARM_DESC(irq, "SEEQ 8005 IRQ number");
int __init init_module(void)
void __exit cleanup_module(void)
