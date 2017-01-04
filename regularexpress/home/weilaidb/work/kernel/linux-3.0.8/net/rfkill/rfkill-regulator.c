struct rfkill_regulator_data ;
static int rfkill_regulator_set_block(void *data, bool blocked)
struct rfkill_ops rfkill_regulator_ops = ;
static int __devinit rfkill_regulator_probe(struct platform_device *pdev)
static int __devexit rfkill_regulator_remove(struct platform_device *pdev)
static struct platform_driver rfkill_regulator_driver = ;
static int __init rfkill_regulator_init(void)
module_init(rfkill_regulator_init);
static void __exit rfkill_regulator_exit(void)
module_exit(rfkill_regulator_exit);
MODULE_AUTHOR("Guiming Zhuo <gmzhuo@gmail.com>");
MODULE_AUTHOR("Antonio Ospite <ospite@studenti.unina.it>");
MODULE_DESCRIPTION("Regulator consumer driver for rfkill");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:rfkill-regulator");
