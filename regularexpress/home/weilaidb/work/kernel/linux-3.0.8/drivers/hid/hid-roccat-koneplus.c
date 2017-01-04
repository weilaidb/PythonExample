static uint profile_numbers[5] = ;
static struct class *koneplus_class;
static void koneplus_profile_activated(struct koneplus_device *koneplus,
uint new_profile)
static int koneplus_send_control(struct usb_device *usb_dev, uint value,
enum koneplus_control_requests request)
static int koneplus_receive_control_status(struct usb_device *usb_dev)
static int koneplus_send(struct usb_device *usb_dev, uint command,
void const *buf, uint size)
static int koneplus_select_profile(struct usb_device *usb_dev, uint number,
enum koneplus_control_requests request)
static int koneplus_get_info(struct usb_device *usb_dev,
struct koneplus_info *buf)
static int koneplus_get_profile_settings(struct usb_device *usb_dev,
struct koneplus_profile_settings *buf, uint number)
static int koneplus_set_profile_settings(struct usb_device *usb_dev,
struct koneplus_profile_settings const *settings)
static int koneplus_get_profile_buttons(struct usb_device *usb_dev,
struct koneplus_profile_buttons *buf, int number)
static int koneplus_set_profile_buttons(struct usb_device *usb_dev,
struct koneplus_profile_buttons const *buttons)
static int koneplus_get_actual_profile(struct usb_device *usb_dev)
static int koneplus_set_actual_profile(struct usb_device *usb_dev,
int new_profile)
static ssize_t koneplus_sysfs_read(struct file *fp, struct kobject *kobj,
char *buf, loff_t off, size_t count,
size_t real_size, uint command)
static ssize_t koneplus_sysfs_write(struct file *fp, struct kobject *kobj,
void const *buf, loff_t off, size_t count,
size_t real_size, uint command)
static ssize_t koneplus_sysfs_write_macro(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t koneplus_sysfs_read_sensor(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t koneplus_sysfs_write_sensor(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t koneplus_sysfs_write_tcu(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t koneplus_sysfs_read_tcu_image(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t koneplus_sysfs_read_profilex_settings(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t koneplus_sysfs_write_profile_settings(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t koneplus_sysfs_read_profilex_buttons(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t koneplus_sysfs_write_profile_buttons(struct file *fp,
struct kobject *kobj, struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static ssize_t koneplus_sysfs_show_actual_profile(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t koneplus_sysfs_set_actual_profile(struct device *dev,
struct device_attribute *attr, char const *buf, size_t size)
static ssize_t koneplus_sysfs_show_firmware_version(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute koneplus_attributes[] = ;
static struct bin_attribute koneplus_bin_attributes[] = ;
static int koneplus_init_koneplus_device_struct(struct usb_device *usb_dev,
struct koneplus_device *koneplus)
static int koneplus_init_specials(struct hid_device *hdev)
static void koneplus_remove_specials(struct hid_device *hdev)
static int koneplus_probe(struct hid_device *hdev,
const struct hid_device_id *id)
static void koneplus_remove(struct hid_device *hdev)
static void koneplus_keep_values_up_to_date(struct koneplus_device *koneplus,
u8 const *data)
static void koneplus_report_to_chrdev(struct koneplus_device const *koneplus,
u8 const *data)
static int koneplus_raw_event(struct hid_device *hdev,
struct hid_report *report, u8 *data, int size)
static const struct hid_device_id koneplus_devices[] = ;
MODULE_DEVICE_TABLE(hid, koneplus_devices);
static struct hid_driver koneplus_driver = ;
static int __init koneplus_init(void)
static void __exit koneplus_exit(void)
module_init(koneplus_init);
module_exit(koneplus_exit);
MODULE_AUTHOR("Stefan Achatz");
MODULE_DESCRIPTION("USB Roccat Kone[+] driver");
MODULE_LICENSE("GPL v2");
