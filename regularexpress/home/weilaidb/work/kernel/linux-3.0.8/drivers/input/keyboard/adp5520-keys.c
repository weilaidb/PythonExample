struct adp5520_keys ;
static void adp5520_keys_report_event(struct adp5520_keys *dev,
unsigned short keymask, int value)
static int adp5520_keys_notifier(struct notifier_block *nb,
unsigned long event, void *data)
static int __devinit adp5520_keys_probe(struct platform_device *pdev)
static int __devexit adp5520_keys_remove(struct platform_device *pdev)
static struct platform_driver adp5520_keys_driver = ;
static int __init adp5520_keys_init(void)
module_init(adp5520_keys_init);
static void __exit adp5520_keys_exit(void)
module_exit(adp5520_keys_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Keys ADP5520 Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:adp5520-keys");
