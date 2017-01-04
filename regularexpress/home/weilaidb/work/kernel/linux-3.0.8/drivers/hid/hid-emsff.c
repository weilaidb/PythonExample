struct emsff_device ;
static int emsff_play(struct input_dev *dev, void *data,
struct ff_effect *effect)
static int emsff_init(struct hid_device *hid)
static int ems_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id ems_devices[] = ;
MODULE_DEVICE_TABLE(hid, ems_devices);
static struct hid_driver ems_driver = ;
static int ems_init(void)
static void ems_exit(void)
module_init(ems_init);
module_exit(ems_exit);
MODULE_LICENSE("GPL");
