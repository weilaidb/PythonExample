#define BUS2QUAD(global) (mp_bus_id_to_node[global])
#define BUS2LOCAL(global) (mp_bus_id_to_local[global])
#define QUADLOCAL2BUS(quad,local) (quad_local_to_mp_bus_id[quad][local])
#define PCI_CONF1_MQ_ADDRESS(bus, devfn, reg) \
(0x80000000 | (BUS2LOCAL(bus) << 16) | (devfn << 8) | (reg & ~3))
static void write_cf8(unsigned bus, unsigned devfn, unsigned reg)
static int pci_conf1_mq_read(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 *value)
static int pci_conf1_mq_write(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 value)
#undef PCI_CONF1_MQ_ADDRESS
static struct pci_raw_ops pci_direct_conf1_mq = ;
static void __devinit pci_fixup_i450nx(struct pci_dev *d)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82451NX, pci_fixup_i450nx);
int __init pci_numaq_init(void)
