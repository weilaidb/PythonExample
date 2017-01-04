MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Q40 PS/2 keyboard controller driver");
MODULE_LICENSE("GPL");
static DEFINE_SPINLOCK(q40kbd_lock);
static struct serio *q40kbd_port;
static struct platform_device *q40kbd_device;
static irqreturn_t q40kbd_interrupt(int irq, void *dev_id)
static void q40kbd_flush(void)
static int q40kbd_open(struct serio *port)
static void q40kbd_close(struct serio *port)
static int __devinit q40kbd_probe(struct platform_device *dev)
static int __devexit q40kbd_remove(struct platform_device *dev)
static struct platform_driver q40kbd_driver = ;
static int __init q40kbd_init(void)
static void __exit q40kbd_exit(void)
module_init(q40kbd_init);
module_exit(q40kbd_exit);
