static __u8 *mr_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
#define mr_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int mr_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static const struct hid_device_id mr_devices[] = ;
MODULE_DEVICE_TABLE(hid, mr_devices);
static struct hid_driver mr_driver = ;
static int __init mr_init(void)
static void __exit mr_exit(void)
module_init(mr_init);
module_exit(mr_exit);
MODULE_LICENSE("GPL");
