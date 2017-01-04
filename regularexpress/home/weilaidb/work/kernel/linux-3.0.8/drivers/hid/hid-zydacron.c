struct zc_device ;
static __u8 *zc_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
#define zc_map_key_clear(c) \
hid_map_usage_clear(hi, usage, bit, max, EV_KEY, (c))
static int zc_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int zc_raw_event(struct hid_device *hdev, struct hid_report *report,
u8 *data, int size)
static int zc_probe(struct hid_device *hdev, const struct hid_device_id *id)
static void zc_remove(struct hid_device *hdev)
static const struct hid_device_id zc_devices[] = ;
MODULE_DEVICE_TABLE(hid, zc_devices);
static struct hid_driver zc_driver = ;
static int __init zc_init(void)
static void __exit zc_exit(void)
module_init(zc_init);
module_exit(zc_exit);
MODULE_LICENSE("GPL");
