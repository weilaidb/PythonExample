#define VAIO_RDESC_CONSTANT     (1 << 0)
#define SIXAXIS_CONTROLLER_USB  (1 << 1)
#define SIXAXIS_CONTROLLER_BT   (1 << 2)
struct sony_sc ;
static __u8 *sony_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static int sixaxis_usb_output_raw_report(struct hid_device *hid, __u8 *buf,
size_t count, unsigned char report_type)
static int sixaxis_set_operational_usb(struct hid_device *hdev)
static int sixaxis_set_operational_bt(struct hid_device *hdev)
static int sony_probe(struct hid_device *hdev, const struct hid_device_id *id)
static void sony_remove(struct hid_device *hdev)
static const struct hid_device_id sony_devices[] = ;
MODULE_DEVICE_TABLE(hid, sony_devices);
static struct hid_driver sony_driver = ;
static int __init sony_init(void)
static void __exit sony_exit(void)
module_init(sony_init);
module_exit(sony_exit);
MODULE_LICENSE("GPL");
