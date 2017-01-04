static int ps3_ohci_hc_reset(struct usb_hcd *hcd)
static int __devinit ps3_ohci_hc_start(struct usb_hcd *hcd)
static const struct hc_driver ps3_ohci_hc_driver = ;
static int __devinit ps3_ohci_probe(struct ps3_system_bus_device *dev)
static int ps3_ohci_remove(struct ps3_system_bus_device *dev)
static int __init ps3_ohci_driver_register(struct ps3_system_bus_driver *drv)
static void ps3_ohci_driver_unregister(struct ps3_system_bus_driver *drv)
MODULE_ALIAS(PS3_MODULE_ALIAS_OHCI);
static struct ps3_system_bus_driver ps3_ohci_driver = ;
