struct sjoyff_device ;
static int hid_sjoyff_play(struct input_dev *dev, void *data,
struct ff_effect *effect)
static int sjoyff_init(struct hid_device *hid)
static inline int sjoyff_init(struct hid_device *hid)
static int sjoy_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id sjoy_devices[] = ;
MODULE_DEVICE_TABLE(hid, sjoy_devices);
static struct hid_driver sjoy_driver = ;
static int __init sjoy_init(void)
static void __exit sjoy_exit(void)
module_init(sjoy_init);
module_exit(sjoy_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jussi Kivilinna");
