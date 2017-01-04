#define QUICKSTART_VERSION "1.03"
MODULE_AUTHOR("Angelo Arrifano");
MODULE_DESCRIPTION("ACPI Direct App Launch driver");
MODULE_LICENSE("GPL");
#define QUICKSTART_ACPI_DEVICE_NAME   "quickstart"
#define QUICKSTART_ACPI_CLASS         "quickstart"
#define QUICKSTART_ACPI_HID           "PNP0C32"
#define QUICKSTART_PF_DRIVER_NAME     "quickstart"
#define QUICKSTART_PF_DEVICE_NAME     "quickstart"
#define QUICKSTART_PF_DEVATTR_NAME    "pressed_button"
#define QUICKSTART_MAX_BTN_NAME_LEN   16
#define QUICKSTART_EVENT_WAKE         0x02
#define QUICKSTART_EVENT_RUNTIME      0x80
struct quickstart_btn ;
static struct quickstart_driver_data  quickstart_data;
struct quickstart_acpi ;
static int quickstart_acpi_add(struct acpi_device *device);
static int quickstart_acpi_remove(struct acpi_device *device, int type);
static const struct acpi_device_id  quickstart_device_ids[] = ;
static struct acpi_driver quickstart_acpi_driver = ;
struct input_dev *quickstart_input;
static ssize_t buttons_show(struct device *dev,
struct device_attribute *attr,
char *buf);
static ssize_t pressed_button_show(struct device *dev,
struct device_attribute *attr,
char *buf);
static ssize_t pressed_button_store(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count);
static DEVICE_ATTR(pressed_button, 0666, pressed_button_show,
pressed_button_store);
static DEVICE_ATTR(buttons, 0444, buttons_show, NULL);
static struct platform_device *pf_device;
static struct platform_driver pf_driver = ;
static ssize_t buttons_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t pressed_button_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t pressed_button_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static int quickstart_btnlst_add(struct quickstart_btn **data)
static void quickstart_btnlst_del(struct quickstart_btn *data)
static void quickstart_btnlst_free(void)
static void quickstart_acpi_notify(acpi_handle handle, u32 event, void *data)
static void quickstart_acpi_ghid(struct quickstart_acpi *quickstart)
static int quickstart_acpi_config(struct quickstart_acpi *quickstart, char *bid)
static int quickstart_acpi_add(struct acpi_device *device)
static int quickstart_acpi_remove(struct acpi_device *device, int type)
static void quickstart_exit(void)
static int __init quickstart_init_input(void)
static int __init quickstart_init(void)
module_init(quickstart_init);
module_exit(quickstart_exit);
