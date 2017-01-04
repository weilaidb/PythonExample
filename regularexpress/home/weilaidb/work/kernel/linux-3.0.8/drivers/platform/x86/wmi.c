#define pr_fmt(fmt)	KBUILD_MODNAME ": " fmt
ACPI_MODULE_NAME("wmi");
MODULE_AUTHOR("Carlos Corbacho");
MODULE_DESCRIPTION("ACPI-WMI Mapping Driver");
MODULE_LICENSE("GPL");
#define ACPI_WMI_CLASS "wmi"
static DEFINE_MUTEX(wmi_data_lock);
static LIST_HEAD(wmi_block_list);
struct guid_block ;
struct wmi_block ;
#define ACPI_WMI_EXPENSIVE   0x1
#define ACPI_WMI_METHOD      0x2
#define ACPI_WMI_STRING      0x4
#define ACPI_WMI_EVENT       0x8
static int debug_event;
module_param(debug_event, bool, 0444);
MODULE_PARM_DESC(debug_event,
"Log WMI Events [0/1]");
static int debug_dump_wdg;
module_param(debug_dump_wdg, bool, 0444);
MODULE_PARM_DESC(debug_dump_wdg,
"Dump available WMI interfaces [0/1]");
static int acpi_wmi_remove(struct acpi_device *device, int type);
static int acpi_wmi_add(struct acpi_device *device);
static void acpi_wmi_notify(struct acpi_device *device, u32 event);
static const struct acpi_device_id wmi_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, wmi_device_ids);
static struct acpi_driver acpi_wmi_driver = ;
static int wmi_parse_hexbyte(const u8 *src)
static void wmi_swap_bytes(u8 *src, u8 *dest)
static bool wmi_parse_guid(const u8 *src, u8 *dest)
static int wmi_gtoa(const char *in, char *out)
static bool find_guid(const char *guid_string, struct wmi_block **out)
static acpi_status wmi_method_enable(struct wmi_block *wblock, int enable)
acpi_status wmi_evaluate_method(const char *guid_string, u8 instance,
u32 method_id, const struct acpi_buffer *in, struct acpi_buffer *out)
EXPORT_SYMBOL_GPL(wmi_evaluate_method);
acpi_status wmi_query_block(const char *guid_string, u8 instance,
struct acpi_buffer *out)
EXPORT_SYMBOL_GPL(wmi_query_block);
acpi_status wmi_set_block(const char *guid_string, u8 instance,
const struct acpi_buffer *in)
EXPORT_SYMBOL_GPL(wmi_set_block);
static void wmi_dump_wdg(const struct guid_block *g)
static void wmi_notify_debug(u32 value, void *context)
acpi_status wmi_install_notify_handler(const char *guid,
wmi_notify_handler handler, void *data)
EXPORT_SYMBOL_GPL(wmi_install_notify_handler);
acpi_status wmi_remove_notify_handler(const char *guid)
EXPORT_SYMBOL_GPL(wmi_remove_notify_handler);
acpi_status wmi_get_event_data(u32 event, struct acpi_buffer *out)
EXPORT_SYMBOL_GPL(wmi_get_event_data);
bool wmi_has_guid(const char *guid_string)
EXPORT_SYMBOL_GPL(wmi_has_guid);
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr,
char *buf)
static struct device_attribute wmi_dev_attrs[] = ;
static int wmi_dev_uevent(struct device *dev, struct kobj_uevent_env *env)
static void wmi_dev_free(struct device *dev)
static struct class wmi_class = ;
static int wmi_create_device(const struct guid_block *gblock,
struct wmi_block *wblock, acpi_handle handle)
static void wmi_free_devices(void)
static bool guid_already_parsed(const char *guid_string)
static acpi_status parse_wdg(acpi_handle handle)
static acpi_status
acpi_wmi_ec_space_handler(u32 function, acpi_physical_address address,
u32 bits, u64 *value,
void *handler_context, void *region_context)
static void acpi_wmi_notify(struct acpi_device *device, u32 event)
static int acpi_wmi_remove(struct acpi_device *device, int type)
static int acpi_wmi_add(struct acpi_device *device)
static int __init acpi_wmi_init(void)
static void __exit acpi_wmi_exit(void)
subsys_initcall(acpi_wmi_init);
module_exit(acpi_wmi_exit);
