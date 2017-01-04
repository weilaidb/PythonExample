static const signed short ff_rumble[] = ;
static const signed short ff_joystick[] = ;
#define THRUSTMASTER_USAGE_FF	(HID_UP_GENDESK | 0xbb)
struct tmff_device ;
static inline int tmff_scale_u16(unsigned int in, int minimum, int maximum)
static inline int tmff_scale_s8(int in, int minimum, int maximum)
static int tmff_play(struct input_dev *dev, void *data,
struct ff_effect *effect)
static int tmff_init(struct hid_device *hid, const signed short *ff_bits)
static inline int tmff_init(struct hid_device *hid, const signed short *ff_bits)
static int tm_probe(struct hid_device *hdev, const struct hid_device_id *id)
static const struct hid_device_id tm_devices[] = ;
MODULE_DEVICE_TABLE(hid, tm_devices);
static struct hid_driver tm_driver = ;
static int __init tm_init(void)
static void __exit tm_exit(void)
module_init(tm_init);
module_exit(tm_exit);
MODULE_LICENSE("GPL");
