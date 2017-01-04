struct axff_device ;
static int axff_play(struct input_dev *dev, void *data, struct ff_effect *effect)
static int axff_init(struct hid_device *hid)
static inline int axff_init(struct hid_device *hid)
static int ax_probe(struct hid_device *hdev, const struct hid_device_id *id)
static void ax_remove(struct hid_device *hdev)
static const struct hid_device_id ax_devices[] = ;
MODULE_DEVICE_TABLE(hid, ax_devices);
static struct hid_driver ax_driver = ;
static int __init ax_init(void)
static void __exit ax_exit(void)
module_init(ax_init);
module_exit(ax_exit);
MODULE_AUTHOR("Sergei Kolzun");
MODULE_DESCRIPTION("Force feedback support for ACRUX game controllers");
MODULE_LICENSE("GPL");
