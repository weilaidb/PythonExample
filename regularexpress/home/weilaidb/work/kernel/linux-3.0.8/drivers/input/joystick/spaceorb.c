#define DRIVER_DESC	"SpaceTec SpaceOrb 360 and Avenger 6dof controller driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define SPACEORB_MAX_LENGTH	64
static int spaceorb_buttons[] = ;
static int spaceorb_axes[] = ;
struct spaceorb ;
static unsigned char spaceorb_xor[] = "SpaceWare";
static unsigned char *spaceorb_errors[] = ;
static void spaceorb_process_packet(struct spaceorb *spaceorb)
static irqreturn_t spaceorb_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void spaceorb_disconnect(struct serio *serio)
static int spaceorb_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id spaceorb_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, spaceorb_serio_ids);
static struct serio_driver spaceorb_drv = ;
static int __init spaceorb_init(void)
static void __exit spaceorb_exit(void)
module_init(spaceorb_init);
module_exit(spaceorb_exit);
