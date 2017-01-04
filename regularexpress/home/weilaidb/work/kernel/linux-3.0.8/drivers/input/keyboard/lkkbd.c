#define DRIVER_DESC	"LK keyboard driver"
MODULE_AUTHOR("Jan-Benedict Glaw <jbglaw@lug-owl.de>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static int bell_volume = 100;
module_param(bell_volume, int, 0);
MODULE_PARM_DESC(bell_volume, "Bell volume (in %). default is 100%");
static int keyclick_volume = 100;
module_param(keyclick_volume, int, 0);
MODULE_PARM_DESC(keyclick_volume, "Keyclick volume (in %), default is 100%");
static int ctrlclick_volume = 100;
module_param(ctrlclick_volume, int, 0);
MODULE_PARM_DESC(ctrlclick_volume, "Ctrlclick volume (in %), default is 100%");
static int lk201_compose_is_alt;
module_param(lk201_compose_is_alt, int, 0);
MODULE_PARM_DESC(lk201_compose_is_alt,
"If set non-zero, LK201' Compose key will act as an Alt key");
#undef LKKBD_DEBUG
#define DBG(x...) printk(x)
#define DBG(x...) do  while (0)
#define LK_LED_WAIT		0x81
#define LK_LED_COMPOSE		0x82
#define LK_LED_SHIFTLOCK	0x84
#define LK_LED_SCROLLLOCK	0x88
#define LK_CMD_LED_ON		0x13
#define LK_CMD_LED_OFF		0x11
#define LK_MODE_DOWN		0x80
#define LK_MODE_AUTODOWN	0x82
#define LK_MODE_UPDOWN		0x86
#define LK_CMD_SET_MODE(mode, div)	((mode) | ((div) << 3))
#define LK_CMD_ENABLE_KEYCLICK	0x1b
#define LK_CMD_DISABLE_KEYCLICK	0x99
#define LK_CMD_DISABLE_BELL	0xa1
#define LK_CMD_SOUND_BELL	0xa7
#define LK_CMD_ENABLE_BELL	0x23
#define LK_CMD_DISABLE_CTRCLICK	0xb9
#define LK_CMD_ENABLE_CTRCLICK	0xbb
#define LK_CMD_SET_DEFAULTS	0xd3
#define LK_CMD_POWERCYCLE_RESET	0xfd
#define LK_CMD_ENABLE_LK401	0xe9
#define LK_CMD_REQUEST_ID	0xab
#define LK_STUCK_KEY		0x3d
#define LK_SELFTEST_FAILED	0x3e
#define LK_ALL_KEYS_UP		0xb3
#define LK_METRONOME		0xb4
#define LK_OUTPUT_ERROR		0xb5
#define LK_INPUT_ERROR		0xb6
#define LK_KBD_LOCKED		0xb7
#define LK_KBD_TEST_MODE_ACK	0xb8
#define LK_PREFIX_KEY_DOWN	0xb9
#define LK_MODE_CHANGE_ACK	0xba
#define LK_RESPONSE_RESERVED	0xbb
#define LK_NUM_KEYCODES		256
#define LK_NUM_IGNORE_BYTES	6
static unsigned short lkkbd_keycode[LK_NUM_KEYCODES] = ;
#define CHECK_LED(LK, VAR_ON, VAR_OFF, LED, BITS) do  while (0)
struct lkkbd ;
static struct  lk_response[] = ;
static unsigned char *response_name(unsigned char value)
static unsigned char volume_to_hw(int volume_percent)
static void lkkbd_detection_done(struct lkkbd *lk)
static irqreturn_t lkkbd_interrupt(struct serio *serio,
unsigned char data, unsigned int flags)
static void lkkbd_toggle_leds(struct lkkbd *lk)
static void lkkbd_toggle_keyclick(struct lkkbd *lk, bool on)
static int lkkbd_event(struct input_dev *dev,
unsigned int type, unsigned int code, int value)
static void lkkbd_reinit(struct work_struct *work)
static int lkkbd_connect(struct serio *serio, struct serio_driver *drv)
static void lkkbd_disconnect(struct serio *serio)
static struct serio_device_id lkkbd_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, lkkbd_serio_ids);
static struct serio_driver lkkbd_drv = ;
static int __init lkkbd_init(void)
static void __exit lkkbd_exit(void)
module_init(lkkbd_init);
module_exit(lkkbd_exit);
