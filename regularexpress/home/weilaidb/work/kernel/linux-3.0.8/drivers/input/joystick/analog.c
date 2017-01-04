#define DRIVER_DESC	"Analog joystick and gamepad driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define ANALOG_PORTS		16
static char *js[ANALOG_PORTS];
static unsigned int js_nargs;
static int analog_options[ANALOG_PORTS];
module_param_array_named(map, js, charp, &js_nargs, 0);
MODULE_PARM_DESC(map, "Describes analog joysticks type/capabilities");
#define ANALOG_RUDDER		0x00004
#define ANALOG_THROTTLE		0x00008
#define ANALOG_AXES_STD		0x0000f
#define ANALOG_BTNS_STD		0x000f0
#define ANALOG_BTNS_CHF		0x00100
#define ANALOG_HAT1_CHF		0x00200
#define ANALOG_HAT2_CHF		0x00400
#define ANALOG_HAT_FCS		0x00800
#define ANALOG_HATS_ALL		0x00e00
#define ANALOG_BTN_TL		0x01000
#define ANALOG_BTN_TR		0x02000
#define ANALOG_BTN_TL2		0x04000
#define ANALOG_BTN_TR2		0x08000
#define ANALOG_BTNS_TLR		0x03000
#define ANALOG_BTNS_TLR2	0x0c000
#define ANALOG_BTNS_GAMEPAD	0x0f000
#define ANALOG_HBTN_CHF		0x10000
#define ANALOG_ANY_CHF		0x10700
#define ANALOG_SAITEK		0x20000
#define ANALOG_EXTENSIONS	0x7ff00
#define ANALOG_GAMEPAD		0x80000
#define ANALOG_MAX_TIME		3
#define ANALOG_LOOP_TIME	2000
#define ANALOG_SAITEK_DELAY	200
#define ANALOG_SAITEK_TIME	2000
#define ANALOG_AXIS_TIME	2
#define ANALOG_INIT_RETRIES	8
#define ANALOG_FUZZ_BITS	2
#define ANALOG_FUZZ_MAGIC	36
#define ANALOG_MAX_NAME_LENGTH  128
#define ANALOG_MAX_PHYS_LENGTH	32
static short analog_axes[] = ;
static short analog_hats[] = ;
static short analog_pads[] = ;
static short analog_exts[] = ;
static short analog_pad_btn[] = ;
static short analog_joy_btn[] = ;
static unsigned char analog_chf[] = ;
struct analog ;
struct analog_port ;
#define GET_TIME(x)	do  while (0)
#define DELTA(x,y)	(cpu_has_tsc ? ((y) - (x)) : ((x) - (y) + ((x) < (y) ? CLOCK_TICK_RATE / HZ : 0)))
#define TIME_NAME	(cpu_has_tsc?"TSC":"PIT")
static unsigned int get_time_pit(void)
#elif defined(__x86_64__)
#define GET_TIME(x)	rdtscl(x)
#define DELTA(x,y)	((y)-(x))
#define TIME_NAME	"TSC"
#elif defined(__alpha__)
#define GET_TIME(x)	do  while (0)
#define DELTA(x,y)	((y)-(x))
#define TIME_NAME	"PCC"
#elif defined(CONFIG_MN10300)
#define GET_TIME(x)	do  while (0)
#define DELTA(x, y)	((x) - (y))
#define TIME_NAME	"TSC"
#define FAKE_TIME
static unsigned long analog_faketime = 0;
#define GET_TIME(x)     do  while(0)
#define DELTA(x,y)	((y)-(x))
#define TIME_NAME	"Unreliable"
#warning Precise timer not defined for this architecture.
static void analog_decode(struct analog *analog, int *axes, int *initial, int buttons)
static int analog_cooked_read(struct analog_port *port)
static int analog_button_read(struct analog_port *port, char saitek, char chf)
static void analog_poll(struct gameport *gameport)
static int analog_open(struct input_dev *dev)
static void analog_close(struct input_dev *dev)
static void analog_calibrate_timer(struct analog_port *port)
static void analog_name(struct analog *analog)
static int analog_init_device(struct analog_port *port, struct analog *analog, int index)
static int analog_init_masks(struct analog_port *port)
static int analog_init_port(struct gameport *gameport, struct gameport_driver *drv, struct analog_port *port)
static int analog_connect(struct gameport *gameport, struct gameport_driver *drv)
static void analog_disconnect(struct gameport *gameport)
struct analog_types ;
static struct analog_types analog_types[] = ;
static void analog_parse_options(void)
static struct gameport_driver analog_drv = ;
static int __init analog_init(void)
static void __exit analog_exit(void)
module_init(analog_init);
module_exit(analog_exit);
