#undef DEBUG
#undef DEBUGDATA
#undef DEBUGCCW
#define KMSG_COMPONENT "ctcm"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static struct device *ctcm_root_dev;
struct channel *channels;
void ctcm_unpack_skb(struct channel *ch, struct sk_buff *pskb)
static void channel_free(struct channel *ch)
static void channel_remove(struct channel *ch)
static struct channel *channel_get(enum ctcm_channel_types type,
char *id, int direction)
static long ctcm_check_irb_error(struct ccw_device *cdev, struct irb *irb)
static inline void ccw_unit_check(struct channel *ch, __u8 sense)
int ctcm_ch_alloc_buffer(struct channel *ch)
int ctcm_open(struct net_device *dev)
int ctcm_close(struct net_device *dev)
static int ctcm_transmit_skb(struct channel *ch, struct sk_buff *skb)
static void ctcmpc_send_sweep_req(struct channel *rch)
static int ctcmpc_transmit_skb(struct channel *ch, struct sk_buff *skb)
static int ctcm_tx(struct sk_buff *skb, struct net_device *dev)
static int ctcmpc_tx(struct sk_buff *skb, struct net_device *dev)
static int ctcm_change_mtu(struct net_device *dev, int new_mtu)
static struct net_device_stats *ctcm_stats(struct net_device *dev)
static void ctcm_free_netdevice(struct net_device *dev)
struct mpc_group *ctcmpc_init_mpc_group(struct ctcm_priv *priv);
static const struct net_device_ops ctcm_netdev_ops = ;
static const struct net_device_ops ctcm_mpc_netdev_ops = ;
void static ctcm_dev_setup(struct net_device *dev)
static struct net_device *ctcm_init_netdevice(struct ctcm_priv *priv)
static void ctcm_irq_handler(struct ccw_device *cdev,
unsigned long intparm, struct irb *irb)
static int ctcm_probe_device(struct ccwgroup_device *cgdev)
static int add_channel(struct ccw_device *cdev, enum ctcm_channel_types type,
struct ctcm_priv *priv)
static enum ctcm_channel_types get_channel_type(struct ccw_device_id *id)
static int ctcm_new_device(struct ccwgroup_device *cgdev)
static int ctcm_shutdown_device(struct ccwgroup_device *cgdev)
static void ctcm_remove_device(struct ccwgroup_device *cgdev)
static int ctcm_pm_suspend(struct ccwgroup_device *gdev)
static int ctcm_pm_resume(struct ccwgroup_device *gdev)
static struct ccw_device_id ctcm_ids[] = ;
MODULE_DEVICE_TABLE(ccw, ctcm_ids);
static struct ccw_driver ctcm_ccw_driver = ;
static struct ccwgroup_driver ctcm_group_driver = ;
static ssize_t
ctcm_driver_group_store(struct device_driver *ddrv, const char *buf,
size_t count)
static DRIVER_ATTR(group, 0200, NULL, ctcm_driver_group_store);
static struct attribute *ctcm_group_attrs[] = ;
static struct attribute_group ctcm_group_attr_group = ;
static const struct attribute_group *ctcm_group_attr_groups[] = ;
static void __exit ctcm_exit(void)
static void print_banner(void)
static int __init ctcm_init(void)
module_init(ctcm_init);
module_exit(ctcm_exit);
MODULE_AUTHOR("Peter Tiedemann <ptiedem@de.ibm.com>");
MODULE_DESCRIPTION("Network driver for S/390 CTC + CTCMPC (SNA)");
MODULE_LICENSE("GPL");
