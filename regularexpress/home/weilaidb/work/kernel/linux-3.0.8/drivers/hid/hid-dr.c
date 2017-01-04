struct drff_device ;
static int drff_play(struct input_dev *dev, void *data,
struct ff_effect *effect)
static int drff_init(struct hid_device *hid)
static inline int drff_init(struct hid_device *hid)
#define PID0011_RDESC_ORIG_SIZE	101
static __u8 pid0011_rdesc_fixed[] = ;
static __u8 *dr_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static int dr_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id dr_devices[] = ;
MODULE_DEVICE_TABLE(hid, dr_devices);
static struct hid_driver dr_driver = ;
static int __init dr_init(void)
static void __exit dr_exit(void)
module_init(dr_init);
module_exit(dr_exit);
MODULE_LICENSE("GPL");
