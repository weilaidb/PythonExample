#define DRIVER_DESC    "ATI/Philips USB RF remote driver"
#define DRIVER_VERSION "0.3"
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERSION);
MODULE_AUTHOR("Ville Syrjala <syrjala@sci.fi>");
MODULE_LICENSE("GPL");
enum ;
static int ati_remote2_set_mask(const char *val,
const struct kernel_param *kp,
unsigned int max)
static int ati_remote2_set_channel_mask(const char *val,
const struct kernel_param *kp)
static int ati_remote2_get_channel_mask(char *buffer,
const struct kernel_param *kp)
static int ati_remote2_set_mode_mask(const char *val,
const struct kernel_param *kp)
static int ati_remote2_get_mode_mask(char *buffer,
const struct kernel_param *kp)
static unsigned int channel_mask = ATI_REMOTE2_MAX_CHANNEL_MASK;
#define param_check_channel_mask(name, p) __param_check(name, p, unsigned int)
static struct kernel_param_ops param_ops_channel_mask = ;
module_param(channel_mask, channel_mask, 0644);
MODULE_PARM_DESC(channel_mask, "Bitmask of channels to accept <15:Channel16>...<1:Channel2><0:Channel1>");
static unsigned int mode_mask = ATI_REMOTE2_MAX_MODE_MASK;
#define param_check_mode_mask(name, p) __param_check(name, p, unsigned int)
static struct kernel_param_ops param_ops_mode_mask = ;
module_param(mode_mask, mode_mask, 0644);
MODULE_PARM_DESC(mode_mask, "Bitmask of modes to accept <4:PC><3:AUX4><2:AUX3><1:AUX2><0:AUX1>");
static struct usb_device_id ati_remote2_id_table[] = ;
MODULE_DEVICE_TABLE(usb, ati_remote2_id_table);
static DEFINE_MUTEX(ati_remote2_mutex);
enum ;
enum ;
static const struct  ati_remote2_key_table[] = ;
struct ati_remote2 ;
static int ati_remote2_probe(struct usb_interface *interface, const struct usb_device_id *id);
static void ati_remote2_disconnect(struct usb_interface *interface);
static int ati_remote2_suspend(struct usb_interface *interface, pm_message_t message);
static int ati_remote2_resume(struct usb_interface *interface);
static int ati_remote2_reset_resume(struct usb_interface *interface);
static int ati_remote2_pre_reset(struct usb_interface *interface);
static int ati_remote2_post_reset(struct usb_interface *interface);
static struct usb_driver ati_remote2_driver = ;
static int ati_remote2_submit_urbs(struct ati_remote2 *ar2)
static void ati_remote2_kill_urbs(struct ati_remote2 *ar2)
static int ati_remote2_open(struct input_dev *idev)
static void ati_remote2_close(struct input_dev *idev)
static void ati_remote2_input_mouse(struct ati_remote2 *ar2)
static int ati_remote2_lookup(unsigned int hw_code)
static void ati_remote2_input_key(struct ati_remote2 *ar2)
static void ati_remote2_complete_mouse(struct urb *urb)
static void ati_remote2_complete_key(struct urb *urb)
static int ati_remote2_getkeycode(struct input_dev *idev,
struct input_keymap_entry *ke)
static int ati_remote2_setkeycode(struct input_dev *idev,
const struct input_keymap_entry *ke,
unsigned int *old_keycode)
static int ati_remote2_input_init(struct ati_remote2 *ar2)
static int ati_remote2_urb_init(struct ati_remote2 *ar2)
static void ati_remote2_urb_cleanup(struct ati_remote2 *ar2)
static int ati_remote2_setup(struct ati_remote2 *ar2, unsigned int ch_mask)
static ssize_t ati_remote2_show_channel_mask(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ati_remote2_store_channel_mask(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t ati_remote2_show_mode_mask(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ati_remote2_store_mode_mask(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(channel_mask, 0644, ati_remote2_show_channel_mask,
ati_remote2_store_channel_mask);
static DEVICE_ATTR(mode_mask, 0644, ati_remote2_show_mode_mask,
ati_remote2_store_mode_mask);
static struct attribute *ati_remote2_attrs[] = ;
static struct attribute_group ati_remote2_attr_group = ;
static int ati_remote2_probe(struct usb_interface *interface, const struct usb_device_id *id)
static void ati_remote2_disconnect(struct usb_interface *interface)
static int ati_remote2_suspend(struct usb_interface *interface,
pm_message_t message)
static int ati_remote2_resume(struct usb_interface *interface)
static int ati_remote2_reset_resume(struct usb_interface *interface)
static int ati_remote2_pre_reset(struct usb_interface *interface)
static int ati_remote2_post_reset(struct usb_interface *interface)
static int __init ati_remote2_init(void)
static void __exit ati_remote2_exit(void)
module_init(ati_remote2_init);
module_exit(ati_remote2_exit);
