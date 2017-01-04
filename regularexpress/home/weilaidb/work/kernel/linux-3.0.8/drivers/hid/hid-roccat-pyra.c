static uint profile_numbers[5] = ;
static struct class *pyra_class;
static void profile_activated(struct pyra_device *pyra,
unsigned int new_profile)
static int pyra_send_control(struct usb_device *usb_dev, int value,
enum pyra_control_requests request)
static int pyra_receive_control_status(struct usb_device *usb_dev)
static int pyra_get_profile_settings(struct usb_device *usb_dev,
struct pyra_profile_settings *buf, int number)
static int pyra_get_profile_buttons(struct usb_device *usb_dev,
struct pyra_profile_buttons *buf, int number)
static int pyra_get_settings(struct usb_device *usb_dev,
struct pyra_settings *buf)
static int pyra_get_info(struct usb_device *usb_dev, struct pyra_info *buf)
static int pyra_send(struct usb_device *usb_dev, uint command,
void const *buf, uint size)
static int pyra_set_profile_settings(struct usb_device *usb_dev,
struct pyra_profile_settings const *settings)
static int pyra_set_profile_buttons(struct usb_device *usb_dev,
struct pyra_profile_buttons const *buttons)
static int pyra_set_settings(struct usb_device *usb_dev,
struct pyra_settings const *settings)
static ssize_t pyra_sysfs_read_profilex_settings(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t pyra_sysfs_read_profilex_buttons(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t pyra_sysfs_write_profile_settings(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t pyra_sysfs_write_profile_buttons(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t pyra_sysfs_read_settings(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t pyra_sysfs_write_settings(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t pyra_sysfs_show_actual_cpi(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pyra_sysfs_show_actual_profile(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pyra_sysfs_show_firmware_version(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pyra_sysfs_show_startup_profile(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute pyra_attributes[] = ;
static struct bin_attribute pyra_bin_attributes[] = ;
static int pyra_init_pyra_device_struct(struct usb_device *usb_dev,
struct pyra_device *pyra)
static int pyra_init_specials(struct hid_device *hdev)
static void pyra_remove_specials(struct hid_device *hdev)
static int pyra_probe(struct hid_device *hdev, const struct hid_device_id *id)
static void pyra_remove(struct hid_device *hdev)
static void pyra_keep_values_up_to_date(struct pyra_device *pyra,
u8 const *data)
static void pyra_report_to_chrdev(struct pyra_device const *pyra,
u8 const *data)
static int pyra_raw_event(struct hid_device *hdev, struct hid_report *report,
u8 *data, int size)
static const struct hid_device_id pyra_devices[] = ;
MODULE_DEVICE_TABLE(hid, pyra_devices);
static struct hid_driver pyra_driver = ;
static int __init pyra_init(void)
static void __exit pyra_exit(void)
module_init(pyra_init);
module_exit(pyra_exit);
MODULE_AUTHOR("Stefan Achatz");
MODULE_DESCRIPTION("USB Roccat Pyra driver");
MODULE_LICENSE("GPL v2");
