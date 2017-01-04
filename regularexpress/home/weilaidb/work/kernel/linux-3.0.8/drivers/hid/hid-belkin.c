#define BELKIN_HIDDEV	0x01
#define BELKIN_WKBD	0x02
#define belkin_map_key_clear(c)	hid_map_usage_clear(hi, usage, bit, max, \
EV_KEY, (c))
static int belkin_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int belkin_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id belkin_devices[] = ;
MODULE_DEVICE_TABLE(hid, belkin_devices);
static struct hid_driver belkin_driver = ;
static int __init belkin_init(void)
static void __exit belkin_exit(void)
module_init(belkin_init);
module_exit(belkin_exit);
MODULE_LICENSE("GPL");
