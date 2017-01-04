static void dummy_leds_event(led_event_t evt)
void (*leds_event)(led_event_t) = dummy_leds_event;
struct leds_evt_name ;
static const struct leds_evt_name evt_names[] = ;
static ssize_t leds_store(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t size)
static SYSDEV_ATTR(event, 0200, NULL, leds_store);
static struct sysdev_class leds_sysclass = ;
static struct sys_device leds_device = ;
static int leds_suspend(void)
static void leds_resume(void)
static void leds_shutdown(void)
static struct syscore_ops leds_syscore_ops = ;
static int __init leds_init(void)
device_initcall(leds_init);
EXPORT_SYMBOL(leds_event);
