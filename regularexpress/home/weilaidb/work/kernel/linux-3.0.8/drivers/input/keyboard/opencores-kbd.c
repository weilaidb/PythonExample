struct opencores_kbd ;
static irqreturn_t opencores_kbd_isr(int irq, void *dev_id)
static int __devinit opencores_kbd_probe(struct platform_device *pdev)
static int __devexit opencores_kbd_remove(struct platform_device *pdev)
static struct platform_driver opencores_kbd_device_driver = ;
static int __init opencores_kbd_init(void)
module_init(opencores_kbd_init);
static void __exit opencores_kbd_exit(void)
module_exit(opencores_kbd_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Javier Herrero <jherrero@hvsistemas.es>");
MODULE_DESCRIPTION("Keyboard driver for OpenCores Keyboard Controller");
