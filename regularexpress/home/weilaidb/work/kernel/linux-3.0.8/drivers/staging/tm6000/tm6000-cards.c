#define TM6000_BOARD_UNKNOWN			0
#define TM5600_BOARD_GENERIC			1
#define TM6000_BOARD_GENERIC			2
#define TM6010_BOARD_GENERIC			3
#define TM5600_BOARD_10MOONS_UT821		4
#define TM5600_BOARD_10MOONS_UT330		5
#define TM6000_BOARD_ADSTECH_DUAL_TV		6
#define TM6000_BOARD_FREECOM_AND_SIMILAR	7
#define TM6000_BOARD_ADSTECH_MINI_DUAL_TV	8
#define TM6010_BOARD_HAUPPAUGE_900H		9
#define TM6010_BOARD_BEHOLD_WANDER		10
#define TM6010_BOARD_BEHOLD_VOYAGER		11
#define TM6010_BOARD_TERRATEC_CINERGY_HYBRID_XE	12
#define TM6010_BOARD_TWINHAN_TU501		13
#define TM6010_BOARD_BEHOLD_WANDER_LITE		14
#define TM6010_BOARD_BEHOLD_VOYAGER_LITE	15
#define TM5600_BOARD_TERRATEC_GRABSTER		16
#define is_generic(model) ((model == TM6000_BOARD_UNKNOWN) || \
(model == TM5600_BOARD_GENERIC) || \
(model == TM6000_BOARD_GENERIC) || \
(model == TM6010_BOARD_GENERIC))
#define TM6000_MAXBOARDS        16
static unsigned int card[]     = ;
module_param_array(card,  int, NULL, 0444);
static unsigned long tm6000_devused;
struct tm6000_board ;
struct tm6000_board tm6000_boards[] = ;
struct usb_device_id tm6000_id_table[] = ;
void tm6000_flash_led(struct tm6000_core *dev, u8 state)
int tm6000_xc5000_callback(void *ptr, int component, int command, int arg)
EXPORT_SYMBOL_GPL(tm6000_xc5000_callback);
int tm6000_tuner_callback(void *ptr, int component, int command, int arg)
EXPORT_SYMBOL_GPL(tm6000_tuner_callback);
int tm6000_cards_setup(struct tm6000_core *dev)
;
static void tm6000_config_tuner(struct tm6000_core *dev)
static int fill_board_specific_data(struct tm6000_core *dev)
static void use_alternative_detection_method(struct tm6000_core *dev)
static int tm6000_init_dev(struct tm6000_core *dev)
#define hb_mult(wMaxPacketSize) (1 + (((wMaxPacketSize) >> 11) & 0x03))
static void get_max_endpoint(struct usb_device *udev,
struct usb_host_interface *alt,
char *msgtype,
struct usb_host_endpoint *curr_e,
struct tm6000_endpoint *tm_ep)
static int tm6000_usb_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void tm6000_usb_disconnect(struct usb_interface *interface)
static struct usb_driver tm6000_usb_driver = ;
static int __init tm6000_module_init(void)
static void __exit tm6000_module_exit(void)
module_init(tm6000_module_init);
module_exit(tm6000_module_exit);
MODULE_DESCRIPTION("Trident TVMaster TM5600/TM6000/TM6010 USB2 adapter");
MODULE_AUTHOR("Mauro Carvalho Chehab");
MODULE_LICENSE("GPL");
