#define ch_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int ch_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static const struct hid_device_id ch_devices[] = ;
MODULE_DEVICE_TABLE(hid, ch_devices);
static struct hid_driver ch_driver = ;
static int __init ch_init(void)
static void __exit ch_exit(void)
module_init(ch_init);
module_exit(ch_exit);
MODULE_LICENSE("GPL");
