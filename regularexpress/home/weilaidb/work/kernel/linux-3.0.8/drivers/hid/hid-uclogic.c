#define WPXXXXU_RDESC_ORIG_SIZE	212
static __u8 wp4030u_rdesc_fixed[] = ;
static __u8 wp5540u_rdesc_fixed[] = ;
static __u8 wp8060u_rdesc_fixed[] = ;
#define PF1209_RDESC_ORIG_SIZE	234
static __u8 pf1209_rdesc_fixed[] = ;
static __u8 *uclogic_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static const struct hid_device_id uclogic_devices[] = ;
MODULE_DEVICE_TABLE(hid, uclogic_devices);
static struct hid_driver uclogic_driver = ;
static int __init uclogic_init(void)
static void __exit uclogic_exit(void)
module_init(uclogic_init);
module_exit(uclogic_exit);
MODULE_LICENSE("GPL");
