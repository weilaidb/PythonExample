MODULE_AUTHOR("Stephane Chatty <chatty@enac.fr>");
MODULE_DESCRIPTION("Quanta dual-touch panel");
MODULE_LICENSE("GPL");
struct quanta_data ;
static int quanta_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int quanta_input_mapped(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static void quanta_filter_event(struct quanta_data *td, struct input_dev *input)
static int quanta_event(struct hid_device *hid, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static int quanta_probe(struct hid_device *hdev, const struct hid_device_id *id)
static void quanta_remove(struct hid_device *hdev)
static const struct hid_device_id quanta_devices[] = ;
MODULE_DEVICE_TABLE(hid, quanta_devices);
static const struct hid_usage_id quanta_grabbed_usages[] = ;
static struct hid_driver quanta_driver = ;
static int __init quanta_init(void)
static void __exit quanta_exit(void)
module_init(quanta_init);
module_exit(quanta_exit);
