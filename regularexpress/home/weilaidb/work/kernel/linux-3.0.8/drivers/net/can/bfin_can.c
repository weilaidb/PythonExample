#define DRV_NAME "bfin_can"
#define BFIN_CAN_TIMEOUT 100
#define TX_ECHO_SKB_MAX  1
struct bfin_can_priv ;
static struct can_bittiming_const bfin_can_bittiming_const = ;
static int bfin_can_set_bittiming(struct net_device *dev)
static void bfin_can_set_reset_mode(struct net_device *dev)
static void bfin_can_set_normal_mode(struct net_device *dev)
static void bfin_can_start(struct net_device *dev)
static int bfin_can_set_mode(struct net_device *dev, enum can_mode mode)
static int bfin_can_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void bfin_can_rx(struct net_device *dev, u16 isrc)
static int bfin_can_err(struct net_device *dev, u16 isrc, u16 status)
irqreturn_t bfin_can_interrupt(int irq, void *dev_id)
static int bfin_can_open(struct net_device *dev)
static int bfin_can_close(struct net_device *dev)
struct net_device *alloc_bfin_candev(void)
static const struct net_device_ops bfin_can_netdev_ops = ;
static int __devinit bfin_can_probe(struct platform_device *pdev)
static int __devexit bfin_can_remove(struct platform_device *pdev)
static int bfin_can_suspend(struct platform_device *pdev, pm_message_t mesg)
static int bfin_can_resume(struct platform_device *pdev)
#define bfin_can_suspend NULL
#define bfin_can_resume NULL
static struct platform_driver bfin_can_driver = ;
static int __init bfin_can_init(void)
module_init(bfin_can_init);
static void __exit bfin_can_exit(void)
module_exit(bfin_can_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Blackfin on-chip CAN netdevice driver");
