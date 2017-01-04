#define A4_2WHEEL_MOUSE_HACK_7	0x01
#define A4_2WHEEL_MOUSE_HACK_B8	0x02
struct a4tech_sc ;
static int a4_input_mapped(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int a4_event(struct hid_device *hdev, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static int a4_probe(struct hid_device *hdev, const struct hid_device_id *id)
static void a4_remove(struct hid_device *hdev)
static const struct hid_device_id a4_devices[] = ;
MODULE_DEVICE_TABLE(hid, a4_devices);
static struct hid_driver a4_driver = ;
static int __init a4_init(void)
static void __exit a4_exit(void)
module_init(a4_init);
module_exit(a4_exit);
MODULE_LICENSE("GPL");
