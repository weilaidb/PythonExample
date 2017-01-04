const char *usbcore_name = "usbcore";
static int nousb;
static int usb_autosuspend_delay = 2;
module_param_named(autosuspend, usb_autosuspend_delay, int, 0644);
MODULE_PARM_DESC(autosuspend, "default autosuspend delay");
#define usb_autosuspend_delay		0
struct usb_host_interface *usb_find_alt_setting(
struct usb_host_config *config,
unsigned int iface_num,
unsigned int alt_num)
EXPORT_SYMBOL_GPL(usb_find_alt_setting);
struct usb_interface *usb_ifnum_to_if(const struct usb_device *dev,
unsigned ifnum)
EXPORT_SYMBOL_GPL(usb_ifnum_to_if);
struct usb_host_interface *usb_altnum_to_altsetting(
const struct usb_interface *intf,
unsigned int altnum)
EXPORT_SYMBOL_GPL(usb_altnum_to_altsetting);
struct find_interface_arg ;
static int __find_interface(struct device *dev, void *data)
struct usb_interface *usb_find_interface(struct usb_driver *drv, int minor)
EXPORT_SYMBOL_GPL(usb_find_interface);
static void usb_release_dev(struct device *dev)
static int usb_dev_uevent(struct device *dev, struct kobj_uevent_env *env)
static int usb_dev_uevent(struct device *dev, struct kobj_uevent_env *env)
static int usb_dev_prepare(struct device *dev)
static void usb_dev_complete(struct device *dev)
static int usb_dev_suspend(struct device *dev)
static int usb_dev_resume(struct device *dev)
static int usb_dev_freeze(struct device *dev)
static int usb_dev_thaw(struct device *dev)
static int usb_dev_poweroff(struct device *dev)
static int usb_dev_restore(struct device *dev)
static const struct dev_pm_ops usb_device_pm_ops = ;
static char *usb_devnode(struct device *dev, mode_t *mode)
struct device_type usb_device_type = ;
static unsigned usb_bus_is_wusb(struct usb_bus *bus)
struct usb_device *usb_alloc_dev(struct usb_device *parent,
struct usb_bus *bus, unsigned port1)
struct usb_device *usb_get_dev(struct usb_device *dev)
EXPORT_SYMBOL_GPL(usb_get_dev);
void usb_put_dev(struct usb_device *dev)
EXPORT_SYMBOL_GPL(usb_put_dev);
struct usb_interface *usb_get_intf(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_get_intf);
void usb_put_intf(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_put_intf);
int usb_lock_device_for_reset(struct usb_device *udev,
const struct usb_interface *iface)
EXPORT_SYMBOL_GPL(usb_lock_device_for_reset);
int usb_get_current_frame_number(struct usb_device *dev)
EXPORT_SYMBOL_GPL(usb_get_current_frame_number);
int __usb_get_extra_descriptor(char *buffer, unsigned size,
unsigned char type, void **ptr)
EXPORT_SYMBOL_GPL(__usb_get_extra_descriptor);
void *usb_alloc_coherent(struct usb_device *dev, size_t size, gfp_t mem_flags,
dma_addr_t *dma)
EXPORT_SYMBOL_GPL(usb_alloc_coherent);
void usb_free_coherent(struct usb_device *dev, size_t size, void *addr,
dma_addr_t dma)
EXPORT_SYMBOL_GPL(usb_free_coherent);
module_param(nousb, bool, 0444);
core_param(nousb, nousb, bool, 0444);
int usb_disabled(void)
EXPORT_SYMBOL_GPL(usb_disabled);
static int usb_bus_notify(struct notifier_block *nb, unsigned long action,
void *data)
static struct notifier_block usb_bus_nb = ;
struct dentry *usb_debug_root;
EXPORT_SYMBOL_GPL(usb_debug_root);
static struct dentry *usb_debug_devices;
static int usb_debugfs_init(void)
static void usb_debugfs_cleanup(void)
static int __init usb_init(void)
static void __exit usb_exit(void)
subsys_initcall(usb_init);
module_exit(usb_exit);
MODULE_LICENSE("GPL");
