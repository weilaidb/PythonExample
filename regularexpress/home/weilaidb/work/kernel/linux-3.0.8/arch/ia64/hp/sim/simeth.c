#define SIMETH_RECV_MAX	10
#define SIMETH_FRAME_SIZE	ETH_FRAME_LEN
#define NETWORK_INTR			8
struct simeth_local ;
static int simeth_probe1(void);
static int simeth_open(struct net_device *dev);
static int simeth_close(struct net_device *dev);
static int simeth_tx(struct sk_buff *skb, struct net_device *dev);
static int simeth_rx(struct net_device *dev);
static struct net_device_stats *simeth_get_stats(struct net_device *dev);
static irqreturn_t simeth_interrupt(int irq, void *dev_id);
static void set_multicast_list(struct net_device *dev);
static int simeth_device_event(struct notifier_block *this,unsigned long event, void *ptr);
static char *simeth_version="0.3";
static char *simeth_device="eth0";
static volatile unsigned int card_count;
static int simeth_debug;
static struct notifier_block simeth_dev_notifier = ;
static int __init
simeth_setup(char *str)
__setup("simeth=", simeth_setup);
int __init
simeth_probe (void)
static inline int
netdev_probe(char *name, unsigned char *ether)
static inline int
netdev_connect(int irq)
static inline int
netdev_attach(int fd, int irq, unsigned int ipaddr)
static inline int
netdev_detach(int fd)
static inline int
netdev_send(int fd, unsigned char *buf, unsigned int len)
static inline int
netdev_read(int fd, unsigned char *buf, unsigned int len)
static const struct net_device_ops simeth_netdev_ops = ;
static int
simeth_probe1(void)
static int
simeth_open(struct net_device *dev)
static __inline__ int dev_is_ethdev(struct net_device *dev)
static int
simeth_device_event(struct notifier_block *this,unsigned long event, void *ptr)
static int
simeth_close(struct net_device *dev)
static void
frame_print(unsigned char *from, unsigned char *frame, int len)
static int
simeth_tx(struct sk_buff *skb, struct net_device *dev)
static inline struct sk_buff *
make_new_skb(struct net_device *dev)
static int
simeth_rx(struct net_device *dev)
static irqreturn_t
simeth_interrupt(int irq, void *dev_id)
static struct net_device_stats *
simeth_get_stats(struct net_device *dev)
static void
set_multicast_list(struct net_device *dev)
__initcall(simeth_probe);
