#define __ASM_SH_PCI_H
#define pcibios_assign_all_busses()	1
struct pci_channel ;
extern raw_spinlock_t pci_config_lock;
extern int register_pci_controller(struct pci_channel *hose);
extern void pcibios_report_status(unsigned int status_mask, int warn);
extern int early_read_config_byte(struct pci_channel *hose, int top_bus,
int bus, int devfn, int offset, u8 *value);
extern int early_read_config_word(struct pci_channel *hose, int top_bus,
int bus, int devfn, int offset, u16 *value);
extern int early_read_config_dword(struct pci_channel *hose, int top_bus,
int bus, int devfn, int offset, u32 *value);
extern int early_write_config_byte(struct pci_channel *hose, int top_bus,
int bus, int devfn, int offset, u8 value);
extern int early_write_config_word(struct pci_channel *hose, int top_bus,
int bus, int devfn, int offset, u16 value);
extern int early_write_config_dword(struct pci_channel *hose, int top_bus,
int bus, int devfn, int offset, u32 value);
extern void pcibios_enable_timers(struct pci_channel *hose);
extern unsigned int pcibios_handle_status_errors(unsigned long addr,
unsigned int status, struct pci_channel *hose);
extern int pci_is_66mhz_capable(struct pci_channel *hose,
int top_bus, int current_bus);
extern unsigned long PCIBIOS_MIN_IO, PCIBIOS_MIN_MEM;
struct pci_dev;
#define HAVE_PCI_MMAP
extern int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine);
extern void pcibios_set_master(struct pci_dev *dev);
static inline void pcibios_penalize_isa_irq(int irq, int active)
#define PCI_DMA_BUS_IS_PHYS	(dma_ops->is_phys)
#define PCI_DISABLE_MWI
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
int pcibios_map_platform_irq(struct pci_dev *dev, u8 slot, u8 pin);
extern void pcibios_resource_to_bus(struct pci_dev *dev,
struct pci_bus_region *region, struct resource *res);
extern void pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region);
#define pci_domain_nr(bus) ((struct pci_channel *)(bus)->sysdata)->index
static inline int pci_proc_domain(struct pci_bus *bus)
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
