struct ehci_sh_priv ;
static int ehci_sh_reset(struct usb_hcd *hcd)
static const struct hc_driver ehci_sh_hc_driver = ;
static int ehci_hcd_sh_probe(struct platform_device *pdev)
static int __exit ehci_hcd_sh_remove(struct platform_device *pdev)
static void ehci_hcd_sh_shutdown(struct platform_device *pdev)
static struct platform_driver ehci_hcd_sh_driver = ;
MODULE_ALIAS("platform:sh_ehci");
