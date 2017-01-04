MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("PC Speaker beeper driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pcspkr");
#if defined(CONFIG_MIPS) || defined(CONFIG_X86)
static DEFINE_RAW_SPINLOCK(i8253_lock);
static int pcspkr_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
static int __devinit pcspkr_probe(struct platform_device *dev)
static int __devexit pcspkr_remove(struct platform_device *dev)
static int pcspkr_suspend(struct device *dev)
static void pcspkr_shutdown(struct platform_device *dev)
static const struct dev_pm_ops pcspkr_pm_ops = ;
static struct platform_driver pcspkr_platform_driver = ;
static int __init pcspkr_init(void)
static void __exit pcspkr_exit(void)
module_init(pcspkr_init);
module_exit(pcspkr_exit);
