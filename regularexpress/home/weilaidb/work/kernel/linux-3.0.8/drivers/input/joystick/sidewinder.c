#define DRIVER_DESC	"Microsoft SideWinder joystick family driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#undef SW_DEBUG
#undef SW_DEBUG_DATA
#define SW_START	600
#define SW_STROBE	60
#define SW_TIMEOUT	6
#define SW_KICK		45
#define SW_END		8
#define SW_FAIL		16
#define SW_BAD		2
#define SW_OK		64
#define SW_LENGTH	512
#define dbg(format, arg...) printk(KERN_DEBUG __FILE__ ": " format "\n" , ## arg)
#define dbg(format, arg...) do  while (0)
#define SW_ID_3DP	0
#define SW_ID_GP	1
#define SW_ID_PP	2
#define SW_ID_FFP	3
#define SW_ID_FSP	4
#define SW_ID_FFW	5
static char *sw_name[] = ;
static char sw_abs[][7] = ;
static char sw_bit[][7] = ;
static short sw_btn[][12] = ;
static struct  sw_hat_to_axis[] = ;
struct sw ;
static int sw_read_packet(struct gameport *gameport, unsigned char *buf, int length, int id)
#define GB(pos,num) sw_get_bits(buf, pos, num, sw->bits)
static __u64 sw_get_bits(unsigned char *buf, int pos, int num, char bits)
static void sw_init_digital(struct gameport *gameport)
static int sw_parity(__u64 t)
static int sw_check(__u64 t)
static int sw_parse(unsigned char *buf, struct sw *sw)
static int sw_read(struct sw *sw)
static void sw_poll(struct gameport *gameport)
static int sw_open(struct input_dev *dev)
static void sw_close(struct input_dev *dev)
static void sw_print_packet(char *name, int length, unsigned char *buf, char bits)
static void sw_3dp_id(unsigned char *buf, char *comment, size_t size)
static int sw_guess_mode(unsigned char *buf, int len)
static int sw_connect(struct gameport *gameport, struct gameport_driver *drv)
static void sw_disconnect(struct gameport *gameport)
static struct gameport_driver sw_drv = ;
static int __init sw_init(void)
static void __exit sw_exit(void)
module_init(sw_init);
module_exit(sw_exit);
