static int ohci_omap3_init(struct usb_hcd *hcd)
static int ohci_omap3_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_omap3_hc_driver = ;
static int __devinit ohci_hcd_omap3_probe(struct platform_device *pdev)
static int __devexit ohci_hcd_omap3_remove(struct platform_device *pdev)
static void ohci_hcd_omap3_shutdown(struct platform_device *pdev)
static struct platform_driver ohci_hcd_omap3_driver = ;
MODULE_ALIAS("platform:ohci-omap3");
MODULE_AUTHOR("Anand Gadiyar <gadiyar@ti.com>");
