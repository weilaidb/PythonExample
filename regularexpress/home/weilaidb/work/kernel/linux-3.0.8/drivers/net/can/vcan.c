static __initdata const char banner[] =
KERN_INFO "vcan: Virtual CAN interface driver\n";
MODULE_DESCRIPTION("virtual CAN interface");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Urs Thuermann <urs.thuermann@volkswagen.de>");
static int echo;
module_param(echo, bool, S_IRUGO);
MODULE_PARM_DESC(echo, "Echo sent frames (for testing). Default: 0 (Off)");
static void vcan_rx(struct sk_buff *skb, struct net_device *dev)
static netdev_tx_t vcan_tx(struct sk_buff *skb, struct net_device *dev)
static const struct net_device_ops vcan_netdev_ops = ;
static void vcan_setup(struct net_device *dev)
static struct rtnl_link_ops vcan_link_ops __read_mostly = ;
static __init int vcan_init_module(void)
static __exit void vcan_cleanup_module(void)
module_init(vcan_init_module);
module_exit(vcan_cleanup_module);
