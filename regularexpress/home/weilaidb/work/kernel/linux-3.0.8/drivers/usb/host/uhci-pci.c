static void uhci_pci_reset_hc(struct uhci_hcd *uhci)
static int uhci_pci_check_and_reset_hc(struct uhci_hcd *uhci)
static void uhci_pci_configure_hc(struct uhci_hcd *uhci)
static int uhci_pci_resume_detect_interrupts_are_broken(struct uhci_hcd *uhci)
static int uhci_pci_global_suspend_mode_is_broken(struct uhci_hcd *uhci)
static int uhci_pci_init(struct usb_hcd *hcd)
static void uhci_shutdown(struct pci_dev *pdev)
static int uhci_pci_suspend(struct usb_hcd *hcd, bool do_wakeup)
static int uhci_pci_resume(struct usb_hcd *hcd, bool hibernated)
static const struct hc_driver uhci_driver = ;
static DEFINE_PCI_DEVICE_TABLE(uhci_pci_ids) = ;
MODULE_DEVICE_TABLE(pci, uhci_pci_ids);
static struct pci_driver uhci_pci_driver = ;
