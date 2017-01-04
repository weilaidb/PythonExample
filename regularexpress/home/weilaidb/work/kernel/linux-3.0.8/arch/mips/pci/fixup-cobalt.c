#define COBALT_PCICONF_CPU	0x06
#define COBALT_PCICONF_ETH0	0x07
#define COBALT_PCICONF_RAQSCSI	0x08
#define COBALT_PCICONF_VIA	0x09
#define COBALT_PCICONF_PCISLOT	0x0A
#define COBALT_PCICONF_ETH1	0x0C
#define VIA_COBALT_BRD_ID_REG  0x94
#define VIA_COBALT_BRD_REG_to_ID(reg)	((unsigned char)(reg) >> 4)
static void qube_raq_galileo_early_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_MARVELL, PCI_DEVICE_ID_MARVELL_GT64111,
qube_raq_galileo_early_fixup);
static void __devinit cobalt_legacy_ide_resource_fixup(struct pci_dev *dev,
struct resource *res)
static void __devinit cobalt_legacy_ide_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_VIA, PCI_DEVICE_ID_VIA_82C586_1,
cobalt_legacy_ide_fixup);
static void qube_raq_via_bmIDE_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_VIA, PCI_DEVICE_ID_VIA_82C586_1,
qube_raq_via_bmIDE_fixup);
static void qube_raq_galileo_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_MARVELL, PCI_DEVICE_ID_MARVELL_GT64111,
qube_raq_galileo_fixup);
int cobalt_board_id;
static void qube_raq_via_board_id_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_VIA, PCI_DEVICE_ID_VIA_82C586_0,
qube_raq_via_board_id_fixup);
static char irq_tab_qube1[] __initdata = ;
static char irq_tab_cobalt[] __initdata = ;
static char irq_tab_raq2[] __initdata = ;
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
