#define DRIVER_DESC	"Stowaway keyboard driver"
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define SKBD_KEY_MASK	0x7f
#define SKBD_RELEASE	0x80
static unsigned char skbd_keycode[128] = ;
struct skbd ;
static irqreturn_t skbd_interrupt(struct serio *serio, unsigned char data,
unsigned int flags)
static int skbd_connect(struct serio *serio, struct serio_driver *drv)
static void skbd_disconnect(struct serio *serio)
static struct serio_device_id skbd_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, skbd_serio_ids);
static struct serio_driver skbd_drv = ;
static int __init skbd_init(void)
static void __exit skbd_exit(void)
module_init(skbd_init);
module_exit(skbd_exit);
