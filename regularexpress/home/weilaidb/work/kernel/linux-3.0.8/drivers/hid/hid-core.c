#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRIVER_DESC "HID core driver"
#define DRIVER_LICENSE "GPL"
int hid_debug = 0;
module_param_named(debug, hid_debug, int, 0600);
MODULE_PARM_DESC(debug, "toggle HID debugging messages");
EXPORT_SYMBOL_GPL(hid_debug);
struct hid_report *hid_register_report(struct hid_device *device, unsigned type, unsigned id)
EXPORT_SYMBOL_GPL(hid_register_report);
static struct hid_field *hid_register_field(struct hid_report *report, unsigned usages, unsigned values)
static int open_collection(struct hid_parser *parser, unsigned type)
static int close_collection(struct hid_parser *parser)
static unsigned hid_lookup_collection(struct hid_parser *parser, unsigned type)
static int hid_add_usage(struct hid_parser *parser, unsigned usage)
static int hid_add_field(struct hid_parser *parser, unsigned report_type, unsigned flags)
static u32 item_udata(struct hid_item *item)
static s32 item_sdata(struct hid_item *item)
static int hid_parser_global(struct hid_parser *parser, struct hid_item *item)
static int hid_parser_local(struct hid_parser *parser, struct hid_item *item)
static int hid_parser_main(struct hid_parser *parser, struct hid_item *item)
static int hid_parser_reserved(struct hid_parser *parser, struct hid_item *item)
static void hid_free_report(struct hid_report *report)
static void hid_device_release(struct device *dev)
static u8 *fetch_item(__u8 *start, __u8 *end, struct hid_item *item)
int hid_parse_report(struct hid_device *device, __u8 *start,
unsigned size)
EXPORT_SYMBOL_GPL(hid_parse_report);
static s32 snto32(__u32 value, unsigned n)
static u32 s32ton(__s32 value, unsigned n)
static __u32 extract(const struct hid_device *hid, __u8 *report,
unsigned offset, unsigned n)
static void implement(const struct hid_device *hid, __u8 *report,
unsigned offset, unsigned n, __u32 value)
static int search(__s32 *array, __s32 value, unsigned n)
static int hid_match_report(struct hid_device *hid, struct hid_report *report)
static int hid_match_usage(struct hid_device *hid, struct hid_usage *usage)
static void hid_process_event(struct hid_device *hid, struct hid_field *field,
struct hid_usage *usage, __s32 value, int interrupt)
static void hid_input_field(struct hid_device *hid, struct hid_field *field,
__u8 *data, int interrupt)
static void hid_output_field(const struct hid_device *hid,
struct hid_field *field, __u8 *data)
void hid_output_report(struct hid_report *report, __u8 *data)
EXPORT_SYMBOL_GPL(hid_output_report);
int hid_set_field(struct hid_field *field, unsigned offset, __s32 value)
EXPORT_SYMBOL_GPL(hid_set_field);
static struct hid_report *hid_get_report(struct hid_report_enum *report_enum,
const u8 *data)
void hid_report_raw_event(struct hid_device *hid, int type, u8 *data, int size,
int interrupt)
EXPORT_SYMBOL_GPL(hid_report_raw_event);
int hid_input_report(struct hid_device *hid, int type, u8 *data, int size, int interrupt)
EXPORT_SYMBOL_GPL(hid_input_report);
static bool hid_match_one_id(struct hid_device *hdev,
const struct hid_device_id *id)
static const struct hid_device_id *hid_match_id(struct hid_device *hdev,
const struct hid_device_id *id)
static const struct hid_device_id hid_hiddev_list[] = ;
static bool hid_hiddev(struct hid_device *hdev)
static ssize_t
read_report_descriptor(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute dev_bin_attr_report_desc = ;
int hid_connect(struct hid_device *hdev, unsigned int connect_mask)
EXPORT_SYMBOL_GPL(hid_connect);
void hid_disconnect(struct hid_device *hdev)
EXPORT_SYMBOL_GPL(hid_disconnect);
static const struct hid_device_id hid_have_special_driver[] = ;
struct hid_dynid ;
static ssize_t store_new_id(struct device_driver *drv, const char *buf,
size_t count)
static DRIVER_ATTR(new_id, S_IWUSR, NULL, store_new_id);
static void hid_free_dynids(struct hid_driver *hdrv)
static const struct hid_device_id *hid_match_device(struct hid_device *hdev,
struct hid_driver *hdrv)
static int hid_bus_match(struct device *dev, struct device_driver *drv)
static int hid_device_probe(struct device *dev)
static int hid_device_remove(struct device *dev)
static int hid_uevent(struct device *dev, struct kobj_uevent_env *env)
static struct bus_type hid_bus_type = ;
static const struct hid_device_id hid_ignore_list[] = ;
static const struct hid_device_id hid_mouse_ignore_list[] = ;
static bool hid_ignore(struct hid_device *hdev)
int hid_add_device(struct hid_device *hdev)
EXPORT_SYMBOL_GPL(hid_add_device);
struct hid_device *hid_allocate_device(void)
EXPORT_SYMBOL_GPL(hid_allocate_device);
static void hid_remove_device(struct hid_device *hdev)
void hid_destroy_device(struct hid_device *hdev)
EXPORT_SYMBOL_GPL(hid_destroy_device);
int __hid_register_driver(struct hid_driver *hdrv, struct module *owner,
const char *mod_name)
EXPORT_SYMBOL_GPL(__hid_register_driver);
void hid_unregister_driver(struct hid_driver *hdrv)
EXPORT_SYMBOL_GPL(hid_unregister_driver);
int hid_check_keys_pressed(struct hid_device *hid)
EXPORT_SYMBOL_GPL(hid_check_keys_pressed);
static int __init hid_init(void)
static void __exit hid_exit(void)
module_init(hid_init);
module_exit(hid_exit);
MODULE_AUTHOR("Andreas Gal");
MODULE_AUTHOR("Vojtech Pavlik");
MODULE_AUTHOR("Jiri Kosina");
MODULE_LICENSE(DRIVER_LICENSE);
