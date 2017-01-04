#define DRV_VERSION "1.0"
#define DEV_LABEL "adummy"
#define ADUMMY_DEV(dev) ((struct adummy_dev *) (dev)->dev_data)
struct adummy_dev ;
static LIST_HEAD(adummy_devs);
static ssize_t __set_signal(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t __show_signal(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(signal, 0644, __show_signal, __set_signal);
static struct attribute *adummy_attrs[] = ;
static struct attribute_group adummy_group_attrs = ;
static int __init
adummy_start(struct atm_dev *dev)
static int
adummy_open(struct atm_vcc *vcc)
static void
adummy_close(struct atm_vcc *vcc)
static int
adummy_send(struct atm_vcc *vcc, struct sk_buff *skb)
static int
adummy_proc_read(struct atm_dev *dev, loff_t *pos, char *page)
static struct atmdev_ops adummy_ops =
;
static int __init adummy_init(void)
static void __exit adummy_cleanup(void)
module_init(adummy_init);
module_exit(adummy_cleanup);
MODULE_AUTHOR("chas williams <chas@cmf.nrl.navy.mil>");
MODULE_DESCRIPTION("dummy ATM driver");
MODULE_LICENSE("GPL");
