#define DRIVER_DESC	"Hampshire serial touchscreen driver"
MODULE_AUTHOR("Adam Bennett <abennett72@gmail.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define HAMPSHIRE_FORMAT_TOUCH_BIT 0x40
#define HAMPSHIRE_FORMAT_LENGTH 4
#define HAMPSHIRE_RESPONSE_BEGIN_BYTE 0x80
#define HAMPSHIRE_MIN_XC 0
#define HAMPSHIRE_MAX_XC 0x1000
#define HAMPSHIRE_MIN_YC 0
#define HAMPSHIRE_MAX_YC 0x1000
#define HAMPSHIRE_GET_XC(data) (((data[3] & 0x0c) >> 2) | (data[1] << 2) | ((data[0] & 0x38) << 6))
#define HAMPSHIRE_GET_YC(data) ((data[3] & 0x03) | (data[2] << 2) | ((data[0] & 0x07) << 9))
#define HAMPSHIRE_GET_TOUCHED(data) (HAMPSHIRE_FORMAT_TOUCH_BIT & data[0])
struct hampshire ;
static void hampshire_process_data(struct hampshire *phampshire)
static irqreturn_t hampshire_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void hampshire_disconnect(struct serio *serio)
static int hampshire_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id hampshire_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, hampshire_serio_ids);
static struct serio_driver hampshire_drv = ;
static int __init hampshire_init(void)
static void __exit hampshire_exit(void)
module_init(hampshire_init);
module_exit(hampshire_exit);
