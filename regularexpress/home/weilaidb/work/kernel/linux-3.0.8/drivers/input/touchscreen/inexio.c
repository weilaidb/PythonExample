#define DRIVER_DESC	"iNexio serial touchscreen driver"
MODULE_AUTHOR("Richard Lemon <richard@codelemon.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define INEXIO_FORMAT_TOUCH_BIT 0x01
#define INEXIO_FORMAT_LENGTH 5
#define INEXIO_RESPONSE_BEGIN_BYTE 0x80
#define INEXIO_MAX_LENGTH 16
#define INEXIO_MIN_XC 0
#define INEXIO_MAX_XC 0x3fff
#define INEXIO_MIN_YC 0
#define INEXIO_MAX_YC 0x3fff
#define INEXIO_GET_XC(data) (((data[1])<<7) | data[2])
#define INEXIO_GET_YC(data) (((data[3])<<7) | data[4])
#define INEXIO_GET_TOUCHED(data) (INEXIO_FORMAT_TOUCH_BIT & data[0])
struct inexio ;
static void inexio_process_data(struct inexio *pinexio)
static irqreturn_t inexio_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void inexio_disconnect(struct serio *serio)
static int inexio_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id inexio_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, inexio_serio_ids);
static struct serio_driver inexio_drv = ;
static int __init inexio_init(void)
static void __exit inexio_exit(void)
module_init(inexio_init);
module_exit(inexio_exit);
