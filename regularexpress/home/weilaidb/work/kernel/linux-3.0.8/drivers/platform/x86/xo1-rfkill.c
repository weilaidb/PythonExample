static int rfkill_set_block(void *data, bool blocked)
static const struct rfkill_ops rfkill_ops = ;
static int __devinit xo1_rfkill_probe(struct platform_device *pdev)
static int __devexit xo1_rfkill_remove(struct platform_device *pdev)
static struct platform_driver xo1_rfkill_driver = ;
static int __init xo1_rfkill_init(void)
static void __exit xo1_rfkill_exit(void)
MODULE_AUTHOR("Daniel Drake <dsd@laptop.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:xo1-rfkill");
module_init(xo1_rfkill_init);
module_exit(xo1_rfkill_exit);
