static BLOCKING_NOTIFIER_HEAD(usb_notifier_list);
void usb_register_notify(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(usb_register_notify);
void usb_unregister_notify(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(usb_unregister_notify);
void usb_notify_add_device(struct usb_device *udev)
void usb_notify_remove_device(struct usb_device *udev)
void usb_notify_add_bus(struct usb_bus *ubus)
void usb_notify_remove_bus(struct usb_bus *ubus)
