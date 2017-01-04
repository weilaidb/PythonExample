MODULE_AUTHOR("Vojtech Pavlik, Russell King");
MODULE_DESCRIPTION("Acorn RiscPC mouse driver");
MODULE_LICENSE("GPL");
static short rpcmouse_lastx, rpcmouse_lasty;
static struct input_dev *rpcmouse_dev;
static irqreturn_t rpcmouse_irq(int irq, void *dev_id)
static int __init rpcmouse_init(void)
static void __exit rpcmouse_exit(void)
module_init(rpcmouse_init);
module_exit(rpcmouse_exit);
