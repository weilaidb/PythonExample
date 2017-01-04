#define DRV_NAME "rb532-button"
#define RB532_BTN_RATE 100
#define RB532_BTN_KSYM BTN_0
static bool rb532_button_pressed(void)
static void rb532_button_poll(struct input_polled_dev *poll_dev)
static int __devinit rb532_button_probe(struct platform_device *pdev)
static int __devexit rb532_button_remove(struct platform_device *pdev)
static struct platform_driver rb532_button_driver = ;
static int __init rb532_button_init(void)
static void __exit rb532_button_exit(void)
module_init(rb532_button_init);
module_exit(rb532_button_exit);
MODULE_AUTHOR("Phil Sutter <n0-1@freewrt.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Support for S1 button on Routerboard 532");
MODULE_ALIAS("platform:" DRV_NAME);
