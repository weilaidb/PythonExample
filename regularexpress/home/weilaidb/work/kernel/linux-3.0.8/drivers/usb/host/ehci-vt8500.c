static int ehci_update_device(struct usb_hcd *hcd, struct usb_device *udev)
static const struct hc_driver vt8500_ehci_hc_driver = ;
static int vt8500_ehci_drv_probe(struct platform_device *pdev)
static int vt8500_ehci_drv_remove(struct platform_device *pdev)
static struct platform_driver vt8500_ehci_driver = ;
MODULE_ALIAS("platform:vt8500-ehci");
