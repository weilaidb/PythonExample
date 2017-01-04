#define PM8607_WAKEUP		0x0b
#define LONG_ONKEY_EN		(1 << 1)
#define ONKEY_STATUS		(1 << 0)
struct pm860x_onkey_info ;
static irqreturn_t pm860x_onkey_handler(int irq, void *data)
static int __devinit pm860x_onkey_probe(struct platform_device *pdev)
static int __devexit pm860x_onkey_remove(struct platform_device *pdev)
static struct platform_driver pm860x_onkey_driver = ;
static int __init pm860x_onkey_init(void)
module_init(pm860x_onkey_init);
static void __exit pm860x_onkey_exit(void)
module_exit(pm860x_onkey_exit);
MODULE_DESCRIPTION("Marvell 88PM860x ONKEY driver");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
