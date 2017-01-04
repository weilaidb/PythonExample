#define PA_PXP_CFA(bus, devfn, off) (((bus) << 20) | ((devfn) << 12) | (off))
static inline int pa_pxp_offset_valid(u8 bus, u8 devfn, int offset)
static void volatile __iomem *pa_pxp_cfg_addr(struct pci_controller *hose,
u8 bus, u8 devfn, int offset)
static inline int is_root_port(int busno, int devfn)
static inline int is_5945_reg(int reg)
static int workaround_5945(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int pa_pxp_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int pa_pxp_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops pa_pxp_ops = ;
static void __init setup_pa_pxp(struct pci_controller *hose)
static int __init pas_add_bridge(struct device_node *dev)
void __init pas_pci_init(void)
void __iomem *pasemi_pci_getcfgaddr(struct pci_dev *dev, int offset)
