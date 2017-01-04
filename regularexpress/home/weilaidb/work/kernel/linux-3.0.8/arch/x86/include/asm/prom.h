#define _ASM_X86_PROM_H
extern int of_ioapic;
extern u64 initial_dtb;
extern void add_dtb(u64 data);
extern void x86_add_irq_domains(void);
void __cpuinit x86_of_pci_init(void);
void x86_dtb_init(void);
static inline struct device_node *pci_device_to_OF_node(struct pci_dev *pdev)
static inline struct device_node *pci_bus_to_OF_node(struct pci_bus *bus)
static inline void add_dtb(u64 data)
static inline void x86_add_irq_domains(void)
static inline void x86_of_pci_init(void)
static inline void x86_dtb_init(void)
#define of_ioapic 0
extern char cmd_line[COMMAND_LINE_SIZE];
#define pci_address_to_pio pci_address_to_pio
unsigned long pci_address_to_pio(phys_addr_t addr);
static inline void irq_dispose_mapping(unsigned int virq)
#define HAVE_ARCH_DEVTREE_FIXUPS
