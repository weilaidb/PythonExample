#define DRIVER_DESC	"Guillemot Digital joystick driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define GUILLEMOT_MAX_START	600
#define GUILLEMOT_MAX_STROBE	60
#define GUILLEMOT_MAX_LENGTH	17
static short guillemot_abs_pad[] =
;
static short guillemot_btn_pad[] =
;
static struct  guillemot_hat_to_axis[16] = ;
struct guillemot_type ;
struct guillemot ;
static struct guillemot_type guillemot_type[] = ;
static int guillemot_read_packet(struct gameport *gameport, u8 *data)
static void guillemot_poll(struct gameport *gameport)
static int guillemot_open(struct input_dev *dev)
static void guillemot_close(struct input_dev *dev)
static int guillemot_connect(struct gameport *gameport, struct gameport_driver *drv)
static void guillemot_disconnect(struct gameport *gameport)
static struct gameport_driver guillemot_drv = ;
static int __init guillemot_init(void)
static void __exit guillemot_exit(void)
module_init(guillemot_init);
module_exit(guillemot_exit);
