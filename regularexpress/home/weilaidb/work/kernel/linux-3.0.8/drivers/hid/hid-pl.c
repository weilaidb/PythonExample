#define debug(format, arg...) pr_debug("hid-plff: " format "\n" , ## arg)
struct plff_device ;
static int hid_plff_play(struct input_dev *dev, void *data,
struct ff_effect *effect)
static int plff_init(struct hid_device *hid)
static inline int plff_init(struct hid_device *hid)
static int pl_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id pl_devices[] = ;
MODULE_DEVICE_TABLE(hid, pl_devices);
static struct hid_driver pl_driver = ;
static int __init pl_init(void)
static void __exit pl_exit(void)
module_init(pl_init);
module_exit(pl_exit);
MODULE_LICENSE("GPL");
