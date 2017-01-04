struct spear_ohci ;
#define to_spear_ohci(hcd)	(struct spear_ohci *)hcd_to_ohci(hcd)
static void spear_start_ohci(struct spear_ohci *ohci)
static void spear_stop_ohci(struct spear_ohci *ohci)
static int __devinit ohci_spear_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_spear_hc_driver = ;
static int spear_ohci_hcd_drv_probe(struct platform_device *pdev)
static int spear_ohci_hcd_drv_remove(struct platform_device *pdev)
#if defined(CONFIG_PM)
static int spear_ohci_hcd_drv_suspend(struct platform_device *dev,
pm_message_t message)
static int spear_ohci_hcd_drv_resume(struct platform_device *dev)
static struct platform_driver spear_ohci_hcd_driver = ;
MODULE_ALIAS("platform:spear-ohci");
