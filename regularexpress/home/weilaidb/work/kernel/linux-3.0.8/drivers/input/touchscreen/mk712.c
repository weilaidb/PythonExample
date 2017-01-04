MODULE_AUTHOR("Daniel Quinlan <quinlan@pathname.com>, Vojtech Pavlik <vojtech@suse.cz>");
MODULE_DESCRIPTION("ICS MicroClock MK712 TouchScreen driver");
MODULE_LICENSE("GPL");
static unsigned int mk712_io = 0x260;
module_param_named(io, mk712_io, uint, 0);
MODULE_PARM_DESC(io, "I/O base address of MK712 touchscreen controller");
static unsigned int mk712_irq = 10;
module_param_named(irq, mk712_irq, uint, 0);
MODULE_PARM_DESC(irq, "IRQ of MK712 touchscreen controller");
#define MK712_STATUS		0
#define MK712_X			2
#define MK712_Y			4
#define MK712_CONTROL		6
#define MK712_RATE		7
#define	MK712_STATUS_TOUCH			0x10
#define	MK712_CONVERSION_COMPLETE		0x80
#define MK712_ENABLE_INT			0x01
#define MK712_INT_ON_CONVERSION_COMPLETE	0x02
#define MK712_INT_ON_CHANGE_IN_TOUCH_STATUS	0x04
#define MK712_ENABLE_PERIODIC_CONVERSIONS	0x10
#define MK712_READ_ONE_POINT			0x20
#define MK712_POWERUP				0x40
static struct input_dev *mk712_dev;
static DEFINE_SPINLOCK(mk712_lock);
static irqreturn_t mk712_interrupt(int irq, void *dev_id)
static int mk712_open(struct input_dev *dev)
static void mk712_close(struct input_dev *dev)
static int __init mk712_init(void)
static void __exit mk712_exit(void)
module_init(mk712_init);
module_exit(mk712_exit);
