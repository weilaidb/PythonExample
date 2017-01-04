#define ts_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int ts_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static const struct hid_device_id ts_devices[] = ;
MODULE_DEVICE_TABLE(hid, ts_devices);
static struct hid_driver ts_driver = ;
static int __init ts_init(void)
static void __exit ts_exit(void)
module_init(ts_init);
module_exit(ts_exit);
MODULE_LICENSE("GPL");
