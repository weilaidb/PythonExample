#define DRIVER_DESC	"Dynapro serial touchscreen driver"
MODULE_AUTHOR("Tias Guns <tias@ulyssis.org>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define DYNAPRO_FORMAT_TOUCH_BIT 0x40
#define DYNAPRO_FORMAT_LENGTH 3
#define DYNAPRO_RESPONSE_BEGIN_BYTE 0x80
#define DYNAPRO_MIN_XC 0
#define DYNAPRO_MAX_XC 0x3ff
#define DYNAPRO_MIN_YC 0
#define DYNAPRO_MAX_YC 0x3ff
#define DYNAPRO_GET_XC(data) (data[1] | ((data[0] & 0x38) << 4))
#define DYNAPRO_GET_YC(data) (data[2] | ((data[0] & 0x07) << 7))
#define DYNAPRO_GET_TOUCHED(data) (DYNAPRO_FORMAT_TOUCH_BIT & data[0])
struct dynapro ;
static void dynapro_process_data(struct dynapro *pdynapro)
static irqreturn_t dynapro_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void dynapro_disconnect(struct serio *serio)
static int dynapro_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id dynapro_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, dynapro_serio_ids);
static struct serio_driver dynapro_drv = ;
static int __init dynapro_init(void)
static void __exit dynapro_exit(void)
module_init(dynapro_init);
module_exit(dynapro_exit);
