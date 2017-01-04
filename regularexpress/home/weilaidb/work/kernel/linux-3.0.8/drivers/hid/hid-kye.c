static __u8 *kye_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static const struct hid_device_id kye_devices[] = ;
MODULE_DEVICE_TABLE(hid, kye_devices);
static struct hid_driver kye_driver = ;
static int __init kye_init(void)
static void __exit kye_exit(void)
module_init(kye_init);
module_exit(kye_exit);
MODULE_LICENSE("GPL");
