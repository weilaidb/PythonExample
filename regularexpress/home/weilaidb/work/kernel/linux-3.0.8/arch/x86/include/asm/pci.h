#define _ASM_X86_PCI_H
struct pci_sysdata ;
extern int pci_routeirq;
extern int noioapicquirk;
extern int noioapicreroute;
extern struct pci_bus *pci_scan_bus_on_node(int busno, struct pci_ops *ops,
int node);
extern struct pci_bus *pci_scan_bus_with_sysdata(int busno);
static inline int pci_domain_nr(struct pci_bus *bus)
static inline int pci_proc_domain(struct pci_bus *bus)
extern unsigned int pcibios_assign_all_busses(void);
extern int pci_legacy_init(void);
# ifdef CONFIG_ACPI
#  define x86_default_pci_init pci_acpi_init
# else
#  define x86_default_pci_init pci_legacy_init
# endif
# define pcibios_assign_all_busses()	0
# define x86_default_pci_init		NULL
extern unsigned long pci_mem_start;
#define PCIBIOS_MIN_IO		0x1000
#define PCIBIOS_MIN_MEM		(pci_mem_start)
#define PCIBIOS_MIN_CARDBUS_IO	0x4000
extern int pcibios_enabled;
void pcibios_config_init(void);
struct pci_bus *pcibios_scan_root(int bus);
void pcibios_set_master(struct pci_dev *dev);
void pcibios_penalize_isa_irq(int irq, int active);
struct irq_routing_table *pcibios_get_irq_routing_table(void);
int pcibios_set_irq_routing(struct pci_dev *dev, int pin, int irq);
#define HAVE_PCI_MMAP
extern int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state,
int write_combine);
extern void early_quirks(void);
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
static inline void early_quirks(void)
extern void pci_iommu_alloc(void);
static inline int x86_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
static inline void x86_teardown_msi_irqs(struct pci_dev *dev)
static inline void x86_teardown_msi_irq(unsigned int irq)
#define arch_setup_msi_irqs x86_setup_msi_irqs
#define arch_teardown_msi_irqs x86_teardown_msi_irqs
#define arch_teardown_msi_irq x86_teardown_msi_irq
int native_setup_msi_irqs(struct pci_dev *dev, int nvec, int type);
void native_teardown_msi_irq(unsigned int irq);
#define HAVE_DEFAULT_MSI_TEARDOWN_IRQS
void default_teardown_msi_irqs(struct pci_dev *dev);
#define native_setup_msi_irqs		NULL
#define native_teardown_msi_irq		NULL
#define default_teardown_msi_irqs	NULL
#define PCI_DMA_BUS_IS_PHYS (dma_ops->is_phys)
#define PCIBIOS_MAX_MEM_32 0xffffffff
static inline int __pcibus_to_node(const struct pci_bus *bus)
static inline const struct cpumask *
cpumask_of_pcibus(const struct pci_bus *bus)
