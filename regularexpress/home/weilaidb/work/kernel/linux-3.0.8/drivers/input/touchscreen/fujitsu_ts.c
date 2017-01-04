#define DRIVER_DESC	"Fujitsu serial touchscreen driver"
MODULE_AUTHOR("Dmitry Torokhov <dtor@mail.ru>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define FUJITSU_LENGTH 5
struct fujitsu ;
static irqreturn_t fujitsu_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void fujitsu_disconnect(struct serio *serio)
static int fujitsu_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id fujitsu_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, fujitsu_serio_ids);
static struct serio_driver fujitsu_drv = ;
static int __init fujitsu_init(void)
static void __exit fujitsu_exit(void)
module_init(fujitsu_init);
module_exit(fujitsu_exit);
