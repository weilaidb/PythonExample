static void tosa_bt_on(struct tosa_bt_data *data)
static void tosa_bt_off(struct tosa_bt_data *data)
static int tosa_bt_set_block(void *data, bool blocked)
static const struct rfkill_ops tosa_bt_rfkill_ops = ;
static int tosa_bt_probe(struct platform_device *dev)
static int __devexit tosa_bt_remove(struct platform_device *dev)
static struct platform_driver tosa_bt_driver = ;
static int __init tosa_bt_init(void)
static void __exit tosa_bt_exit(void)
module_init(tosa_bt_init);
module_exit(tosa_bt_exit);
