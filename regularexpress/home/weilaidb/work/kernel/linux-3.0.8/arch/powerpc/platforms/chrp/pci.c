void __iomem *gg2_pci_config_base;
int gg2_read_config(struct pci_bus *bus, unsigned int devfn, int off,
int len, u32 *val)
int gg2_write_config(struct pci_bus *bus, unsigned int devfn, int off,
int len, u32 val)
static struct pci_ops gg2_pci_ops =
;
int rtas_read_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 *val)
int rtas_write_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 val)
static struct pci_ops rtas_pci_ops =
;
volatile struct Hydra __iomem *Hydra = NULL;
int __init
hydra_init(void)
#define PRG_CL_RESET_VALID 0x00010000
static void __init
setup_python(struct pci_controller *hose, struct device_node *dev)
static void __init setup_peg2(struct pci_controller *hose, struct device_node *dev)
void __init
chrp_find_bridges(void)
#define SL82C105_IDECSR                0x40
static void __devinit chrp_pci_fixup_winbond_ata(struct pci_dev *sl82c105)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_WINBOND, PCI_DEVICE_ID_WINBOND_82C105,
chrp_pci_fixup_winbond_ata);
static void chrp_pci_fixup_vt8231_ata(struct pci_dev *viaide)
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_VIA, PCI_DEVICE_ID_VIA_82C586_1, chrp_pci_fixup_vt8231_ata);
