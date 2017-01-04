#define SW_INPUT		(1 << 7)
#define HARDRESET_EN		(1 << 7)
#define PWREN_EN		(1 << 7)
struct max8925_onkey_info ;
static irqreturn_t max8925_onkey_handler(int irq, void *data)
static int __devinit max8925_onkey_probe(struct platform_device *pdev)
static int __devexit max8925_onkey_remove(struct platform_device *pdev)
static struct platform_driver max8925_onkey_driver = ;
static int __init max8925_onkey_init(void)
module_init(max8925_onkey_init);
static void __exit max8925_onkey_exit(void)
module_exit(max8925_onkey_exit);
MODULE_DESCRIPTION("Maxim MAX8925 ONKEY driver");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
