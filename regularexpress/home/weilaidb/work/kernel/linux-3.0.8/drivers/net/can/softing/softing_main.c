#define TX_ECHO_SKB_MAX (((TXMAX+1)/2)-1)
static inline int canif_is_active(struct net_device *netdev)
static inline void softing_set_reset_dpram(struct softing *card)
static inline void softing_clr_reset_dpram(struct softing *card)
static netdev_tx_t softing_netdev_start_xmit(struct sk_buff *skb,
struct net_device *dev)
int softing_netdev_rx(struct net_device *netdev, const struct can_frame *msg,
ktime_t ktime)
static int softing_handle_1(struct softing *card)
static irqreturn_t softing_irq_thread(int irq, void *dev_id)
static irqreturn_t softing_irq_v2(int irq, void *dev_id)
static irqreturn_t softing_irq_v1(int irq, void *dev_id)
static int softing_netdev_open(struct net_device *ndev)
static int softing_netdev_stop(struct net_device *ndev)
static int softing_candev_set_mode(struct net_device *ndev, enum can_mode mode)
int softing_enable_irq(struct softing *card, int enable)
static void softing_card_shutdown(struct softing *card)
static __devinit int softing_card_boot(struct softing *card)
static ssize_t show_channel(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_chip(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_output(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_output(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static const DEVICE_ATTR(channel, S_IRUGO, show_channel, NULL);
static const DEVICE_ATTR(chip, S_IRUGO, show_chip, NULL);
static const DEVICE_ATTR(output, S_IRUGO | S_IWUSR, show_output, store_output);
static const struct attribute *const netdev_sysfs_attrs[] = ;
static const struct attribute_group netdev_sysfs_group = ;
static const struct net_device_ops softing_netdev_ops = ;
static const struct can_bittiming_const softing_btr_const = ;
static __devinit struct net_device *softing_netdev_create(struct softing *card,
uint16_t chip_id)
static __devinit int softing_netdev_register(struct net_device *netdev)
static void softing_netdev_cleanup(struct net_device *netdev)
#define DEV_ATTR_RO(name, member) \
static ssize_t show_##name(struct device *dev, \
struct device_attribute *attr, char *buf) \
\
static DEVICE_ATTR(name, 0444, show_##name, NULL)
#define DEV_ATTR_RO_STR(name, member) \
static ssize_t show_##name(struct device *dev, \
struct device_attribute *attr, char *buf) \
\
static DEVICE_ATTR(name, 0444, show_##name, NULL)
DEV_ATTR_RO(serial, id.serial);
DEV_ATTR_RO_STR(firmware, pdat->app.fw);
DEV_ATTR_RO(firmware_version, id.fw_version);
DEV_ATTR_RO_STR(hardware, pdat->name);
DEV_ATTR_RO(hardware_version, id.hw_version);
DEV_ATTR_RO(license, id.license);
DEV_ATTR_RO(frequency, id.freq);
DEV_ATTR_RO(txpending, tx.pending);
static struct attribute *softing_pdev_attrs[] = ;
static const struct attribute_group softing_pdev_group = ;
static __devexit int softing_pdev_remove(struct platform_device *pdev)
static __devinit int softing_pdev_probe(struct platform_device *pdev)
static struct platform_driver softing_driver = ;
MODULE_ALIAS("platform:softing");
static int __init softing_start(void)
static void __exit softing_stop(void)
module_init(softing_start);
module_exit(softing_stop);
MODULE_DESCRIPTION("Softing DPRAM CAN driver");
MODULE_AUTHOR("Kurt Van Dijck <kurt.van.dijck@eia.be>");
MODULE_LICENSE("GPL v2");
