#define __IO_ADDRESS(n) ((void __iomem *)(unsigned long)IO_ADDRESS(n))
#define SYS_PCICTL		__IO_ADDRESS(VERSATILE_SYS_PCICTL)
#define PCI_IMAP0		__IO_ADDRESS(VERSATILE_PCI_CORE_BASE+0x0)
#define PCI_IMAP1		__IO_ADDRESS(VERSATILE_PCI_CORE_BASE+0x4)
#define PCI_IMAP2		__IO_ADDRESS(VERSATILE_PCI_CORE_BASE+0x8)
#define PCI_SMAP0		__IO_ADDRESS(VERSATILE_PCI_CORE_BASE+0x10)
#define PCI_SMAP1		__IO_ADDRESS(VERSATILE_PCI_CORE_BASE+0x14)
#define PCI_SMAP2		__IO_ADDRESS(VERSATILE_PCI_CORE_BASE+0x18)
#define PCI_SELFID		__IO_ADDRESS(VERSATILE_PCI_CORE_BASE+0xc)
#define DEVICE_ID_OFFSET		0x00
#define CSR_OFFSET			0x04
#define CLASS_ID_OFFSET			0x08
#define VP_PCI_DEVICE_ID		0x030010ee
#define VP_PCI_CLASS_ID			0x0b400000
static unsigned long pci_slot_ignore = 0;
static int __init versatile_pci_slot_ignore(char *str)
__setup("pci_slot_ignore=", versatile_pci_slot_ignore);
static void __iomem *__pci_addr(struct pci_bus *bus,
unsigned int devfn, int offset)
static int versatile_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *val)
static int versatile_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 val)
static struct pci_ops pci_versatile_ops = ;
static struct resource io_mem = ;
static struct resource non_mem = ;
static struct resource pre_mem = ;
static int __init pci_versatile_setup_resources(struct resource **resource)
int __init pci_versatile_setup(int nr, struct pci_sys_data *sys)
struct pci_bus * __init pci_versatile_scan_bus(int nr, struct pci_sys_data *sys)
void __init pci_versatile_preinit(void)
static int __init versatile_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci versatile_pci __initdata = ;
static int __init versatile_pci_init(void)
subsys_initcall(versatile_pci_init);
