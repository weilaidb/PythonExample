#define DRIVER_DESC	"ThrustMaster DirectConnect joystick driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define TMDC_MAX_START		600
#define TMDC_MAX_STROBE		60
#define TMDC_MAX_LENGTH		13
#define TMDC_MODE_M3DI		1
#define TMDC_MODE_3DRP		3
#define TMDC_MODE_AT		4
#define TMDC_MODE_FM		8
#define TMDC_MODE_FGP		163
#define TMDC_BYTE_ID		10
#define TMDC_BYTE_REV		11
#define TMDC_BYTE_DEF		12
#define TMDC_ABS		7
#define TMDC_ABS_HAT		4
#define TMDC_BTN		16
static const unsigned char tmdc_byte_a[16] = ;
static const unsigned char tmdc_byte_d[16] = ;
static const signed char tmdc_abs[TMDC_ABS] =
;
static const signed char tmdc_abs_hat[TMDC_ABS_HAT] =
;
static const signed char tmdc_abs_at[TMDC_ABS] =
;
static const signed char tmdc_abs_fm[TMDC_ABS] =
;
static const short tmdc_btn_pad[TMDC_BTN] =
;
static const short tmdc_btn_joy[TMDC_BTN] =
;
static const short tmdc_btn_fm[TMDC_BTN] =
;
static const short tmdc_btn_at[TMDC_BTN] =
;
static const struct  tmdc_hat_to_axis[] = ;
static const struct tmdc_model  tmdc_models[] = ;
struct tmdc_port ;
struct tmdc ;
static int tmdc_read_packet(struct gameport *gameport, unsigned char data[2][TMDC_MAX_LENGTH])
static int tmdc_parse_packet(struct tmdc_port *port, unsigned char *data)
static void tmdc_poll(struct gameport *gameport)
static int tmdc_open(struct input_dev *dev)
static void tmdc_close(struct input_dev *dev)
static int tmdc_setup_port(struct tmdc *tmdc, int idx, unsigned char *data)
static int tmdc_connect(struct gameport *gameport, struct gameport_driver *drv)
static void tmdc_disconnect(struct gameport *gameport)
static struct gameport_driver tmdc_drv = ;
static int __init tmdc_init(void)
static void __exit tmdc_exit(void)
module_init(tmdc_init);
module_exit(tmdc_exit);
