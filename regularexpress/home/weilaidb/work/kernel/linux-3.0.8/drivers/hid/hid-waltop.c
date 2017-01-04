#define SLIM_TABLET_5_8_INCH_RDESC_ORIG_SIZE	222
static __u8 slim_tablet_5_8_inch_rdesc_fixed[] = ;
#define SLIM_TABLET_12_1_INCH_RDESC_ORIG_SIZE	269
static __u8 slim_tablet_12_1_inch_rdesc_fixed[] = ;
#define MEDIA_TABLET_10_6_INCH_RDESC_ORIG_SIZE	300
static __u8 media_tablet_10_6_inch_rdesc_fixed[] = ;
#define MEDIA_TABLET_14_1_INCH_RDESC_ORIG_SIZE	309
static __u8 media_tablet_14_1_inch_rdesc_fixed[] = ;
static __u8 *waltop_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static const struct hid_device_id waltop_devices[] = ;
MODULE_DEVICE_TABLE(hid, waltop_devices);
static struct hid_driver waltop_driver = ;
static int __init waltop_init(void)
static void __exit waltop_exit(void)
module_init(waltop_init);
module_exit(waltop_exit);
MODULE_LICENSE("GPL");
