#define DRIVER_DESC	"Wacom W8001 serial touchscreen driver"
MODULE_AUTHOR("Jaya Kumar <jayakumar.lkml@gmail.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define W8001_MAX_LENGTH	11
#define W8001_LEAD_MASK		0x80
#define W8001_LEAD_BYTE		0x80
#define W8001_TAB_MASK		0x40
#define W8001_TAB_BYTE		0x40
#define W8001_TOUCH_MASK	(0x10 | W8001_LEAD_MASK)
#define W8001_TOUCH_BYTE	(0x10 | W8001_LEAD_BYTE)
#define W8001_QUERY_PACKET	0x20
#define W8001_CMD_STOP		'0'
#define W8001_CMD_START		'1'
#define W8001_CMD_QUERY		'*'
#define W8001_CMD_TOUCHQUERY	'%'
#define W8001_PKTLEN_TOUCH93	5
#define W8001_PKTLEN_TOUCH9A	7
#define W8001_PKTLEN_TPCPEN	9
#define W8001_PKTLEN_TPCCTL	11
#define W8001_PKTLEN_TOUCH2FG	13
#define W8001_PEN_RESOLUTION    100
#define W8001_TOUCH_RESOLUTION  10
struct w8001_coord ;
struct w8001_touch_query ;
struct w8001 ;
static void parse_pen_data(u8 *data, struct w8001_coord *coord)
static void parse_single_touch(u8 *data, struct w8001_coord *coord)
static void scale_touch_coordinates(struct w8001 *w8001,
unsigned int *x, unsigned int *y)
static void parse_multi_touch(struct w8001 *w8001)
static void parse_touchquery(u8 *data, struct w8001_touch_query *query)
static void report_pen_events(struct w8001 *w8001, struct w8001_coord *coord)
static void report_single_touch(struct w8001 *w8001, struct w8001_coord *coord)
static irqreturn_t w8001_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static int w8001_command(struct w8001 *w8001, unsigned char command,
bool wait_response)
static int w8001_setup(struct w8001 *w8001)
static void w8001_disconnect(struct serio *serio)
static int w8001_connect(struct serio *serio, struct serio_driver *drv)
static struct serio_device_id w8001_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, w8001_serio_ids);
static struct serio_driver w8001_drv = ;
static int __init w8001_init(void)
static void __exit w8001_exit(void)
module_init(w8001_init);
module_exit(w8001_exit);
