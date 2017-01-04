#define DRIVER_DESC	"Newton keyboard driver"
MODULE_AUTHOR("Justin Cormack <j.cormack@doc.ic.ac.uk>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define NKBD_KEY	0x7f
#define NKBD_PRESS	0x80
static unsigned char nkbd_keycode[128] = ;
struct nkbd ;
static irqreturn_t nkbd_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static int nkbd_connect(struct serio *serio, struct serio_driver *drv)
static void nkbd_disconnect(struct serio *serio)
static struct serio_device_id nkbd_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, nkbd_serio_ids);
static struct serio_driver nkbd_drv = ;
static int __init nkbd_init(void)
static void __exit nkbd_exit(void)
module_init(nkbd_init);
module_exit(nkbd_exit);
