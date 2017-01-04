MODULE_AUTHOR("Vojtech Pavlik, Russell King");
MODULE_DESCRIPTION("Acorn RiscPC PS/2 keyboard controller driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:kart");
static int rpckbd_write(struct serio *port, unsigned char val)
static irqreturn_t rpckbd_rx(int irq, void *dev_id)
static irqreturn_t rpckbd_tx(int irq, void *dev_id)
static int rpckbd_open(struct serio *port)
static void rpckbd_close(struct serio *port)
static int __devinit rpckbd_probe(struct platform_device *dev)
static int __devexit rpckbd_remove(struct platform_device *dev)
static struct platform_driver rpckbd_driver = ;
static int __init rpckbd_init(void)
static void __exit rpckbd_exit(void)
module_init(rpckbd_init);
module_exit(rpckbd_exit);
