static int uhci_grlib_init(struct usb_hcd *hcd)
static const struct hc_driver uhci_grlib_hc_driver = ;
static int __devinit uhci_hcd_grlib_probe(struct platform_device *op)
static int uhci_hcd_grlib_remove(struct platform_device *op)
static void uhci_hcd_grlib_shutdown(struct platform_device *op)
static const struct of_device_id uhci_hcd_grlib_of_match[] = ;
MODULE_DEVICE_TABLE(of, uhci_hcd_grlib_of_match);
static struct platform_driver uhci_grlib_driver = ;
