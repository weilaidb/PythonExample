static __u8 keytouch_fixed_rdesc[] = ;
static __u8 *keytouch_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static const struct hid_device_id keytouch_devices[] = ;
MODULE_DEVICE_TABLE(hid, keytouch_devices);
static struct hid_driver keytouch_driver = ;
static int __init keytouch_init(void)
static void __exit keytouch_exit(void)
module_init(keytouch_init);
module_exit(keytouch_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jiri Kosina");
