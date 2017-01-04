#define DRIVER_DESC	"Handykey Twiddler keyboard as a joystick driver"
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define TWIDJOY_MAX_LENGTH 5
static struct twidjoy_button_spec
twidjoy_buttons[] = ;
struct twidjoy ;
static void twidjoy_process_packet(struct twidjoy *twidjoy)
static irqreturn_t twidjoy_interrupt(struct serio *serio, unsigned char data, unsigned int flags)
static void twidjoy_disconnect(struct serio *serio)
static int twidjoy_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id twidjoy_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, twidjoy_serio_ids);
static struct serio_driver twidjoy_drv = ;
static int __init twidjoy_init(void)
static void __exit twidjoy_exit(void)
module_init(twidjoy_init);
module_exit(twidjoy_exit);
