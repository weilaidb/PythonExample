#define DRIVER_DESC	"Touchright serial touchscreen driver"
MODULE_AUTHOR("Rick Koch <n1gp@hotmail.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define TR_FORMAT_TOUCH_BIT	0x01
#define TR_FORMAT_STATUS_BYTE	0x40
#define TR_FORMAT_STATUS_MASK	~TR_FORMAT_TOUCH_BIT
#define TR_LENGTH 5
#define TR_MIN_XC 0
#define TR_MAX_XC 0x1ff
#define TR_MIN_YC 0
#define TR_MAX_YC 0x1ff
struct tr ;
static irqreturn_t tr_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void tr_disconnect(struct serio *serio)
static int tr_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id tr_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, tr_serio_ids);
static struct serio_driver tr_drv = ;
static int __init tr_init(void)
static void __exit tr_exit(void)
module_init(tr_init);
module_exit(tr_exit);
