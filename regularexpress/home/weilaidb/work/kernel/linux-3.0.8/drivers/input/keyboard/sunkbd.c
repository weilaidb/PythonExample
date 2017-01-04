#define DRIVER_DESC	"Sun keyboard driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static unsigned char sunkbd_keycode[128] = ;
#define SUNKBD_CMD_RESET	0x1
#define SUNKBD_CMD_BELLON	0x2
#define SUNKBD_CMD_BELLOFF	0x3
#define SUNKBD_CMD_CLICK	0xa
#define SUNKBD_CMD_NOCLICK	0xb
#define SUNKBD_CMD_SETLED	0xe
#define SUNKBD_CMD_LAYOUT	0xf
#define SUNKBD_RET_RESET	0xff
#define SUNKBD_RET_ALLUP	0x7f
#define SUNKBD_RET_LAYOUT	0xfe
#define SUNKBD_LAYOUT_5_MASK	0x20
#define SUNKBD_RELEASE		0x80
#define SUNKBD_KEY		0x7f
struct sunkbd ;
static irqreturn_t sunkbd_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static int sunkbd_event(struct input_dev *dev,
unsigned int type, unsigned int code, int value)
static int sunkbd_initialize(struct sunkbd *sunkbd)
static void sunkbd_reinit(struct work_struct *work)
static void sunkbd_enable(struct sunkbd *sunkbd, bool enable)
static int sunkbd_connect(struct serio *serio, struct serio_driver *drv)
static void sunkbd_disconnect(struct serio *serio)
static struct serio_device_id sunkbd_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, sunkbd_serio_ids);
static struct serio_driver sunkbd_drv = ;
static int __init sunkbd_init(void)
static void __exit sunkbd_exit(void)
module_init(sunkbd_init);
module_exit(sunkbd_exit);
