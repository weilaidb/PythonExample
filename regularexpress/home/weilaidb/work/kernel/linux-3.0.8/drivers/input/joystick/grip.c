#define DRIVER_DESC	"Gravis GrIP protocol joystick driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define GRIP_MODE_GPP		1
#define GRIP_MODE_BD		2
#define GRIP_MODE_XT		3
#define GRIP_MODE_DC		4
#define GRIP_LENGTH_GPP		24
#define GRIP_STROBE_GPP		200
#define GRIP_LENGTH_XT		4
#define GRIP_STROBE_XT		64
#define GRIP_MAX_CHUNKS_XT	10
#define GRIP_MAX_BITS_XT	30
struct grip ;
static int grip_btn_gpp[] = ;
static int grip_btn_bd[] = ;
static int grip_btn_xt[] = ;
static int grip_btn_dc[] = ;
static int grip_abs_gpp[] = ;
static int grip_abs_bd[] = ;
static int grip_abs_xt[] = ;
static int grip_abs_dc[] = ;
static char *grip_name[] = ;
static int *grip_abs[] = ;
static int *grip_btn[] = ;
static char grip_anx[] = ;
static char grip_cen[] = ;
static int grip_gpp_read_packet(struct gameport *gameport, int shift, unsigned int *data)
static int grip_xt_read_packet(struct gameport *gameport, int shift, unsigned int *data)
static void grip_poll(struct gameport *gameport)
static int grip_open(struct input_dev *dev)
static void grip_close(struct input_dev *dev)
static int grip_connect(struct gameport *gameport, struct gameport_driver *drv)
static void grip_disconnect(struct gameport *gameport)
static struct gameport_driver grip_drv = ;
static int __init grip_init(void)
static void __exit grip_exit(void)
module_init(grip_init);
module_exit(grip_exit);
