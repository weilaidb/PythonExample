MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("IBM PC110 touchpad driver");
MODULE_LICENSE("GPL");
#define PC110PAD_OFF	0x30
#define PC110PAD_ON	0x38
static int pc110pad_irq = 10;
static int pc110pad_io = 0x15e0;
static struct input_dev *pc110pad_dev;
static int pc110pad_data[3];
static int pc110pad_count;
static irqreturn_t pc110pad_interrupt(int irq, void *ptr)
static void pc110pad_close(struct input_dev *dev)
static int pc110pad_open(struct input_dev *dev)
static int __init pc110pad_init(void)
static void __exit pc110pad_exit(void)
module_init(pc110pad_init);
module_exit(pc110pad_exit);
