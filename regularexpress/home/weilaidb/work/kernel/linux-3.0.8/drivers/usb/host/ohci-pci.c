#error "This file is PCI bus glue.  CONFIG_PCI must be defined."
static int broken_suspend(struct usb_hcd *hcd)
static int ohci_quirk_amd756(struct usb_hcd *hcd)
static int ohci_quirk_opti(struct usb_hcd *hcd)
static int ohci_quirk_ns(struct usb_hcd *hcd)
static int ohci_quirk_zfmicro(struct usb_hcd *hcd)
static int ohci_quirk_toshiba_scc(struct usb_hcd *hcd)
static void ohci_quirk_nec_worker(struct work_struct *work)
static int ohci_quirk_nec(struct usb_hcd *hcd)
static int ohci_quirk_amd700(struct usb_hcd *hcd)
static int ohci_quirk_nvidia_shutdown(struct usb_hcd *hcd)
static void sb800_prefetch(struct ohci_hcd *ohci, int on)
static const struct pci_device_id ohci_pci_quirks[] = ;
static int ohci_pci_reset (struct usb_hcd *hcd)
static int __devinit ohci_pci_start (struct usb_hcd *hcd)
static int ohci_pci_suspend(struct usb_hcd *hcd, bool do_wakeup)
static int ohci_pci_resume(struct usb_hcd *hcd, bool hibernated)
static const struct hc_driver ohci_pci_hc_driver = ;
static const struct pci_device_id pci_ids [] = ;
MODULE_DEVICE_TABLE (pci, pci_ids);
static struct pci_driver ohci_pci_driver = ;
