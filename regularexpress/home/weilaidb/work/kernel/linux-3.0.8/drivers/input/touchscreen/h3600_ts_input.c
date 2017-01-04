#define DRIVER_DESC	"H3600 touchscreen driver"
MODULE_AUTHOR("James Simmons <jsimmons@transvirtual.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define CHAR_SOF                0x02
#define CHAR_EOF                0x03
#define FRAME_OVERHEAD          3
#define VERSION_ID              0
#define KEYBD_ID                2
#define TOUCHS_ID               3
#define EEPROM_READ_ID          4
#define EEPROM_WRITE_ID         5
#define THERMAL_ID              6
#define NOTIFY_LED_ID           8
#define BATTERY_ID              9
#define SPI_READ_ID             0x0b
#define SPI_WRITE_ID            0x0c
#define FLITE_ID                0x0d
#define STX_ID                  0xa1
#define MAX_ID                  14
#define H3600_MAX_LENGTH 16
#define H3600_KEY 0xf
#define H3600_SCANCODE_RECORD	1
#define H3600_SCANCODE_CALENDAR 2
#define H3600_SCANCODE_CONTACTS 3
#define H3600_SCANCODE_Q	4
#define	H3600_SCANCODE_START	5
#define	H3600_SCANCODE_UP	6
#define H3600_SCANCODE_RIGHT	7
#define H3600_SCANCODE_LEFT	8
#define H3600_SCANCODE_DOWN	9
struct h3600_dev ;
static irqreturn_t action_button_handler(int irq, void *dev_id)
static irqreturn_t npower_button_handler(int irq, void *dev_id)
static int flite_brightness = 25;
enum flite_pwr ;
unsigned int h3600_flite_power(struct input_dev *dev, enum flite_pwr pwr)
static void h3600ts_process_packet(struct h3600_dev *ts)
static int h3600ts_event(struct input_dev *dev, unsigned int type,
unsigned int code, int value)
static int state;
#define STATE_SOF       0
#define STATE_ID        1
#define STATE_DATA      2
#define STATE_EOF       3
static irqreturn_t h3600ts_interrupt(struct serio *serio, unsigned char data,
unsigned int flags)
static int h3600ts_connect(struct serio *serio, struct serio_driver *drv)
static void h3600ts_disconnect(struct serio *serio)
static struct serio_device_id h3600ts_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, h3600ts_serio_ids);
static struct serio_driver h3600ts_drv = ;
static int __init h3600ts_init(void)
static void __exit h3600ts_exit(void)
module_init(h3600ts_init);
module_exit(h3600ts_exit);
