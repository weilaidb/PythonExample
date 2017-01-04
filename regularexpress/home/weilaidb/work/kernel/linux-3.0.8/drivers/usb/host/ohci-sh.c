static int ohci_sh_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_sh_hc_driver = ;
static int ohci_hcd_sh_probe(struct platform_device *pdev)
static int ohci_hcd_sh_remove(struct platform_device *pdev)
static struct platform_driver ohci_hcd_sh_driver = ;
MODULE_ALIAS("platform:sh_ohci");
