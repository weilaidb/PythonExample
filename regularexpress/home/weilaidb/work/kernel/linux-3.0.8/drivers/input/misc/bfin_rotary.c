static const u16 per_cnt[] = ;
struct bfin_rot ;
static void report_key_event(struct input_dev *input, int keycode)
static void report_rotary_event(struct bfin_rot *rotary, int delta)
static irqreturn_t bfin_rotary_isr(int irq, void *dev_id)
static int __devinit bfin_rotary_probe(struct platform_device *pdev)
static int __devexit bfin_rotary_remove(struct platform_device *pdev)
static int bfin_rotary_suspend(struct device *dev)
static int bfin_rotary_resume(struct device *dev)
static const struct dev_pm_ops bfin_rotary_pm_ops = ;
static struct platform_driver bfin_rotary_device_driver = ;
static int __init bfin_rotary_init(void)
module_init(bfin_rotary_init);
static void __exit bfin_rotary_exit(void)
module_exit(bfin_rotary_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Rotary Counter driver for Blackfin Processors");
MODULE_ALIAS("platform:bfin-rotary");
