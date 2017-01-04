#define DRIVER_DESC	"MicroTouch serial touchscreen driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define MTOUCH_FORMAT_TABLET_STATUS_BIT 0x80
#define MTOUCH_FORMAT_TABLET_TOUCH_BIT 0x40
#define MTOUCH_FORMAT_TABLET_LENGTH 5
#define MTOUCH_RESPONSE_BEGIN_BYTE 0x01
#define MTOUCH_RESPONSE_END_BYTE 0x0d
#define MTOUCH_MAX_LENGTH 16
#define MTOUCH_MIN_XC 0
#define MTOUCH_MAX_XC 0x3fff
#define MTOUCH_MIN_YC 0
#define MTOUCH_MAX_YC 0x3fff
#define MTOUCH_GET_XC(data) (((data[2])<<7) | data[1])
#define MTOUCH_GET_YC(data) (((data[4])<<7) | data[3])
#define MTOUCH_GET_TOUCHED(data) (MTOUCH_FORMAT_TABLET_TOUCH_BIT & data[0])
struct mtouch ;
static void mtouch_process_format_tablet(struct mtouch *mtouch)
static void mtouch_process_response(struct mtouch *mtouch)
static irqreturn_t mtouch_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void mtouch_disconnect(struct serio *serio)
static int mtouch_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id mtouch_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, mtouch_serio_ids);
static struct serio_driver mtouch_drv = ;
static int __init mtouch_init(void)
static void __exit mtouch_exit(void)
module_init(mtouch_init);
module_exit(mtouch_exit);
