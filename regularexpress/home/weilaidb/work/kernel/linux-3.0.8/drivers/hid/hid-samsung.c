static inline void samsung_irda_dev_trace(struct hid_device *hdev,
unsigned int rsize)
static __u8 *samsung_irda_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
#define samsung_kbd_mouse_map_key_clear(c) \
hid_map_usage_clear(hi, usage, bit, max, EV_KEY, (c))
static int samsung_kbd_mouse_input_mapping(struct hid_device *hdev,
struct hid_input *hi, struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static __u8 *samsung_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static int samsung_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int samsung_probe(struct hid_device *hdev,
const struct hid_device_id *id)
static const struct hid_device_id samsung_devices[] = ;
MODULE_DEVICE_TABLE(hid, samsung_devices);
static struct hid_driver samsung_driver = ;
static int __init samsung_init(void)
static void __exit samsung_exit(void)
module_init(samsung_init);
module_exit(samsung_exit);
MODULE_LICENSE("GPL");
