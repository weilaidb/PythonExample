#define DRV_NAME "push-switch"
#define DRV_VERSION "0.1.1"
static ssize_t switch_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(switch, S_IRUGO, switch_show, NULL);
static void switch_timer(unsigned long data)
static void switch_work_handler(struct work_struct *work)
static int switch_drv_probe(struct platform_device *pdev)
static int switch_drv_remove(struct platform_device *pdev)
static struct platform_driver switch_driver = ;
static int __init switch_init(void)
static void __exit switch_exit(void)
module_init(switch_init);
module_exit(switch_exit);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR("Paul Mundt");
MODULE_LICENSE("GPL v2");
