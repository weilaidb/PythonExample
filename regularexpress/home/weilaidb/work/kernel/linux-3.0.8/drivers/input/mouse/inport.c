MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Inport (ATI XL and Microsoft) busmouse driver");
MODULE_LICENSE("GPL");
#define INPORT_BASE		0x23c
#define INPORT_EXTENT		4
#define INPORT_CONTROL_PORT	INPORT_BASE + 0
#define INPORT_DATA_PORT	INPORT_BASE + 1
#define INPORT_SIGNATURE_PORT	INPORT_BASE + 2
#define INPORT_REG_BTNS	0x00
#define INPORT_REG_X		0x01
#define INPORT_REG_Y		0x02
#define INPORT_REG_MODE		0x07
#define INPORT_RESET		0x80
#define INPORT_NAME		"ATI XL Mouse"
#define INPORT_VENDOR		0x0002
#define INPORT_SPEED_30HZ	0x01
#define INPORT_SPEED_50HZ	0x02
#define INPORT_SPEED_100HZ	0x03
#define INPORT_SPEED_200HZ	0x04
#define INPORT_MODE_BASE	INPORT_SPEED_100HZ
#define INPORT_MODE_IRQ		0x08
#define INPORT_NAME		"Microsoft InPort Mouse"
#define INPORT_VENDOR		0x0001
#define INPORT_MODE_BASE	0x10
#define INPORT_MODE_IRQ		0x01
#define INPORT_MODE_HOLD	0x20
#define INPORT_IRQ		5
static int inport_irq = INPORT_IRQ;
module_param_named(irq, inport_irq, uint, 0);
MODULE_PARM_DESC(irq, "IRQ number (5=default)");
static struct input_dev *inport_dev;
static irqreturn_t inport_interrupt(int irq, void *dev_id)
static int inport_open(struct input_dev *dev)
static void inport_close(struct input_dev *dev)
static int __init inport_init(void)
static void __exit inport_exit(void)
module_init(inport_init);
module_exit(inport_exit);
