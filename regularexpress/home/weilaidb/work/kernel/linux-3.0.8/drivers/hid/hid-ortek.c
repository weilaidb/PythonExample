static __u8 *ortek_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static const struct hid_device_id ortek_devices[] = ;
MODULE_DEVICE_TABLE(hid, ortek_devices);
static struct hid_driver ortek_driver = ;
static int __init ortek_init(void)
static void __exit ortek_exit(void)
module_init(ortek_init);
module_exit(ortek_exit);
MODULE_LICENSE("GPL");
