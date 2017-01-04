#define DRIVER_DESC	"Penmount serial touchscreen driver"
MODULE_AUTHOR("Rick Koch <n1gp@hotmail.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define	PM_MAX_LENGTH	5
struct pm ;
static irqreturn_t pm_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void pm_disconnect(struct serio *serio)
static int pm_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id pm_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, pm_serio_ids);
static struct serio_driver pm_drv = ;
static int __init pm_init(void)
static void __exit pm_exit(void)
module_init(pm_init);
module_exit(pm_exit);
