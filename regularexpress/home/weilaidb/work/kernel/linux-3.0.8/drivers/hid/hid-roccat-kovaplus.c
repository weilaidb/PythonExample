static uint profile_numbers[5] = ;
static struct class *kovaplus_class;
static uint kovaplus_convert_event_cpi(uint value)
static void kovaplus_profile_activated(struct kovaplus_device *kovaplus,
uint new_profile_index)
static int kovaplus_send_control(struct usb_device *usb_dev, uint value,
enum kovaplus_control_requests request)
static int kovaplus_receive_control_status(struct usb_device *usb_dev)
static int kovaplus_send(struct usb_device *usb_dev, uint command,
void const *buf, uint size)
static int kovaplus_select_profile(struct usb_device *usb_dev, uint number,
enum kovaplus_control_requests request)
static int kovaplus_get_info(struct usb_device *usb_dev,
struct kovaplus_info *buf)
static int kovaplus_get_profile_settings(struct usb_device *usb_dev,
struct kovaplus_profile_settings *buf, uint number)
static int kovaplus_set_profile_settings(struct usb_device *usb_dev,
struct kovaplus_profile_settings const *settings)
static int kovaplus_get_profile_buttons(struct usb_device *usb_dev,
struct kovaplus_profile_buttons *buf, int number)
static int kovaplus_set_profile_buttons(struct usb_device *usb_dev,
struct kovaplus_profile_buttons const *buttons)
static int kovaplus_get_actual_profile(struct usb_device *usb_dev)
static int kovaplus_set_actual_profile(struct usb_device *usb_dev,
int new_profile)
static ssize_t kovaplus_sysfs_read_profilex_settings(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t kovaplus_sysfs_write_profile_settings(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t kovaplus_sysfs_read_profilex_buttons(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t kovaplus_sysfs_write_profile_buttons(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t kovaplus_sysfs_show_actual_profile(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t kovaplus_sysfs_set_actual_profile(struct device *dev,
struct device_attribute *attr, char const *buf, size_t size)
static ssize_t kovaplus_sysfs_show_actual_cpi(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t kovaplus_sysfs_show_actual_sensitivity_x(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t kovaplus_sysfs_show_actual_sensitivity_y(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t kovaplus_sysfs_show_firmware_version(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute kovaplus_attributes[] = ;
static struct bin_attribute kovaplus_bin_attributes[] = ;
static int kovaplus_init_kovaplus_device_struct(struct usb_device *usb_dev,
struct kovaplus_device *kovaplus)
static int kovaplus_init_specials(struct hid_device *hdev)
static void kovaplus_remove_specials(struct hid_device *hdev)
static int kovaplus_probe(struct hid_device *hdev,
const struct hid_device_id *id)
static void kovaplus_remove(struct hid_device *hdev)
static void kovaplus_keep_values_up_to_date(struct kovaplus_device *kovaplus,
u8 const *data)
static void kovaplus_report_to_chrdev(struct kovaplus_device const *kovaplus,
u8 const *data)
static int kovaplus_raw_event(struct hid_device *hdev,
struct hid_report *report, u8 *data, int size)
static const struct hid_device_id kovaplus_devices[] = ;
MODULE_DEVICE_TABLE(hid, kovaplus_devices);
static struct hid_driver kovaplus_driver = ;
static int __init kovaplus_init(void)
static void __exit kovaplus_exit(void)
module_init(kovaplus_init);
module_exit(kovaplus_exit);
MODULE_AUTHOR("Stefan Achatz");
MODULE_DESCRIPTION("USB Roccat Kova[+] driver");
MODULE_LICENSE("GPL v2");
