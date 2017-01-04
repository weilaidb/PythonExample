static int __devinit
ohci_ppc_of_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_ppc_of_hc_driver = ;
static int __devinit ohci_hcd_ppc_of_probe(struct platform_device *op)
static int ohci_hcd_ppc_of_remove(struct platform_device *op)
static void ohci_hcd_ppc_of_shutdown(struct platform_device *op)
static const struct of_device_id ohci_hcd_ppc_of_match[] = ;
MODULE_DEVICE_TABLE(of, ohci_hcd_ppc_of_match);
#if	!defined(CONFIG_USB_OHCI_HCD_PPC_OF_BE) && \
!defined(CONFIG_USB_OHCI_HCD_PPC_OF_LE)
#error "No endianess selected for ppc-of-ohci"
static struct platform_driver ohci_hcd_ppc_of_driver = ;
