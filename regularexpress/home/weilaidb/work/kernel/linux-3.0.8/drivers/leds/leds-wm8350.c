static const int isink_cur[] = ;
#define to_wm8350_led(led_cdev) \
container_of(led_cdev, struct wm8350_led, cdev)
static void wm8350_led_enable(struct wm8350_led *led)
static void wm8350_led_disable(struct wm8350_led *led)
static void led_work(struct work_struct *work)
static void wm8350_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void wm8350_led_shutdown(struct platform_device *pdev)
static int wm8350_led_probe(struct platform_device *pdev)
static int wm8350_led_remove(struct platform_device *pdev)
static struct platform_driver wm8350_led_driver = ;
static int __devinit wm8350_led_init(void)
module_init(wm8350_led_init);
static void wm8350_led_exit(void)
module_exit(wm8350_led_exit);
MODULE_AUTHOR("Mark Brown");
MODULE_DESCRIPTION("WM8350 LED driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8350-led");
