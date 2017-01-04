#define _ASM_MICROBLAZE_PCI_BRIDGE_H
struct device_node;
enum ;
struct pci_controller ;
static inline struct pci_controller *pci_bus_to_host(const struct pci_bus *bus)
static inline struct device_node *pci_bus_to_OF_node(struct pci_bus *bus)
static inline int isa_vaddr_is_ioport(void __iomem *address)
extern int early_read_config_byte(struct pci_controller *hose, int bus,
int dev_fn, int where, u8 *val);
extern int early_read_config_word(struct pci_controller *hose, int bus,
int dev_fn, int where, u16 *val);
extern int early_read_config_dword(struct pci_controller *hose, int bus,
int dev_fn, int where, u32 *val);
extern int early_write_config_byte(struct pci_controller *hose, int bus,
int dev_fn, int where, u8 val);
extern int early_write_config_word(struct pci_controller *hose, int bus,
int dev_fn, int where, u16 val);
extern int early_write_config_dword(struct pci_controller *hose, int bus,
int dev_fn, int where, u32 val);
extern int early_find_capability(struct pci_controller *hose, int bus,
int dev_fn, int cap);
extern void setup_indirect_pci(struct pci_controller *hose,
resource_size_t cfg_addr,
resource_size_t cfg_data, u32 flags);
extern struct pci_controller *pci_find_hose_for_OF_device(
struct device_node *node);
extern void pci_process_bridge_OF_ranges(struct pci_controller *hose,
struct device_node *dev, int primary);
extern struct pci_controller *pcibios_alloc_controller(struct device_node *dev);
extern void pcibios_free_controller(struct pci_controller *phb);
extern void pcibios_setup_phb_resources(struct pci_controller *hose);
extern unsigned int pci_flags;
static inline void pci_set_flags(int flags)
static inline void pci_add_flags(int flags)
static inline int pci_has_flag(int flag)
extern struct list_head hose_list;
extern int pcibios_vaddr_is_ioport(void __iomem *address);
static inline int pcibios_vaddr_is_ioport(void __iomem *address)
static inline void pci_set_flags(int flags)
static inline void pci_add_flags(int flags)
static inline int pci_has_flag(int flag)
