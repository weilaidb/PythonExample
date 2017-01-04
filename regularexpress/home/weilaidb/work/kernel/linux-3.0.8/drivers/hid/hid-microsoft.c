#define MS_HIDINPUT	0x01
#define MS_ERGONOMY	0x02
#define MS_PRESENTER	0x04
#define MS_RDESC	0x08
#define MS_NOGET	0x10
static __u8 *ms_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
#define ms_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int ms_ergonomy_kb_quirk(struct hid_input *hi, struct hid_usage *usage,
unsigned long **bit, int *max)
static int ms_presenter_8k_quirk(struct hid_input *hi, struct hid_usage *usage,
unsigned long **bit, int *max)
static int ms_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int ms_event(struct hid_device *hdev, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static int ms_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id ms_devices[] = ;
MODULE_DEVICE_TABLE(hid, ms_devices);
static struct hid_driver ms_driver = ;
static int __init ms_init(void)
static void __exit ms_exit(void)
module_init(ms_init);
module_exit(ms_exit);
MODULE_LICENSE("GPL");
