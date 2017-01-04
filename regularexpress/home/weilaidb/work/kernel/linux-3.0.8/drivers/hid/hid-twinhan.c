#define th_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int twinhan_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static const struct hid_device_id twinhan_devices[] = ;
MODULE_DEVICE_TABLE(hid, twinhan_devices);
static struct hid_driver twinhan_driver = ;
static int __init twinhan_init(void)
static void __exit twinhan_exit(void)
module_init(twinhan_init);
module_exit(twinhan_exit);
MODULE_LICENSE("GPL");
