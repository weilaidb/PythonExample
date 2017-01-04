ssize_t usb_store_new_id(struct usb_dynids *dynids,
struct device_driver *driver,
const char *buf, size_t count)
EXPORT_SYMBOL_GPL(usb_store_new_id);
static ssize_t store_new_id(struct device_driver *driver,
const char *buf, size_t count)
static DRIVER_ATTR(new_id, S_IWUSR, NULL, store_new_id);
static ssize_t
store_remove_id(struct device_driver *driver, const char *buf, size_t count)
static DRIVER_ATTR(remove_id, S_IWUSR, NULL, store_remove_id);
static int usb_create_newid_file(struct usb_driver *usb_drv)
static void usb_remove_newid_file(struct usb_driver *usb_drv)
static int
usb_create_removeid_file(struct usb_driver *drv)
static void usb_remove_removeid_file(struct usb_driver *drv)
static void usb_free_dynids(struct usb_driver *usb_drv)
static inline int usb_create_newid_file(struct usb_driver *usb_drv)
static void usb_remove_newid_file(struct usb_driver *usb_drv)
static int
usb_create_removeid_file(struct usb_driver *drv)
static void usb_remove_removeid_file(struct usb_driver *drv)
static inline void usb_free_dynids(struct usb_driver *usb_drv)
static const struct usb_device_id *usb_match_dynamic_id(struct usb_interface *intf,
struct usb_driver *drv)
static int usb_probe_device(struct device *dev)
static int usb_unbind_device(struct device *dev)
static void usb_cancel_queued_reset(struct usb_interface *iface)
static int usb_probe_interface(struct device *dev)
static int usb_unbind_interface(struct device *dev)
int usb_driver_claim_interface(struct usb_driver *driver,
struct usb_interface *iface, void *priv)
EXPORT_SYMBOL_GPL(usb_driver_claim_interface);
void usb_driver_release_interface(struct usb_driver *driver,
struct usb_interface *iface)
EXPORT_SYMBOL_GPL(usb_driver_release_interface);
int usb_match_device(struct usb_device *dev, const struct usb_device_id *id)
int usb_match_one_id(struct usb_interface *interface,
const struct usb_device_id *id)
EXPORT_SYMBOL_GPL(usb_match_one_id);
const struct usb_device_id *usb_match_id(struct usb_interface *interface,
const struct usb_device_id *id)
EXPORT_SYMBOL_GPL(usb_match_id);
static int usb_device_match(struct device *dev, struct device_driver *drv)
static int usb_uevent(struct device *dev, struct kobj_uevent_env *env)
static int usb_uevent(struct device *dev, struct kobj_uevent_env *env)
int usb_register_device_driver(struct usb_device_driver *new_udriver,
struct module *owner)
EXPORT_SYMBOL_GPL(usb_register_device_driver);
void usb_deregister_device_driver(struct usb_device_driver *udriver)
EXPORT_SYMBOL_GPL(usb_deregister_device_driver);
int usb_register_driver(struct usb_driver *new_driver, struct module *owner,
const char *mod_name)
EXPORT_SYMBOL_GPL(usb_register_driver);
void usb_deregister(struct usb_driver *driver)
EXPORT_SYMBOL_GPL(usb_deregister);
void usb_forced_unbind_intf(struct usb_interface *intf)
void usb_rebind_intf(struct usb_interface *intf)
#define DO_UNBIND	0
#define DO_REBIND	1
static void do_unbind_rebind(struct usb_device *udev, int action)
static int usb_suspend_device(struct usb_device *udev, pm_message_t msg)
static int usb_resume_device(struct usb_device *udev, pm_message_t msg)
static int usb_suspend_interface(struct usb_device *udev,
struct usb_interface *intf, pm_message_t msg)
static int usb_resume_interface(struct usb_device *udev,
struct usb_interface *intf, pm_message_t msg, int reset_resume)
static int usb_suspend_both(struct usb_device *udev, pm_message_t msg)
static int usb_resume_both(struct usb_device *udev, pm_message_t msg)
static void choose_wakeup(struct usb_device *udev, pm_message_t msg)
int usb_suspend(struct device *dev, pm_message_t msg)
int usb_resume(struct device *dev, pm_message_t msg)
void usb_enable_autosuspend(struct usb_device *udev)
EXPORT_SYMBOL_GPL(usb_enable_autosuspend);
void usb_disable_autosuspend(struct usb_device *udev)
EXPORT_SYMBOL_GPL(usb_disable_autosuspend);
void usb_autosuspend_device(struct usb_device *udev)
int usb_autoresume_device(struct usb_device *udev)
void usb_autopm_put_interface(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_autopm_put_interface);
void usb_autopm_put_interface_async(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_autopm_put_interface_async);
void usb_autopm_put_interface_no_suspend(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_autopm_put_interface_no_suspend);
int usb_autopm_get_interface(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_autopm_get_interface);
int usb_autopm_get_interface_async(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_autopm_get_interface_async);
void usb_autopm_get_interface_no_resume(struct usb_interface *intf)
EXPORT_SYMBOL_GPL(usb_autopm_get_interface_no_resume);
static int autosuspend_check(struct usb_device *udev)
int usb_runtime_suspend(struct device *dev)
int usb_runtime_resume(struct device *dev)
int usb_runtime_idle(struct device *dev)
struct bus_type usb_bus_type = ;
