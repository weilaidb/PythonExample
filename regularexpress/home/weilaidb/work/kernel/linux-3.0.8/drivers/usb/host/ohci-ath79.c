static int __devinit ohci_ath79_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_ath79_hc_driver = ;
static int ohci_ath79_probe(struct platform_device *pdev)
static int ohci_ath79_remove(struct platform_device *pdev)
static struct platform_driver ohci_hcd_ath79_driver = ;
MODULE_ALIAS(PLATFORM_MODULE_PREFIX "ath79-ohci");
