#define DRIVER_DESC	"XT keyboard driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define XTKBD_EMUL0	0xe0
#define XTKBD_EMUL1	0xe1
#define XTKBD_KEY	0x7f
#define XTKBD_RELEASE	0x80
static unsigned char xtkbd_keycode[256] = ;
struct xtkbd ;
static irqreturn_t xtkbd_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static int xtkbd_connect(struct serio *serio, struct serio_driver *drv)
static void xtkbd_disconnect(struct serio *serio)
static struct serio_device_id xtkbd_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, xtkbd_serio_ids);
static struct serio_driver xtkbd_drv = ;
static int __init xtkbd_init(void)
static void __exit xtkbd_exit(void)
module_init(xtkbd_init);
module_exit(xtkbd_exit);
