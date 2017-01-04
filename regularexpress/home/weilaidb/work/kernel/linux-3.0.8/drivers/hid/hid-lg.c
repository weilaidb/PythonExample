#define LG_RDESC		0x001
#define LG_BAD_RELATIVE_KEYS	0x002
#define LG_DUPLICATE_USAGES	0x004
#define LG_EXPANDED_KEYMAP	0x010
#define LG_IGNORE_DOUBLED_WHEEL	0x020
#define LG_WIRELESS		0x040
#define LG_INVERT_HWHEEL	0x080
#define LG_NOGET		0x100
#define LG_FF			0x200
#define LG_FF2			0x400
#define LG_RDESC_REL_ABS	0x800
#define LG_FF3			0x1000
#define LG_FF4			0x2000
static __u8 *lg_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
#define lg_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int lg_ultrax_remote_mapping(struct hid_input *hi,
struct hid_usage *usage, unsigned long **bit, int *max)
static int lg_dinovo_mapping(struct hid_input *hi, struct hid_usage *usage,
unsigned long **bit, int *max)
static int lg_wireless_mapping(struct hid_input *hi, struct hid_usage *usage,
unsigned long **bit, int *max)
static int lg_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int lg_input_mapped(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int lg_event(struct hid_device *hdev, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static int lg_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id lg_devices[] = ;
MODULE_DEVICE_TABLE(hid, lg_devices);
static struct hid_driver lg_driver = ;
static int __init lg_init(void)
static void __exit lg_exit(void)
module_init(lg_init);
module_exit(lg_exit);
MODULE_LICENSE("GPL");
