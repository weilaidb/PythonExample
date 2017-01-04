MODULE_AUTHOR("Richard Zidlicky <rz@linux-m68k.org>");
MODULE_DESCRIPTION("m68k beeper driver");
MODULE_LICENSE("GPL");
static struct platform_device *m68kspkr_platform_device;
static int m68kspkr_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
static int __devinit m68kspkr_probe(struct platform_device *dev)
static int __devexit m68kspkr_remove(struct platform_device *dev)
static void m68kspkr_shutdown(struct platform_device *dev)
static struct platform_driver m68kspkr_platform_driver = ;
static int __init m68kspkr_init(void)
static void __exit m68kspkr_exit(void)
module_init(m68kspkr_init);
module_exit(m68kspkr_exit);
