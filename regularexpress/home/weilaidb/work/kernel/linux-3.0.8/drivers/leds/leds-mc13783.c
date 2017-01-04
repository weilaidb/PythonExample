struct mc13783_led ;
#define MC13783_REG_LED_CONTROL_0	51
#define MC13783_LED_C0_ENABLE_BIT	(1 << 0)
#define MC13783_LED_C0_TRIODE_MD_BIT	(1 << 7)
#define MC13783_LED_C0_TRIODE_AD_BIT	(1 << 8)
#define MC13783_LED_C0_TRIODE_KP_BIT	(1 << 9)
#define MC13783_LED_C0_BOOST_BIT	(1 << 10)
#define MC13783_LED_C0_ABMODE_MASK	0x7
#define MC13783_LED_C0_ABMODE		11
#define MC13783_LED_C0_ABREF_MASK	0x3
#define MC13783_LED_C0_ABREF		14
#define MC13783_REG_LED_CONTROL_1	52
#define MC13783_LED_C1_TC1HALF_BIT	(1 << 18)
#define MC13783_REG_LED_CONTROL_2	53
#define MC13783_LED_C2_BL_P_MASK	0xf
#define MC13783_LED_C2_MD_P		9
#define MC13783_LED_C2_AD_P		13
#define MC13783_LED_C2_KP_P		17
#define MC13783_LED_C2_BL_C_MASK	0x7
#define MC13783_LED_C2_MD_C		0
#define MC13783_LED_C2_AD_C		3
#define MC13783_LED_C2_KP_C		6
#define MC13783_REG_LED_CONTROL_3	54
#define MC13783_LED_C3_TC_P		6
#define MC13783_LED_C3_TC_P_MASK	0x1f
#define MC13783_REG_LED_CONTROL_4	55
#define MC13783_REG_LED_CONTROL_5	56
#define MC13783_LED_Cx_PERIOD		21
#define MC13783_LED_Cx_PERIOD_MASK	0x3
#define MC13783_LED_Cx_SLEWLIM_BIT      (1 << 23)
#define MC13783_LED_Cx_TRIODE_TC_BIT	(1 << 23)
#define MC13783_LED_Cx_TC_C_MASK	0x3
static void mc13783_led_work(struct work_struct *work)
static void mc13783_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int __devinit mc13783_led_setup(struct mc13783_led *led, int max_current)
static int __devinit mc13783_leds_prepare(struct platform_device *pdev)
static int __devinit mc13783_led_probe(struct platform_device *pdev)
static int __devexit mc13783_led_remove(struct platform_device *pdev)
static struct platform_driver mc13783_led_driver = ;
static int __init mc13783_led_init(void)
module_init(mc13783_led_init);
static void __exit mc13783_led_exit(void)
module_exit(mc13783_led_exit);
MODULE_DESCRIPTION("LEDs driver for Freescale MC13783 PMIC");
MODULE_AUTHOR("Philippe Retornaz <philippe.retornaz@epfl.ch>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:mc13783-led");
