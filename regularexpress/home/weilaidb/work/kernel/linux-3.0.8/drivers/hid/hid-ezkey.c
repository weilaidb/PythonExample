#define ez_map_rel(c)	hid_map_usage(hi, usage, bit, max, EV_REL, (c))
#define ez_map_key(c)	hid_map_usage(hi, usage, bit, max, EV_KEY, (c))
static int ez_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int ez_event(struct hid_device *hdev, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static const struct hid_device_id ez_devices[] = ;
MODULE_DEVICE_TABLE(hid, ez_devices);
static struct hid_driver ez_driver = ;
static int __init ez_init(void)
static void __exit ez_exit(void)
module_init(ez_init);
module_exit(ez_exit);
MODULE_LICENSE("GPL");
