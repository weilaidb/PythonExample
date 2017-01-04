struct s5p_ehci_hcd ;
static const struct hc_driver s5p_ehci_hc_driver = ;
static int __devinit s5p_ehci_probe(struct platform_device *pdev)
static int __devexit s5p_ehci_remove(struct platform_device *pdev)
static void s5p_ehci_shutdown(struct platform_device *pdev)
static struct platform_driver s5p_ehci_driver = ;
MODULE_ALIAS("platform:s5p-ehci");
