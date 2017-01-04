#define ks_map_key(c)	hid_map_usage(hi, usage, bit, max, EV_KEY, (c))
static int ks_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static const struct hid_device_id ks_devices[] = ;
MODULE_DEVICE_TABLE(hid, ks_devices);
static struct hid_driver ks_driver = ;
static int __init ks_init(void)
static void __exit ks_exit(void)
module_init(ks_init);
module_exit(ks_exit);
MODULE_LICENSE("GPL");
