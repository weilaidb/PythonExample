#define DRIVER_DESC	"Sahara TouchIT-213 serial touchscreen driver"
MODULE_AUTHOR("Claudio Nieder <private@claudio.ch>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define T213_FORMAT_TOUCH_BIT	0x01
#define T213_FORMAT_STATUS_BYTE	0x80
#define T213_FORMAT_STATUS_MASK	~T213_FORMAT_TOUCH_BIT
#define T213_MIN_XC 0
#define T213_MAX_XC 0x07ff
#define T213_MIN_YC 0
#define T213_MAX_YC 0x07ff
struct touchit213 ;
static irqreturn_t touchit213_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void touchit213_disconnect(struct serio *serio)
static int touchit213_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id touchit213_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, touchit213_serio_ids);
static struct serio_driver touchit213_drv = ;
static int __init touchit213_init(void)
static void __exit touchit213_exit(void)
module_init(touchit213_init);
module_exit(touchit213_exit);
