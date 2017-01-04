#define DRIVER_DESC	"Magellan and SpaceMouse 6dof controller driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define	MAGELLAN_MAX_LENGTH	32
static int magellan_buttons[] = ;
static int magellan_axes[] = ;
struct magellan ;
static int magellan_crunch_nibbles(unsigned char *data, int count)
static void magellan_process_packet(struct magellan* magellan)
static irqreturn_t magellan_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void magellan_disconnect(struct serio *serio)
static int magellan_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id magellan_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, magellan_serio_ids);
static struct serio_driver magellan_drv = ;
static int __init magellan_init(void)
static void __exit magellan_exit(void)
module_init(magellan_init);
module_exit(magellan_exit);
