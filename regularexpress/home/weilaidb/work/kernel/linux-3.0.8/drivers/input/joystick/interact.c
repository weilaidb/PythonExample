#define DRIVER_DESC	"InterAct digital joystick driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define INTERACT_MAX_START	600
#define INTERACT_MAX_STROBE	60
#define INTERACT_MAX_LENGTH	32
#define INTERACT_TYPE_HHFX	0
#define INTERACT_TYPE_PP8D	1
struct interact ;
static short interact_abs_hhfx[] =
;
static short interact_abs_pp8d[] =
;
static short interact_btn_hhfx[] =
;
static short interact_btn_pp8d[] =
;
struct interact_type ;
static struct interact_type interact_type[] = ;
static int interact_read_packet(struct gameport *gameport, int length, u32 *data)
static void interact_poll(struct gameport *gameport)
static int interact_open(struct input_dev *dev)
static void interact_close(struct input_dev *dev)
static int interact_connect(struct gameport *gameport, struct gameport_driver *drv)
static void interact_disconnect(struct gameport *gameport)
static struct gameport_driver interact_drv = ;
static int __init interact_init(void)
static void __exit interact_exit(void)
module_init(interact_init);
module_exit(interact_exit);
