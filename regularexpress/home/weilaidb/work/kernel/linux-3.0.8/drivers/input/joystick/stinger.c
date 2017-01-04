#define DRIVER_DESC	"Gravis Stinger gamepad driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define STINGER_MAX_LENGTH 8
struct stinger ;
static void stinger_process_packet(struct stinger *stinger)
static irqreturn_t stinger_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void stinger_disconnect(struct serio *serio)
static int stinger_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id stinger_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, stinger_serio_ids);
static struct serio_driver stinger_drv = ;
static int __init stinger_init(void)
static void __exit stinger_exit(void)
module_init(stinger_init);
module_exit(stinger_exit);
