#define _PCI_ASB2305_H
#undef DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
#define PCI_PROBE_BIOS 1
#define PCI_PROBE_CONF1 2
#define PCI_PROBE_CONF2 4
#define PCI_NO_CHECKS 0x400
#define PCI_ASSIGN_ROMS 0x1000
#define PCI_BIOS_IRQ_SCAN 0x2000
extern unsigned int pci_probe;
extern unsigned int pcibios_max_latency;
extern void pcibios_resource_survey(void);
extern int pcibios_last_bus;
extern struct pci_bus *pci_root_bus;
extern struct pci_ops *pci_root_ops;
extern struct irq_routing_table *pcibios_get_irq_routing_table(void);
extern int pcibios_set_irq_routing(struct pci_dev *dev, int pin, int irq);
struct irq_info  __attribute__((packed));
struct irq_routing_table  __attribute__((packed));
extern unsigned int pcibios_irq_mask;
extern void pcibios_irq_init(void);
extern void pcibios_fixup_irqs(void);
extern void pcibios_enable_irq(struct pci_dev *dev);
