#define DRIVER_DESC	"Logitech WingMan Warrior joystick driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define WARRIOR_MAX_LENGTH	16
static char warrior_lengths[] = ;
struct warrior ;
static void warrior_process_packet(struct warrior *warrior)
static irqreturn_t warrior_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void warrior_disconnect(struct serio *serio)
static int warrior_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id warrior_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, warrior_serio_ids);
static struct serio_driver warrior_drv = ;
static int __init warrior_init(void)
static void __exit warrior_exit(void)
module_init(warrior_init);
module_exit(warrior_exit);
