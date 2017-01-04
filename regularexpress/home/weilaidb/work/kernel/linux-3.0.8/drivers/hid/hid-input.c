#define unk	KEY_UNKNOWN
static const unsigned char hid_keyboard[256] = ;
static const struct   hid_hat_to_axis[] = ;
#define map_abs(c)	hid_map_usage(hidinput, usage, &bit, &max, EV_ABS, (c))
#define map_rel(c)	hid_map_usage(hidinput, usage, &bit, &max, EV_REL, (c))
#define map_key(c)	hid_map_usage(hidinput, usage, &bit, &max, EV_KEY, (c))
#define map_led(c)	hid_map_usage(hidinput, usage, &bit, &max, EV_LED, (c))
#define map_abs_clear(c)	hid_map_usage_clear(hidinput, usage, &bit, \
&max, EV_ABS, (c))
#define map_key_clear(c)	hid_map_usage_clear(hidinput, usage, &bit, \
&max, EV_KEY, (c))
static bool match_scancode(struct hid_usage *usage,
unsigned int cur_idx, unsigned int scancode)
static bool match_keycode(struct hid_usage *usage,
unsigned int cur_idx, unsigned int keycode)
static bool match_index(struct hid_usage *usage,
unsigned int cur_idx, unsigned int idx)
typedef bool (*hid_usage_cmp_t)(struct hid_usage *usage,
unsigned int cur_idx, unsigned int val);
static struct hid_usage *hidinput_find_key(struct hid_device *hid,
hid_usage_cmp_t match,
unsigned int value,
unsigned int *usage_idx)
static struct hid_usage *hidinput_locate_usage(struct hid_device *hid,
const struct input_keymap_entry *ke,
unsigned int *index)
static int hidinput_getkeycode(struct input_dev *dev,
struct input_keymap_entry *ke)
static int hidinput_setkeycode(struct input_dev *dev,
const struct input_keymap_entry *ke,
unsigned int *old_keycode)
static __s32 hidinput_calc_abs_res(const struct hid_field *field, __u16 code)
static void hidinput_configure_usage(struct hid_input *hidinput, struct hid_field *field,
struct hid_usage *usage)
void hidinput_hid_event(struct hid_device *hid, struct hid_field *field, struct hid_usage *usage, __s32 value)
void hidinput_report_event(struct hid_device *hid, struct hid_report *report)
EXPORT_SYMBOL_GPL(hidinput_report_event);
int hidinput_find_field(struct hid_device *hid, unsigned int type, unsigned int code, struct hid_field **field)
EXPORT_SYMBOL_GPL(hidinput_find_field);
static int hidinput_open(struct input_dev *dev)
static void hidinput_close(struct input_dev *dev)
static void report_features(struct hid_device *hid)
int hidinput_connect(struct hid_device *hid, unsigned int force)
EXPORT_SYMBOL_GPL(hidinput_connect);
void hidinput_disconnect(struct hid_device *hid)
EXPORT_SYMBOL_GPL(hidinput_disconnect);
