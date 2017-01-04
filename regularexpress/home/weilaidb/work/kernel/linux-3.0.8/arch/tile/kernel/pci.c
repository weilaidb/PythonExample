int __write_once tile_plx_gen1;
static struct pci_controller controllers[TILE_NUM_PCIE];
static int num_controllers;
static int pci_scan_flags[TILE_NUM_PCIE];
static struct pci_ops tile_cfg_ops;
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
EXPORT_SYMBOL(pcibios_align_resource);
static int __devinit tile_pcie_open(int controller_id, int config_type)
static int __devinit tile_init_irqs(int controller_id,
struct pci_controller *controller)
int __devinit tile_pci_init(void)
static int tile_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static void __devinit fixup_read_and_payload_sizes(void)
int __devinit pcibios_init(void)
subsys_initcall(pcibios_init);
void __devinit pcibios_fixup_bus(struct pci_bus *bus)
char __devinit *pcibios_setup(char *str)
void __devinit pcibios_update_irq(struct pci_dev *dev, int irq)
int pcibios_enable_device(struct pci_dev *dev, int mask)
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long max)
EXPORT_SYMBOL(pci_iomap);
static int __devinit tile_cfg_read(struct pci_bus *bus,
unsigned int devfn,
int offset,
int size,
u32 *val)
static int __devinit tile_cfg_write(struct pci_bus *bus,
unsigned int devfn,
int offset,
int size,
u32 val)
static struct pci_ops tile_cfg_ops = ;
#define TILE_READ(size, type)						\
type _tile_read##size(unsigned long addr)				\
\
EXPORT_SYMBOL(_tile_read##size)
TILE_READ(b, u8);
TILE_READ(w, u16);
TILE_READ(l, u32);
TILE_READ(q, u64);
#define TILE_WRITE(size, type)						\
void _tile_write##size(type val, unsigned long addr)			\
\
EXPORT_SYMBOL(_tile_write##size)
TILE_WRITE(b, u8);
TILE_WRITE(w, u16);
TILE_WRITE(l, u32);
TILE_WRITE(q, u64);
