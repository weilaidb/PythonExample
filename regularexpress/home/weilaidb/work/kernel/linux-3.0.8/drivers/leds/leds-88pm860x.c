#define LED_PWM_SHIFT		(3)
#define LED_PWM_MASK		(0x1F)
#define LED_CURRENT_MASK	(0x07 << 5)
#define LED_BLINK_ON_MASK	(0x07)
#define LED_BLINK_MASK		(0x7F)
#define LED_BLINK_ON(x)		((x & 0x7) * 66 + 66)
#define LED_BLINK_ON_MIN	LED_BLINK_ON(0)
#define LED_BLINK_ON_MAX	LED_BLINK_ON(0x7)
#define LED_ON_CONTINUOUS	(0x0F << 3)
#define LED_TO_ON(x)		((x - 66) / 66)
#define LED1_BLINK_EN		(1 << 1)
#define LED2_BLINK_EN		(1 << 2)
struct pm860x_led ;
static inline int __led_off(int port)
static inline int __blink_off(int port)
static inline int __blink_ctl_mask(int port)
static void pm860x_led_work(struct work_struct *work)
static void pm860x_led_set(struct led_classdev *cdev,
enum led_brightness value)
static int pm860x_led_probe(struct platform_device *pdev)
static int pm860x_led_remove(struct platform_device *pdev)
static struct platform_driver pm860x_led_driver = ;
static int __devinit pm860x_led_init(void)
module_init(pm860x_led_init);
static void __devexit pm860x_led_exit(void)
module_exit(pm860x_led_exit);
MODULE_DESCRIPTION("LED driver for Marvell PM860x");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:88pm860x-led");
