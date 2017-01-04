extern struct pci_ops nile4_pci_ops;
extern struct pci_ops gt64xxx_pci0_ops;
static struct resource lasat_pci_mem_resource = ;
static struct resource lasat_pci_io_resource = ;
static struct pci_controller lasat_pci_controller = ;
static int __init lasat_pci_setup(void)
arch_initcall(lasat_pci_setup);
#define LASAT_IRQ_ETH1   (LASAT_IRQ_BASE + 0)
#define LASAT_IRQ_ETH0   (LASAT_IRQ_BASE + 1)
#define LASAT_IRQ_HDC    (LASAT_IRQ_BASE + 2)
#define LASAT_IRQ_COMP   (LASAT_IRQ_BASE + 3)
#define LASAT_IRQ_HDLC   (LASAT_IRQ_BASE + 4)
#define LASAT_IRQ_PCIA   (LASAT_IRQ_BASE + 5)
#define LASAT_IRQ_PCIB   (LASAT_IRQ_BASE + 6)
#define LASAT_IRQ_PCIC   (LASAT_IRQ_BASE + 7)
#define LASAT_IRQ_PCID   (LASAT_IRQ_BASE + 8)
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
