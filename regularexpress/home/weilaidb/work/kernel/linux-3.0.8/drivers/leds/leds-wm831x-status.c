struct wm831x_status ;
#define to_wm831x_status(led_cdev) \
container_of(led_cdev, struct wm831x_status, cdev)
static void wm831x_status_work(struct work_struct *work)
static void wm831x_status_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int wm831x_status_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static const char *led_src_texts[] = ;
static ssize_t wm831x_status_src_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t wm831x_status_src_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(src, 0644, wm831x_status_src_show, wm831x_status_src_store);
static int wm831x_status_probe(struct platform_device *pdev)
static int wm831x_status_remove(struct platform_device *pdev)
static struct platform_driver wm831x_status_driver = ;
static int __devinit wm831x_status_init(void)
module_init(wm831x_status_init);
static void wm831x_status_exit(void)
module_exit(wm831x_status_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("WM831x status LED driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-status");
