#define MAX_SLOTS		21
static void it8152_mask_irq(struct irq_data *d)
static void it8152_unmask_irq(struct irq_data *d)
static struct irq_chip it8152_irq_chip = ;
void it8152_init_irq(void)
void it8152_irq_demux(unsigned int irq, struct irq_desc *desc)
int __init it8152_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static unsigned long it8152_pci_dev_base_address(struct pci_bus *bus,
unsigned int devfn)
static int it8152_pci_read_config(struct pci_bus *bus,
unsigned int devfn, int where,
int size, u32 *value)
static int it8152_pci_write_config(struct pci_bus *bus,
unsigned int devfn, int where,
int size, u32 value)
static struct pci_ops it8152_ops = ;
static struct resource it8152_io = ;
static struct resource it8152_mem = ;
static int it8152_pci_platform_notify(struct device *dev)
static int it8152_pci_platform_notify_remove(struct device *dev)
int dma_needs_bounce(struct device *dev, dma_addr_t dma_addr, size_t size)
int dma_set_coherent_mask(struct device *dev, u64 mask)
int __init it8152_pci_setup(int nr, struct pci_sys_data *sys)
unsigned int pcibios_max_latency = 255;
void pcibios_set_master(struct pci_dev *dev)
struct pci_bus * __init it8152_pci_scan_bus(int nr, struct pci_sys_data *sys)
EXPORT_SYMBOL(dma_set_coherent_mask);
