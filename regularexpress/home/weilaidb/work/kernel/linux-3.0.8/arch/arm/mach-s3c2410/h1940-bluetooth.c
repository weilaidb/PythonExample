#define DRV_NAME "h1940-bt"
static void h1940bt_enable(int on)
static int h1940bt_set_block(void *data, bool blocked)
static const struct rfkill_ops h1940bt_rfkill_ops = ;
static int __devinit h1940bt_probe(struct platform_device *pdev)
static int h1940bt_remove(struct platform_device *pdev)
static struct platform_driver h1940bt_driver = ;
static int __init h1940bt_init(void)
static void __exit h1940bt_exit(void)
module_init(h1940bt_init);
module_exit(h1940bt_exit);
MODULE_AUTHOR("Arnaud Patard <arnaud.patard@rtp-net.org>");
MODULE_DESCRIPTION("Driver for the iPAQ H1940 bluetooth chip");
MODULE_LICENSE("GPL");
