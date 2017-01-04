#undef DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
#define PCI_PROBE_BIOS		0x0001
#define PCI_PROBE_CONF1		0x0002
#define PCI_PROBE_CONF2		0x0004
#define PCI_NO_CHECKS		0x0400
#define PCI_ASSIGN_ROMS		0x1000
#define PCI_BIOS_IRQ_SCAN	0x2000
#define PCI_ASSIGN_ALL_BUSSES	0x4000
extern unsigned int __nongpreldata pci_probe;
extern unsigned int pcibios_max_latency;
void pcibios_resource_survey(void);
extern int __nongpreldata pcibios_last_bus;
extern struct pci_bus *__nongpreldata pci_root_bus;
extern struct pci_ops *__nongpreldata pci_root_ops;
extern unsigned int pcibios_irq_mask;
void pcibios_irq_init(void);
void pcibios_fixup_irqs(void);
void pcibios_enable_irq(struct pci_dev *dev);
