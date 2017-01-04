static inline const char *plural(int n)
static int is_rndis(struct usb_interface_descriptor *desc)
static int is_activesync(struct usb_interface_descriptor *desc)
int usb_choose_configuration(struct usb_device *udev)
static int generic_probe(struct usb_device *udev)
static void generic_disconnect(struct usb_device *udev)
static int generic_suspend(struct usb_device *udev, pm_message_t msg)
static int generic_resume(struct usb_device *udev, pm_message_t msg)
struct usb_device_driver usb_generic_driver = ;
