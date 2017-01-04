#define MEAS_LEN		(8)
#define ACCURATE_BIT		(12)
#define MEAS_EN3		(0x52)
#define MEAS_TSIX_1		(0x8D)
#define MEAS_TSIX_2		(0x8E)
#define MEAS_TSIY_1		(0x8F)
#define MEAS_TSIY_2		(0x90)
#define MEAS_TSIZ1_1		(0x91)
#define MEAS_TSIZ1_2		(0x92)
#define MEAS_TSIZ2_1		(0x93)
#define MEAS_TSIZ2_2		(0x94)
#define MEAS_PD_EN		(1 << 3)
#define MEAS_TSIX_EN		(1 << 4)
#define MEAS_TSIY_EN		(1 << 5)
#define MEAS_TSIZ1_EN		(1 << 6)
#define MEAS_TSIZ2_EN		(1 << 7)
struct pm860x_touch ;
static irqreturn_t pm860x_touch_handler(int irq, void *data)
static int pm860x_touch_open(struct input_dev *dev)
static void pm860x_touch_close(struct input_dev *dev)
static int __devinit pm860x_touch_probe(struct platform_device *pdev)
static int __devexit pm860x_touch_remove(struct platform_device *pdev)
static struct platform_driver pm860x_touch_driver = ;
static int __init pm860x_touch_init(void)
module_init(pm860x_touch_init);
static void __exit pm860x_touch_exit(void)
module_exit(pm860x_touch_exit);
MODULE_DESCRIPTION("Touchscreen driver for Marvell Semiconductor 88PM860x");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:88pm860x-touch");
