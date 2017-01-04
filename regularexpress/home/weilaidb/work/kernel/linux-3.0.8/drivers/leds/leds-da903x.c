#define DA9030_LED1_CONTROL	0x20
#define DA9030_LED2_CONTROL	0x21
#define DA9030_LED3_CONTROL	0x22
#define DA9030_LED4_CONTROL	0x23
#define DA9030_LEDPC_CONTROL	0x24
#define DA9030_MISC_CONTROL_A	0x26
#define DA9034_LED1_CONTROL	0x35
#define DA9034_LED2_CONTROL	0x36
#define DA9034_VIBRA		0x40
struct da903x_led ;
#define DA9030_LED_OFFSET(id)	((id) - DA9030_ID_LED_1)
#define DA9034_LED_OFFSET(id)	((id) - DA9034_ID_LED_1)
static void da903x_led_work(struct work_struct *work)
static void da903x_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int __devinit da903x_led_probe(struct platform_device *pdev)
static int __devexit da903x_led_remove(struct platform_device *pdev)
static struct platform_driver da903x_led_driver = ;
static int __init da903x_led_init(void)
module_init(da903x_led_init);
static void __exit da903x_led_exit(void)
module_exit(da903x_led_exit);
MODULE_DESCRIPTION("LEDs driver for Dialog Semiconductor DA9030/DA9034");
MODULE_AUTHOR("Eric Miao <eric.miao@marvell.com>"
"Mike Rapoport <mike@compulab.co.il>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:da903x-led");
