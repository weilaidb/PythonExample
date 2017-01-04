#define DRIVER_DESC	"SpaceTec SpaceBall 2003/3003/4000 FLX driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define SPACEBALL_MAX_LENGTH	128
#define SPACEBALL_MAX_ID	9
#define SPACEBALL_1003      1
#define SPACEBALL_2003B     3
#define SPACEBALL_2003C     4
#define SPACEBALL_3003C     7
#define SPACEBALL_4000FLX   8
#define SPACEBALL_4000FLX_L 9
static int spaceball_axes[] = ;
static char *spaceball_names[] = ;
struct spaceball ;
static void spaceball_process_packet(struct spaceball* spaceball)
static irqreturn_t spaceball_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void spaceball_disconnect(struct serio *serio)
static int spaceball_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id spaceball_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, spaceball_serio_ids);
static struct serio_driver spaceball_drv = ;
static int __init spaceball_init(void)
static void __exit spaceball_exit(void)
module_init(spaceball_init);
module_exit(spaceball_exit);
