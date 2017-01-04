#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define APPLE_RDESC_JIS		0x0001
#define APPLE_IGNORE_MOUSE	0x0002
#define APPLE_HAS_FN		0x0004
#define APPLE_HIDDEV		0x0008
#define APPLE_ISO_KEYBOARD	0x0010
#define APPLE_MIGHTYMOUSE	0x0020
#define APPLE_INVERT_HWHEEL	0x0040
#define APPLE_IGNORE_HIDINPUT	0x0080
#define APPLE_NUMLOCK_EMULATION	0x0100
#define APPLE_FLAG_FKEY		0x01
static unsigned int fnmode = 1;
module_param(fnmode, uint, 0644);
MODULE_PARM_DESC(fnmode, "Mode of fn key on Apple keyboards (0 = disabled, "
"[1] = fkeyslast, 2 = fkeysfirst)");
static unsigned int iso_layout = 1;
module_param(iso_layout, uint, 0644);
MODULE_PARM_DESC(iso_layout, "Enable/Disable hardcoded ISO-layout of the keyboard. "
"(0 = disabled, [1] = enabled)");
struct apple_sc ;
struct apple_key_translation ;
static const struct apple_key_translation macbookair_fn_keys[] = ;
static const struct apple_key_translation apple_fn_keys[] = ;
static const struct apple_key_translation powerbook_fn_keys[] = ;
static const struct apple_key_translation powerbook_numlock_keys[] = ;
static const struct apple_key_translation apple_iso_keyboard[] = ;
static const struct apple_key_translation *apple_find_translation(
const struct apple_key_translation *table, u16 from)
static int hidinput_apple_event(struct hid_device *hid, struct input_dev *input,
struct hid_usage *usage, __s32 value)
static int apple_event(struct hid_device *hdev, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static __u8 *apple_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static void apple_setup_input(struct input_dev *input)
static int apple_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int apple_input_mapped(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int apple_probe(struct hid_device *hdev,
const struct hid_device_id *id)
static void apple_remove(struct hid_device *hdev)
static const struct hid_device_id apple_devices[] = ;
MODULE_DEVICE_TABLE(hid, apple_devices);
static struct hid_driver apple_driver = ;
static int __init apple_init(void)
static void __exit apple_exit(void)
module_init(apple_init);
module_exit(apple_exit);
MODULE_LICENSE("GPL");
