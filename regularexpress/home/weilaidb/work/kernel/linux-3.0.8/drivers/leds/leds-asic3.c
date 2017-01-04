#define MS_TO_CLK(ms)	DIV_ROUND_CLOSEST(((ms)*1024), 32000)
#define CLK_TO_MS(clk)	(((clk)*32000)/1024)
#define MAX_CLK		4000
#define MAX_MS		CLK_TO_MS(MAX_CLK)
static const unsigned int led_n_base[ASIC3_NUM_LEDS] = ;
static void brightness_set(struct led_classdev *cdev,
enum led_brightness value)
static int blink_set(struct led_classdev *cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static int __devinit asic3_led_probe(struct platform_device *pdev)
static int __devexit asic3_led_remove(struct platform_device *pdev)
static struct platform_driver asic3_led_driver = ;
MODULE_ALIAS("platform:leds-asic3");
static int __init asic3_led_init(void)
static void __exit asic3_led_exit(void)
module_init(asic3_led_init);
module_exit(asic3_led_exit);
MODULE_AUTHOR("Paul Parsons <lost.distance@yahoo.com>");
MODULE_DESCRIPTION("HTC ASIC3 LED driver");
MODULE_LICENSE("GPL");
