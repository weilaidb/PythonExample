static int ehci_ppc_of_setup(struct usb_hcd *hcd)
static const struct hc_driver ehci_ppc_of_hc_driver = ;
#define PPC440EPX_EHCI0_INSREG_BMT	(0x1 << 0)
static int __devinit
ppc44x_enable_bmt(struct device_node *dn)
static int __devinit ehci_hcd_ppc_of_probe(struct platform_device *op)
static int ehci_hcd_ppc_of_remove(struct platform_device *op)
static void ehci_hcd_ppc_of_shutdown(struct platform_device *op)
static const struct of_device_id ehci_hcd_ppc_of_match[] = ;
MODULE_DEVICE_TABLE(of, ehci_hcd_ppc_of_match);
static struct platform_driver ehci_hcd_ppc_of_driver = ;
