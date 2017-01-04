static char version[] __initdata = "znet.c:v1.02 9/23/94 becker@scyld.com\n";
#define ZNET_DEBUG 1
static unsigned int znet_debug = ZNET_DEBUG;
module_param (znet_debug, int, 0);
MODULE_PARM_DESC (znet_debug, "ZNet debug level");
MODULE_LICENSE("GPL");
#define DMA_RX_MODE		0x14
#define DMA_TX_MODE		0x18
#define dma_page_eq(ptr1, ptr2) ((long)(ptr1)>>17 == (long)(ptr2)>>17)
#define RX_BUF_SIZE 8192
#define TX_BUF_SIZE 8192
#define DMA_BUF_SIZE (RX_BUF_SIZE + 16)
#define TX_TIMEOUT	(HZ/10)
struct znet_private ;
static struct net_device *znet_dev;
struct netidblk ;
static int	znet_open(struct net_device *dev);
static netdev_tx_t znet_send_packet(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t znet_interrupt(int irq, void *dev_id);
static void	znet_rx(struct net_device *dev);
static int	znet_close(struct net_device *dev);
static void hardware_init(struct net_device *dev);
static void update_stop_hit(short ioaddr, unsigned short rx_stop_offset);
static void znet_tx_timeout (struct net_device *dev);
static int znet_request_resources (struct net_device *dev)
static void znet_release_resources (struct net_device *dev)
static void znet_transceiver_power (struct net_device *dev, int on)
static void znet_set_multicast_list (struct net_device *dev)
static const struct net_device_ops znet_netdev_ops = ;
static int __init znet_probe (void)
static int znet_open(struct net_device *dev)
static void znet_tx_timeout (struct net_device *dev)
static netdev_tx_t znet_send_packet(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t znet_interrupt(int irq, void *dev_id)
static void znet_rx(struct net_device *dev)
static int znet_close(struct net_device *dev)
static void show_dma(struct net_device *dev)
static void hardware_init(struct net_device *dev)
static void update_stop_hit(short ioaddr, unsigned short rx_stop_offset)
static __exit void znet_cleanup (void)
module_init (znet_probe);
module_exit (znet_cleanup);
