struct gaff_device ;
static int hid_gaff_play(struct input_dev *dev, void *data,
struct ff_effect *effect)
static int gaff_init(struct hid_device *hid)
static inline int gaff_init(struct hid_device *hdev)
static int ga_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id ga_devices[] = ;
MODULE_DEVICE_TABLE(hid, ga_devices);
static struct hid_driver ga_driver = ;
static int __init ga_init(void)
static void __exit ga_exit(void)
module_init(ga_init);
module_exit(ga_exit);
MODULE_LICENSE("GPL");
