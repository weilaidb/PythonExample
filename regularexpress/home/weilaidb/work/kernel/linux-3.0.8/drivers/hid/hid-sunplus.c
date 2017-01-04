static __u8 *sp_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
#define sp_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int sp_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static const struct hid_device_id sp_devices[] = ;
MODULE_DEVICE_TABLE(hid, sp_devices);
static struct hid_driver sp_driver = ;
static int __init sp_init(void)
static void __exit sp_exit(void)
module_init(sp_init);
module_exit(sp_exit);
MODULE_LICENSE("GPL");
