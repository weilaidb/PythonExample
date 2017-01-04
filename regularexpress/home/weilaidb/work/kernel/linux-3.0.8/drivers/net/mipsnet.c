#define MIPSNET_VERSION "2007-11-17"
struct mipsnet_regs ;
#define regaddr(dev, field) \
(dev->base_addr + offsetof(struct mipsnet_regs, field))
static char mipsnet_string[] = "mipsnet";
static int ioiocpy_frommipsnet(struct net_device *dev, unsigned char *kdata,
int len)
static inline void mipsnet_put_todevice(struct net_device *dev,
struct sk_buff *skb)
static int mipsnet_xmit(struct sk_buff *skb, struct net_device *dev)
static inline ssize_t mipsnet_get_fromdev(struct net_device *dev, size_t len)
static irqreturn_t mipsnet_interrupt(int irq, void *dev_id)
static int mipsnet_open(struct net_device *dev)
static int mipsnet_close(struct net_device *dev)
static void mipsnet_set_mclist(struct net_device *dev)
static const struct net_device_ops mipsnet_netdev_ops = ;
static int __devinit mipsnet_probe(struct platform_device *dev)
static int __devexit mipsnet_device_remove(struct platform_device *device)
static struct platform_driver mipsnet_driver = ;
static int __init mipsnet_init_module(void)
static void __exit mipsnet_exit_module(void)
module_init(mipsnet_init_module);
module_exit(mipsnet_exit_module);
