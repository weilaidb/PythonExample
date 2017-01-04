#define DRIVER_DESC	"Touchwindow serial touchscreen driver"
MODULE_AUTHOR("Rick Koch <n1gp@hotmail.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define TW_LENGTH 3
#define TW_MIN_XC 0
#define TW_MAX_XC 0xff
#define TW_MIN_YC 0
#define TW_MAX_YC 0xff
struct tw ;
static irqreturn_t tw_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void tw_disconnect(struct serio *serio)
static int tw_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id tw_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, tw_serio_ids);
static struct serio_driver tw_drv = ;
static int __init tw_init(void)
static void __exit tw_exit(void)
module_init(tw_init);
module_exit(tw_exit);
