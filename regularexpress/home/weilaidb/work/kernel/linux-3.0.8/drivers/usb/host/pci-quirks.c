#define UHCI_USBLEGSUP		0xc0
#define UHCI_USBCMD		0
#define UHCI_USBINTR		4
#define UHCI_USBLEGSUP_RWC	0x8f00
#define UHCI_USBLEGSUP_RO	0x5040
#define UHCI_USBCMD_RUN		0x0001
#define UHCI_USBCMD_HCRESET	0x0002
#define UHCI_USBCMD_EGSM	0x0008
#define UHCI_USBCMD_CONFIGURE	0x0040
#define UHCI_USBINTR_RESUME	0x0002
#define OHCI_CONTROL		0x04
#define OHCI_CMDSTATUS		0x08
#define OHCI_INTRSTATUS		0x0c
#define OHCI_INTRENABLE		0x10
#define OHCI_INTRDISABLE	0x14
#define OHCI_FMINTERVAL		0x34
#define OHCI_HCR		(1 << 0)
#define OHCI_OCR		(1 << 3)
#define OHCI_CTRL_RWC		(1 << 9)
#define OHCI_CTRL_IR		(1 << 8)
#define OHCI_INTR_OC		(1 << 30)
#define EHCI_HCC_PARAMS		0x08
#define EHCI_USBCMD		0
#define EHCI_USBCMD_RUN		(1 << 0)
#define EHCI_USBSTS		4
#define EHCI_USBSTS_HALTED	(1 << 12)
#define EHCI_USBINTR		8
#define EHCI_CONFIGFLAG		0x40
#define EHCI_USBLEGSUP		0
#define EHCI_USBLEGSUP_BIOS	(1 << 16)
#define EHCI_USBLEGSUP_OS	(1 << 24)
#define EHCI_USBLEGCTLSTS	4
#define EHCI_USBLEGCTLSTS_SOOE	(1 << 13)
#define	AB_REG_BAR_LOW		0xe0
#define	AB_REG_BAR_HIGH		0xe1
#define	AB_REG_BAR_SB700	0xf0
#define	AB_INDX(addr)		((addr) + 0x00)
#define	AB_DATA(addr)		((addr) + 0x04)
#define	AX_INDXC		0x30
#define	AX_DATAC		0x34
#define	NB_PCIE_INDX_ADDR	0xe0
#define	NB_PCIE_INDX_DATA	0xe4
#define	PCIE_P_CNTL		0x10040
#define	BIF_NB			0x10002
#define	NB_PIF0_PWRDOWN_0	0x01100012
#define	NB_PIF0_PWRDOWN_1	0x01100013
#define USB_INTEL_XUSB2PR      0xD0
#define USB_INTEL_USB3_PSSEN   0xD8
static struct amd_chipset_info  amd_chipset;
static DEFINE_SPINLOCK(amd_lock);
int usb_amd_find_chipset_info(void)
EXPORT_SYMBOL_GPL(usb_amd_find_chipset_info);
static void usb_amd_quirk_pll(int disable)
void usb_amd_quirk_pll_disable(void)
EXPORT_SYMBOL_GPL(usb_amd_quirk_pll_disable);
void usb_amd_quirk_pll_enable(void)
EXPORT_SYMBOL_GPL(usb_amd_quirk_pll_enable);
void usb_amd_dev_put(void)
EXPORT_SYMBOL_GPL(usb_amd_dev_put);
void uhci_reset_hc(struct pci_dev *pdev, unsigned long base)
EXPORT_SYMBOL_GPL(uhci_reset_hc);
int uhci_check_and_reset_hc(struct pci_dev *pdev, unsigned long base)
EXPORT_SYMBOL_GPL(uhci_check_and_reset_hc);
static inline int io_type_enabled(struct pci_dev *pdev, unsigned int mask)
#define pio_enabled(dev) io_type_enabled(dev, PCI_COMMAND_IO)
#define mmio_enabled(dev) io_type_enabled(dev, PCI_COMMAND_MEMORY)
static void __devinit quirk_usb_handoff_uhci(struct pci_dev *pdev)
static int __devinit mmio_resource_enabled(struct pci_dev *pdev, int idx)
static void __devinit quirk_usb_handoff_ohci(struct pci_dev *pdev)
static const struct dmi_system_id __devinitconst ehci_dmi_nohandoff_table[] = ;
static void __devinit ehci_bios_handoff(struct pci_dev *pdev,
void __iomem *op_reg_base,
u32 cap, u8 offset)
static void __devinit quirk_usb_disable_ehci(struct pci_dev *pdev)
static int handshake(void __iomem *ptr, u32 mask, u32 done,
int wait_usec, int delay_usec)
bool usb_is_intel_switchable_xhci(struct pci_dev *pdev)
EXPORT_SYMBOL_GPL(usb_is_intel_switchable_xhci);
void usb_enable_xhci_ports(struct pci_dev *xhci_pdev)
EXPORT_SYMBOL_GPL(usb_enable_xhci_ports);
static void __devinit quirk_usb_handoff_xhci(struct pci_dev *pdev)
static void __devinit quirk_usb_early_handoff(struct pci_dev *pdev)
DECLARE_PCI_FIXUP_FINAL(PCI_ANY_ID, PCI_ANY_ID, quirk_usb_early_handoff);
