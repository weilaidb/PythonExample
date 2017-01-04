static DEFINE_IDR(rtc_idr);
static DEFINE_MUTEX(idr_lock);
struct class *rtc_class;
static void rtc_device_release(struct device *dev)
#if defined(CONFIG_PM) && defined(CONFIG_RTC_HCTOSYS_DEVICE)
static time_t		oldtime;
static struct timespec	oldts;
static int rtc_suspend(struct device *dev, pm_message_t mesg)
static int rtc_resume(struct device *dev)
#define rtc_suspend	NULL
#define rtc_resume	NULL
struct rtc_device *rtc_device_register(const char *name, struct device *dev,
const struct rtc_class_ops *ops,
struct module *owner)
EXPORT_SYMBOL_GPL(rtc_device_register);
void rtc_device_unregister(struct rtc_device *rtc)
EXPORT_SYMBOL_GPL(rtc_device_unregister);
static int __init rtc_init(void)
static void __exit rtc_exit(void)
subsys_initcall(rtc_init);
module_exit(rtc_exit);
MODULE_AUTHOR("Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("RTC class support");
MODULE_LICENSE("GPL");
