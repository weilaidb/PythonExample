#define _ASM_POWERPC_PCI_BRIDGE_H
struct device_node;
enum ;
extern unsigned int ppc_pci_flags;
static inline void ppc_pci_set_flags(int flags)
static inline void ppc_pci_add_flags(int flags)
static inline int ppc_pci_has_flag(int flag)
static inline void ppc_pci_set_flags(int flags)
static inline void ppc_pci_add_flags(int flags)
static inline int ppc_pci_has_flag(int flag)
struct pci_controller ;
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
extern void setup_indirect_pci(struct pci_controller* hose,
resource_size_t cfg_addr,
resource_size_t cfg_data, u32 flags);
static inline struct pci_controller *pci_bus_to_host(const struct pci_bus *bus)
static inline struct device_node *pci_bus_to_OF_node(struct pci_bus *bus)
static inline int isa_vaddr_is_ioport(void __iomem *address)
struct iommu_table;
struct pci_dn ;
#define PCI_DN(dn)	((struct pci_dn *) (dn)->data)
extern struct device_node *fetch_dev_dn(struct pci_dev *dev);
extern void * update_dn_pci_info(struct device_node *dn, void *data);
static inline struct device_node *pci_device_to_OF_node(struct pci_dev *dev)
static inline int pci_device_from_OF_node(struct device_node *np,
u8 *bus, u8 *devfn)
static inline struct device_node *pci_bus_to_OF_node(struct pci_bus *bus)
extern struct pci_bus *pcibios_find_pci_bus(struct device_node *dn);
extern void pcibios_remove_pci_devices(struct pci_bus *bus);
extern void pcibios_add_pci_devices(struct pci_bus *bus);
extern void isa_bridge_find_early(struct pci_controller *hose);
static inline int isa_vaddr_is_ioport(void __iomem *address)
extern int pcibios_unmap_io_space(struct pci_bus *bus);
extern int pcibios_map_io_space(struct pci_bus *bus);
#define PHB_SET_NODE(PHB, NODE)		((PHB)->node = (NODE))
#define PHB_SET_NODE(PHB, NODE)		((PHB)->node = -1)
extern struct pci_controller *pci_find_hose_for_OF_device(
struct device_node* node);
extern void pci_process_bridge_OF_ranges(struct pci_controller *hose,
struct device_node *dev, int primary);
extern struct pci_controller *pcibios_alloc_controller(struct device_node *dev);
extern void pcibios_free_controller(struct pci_controller *phb);
extern void pcibios_setup_phb_resources(struct pci_controller *hose);
extern int pcibios_vaddr_is_ioport(void __iomem *address);
static inline int pcibios_vaddr_is_ioport(void __iomem *address)
