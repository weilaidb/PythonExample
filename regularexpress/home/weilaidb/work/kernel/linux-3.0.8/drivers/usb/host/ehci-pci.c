#error "This file is PCI bus glue.  CONFIG_PCI must be defined."
#define PCI_DEVICE_ID_INTEL_CE4100_USB	0x2e70
static int ehci_pci_reinit(struct ehci_hcd *ehci, struct pci_dev *pdev)
static int ehci_pci_setup(struct usb_hcd *hcd)
static int ehci_pci_suspend(struct usb_hcd *hcd, bool do_wakeup)
static bool usb_is_intel_switchable_ehci(struct pci_dev *pdev)
static void ehci_enable_xhci_companion(void)
static int ehci_pci_resume(struct usb_hcd *hcd, bool hibernated)
static int ehci_update_device(struct usb_hcd *hcd, struct usb_device *udev)
static const struct hc_driver ehci_pci_hc_driver = ;
static const struct pci_device_id pci_ids [] = ;
MODULE_DEVICE_TABLE(pci, pci_ids);
static struct pci_driver ehci_pci_driver = ;
