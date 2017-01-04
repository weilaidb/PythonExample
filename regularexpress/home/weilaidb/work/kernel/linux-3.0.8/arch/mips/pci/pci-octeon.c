#define USE_OCTEON_INTERNAL_ARBITER
#define OCTEON_PCI_IOSPACE_BASE     0x80011a0400000000ull
#define OCTEON_PCI_IOSPACE_SIZE     (1ull<<32)
#define OCTEON_PCI_MEMSPACE_OFFSET  (0x00011b0000000000ull)
u64 octeon_bar1_pci_phys;
union octeon_pci_address ;
int __initdata (*octeon_pcibios_map_irq)(const struct pci_dev *dev,
u8 slot, u8 pin);
enum octeon_dma_bar_type octeon_dma_bar_type = OCTEON_DMA_BAR_TYPE_INVALID;
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
const char *octeon_get_pci_interrupts(void)
int __init octeon_pci_pcibios_map_irq(const struct pci_dev *dev,
u8 slot, u8 pin)
static int octeon_read_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 *val)
static int octeon_write_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 val)
static struct pci_ops octeon_pci_ops = ;
static struct resource octeon_pci_mem_resource = ;
static struct resource octeon_pci_io_resource = ;
static struct pci_controller octeon_pci_controller = ;
static void octeon_pci_initialize(void)
static int __init octeon_pci_setup(void)
arch_initcall(octeon_pci_setup);
