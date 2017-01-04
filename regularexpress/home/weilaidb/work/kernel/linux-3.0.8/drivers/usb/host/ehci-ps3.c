static int ps3_ehci_hc_reset(struct usb_hcd *hcd)
static const struct hc_driver ps3_ehci_hc_driver = ;
static int __devinit ps3_ehci_probe(struct ps3_system_bus_device *dev)
static int ps3_ehci_remove(struct ps3_system_bus_device *dev)
static int __init ps3_ehci_driver_register(struct ps3_system_bus_driver *drv)
static void ps3_ehci_driver_unregister(struct ps3_system_bus_driver *drv)
MODULE_ALIAS(PS3_MODULE_ALIAS_EHCI);
static struct ps3_system_bus_driver ps3_ehci_driver = ;
