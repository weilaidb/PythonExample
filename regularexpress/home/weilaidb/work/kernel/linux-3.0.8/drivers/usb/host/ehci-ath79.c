enum ;
static const struct platform_device_id ehci_ath79_id_table[] = ;
MODULE_DEVICE_TABLE(platform, ehci_ath79_id_table);
static int ehci_ath79_init(struct usb_hcd *hcd)
static const struct hc_driver ehci_ath79_hc_driver = ;
static int ehci_ath79_probe(struct platform_device *pdev)
static int ehci_ath79_remove(struct platform_device *pdev)
static struct platform_driver ehci_ath79_driver = ;
MODULE_ALIAS(PLATFORM_MODULE_PREFIX "ath79-ehci");
