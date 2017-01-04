static __u8 *elecom_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static const struct hid_device_id elecom_devices[] = ;
MODULE_DEVICE_TABLE(hid, elecom_devices);
static struct hid_driver elecom_driver = ;
static int __init elecom_init(void)
static void __exit elecom_exit(void)
module_init(elecom_init);
module_exit(elecom_exit);
MODULE_LICENSE("GPL");
