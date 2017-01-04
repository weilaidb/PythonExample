#define EMMA2RH_PCI_HOST_SLOT 0x09
#define EMMA2RH_USB_SLOT 0x03
#define PCI_DEVICE_ID_NEC_EMMA2RH      0x014b
#define	MAX_SLOT_NUM 10
static unsigned char irq_map[][5] __initdata = ;
static void __devinit nec_usb_controller_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_NEC, PCI_DEVICE_ID_NEC_USB,
nec_usb_controller_fixup);
static void __devinit emma2rh_pci_host_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_NEC, PCI_DEVICE_ID_NEC_EMMA2RH,
emma2rh_pci_host_fixup);
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
