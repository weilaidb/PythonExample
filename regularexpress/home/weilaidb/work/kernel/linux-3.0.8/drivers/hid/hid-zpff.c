struct zpff_device ;
static int zpff_play(struct input_dev *dev, void *data,
struct ff_effect *effect)
static int zpff_init(struct hid_device *hid)
static inline int zpff_init(struct hid_device *hid)
static int zp_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id zp_devices[] = ;
MODULE_DEVICE_TABLE(hid, zp_devices);
static struct hid_driver zp_driver = ;
static int __init zp_init(void)
static void __exit zp_exit(void)
module_init(zp_init);
module_exit(zp_exit);
MODULE_LICENSE("GPL");
