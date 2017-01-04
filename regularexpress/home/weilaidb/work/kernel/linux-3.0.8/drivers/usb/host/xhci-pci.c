#define PCI_VENDOR_ID_FRESCO_LOGIC	0x1b73
#define PCI_DEVICE_ID_FRESCO_LOGIC_PDK	0x1000
#define PCI_VENDOR_ID_ETRON		0x1b6f
#define PCI_DEVICE_ID_ASROCK_P67	0x7023
static const char hcd_name[] = "xhci_hcd";
static int xhci_pci_reinit(struct xhci_hcd *xhci, struct pci_dev *pdev)
static int xhci_pci_setup(struct usb_hcd *hcd)
static int xhci_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void xhci_pci_remove(struct pci_dev *dev)
static int xhci_pci_suspend(struct usb_hcd *hcd, bool do_wakeup)
static int xhci_pci_resume(struct usb_hcd *hcd, bool hibernated)
static const struct hc_driver xhci_pci_hc_driver = ;
static const struct pci_device_id pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, pci_ids);
static struct pci_driver xhci_pci_driver = ;
int xhci_register_pci(void)
void xhci_unregister_pci(void)
