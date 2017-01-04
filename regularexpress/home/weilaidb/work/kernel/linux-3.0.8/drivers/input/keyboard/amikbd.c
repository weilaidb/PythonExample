MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Amiga keyboard driver");
MODULE_LICENSE("GPL");
static unsigned char amikbd_keycode[0x78] __initdata = ;
static const char *amikbd_messages[8] = ;
static irqreturn_t amikbd_interrupt(int irq, void *data)
static int __init amikbd_probe(struct platform_device *pdev)
static int __exit amikbd_remove(struct platform_device *pdev)
static struct platform_driver amikbd_driver = ;
static int __init amikbd_init(void)
module_init(amikbd_init);
static void __exit amikbd_exit(void)
module_exit(amikbd_exit);
MODULE_ALIAS("platform:amiga-keyboard");
