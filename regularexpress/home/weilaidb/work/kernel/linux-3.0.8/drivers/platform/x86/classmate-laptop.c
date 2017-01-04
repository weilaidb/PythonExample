MODULE_LICENSE("GPL");
struct cmpc_accel ;
#define CMPC_ACCEL_SENSITIVITY_DEFAULT		5
#define CMPC_ACCEL_HID		"ACCE0000"
#define CMPC_TABLET_HID		"TBLT0000"
#define CMPC_IPML_HID	"IPML200"
#define CMPC_KEYS_HID		"FnBT0000"
typedef void (*input_device_init)(struct input_dev *dev);
static int cmpc_add_acpi_notify_device(struct acpi_device *acpi, char *name,
input_device_init idev_init)
static int cmpc_remove_acpi_notify_device(struct acpi_device *acpi)
static acpi_status cmpc_start_accel(acpi_handle handle)
static acpi_status cmpc_stop_accel(acpi_handle handle)
static acpi_status cmpc_accel_set_sensitivity(acpi_handle handle, int val)
static acpi_status cmpc_get_accel(acpi_handle handle,
unsigned char *x,
unsigned char *y,
unsigned char *z)
static void cmpc_accel_handler(struct acpi_device *dev, u32 event)
static ssize_t cmpc_accel_sensitivity_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t cmpc_accel_sensitivity_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute cmpc_accel_sensitivity_attr = ;
static int cmpc_accel_open(struct input_dev *input)
static void cmpc_accel_close(struct input_dev *input)
static void cmpc_accel_idev_init(struct input_dev *inputdev)
static int cmpc_accel_add(struct acpi_device *acpi)
static int cmpc_accel_remove(struct acpi_device *acpi, int type)
static const struct acpi_device_id cmpc_accel_device_ids[] = ;
static struct acpi_driver cmpc_accel_acpi_driver = ;
static acpi_status cmpc_get_tablet(acpi_handle handle,
unsigned long long *value)
static void cmpc_tablet_handler(struct acpi_device *dev, u32 event)
static void cmpc_tablet_idev_init(struct input_dev *inputdev)
static int cmpc_tablet_add(struct acpi_device *acpi)
static int cmpc_tablet_remove(struct acpi_device *acpi, int type)
static int cmpc_tablet_resume(struct acpi_device *acpi)
static const struct acpi_device_id cmpc_tablet_device_ids[] = ;
static struct acpi_driver cmpc_tablet_acpi_driver = ;
static acpi_status cmpc_get_brightness(acpi_handle handle,
unsigned long long *value)
static acpi_status cmpc_set_brightness(acpi_handle handle,
unsigned long long value)
static int cmpc_bl_get_brightness(struct backlight_device *bd)
static int cmpc_bl_update_status(struct backlight_device *bd)
static const struct backlight_ops cmpc_bl_ops = ;
static acpi_status cmpc_get_rfkill_wlan(acpi_handle handle,
unsigned long long *value)
static acpi_status cmpc_set_rfkill_wlan(acpi_handle handle,
unsigned long long value)
static void cmpc_rfkill_query(struct rfkill *rfkill, void *data)
static int cmpc_rfkill_block(void *data, bool blocked)
static const struct rfkill_ops cmpc_rfkill_ops = ;
struct ipml200_dev ;
static int cmpc_ipml_add(struct acpi_device *acpi)
static int cmpc_ipml_remove(struct acpi_device *acpi, int type)
static const struct acpi_device_id cmpc_ipml_device_ids[] = ;
static struct acpi_driver cmpc_ipml_acpi_driver = ;
static int cmpc_keys_codes[] = ;
static void cmpc_keys_handler(struct acpi_device *dev, u32 event)
static void cmpc_keys_idev_init(struct input_dev *inputdev)
static int cmpc_keys_add(struct acpi_device *acpi)
static int cmpc_keys_remove(struct acpi_device *acpi, int type)
static const struct acpi_device_id cmpc_keys_device_ids[] = ;
static struct acpi_driver cmpc_keys_acpi_driver = ;
static int cmpc_init(void)
static void cmpc_exit(void)
module_init(cmpc_init);
module_exit(cmpc_exit);
static const struct acpi_device_id cmpc_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, cmpc_device_ids);
