static uint profile_numbers[5] = ;
static struct class *kone_class;
static void kone_set_settings_checksum(struct kone_settings *settings)
static int kone_check_write(struct usb_device *usb_dev)
static int kone_get_settings(struct usb_device *usb_dev,
struct kone_settings *buf)
static int kone_set_settings(struct usb_device *usb_dev,
struct kone_settings const *settings)
static int kone_get_profile(struct usb_device *usb_dev,
struct kone_profile *buf, int number)
static int kone_set_profile(struct usb_device *usb_dev,
struct kone_profile const *profile, int number)
static int kone_get_weight(struct usb_device *usb_dev, int *result)
static int kone_get_firmware_version(struct usb_device *usb_dev, int *result)
static ssize_t kone_sysfs_read_settings(struct file *fp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t kone_sysfs_write_settings(struct file *fp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t kone_sysfs_read_profilex(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t kone_sysfs_write_profilex(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t kone_sysfs_show_actual_profile(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t kone_sysfs_show_actual_dpi(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t kone_sysfs_show_weight(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t kone_sysfs_show_firmware_version(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t kone_sysfs_show_tcu(struct device *dev,
struct device_attribute *attr, char *buf)
static int kone_tcu_command(struct usb_device *usb_dev, int number)
static ssize_t kone_sysfs_set_tcu(struct device *dev,
struct device_attribute *attr, char const *buf, size_t size)
static ssize_t kone_sysfs_show_startup_profile(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t kone_sysfs_set_startup_profile(struct device *dev,
struct device_attribute *attr, char const *buf, size_t size)
static struct device_attribute kone_attributes[] = ;
static struct bin_attribute kone_bin_attributes[] = ;
static int kone_init_kone_device_struct(struct usb_device *usb_dev,
struct kone_device *kone)
static int kone_init_specials(struct hid_device *hdev)
static void kone_remove_specials(struct hid_device *hdev)
static int kone_probe(struct hid_device *hdev, const struct hid_device_id *id)
static void kone_remove(struct hid_device *hdev)
static void kone_keep_values_up_to_date(struct kone_device *kone,
struct kone_mouse_event const *event)
static void kone_report_to_chrdev(struct kone_device const *kone,
struct kone_mouse_event const *event)
static int kone_raw_event(struct hid_device *hdev, struct hid_report *report,
u8 *data, int size)
static const struct hid_device_id kone_devices[] = ;
MODULE_DEVICE_TABLE(hid, kone_devices);
static struct hid_driver kone_driver = ;
static int __init kone_init(void)
static void __exit kone_exit(void)
module_init(kone_init);
module_exit(kone_exit);
MODULE_AUTHOR("Stefan Achatz");
MODULE_DESCRIPTION("USB Roccat Kone driver");
MODULE_LICENSE("GPL v2");
