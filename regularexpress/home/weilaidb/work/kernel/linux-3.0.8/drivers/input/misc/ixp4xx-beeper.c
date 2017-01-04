MODULE_AUTHOR("Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("ixp4xx beeper driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ixp4xx-beeper");
static DEFINE_SPINLOCK(beep_lock);
static void ixp4xx_spkr_control(unsigned int pin, unsigned int count)
static int ixp4xx_spkr_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
static irqreturn_t ixp4xx_spkr_interrupt(int irq, void *dev_id)
static int __devinit ixp4xx_spkr_probe(struct platform_device *dev)
static int __devexit ixp4xx_spkr_remove(struct platform_device *dev)
static void ixp4xx_spkr_shutdown(struct platform_device *dev)
static struct platform_driver ixp4xx_spkr_platform_driver = ;
static int __init ixp4xx_spkr_init(void)
static void __exit ixp4xx_spkr_exit(void)
module_init(ixp4xx_spkr_init);
module_exit(ixp4xx_spkr_exit);
