#define DRIVER_DESC	"Gunze AHL-51S touchscreen driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define	GUNZE_MAX_LENGTH	10
struct gunze ;
static void gunze_process_packet(struct gunze* gunze)
static irqreturn_t gunze_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void gunze_disconnect(struct serio *serio)
static int gunze_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id gunze_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, gunze_serio_ids);
static struct serio_driver gunze_drv = ;
static int __init gunze_init(void)
static void __exit gunze_exit(void)
module_init(gunze_init);
module_exit(gunze_exit);
