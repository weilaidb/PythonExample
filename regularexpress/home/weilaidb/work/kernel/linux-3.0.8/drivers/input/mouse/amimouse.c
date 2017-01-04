MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Amiga mouse driver");
MODULE_LICENSE("GPL");
static int amimouse_lastx, amimouse_lasty;
static irqreturn_t amimouse_interrupt(int irq, void *data)
static int amimouse_open(struct input_dev *dev)
static void amimouse_close(struct input_dev *dev)
static int __init amimouse_probe(struct platform_device *pdev)
static int __exit amimouse_remove(struct platform_device *pdev)
static struct platform_driver amimouse_driver = ;
static int __init amimouse_init(void)
module_init(amimouse_init);
static void __exit amimouse_exit(void)
module_exit(amimouse_exit);
MODULE_ALIAS("platform:amiga-mouse");
