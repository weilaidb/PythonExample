#define gy_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int gyration_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int gyration_event(struct hid_device *hdev, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static const struct hid_device_id gyration_devices[] = ;
MODULE_DEVICE_TABLE(hid, gyration_devices);
static struct hid_driver gyration_driver = ;
static int __init gyration_init(void)
static void __exit gyration_exit(void)
module_init(gyration_init);
module_exit(gyration_exit);
MODULE_LICENSE("GPL");
