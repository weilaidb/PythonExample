#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static bool emulate_3button = true;
module_param(emulate_3button, bool, 0644);
MODULE_PARM_DESC(emulate_3button, "Emulate a middle button");
static int middle_button_start = -350;
static int middle_button_stop = +350;
static bool emulate_scroll_wheel = true;
module_param(emulate_scroll_wheel, bool, 0644);
MODULE_PARM_DESC(emulate_scroll_wheel, "Emulate a scroll wheel");
static unsigned int scroll_speed = 32;
static int param_set_scroll_speed(const char *val, struct kernel_param *kp)
module_param_call(scroll_speed, param_set_scroll_speed, param_get_uint, &scroll_speed, 0644);
MODULE_PARM_DESC(scroll_speed, "Scroll speed, value from 0 (slow) to 63 (fast)");
static bool scroll_acceleration = false;
module_param(scroll_acceleration, bool, 0644);
MODULE_PARM_DESC(scroll_acceleration, "Accelerate sequential scroll events");
static bool report_touches = true;
module_param(report_touches, bool, 0644);
MODULE_PARM_DESC(report_touches, "Emit touch records (otherwise, only use them for emulation)");
static bool report_undeciphered;
module_param(report_undeciphered, bool, 0644);
MODULE_PARM_DESC(report_undeciphered, "Report undeciphered multi-touch state field using a MSC_RAW event");
#define TRACKPAD_REPORT_ID 0x28
#define MOUSE_REPORT_ID    0x29
#define DOUBLE_REPORT_ID   0xf7
#define TOUCH_STATE_MASK  0xf0
#define TOUCH_STATE_NONE  0x00
#define TOUCH_STATE_START 0x30
#define TOUCH_STATE_DRAG  0x40
#define SCROLL_ACCEL_DEFAULT 7
#define NO_TOUCHES -1
#define SINGLE_TOUCH_UP -2
struct magicmouse_sc ;
static int magicmouse_firm_touch(struct magicmouse_sc *msc)
static void magicmouse_emit_buttons(struct magicmouse_sc *msc, int state)
static void magicmouse_emit_touch(struct magicmouse_sc *msc, int raw_id, u8 *tdata)
static int magicmouse_raw_event(struct hid_device *hdev,
struct hid_report *report, u8 *data, int size)
static void magicmouse_setup_input(struct input_dev *input, struct hid_device *hdev)
static int magicmouse_input_mapping(struct hid_device *hdev,
struct hid_input *hi, struct hid_field *field,
struct hid_usage *usage, unsigned long **bit, int *max)
static int magicmouse_probe(struct hid_device *hdev,
const struct hid_device_id *id)
static void magicmouse_remove(struct hid_device *hdev)
static const struct hid_device_id magic_mice[] = ;
MODULE_DEVICE_TABLE(hid, magic_mice);
static struct hid_driver magicmouse_driver = ;
static int __init magicmouse_init(void)
static void __exit magicmouse_exit(void)
module_init(magicmouse_init);
module_exit(magicmouse_exit);
MODULE_LICENSE("GPL");
