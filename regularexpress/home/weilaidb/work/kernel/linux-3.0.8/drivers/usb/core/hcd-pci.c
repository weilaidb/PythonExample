static DEFINE_MUTEX(companions_mutex);
#define CL_UHCI		PCI_CLASS_SERIAL_USB_UHCI
#define CL_OHCI		PCI_CLASS_SERIAL_USB_OHCI
#define CL_EHCI		PCI_CLASS_SERIAL_USB_EHCI
enum companion_action ;
static void companion_common(struct pci_dev *pdev, struct usb_hcd *hcd,
enum companion_action action)
static void set_hs_companion(struct pci_dev *pdev, struct usb_hcd *hcd)
static void clear_hs_companion(struct pci_dev *pdev, struct usb_hcd *hcd)
static void wait_for_companions(struct pci_dev *pdev, struct usb_hcd *hcd)
static inline void set_hs_companion(struct pci_dev *d, struct usb_hcd *h)
static inline void clear_hs_companion(struct pci_dev *d, struct usb_hcd *h)
static inline void wait_for_companions(struct pci_dev *d, struct usb_hcd *h)
int usb_hcd_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
EXPORT_SYMBOL_GPL(usb_hcd_pci_probe);
void usb_hcd_pci_remove(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(usb_hcd_pci_remove);
void usb_hcd_pci_shutdown(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(usb_hcd_pci_shutdown);
static void powermac_set_asic(struct pci_dev *pci_dev, int enable)
static inline void powermac_set_asic(struct pci_dev *pci_dev, int enable)
static int check_root_hub_suspended(struct device *dev)
static int suspend_common(struct device *dev, bool do_wakeup)
static int resume_common(struct device *dev, int event)
static int hcd_pci_suspend(struct device *dev)
static int hcd_pci_suspend_noirq(struct device *dev)
static int hcd_pci_resume_noirq(struct device *dev)
static int hcd_pci_resume(struct device *dev)
static int hcd_pci_restore(struct device *dev)
#define hcd_pci_suspend		NULL
#define hcd_pci_suspend_noirq	NULL
#define hcd_pci_resume_noirq	NULL
#define hcd_pci_resume		NULL
#define hcd_pci_restore		NULL
static int hcd_pci_runtime_suspend(struct device *dev)
static int hcd_pci_runtime_resume(struct device *dev)
#define hcd_pci_runtime_suspend	NULL
#define hcd_pci_runtime_resume	NULL
const struct dev_pm_ops usb_hcd_pci_pm_ops = ;
EXPORT_SYMBOL_GPL(usb_hcd_pci_pm_ops);
