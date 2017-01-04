static int ehci_xilinx_of_setup(struct usb_hcd *hcd)
static int ehci_xilinx_port_handed_over(struct usb_hcd *hcd, int portnum)
static const struct hc_driver ehci_xilinx_of_hc_driver = ;
static int __devinit ehci_hcd_xilinx_of_probe(struct platform_device *op)
static int ehci_hcd_xilinx_of_remove(struct platform_device *op)
static int ehci_hcd_xilinx_of_shutdown(struct platform_device *op)
static const struct of_device_id ehci_hcd_xilinx_of_match[] = ;
MODULE_DEVICE_TABLE(of, ehci_hcd_xilinx_of_match);
static struct platform_driver ehci_hcd_xilinx_of_driver = ;
