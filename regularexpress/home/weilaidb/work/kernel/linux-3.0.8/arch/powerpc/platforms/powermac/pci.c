#undef DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
static int has_uninorth;
static struct pci_controller *u3_agp;
static int has_second_ohare;
extern int pcibios_assign_bus_offset;
struct device_node *k2_skiplist[2];
#define BANDIT_DEVID_2	8
#define BANDIT_REVID	3
#define BANDIT_DEVNUM	11
#define BANDIT_MAGIC	0x50
#define BANDIT_COHERENT	0x40
static int __init fixup_one_level_bus_range(struct device_node *node, int higher)
static void __init fixup_bus_range(struct device_node *bridge)
#define MACRISC_CFA0(devfn, off)	\
((1 << (unsigned int)PCI_SLOT(dev_fn)) \
| (((unsigned int)PCI_FUNC(dev_fn)) << 8) \
| (((unsigned int)(off)) & 0xFCUL))
#define MACRISC_CFA1(bus, devfn, off)	\
((((unsigned int)(bus)) << 16) \
|(((unsigned int)(devfn)) << 8) \
|(((unsigned int)(off)) & 0xFCUL) \
|1UL)
static volatile void __iomem *macrisc_cfg_access(struct pci_controller* hose,
u8 bus, u8 dev_fn, u8 offset)
static int macrisc_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int macrisc_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops macrisc_pci_ops =
;
static int chaos_validate_dev(struct pci_bus *bus, int devfn, int offset)
static int
chaos_read_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 *val)
static int
chaos_write_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 val)
static struct pci_ops chaos_pci_ops =
;
static void __init setup_chaos(struct pci_controller *hose,
struct resource *addr)
static int u3_ht_skip_device(struct pci_controller *hose,
struct pci_bus *bus, unsigned int devfn)
#define U3_HT_CFA0(devfn, off)		\
((((unsigned int)devfn) << 8) | offset)
#define U3_HT_CFA1(bus, devfn, off)	\
(U3_HT_CFA0(devfn, off) \
+ (((unsigned int)bus) << 16) \
+ 0x01000000UL)
static void __iomem *u3_ht_cfg_access(struct pci_controller *hose, u8 bus,
u8 devfn, u8 offset, int *swap)
static int u3_ht_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int u3_ht_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops u3_ht_pci_ops =
;
#define U4_PCIE_CFA0(devfn, off)	\
((1 << ((unsigned int)PCI_SLOT(dev_fn)))	\
| (((unsigned int)PCI_FUNC(dev_fn)) << 8)	\
| ((((unsigned int)(off)) >> 8) << 28) \
| (((unsigned int)(off)) & 0xfcU))
#define U4_PCIE_CFA1(bus, devfn, off)	\
((((unsigned int)(bus)) << 16) \
|(((unsigned int)(devfn)) << 8)	\
| ((((unsigned int)(off)) >> 8) << 28) \
|(((unsigned int)(off)) & 0xfcU)	\
|1UL)
static volatile void __iomem *u4_pcie_cfg_access(struct pci_controller* hose,
u8 bus, u8 dev_fn, int offset)
static int u4_pcie_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int u4_pcie_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops u4_pcie_pci_ops =
;
static void __init init_bandit(struct pci_controller *bp)
static void __init init_p2pbridge(void)
static void __init init_second_ohare(void)
static void __init fixup_nec_usb2(void)
static void __init setup_bandit(struct pci_controller *hose,
struct resource *addr)
static int __init setup_uninorth(struct pci_controller *hose,
struct resource *addr)
static void __init setup_u3_agp(struct pci_controller* hose)
static void __init setup_u4_pcie(struct pci_controller* hose)
static void __init parse_region_decode(struct pci_controller *hose,
u32 decode)
static void __init setup_u3_ht(struct pci_controller* hose)
static int __init pmac_add_bridge(struct device_node *dev)
void __devinit pmac_pci_irq_fixup(struct pci_dev *dev)
void __init pmac_pci_init(void)
int pmac_pci_enable_device_hook(struct pci_dev *dev)
void __devinit pmac_pci_fixup_ohci(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_APPLE, PCI_ANY_ID, pmac_pci_fixup_ohci);
void __init pmac_pcibios_after_init(void)
void pmac_pci_fixup_cardbus(struct pci_dev* dev)
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_TI, PCI_ANY_ID, pmac_pci_fixup_cardbus);
void pmac_pci_fixup_pciata(struct pci_dev* dev)
DECLARE_PCI_FIXUP_EARLY(PCI_ANY_ID, PCI_ANY_ID, pmac_pci_fixup_pciata);
static void fixup_k2_sata(struct pci_dev* dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_SERVERWORKS, 0x0240, fixup_k2_sata);
static void fixup_u4_pcie(struct pci_dev* dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_APPLE, PCI_DEVICE_ID_APPLE_U4_PCIE, fixup_u4_pcie);
