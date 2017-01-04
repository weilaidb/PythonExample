MODULE_AUTHOR("Stephane Chatty <chatty@enac.fr>");
MODULE_AUTHOR("Benjamin Tissoires <benjamin.tissoires@gmail.com>");
MODULE_DESCRIPTION("HID multitouch panels");
MODULE_LICENSE("GPL");
#define MT_QUIRK_NOT_SEEN_MEANS_UP	(1 << 0)
#define MT_QUIRK_SLOT_IS_CONTACTID	(1 << 1)
#define MT_QUIRK_CYPRESS		(1 << 2)
#define MT_QUIRK_SLOT_IS_CONTACTNUMBER	(1 << 3)
#define MT_QUIRK_VALID_IS_INRANGE	(1 << 4)
#define MT_QUIRK_VALID_IS_CONFIDENCE	(1 << 5)
#define MT_QUIRK_EGALAX_XYZ_FIXUP	(1 << 6)
#define MT_QUIRK_SLOT_IS_CONTACTID_MINUS_ONE	(1 << 7)
struct mt_slot ;
struct mt_device ;
struct mt_class ;
#define MT_CLS_DEFAULT				0x0001
#define MT_CLS_CONFIDENCE			0x0002
#define MT_CLS_CONFIDENCE_MINUS_ONE		0x0003
#define MT_CLS_DUAL_INRANGE_CONTACTID		0x0004
#define MT_CLS_DUAL_INRANGE_CONTACTNUMBER	0x0005
#define MT_CLS_DUAL_NSMU_CONTACTID		0x0006
#define MT_CLS_3M				0x0101
#define MT_CLS_CYPRESS				0x0102
#define MT_CLS_EGALAX				0x0103
#define MT_DEFAULT_MAXCONTACT	10
static int cypress_compute_slot(struct mt_device *td)
static int find_slot_from_contactid(struct mt_device *td)
struct mt_class mt_classes[] = ;
static void mt_feature_mapping(struct hid_device *hdev,
struct hid_field *field, struct hid_usage *usage)
static void set_abs(struct input_dev *input, unsigned int code,
struct hid_field *field, int snratio)
static int mt_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int mt_input_mapped(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int mt_compute_slot(struct mt_device *td)
static void mt_complete_slot(struct mt_device *td)
static void mt_emit_event(struct mt_device *td, struct input_dev *input)
static int mt_event(struct hid_device *hid, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static void mt_set_input_mode(struct hid_device *hdev)
static int mt_probe(struct hid_device *hdev, const struct hid_device_id *id)
static int mt_reset_resume(struct hid_device *hdev)
static void mt_remove(struct hid_device *hdev)
static const struct hid_device_id mt_devices[] = ;
MODULE_DEVICE_TABLE(hid, mt_devices);
static const struct hid_usage_id mt_grabbed_usages[] = ;
static struct hid_driver mt_driver = ;
static int __init mt_init(void)
static void __exit mt_exit(void)
module_init(mt_init);
module_exit(mt_exit);
