#define BIOS32_SIGNATURE	(('_' << 0) + ('3' << 8) + ('2' << 16) + ('_' << 24))
#define PCI_SIGNATURE		(('P' << 0) + ('C' << 8) + ('I' << 16) + (' ' << 24))
#define PCI_SERVICE		(('$' << 0) + ('P' << 8) + ('C' << 16) + ('I' << 24))
#define PCIBIOS_HW_TYPE1		0x01
#define PCIBIOS_HW_TYPE2		0x02
#define PCIBIOS_HW_TYPE1_SPEC		0x10
#define PCIBIOS_HW_TYPE2_SPEC		0x20
int pcibios_enabled;
static inline void set_bios_x(void)
union bios32 ;
static struct  bios32_indirect = ;
static unsigned long bios32_service(unsigned long service)
static struct  pci_indirect = ;
static int pci_bios_present;
static int __devinit check_pcibios(void)
static int pci_bios_read(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 *value)
static int pci_bios_write(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 value)
static struct pci_raw_ops pci_bios_access = ;
static struct pci_raw_ops * __devinit pci_find_bios(void)
struct irq_routing_options  __attribute__((packed));
struct irq_routing_table * pcibios_get_irq_routing_table(void)
EXPORT_SYMBOL(pcibios_get_irq_routing_table);
int pcibios_set_irq_routing(struct pci_dev *dev, int pin, int irq)
EXPORT_SYMBOL(pcibios_set_irq_routing);
void __init pci_pcbios_init(void)
