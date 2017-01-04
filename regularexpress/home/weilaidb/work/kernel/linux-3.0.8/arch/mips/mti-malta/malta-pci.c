static struct resource bonito64_mem_resource = ;
static struct resource bonito64_io_resource = ;
static struct resource gt64120_mem_resource = ;
static struct resource gt64120_io_resource = ;
static struct resource msc_mem_resource = ;
static struct resource msc_io_resource = ;
extern struct pci_ops bonito64_pci_ops;
extern struct pci_ops gt64xxx_pci0_ops;
extern struct pci_ops msc_pci_ops;
static struct pci_controller bonito64_controller = ;
static struct pci_controller gt64120_controller = ;
static struct pci_controller msc_controller = ;
void __init mips_pcibios_init(void)
static void __init quirk_dlcsetup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82371AB_0,
quirk_dlcsetup);
