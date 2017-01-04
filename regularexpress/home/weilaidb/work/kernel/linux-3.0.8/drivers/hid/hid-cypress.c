#define CP_RDESC_SWAPPED_MIN_MAX	0x01
#define CP_2WHEEL_MOUSE_HACK		0x02
#define CP_2WHEEL_MOUSE_HACK_ON		0x04
static __u8 *cp_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static int cp_input_mapped(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int cp_event(struct hid_device *hdev, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static int cp_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id cp_devices[] = ;
MODULE_DEVICE_TABLE(hid, cp_devices);
static struct hid_driver cp_driver = ;
static int __init cp_init(void)
static void __exit cp_exit(void)
module_init(cp_init);
module_exit(cp_exit);
MODULE_LICENSE("GPL");
