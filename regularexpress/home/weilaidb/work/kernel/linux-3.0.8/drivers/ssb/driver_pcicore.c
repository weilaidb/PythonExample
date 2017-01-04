static u32 ssb_pcie_read(struct ssb_pcicore *pc, u32 address);
static void ssb_pcie_write(struct ssb_pcicore *pc, u32 address, u32 data);
static u16 ssb_pcie_mdio_read(struct ssb_pcicore *pc, u8 device, u8 address);
static void ssb_pcie_mdio_write(struct ssb_pcicore *pc, u8 device,
u8 address, u16 data);
static inline
u32 pcicore_read32(struct ssb_pcicore *pc, u16 offset)
static inline
void pcicore_write32(struct ssb_pcicore *pc, u16 offset, u32 value)
static inline
u16 pcicore_read16(struct ssb_pcicore *pc, u16 offset)
static inline
void pcicore_write16(struct ssb_pcicore *pc, u16 offset, u16 value)
#define mips_busprobe32(val, addr)	get_dbe((val), ((u32 *)(addr)))
#define SSB_PCI_SLOT_MAX	16
static DEFINE_SPINLOCK(cfgspace_lock);
static struct ssb_pcicore *extpci_core;
static u32 get_cfgspace_addr(struct ssb_pcicore *pc,
unsigned int bus, unsigned int dev,
unsigned int func, unsigned int off)
static int ssb_extpci_read_config(struct ssb_pcicore *pc,
unsigned int bus, unsigned int dev,
unsigned int func, unsigned int off,
void *buf, int len)
static int ssb_extpci_write_config(struct ssb_pcicore *pc,
unsigned int bus, unsigned int dev,
unsigned int func, unsigned int off,
const void *buf, int len)
static int ssb_pcicore_read_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 *val)
static int ssb_pcicore_write_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 val)
static struct pci_ops ssb_pcicore_pciops = ;
static struct resource ssb_pcicore_mem_resource = ;
static struct resource ssb_pcicore_io_resource = ;
static struct pci_controller ssb_pcicore_controller = ;
int ssb_pcicore_plat_dev_init(struct pci_dev *d)
static void ssb_pcicore_fixup_pcibridge(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_ANY_ID, PCI_ANY_ID, ssb_pcicore_fixup_pcibridge);
int ssb_pcicore_pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
static void ssb_pcicore_init_hostmode(struct ssb_pcicore *pc)
static int pcicore_is_in_hostmode(struct ssb_pcicore *pc)
static void ssb_pcicore_fix_sprom_core_index(struct ssb_pcicore *pc)
static u8 ssb_pcicore_polarity_workaround(struct ssb_pcicore *pc)
static void ssb_pcicore_serdes_workaround(struct ssb_pcicore *pc)
static void ssb_pcicore_pci_setup_workarounds(struct ssb_pcicore *pc)
static void ssb_pcicore_pcie_setup_workarounds(struct ssb_pcicore *pc)
static void ssb_pcicore_init_clientmode(struct ssb_pcicore *pc)
void ssb_pcicore_init(struct ssb_pcicore *pc)
static u32 ssb_pcie_read(struct ssb_pcicore *pc, u32 address)
static void ssb_pcie_write(struct ssb_pcicore *pc, u32 address, u32 data)
static void ssb_pcie_mdio_set_phy(struct ssb_pcicore *pc, u8 phy)
static u16 ssb_pcie_mdio_read(struct ssb_pcicore *pc, u8 device, u8 address)
static void ssb_pcie_mdio_write(struct ssb_pcicore *pc, u8 device,
u8 address, u16 data)
int ssb_pcicore_dev_irqvecs_enable(struct ssb_pcicore *pc,
struct ssb_device *dev)
EXPORT_SYMBOL(ssb_pcicore_dev_irqvecs_enable);
