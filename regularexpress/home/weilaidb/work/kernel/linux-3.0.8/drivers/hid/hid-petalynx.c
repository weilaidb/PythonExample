static __u8 *pl_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
#define pl_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int pl_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int pl_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id pl_devices[] = ;
MODULE_DEVICE_TABLE(hid, pl_devices);
static struct hid_driver pl_driver = ;
static int __init pl_init(void)
static void __exit pl_exit(void)
module_init(pl_init);
module_exit(pl_exit);
MODULE_LICENSE("GPL");
