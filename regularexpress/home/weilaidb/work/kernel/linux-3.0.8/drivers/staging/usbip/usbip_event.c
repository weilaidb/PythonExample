static int event_handler(struct usbip_device *ud)
static int event_handler_loop(void *data)
int usbip_start_eh(struct usbip_device *ud)
EXPORT_SYMBOL_GPL(usbip_start_eh);
void usbip_stop_eh(struct usbip_device *ud)
EXPORT_SYMBOL_GPL(usbip_stop_eh);
void usbip_event_add(struct usbip_device *ud, unsigned long event)
EXPORT_SYMBOL_GPL(usbip_event_add);
int usbip_event_happened(struct usbip_device *ud)
EXPORT_SYMBOL_GPL(usbip_event_happened);
