static int debug_pci;
static int use_firmware;
static void pcibios_bus_report_status(struct pci_bus *bus, u_int status_mask, int warn)
void pcibios_report_status(u_int status_mask, int warn)
static void __devinit pci_fixup_83c553(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_WINBOND, PCI_DEVICE_ID_WINBOND_83C553, pci_fixup_83c553);
static void __devinit pci_fixup_unassign(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_WINBOND2, PCI_DEVICE_ID_WINBOND2_89C940F, pci_fixup_unassign);
static void __devinit pci_fixup_dec21285(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_DEC, PCI_DEVICE_ID_DEC_21285, pci_fixup_dec21285);
static void __devinit pci_fixup_ide_bases(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_ANY_ID, PCI_ANY_ID, pci_fixup_ide_bases);
static void __devinit pci_fixup_dec21142(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_DEC, PCI_DEVICE_ID_DEC_21142, pci_fixup_dec21142);
static void __devinit pci_fixup_cy82c693(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_CONTAQ, PCI_DEVICE_ID_CONTAQ_82C693, pci_fixup_cy82c693);
static void __init pci_fixup_it8152(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_ITE, PCI_DEVICE_ID_ITE_8152, pci_fixup_it8152);
void __devinit pcibios_update_irq(struct pci_dev *dev, int irq)
static inline int pdev_bad_for_parity(struct pci_dev *dev)
static void __devinit
pdev_fixup_device_resources(struct pci_sys_data *root, struct pci_dev *dev)
static void __devinit
pbus_assign_bus_resources(struct pci_bus *bus, struct pci_sys_data *root)
void pcibios_fixup_bus(struct pci_bus *bus)
void
pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res)
void __devinit
pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region)
EXPORT_SYMBOL(pcibios_fixup_bus);
EXPORT_SYMBOL(pcibios_resource_to_bus);
EXPORT_SYMBOL(pcibios_bus_to_resource);
static u8 __devinit pcibios_swizzle(struct pci_dev *dev, u8 *pin)
static int pcibios_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static void __init pcibios_init_hw(struct hw_pci *hw)
void __init pci_common_init(struct hw_pci *hw)
char * __init pcibios_setup(char *str)
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
int pcibios_enable_device(struct pci_dev *dev, int mask)
int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine)
