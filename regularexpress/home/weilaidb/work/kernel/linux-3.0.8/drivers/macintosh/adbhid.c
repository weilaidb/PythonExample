MODULE_AUTHOR("Franz Sirl <Franz.Sirl-kernel@lauterbach.com>");
static int restore_capslock_events;
module_param(restore_capslock_events, int, 0644);
MODULE_PARM_DESC(restore_capslock_events,
"Produce keypress events for capslock on both keyup and keydown.");
#define KEYB_KEYREG	0
#define KEYB_LEDREG	2
#define MOUSE_DATAREG	0
static int adb_message_handler(struct notifier_block *, unsigned long, void *);
static struct notifier_block adbhid_adb_notifier = ;
#define ADB_KEY_DEL		0x33
#define ADB_KEY_CMD		0x37
#define ADB_KEY_CAPSLOCK	0x39
#define ADB_KEY_FN		0x3f
#define ADB_KEY_FWDEL		0x75
#define ADB_KEY_POWER_OLD	0x7e
#define ADB_KEY_POWER		0x7f
static const u16 adb_to_linux_keycodes[128] = ;
struct adbhid ;
#define FLAG_FN_KEY_PRESSED		0x00000001
#define FLAG_POWER_FROM_FN		0x00000002
#define FLAG_EMU_FWDEL_DOWN		0x00000004
#define FLAG_CAPSLOCK_TRANSLATE		0x00000008
#define FLAG_CAPSLOCK_DOWN		0x00000010
#define FLAG_CAPSLOCK_IGNORE_NEXT	0x00000020
#define FLAG_POWER_KEY_PRESSED		0x00000040
static struct adbhid *adbhid[16];
static void adbhid_probe(void);
static void adbhid_input_keycode(int, int, int);
static void init_trackpad(int id);
static void init_trackball(int id);
static void init_turbomouse(int id);
static void init_microspeed(int id);
static void init_ms_a3(int id);
static struct adb_ids keyboard_ids;
static struct adb_ids mouse_ids;
static struct adb_ids buttons_ids;
#define ADB_KEYBOARD_UNKNOWN	0
#define ADB_KEYBOARD_ANSI	0x0100
#define ADB_KEYBOARD_ISO	0x0200
#define ADB_KEYBOARD_JIS	0x0300
#define ADBMOUSE_STANDARD_100	0
#define ADBMOUSE_STANDARD_200	1
#define ADBMOUSE_EXTENDED	2
#define ADBMOUSE_TRACKBALL	3
#define ADBMOUSE_TRACKPAD       4
#define ADBMOUSE_TURBOMOUSE5    5
#define ADBMOUSE_MICROSPEED	6
#define ADBMOUSE_TRACKBALLPRO	7
#define ADBMOUSE_MS_A3		8
#define ADBMOUSE_MACALLY2	9
static void
adbhid_keyboard_input(unsigned char *data, int nb, int apoll)
static void
adbhid_input_keycode(int id, int scancode, int repeat)
static void
adbhid_mouse_input(unsigned char *data, int nb, int autopoll)
static void
adbhid_buttons_input(unsigned char *data, int nb, int autopoll)
static struct adb_request led_request;
static int leds_pending[16];
static int leds_req_pending;
static int pending_devs[16];
static int pending_led_start;
static int pending_led_end;
static DEFINE_SPINLOCK(leds_lock);
static void leds_done(struct adb_request *req)
static void real_leds(unsigned char leds, int device)
static int adbhid_kbd_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
static void
adbhid_kbd_capslock_remember(void)
static int
adb_message_handler(struct notifier_block *this, unsigned long code, void *x)
static int
adbhid_input_register(int id, int default_id, int original_handler_id,
int current_handler_id, int mouse_kind)
static void adbhid_input_unregister(int id)
static u16
adbhid_input_reregister(int id, int default_id, int org_handler_id,
int cur_handler_id, int mk)
static void
adbhid_input_devcleanup(u16 exist)
static void
adbhid_probe(void)
static void
init_trackpad(int id)
static void
init_trackball(int id)
static void
init_turbomouse(int id)
static void
init_microspeed(int id)
static void
init_ms_a3(int id)
static int __init adbhid_init(void)
static void __exit adbhid_exit(void)
module_init(adbhid_init);
module_exit(adbhid_exit);
