#define DRIVER_DESC	"Serial mouse driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static const char *sermouse_protocols[] = ;
struct sermouse ;
static void sermouse_process_msc(struct sermouse *sermouse, signed char data)
static void sermouse_process_ms(struct sermouse *sermouse, signed char data)
static irqreturn_t sermouse_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void sermouse_disconnect(struct serio *serio)
static int sermouse_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id sermouse_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, sermouse_serio_ids);
static struct serio_driver sermouse_drv = ;
static int __init sermouse_init(void)
static void __exit sermouse_exit(void)
module_init(sermouse_init);
module_exit(sermouse_exit);
