struct ps2if ;
static irqreturn_t ps2_rxint(int irq, void *dev_id)
static irqreturn_t ps2_txint(int irq, void *dev_id)
static int ps2_write(struct serio *io, unsigned char val)
static int ps2_open(struct serio *io)
static void ps2_close(struct serio *io)
static void __devinit ps2_clear_input(struct ps2if *ps2if)
static unsigned int __devinit ps2_test_one(struct ps2if *ps2if,
unsigned int mask)
static int __devinit ps2_test(struct ps2if *ps2if)
static int __devinit ps2_probe(struct sa1111_dev *dev)
static int __devexit ps2_remove(struct sa1111_dev *dev)
static struct sa1111_driver ps2_driver = ;
static int __init ps2_init(void)
static void __exit ps2_exit(void)
module_init(ps2_init);
module_exit(ps2_exit);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("SA1111 PS2 controller driver");
MODULE_LICENSE("GPL");
