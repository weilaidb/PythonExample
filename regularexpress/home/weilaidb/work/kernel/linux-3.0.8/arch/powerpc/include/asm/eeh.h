#define _POWERPC_EEH_H
struct pci_dev;
struct pci_bus;
struct device_node;
extern int eeh_subsystem_enabled;
#define EEH_MODE_SUPPORTED     (1<<0)
#define EEH_MODE_NOCHECK       (1<<1)
#define EEH_MODE_ISOLATED      (1<<2)
#define EEH_MODE_RECOVERING    (1<<3)
#define EEH_MODE_IRQ_DISABLED  (1<<4)
#define EEH_MAX_ALLOWED_FREEZES 5
void __init eeh_init(void);
unsigned long eeh_check_failure(const volatile void __iomem *token,
unsigned long val);
int eeh_dn_check_failure(struct device_node *dn, struct pci_dev *dev);
void __init pci_addr_cache_build(void);
void eeh_add_device_tree_early(struct device_node *);
void eeh_add_device_tree_late(struct pci_bus *);
void eeh_remove_bus_device(struct pci_dev *);
#define EEH_POSSIBLE_ERROR(val, type)	((val) == (type)~0 && eeh_subsystem_enabled)
#define EEH_IO_ERROR_VALUE(size)	(~0U >> ((4 - (size)) * 8))
static inline void eeh_init(void)
static inline unsigned long eeh_check_failure(const volatile void __iomem *token, unsigned long val)
static inline int eeh_dn_check_failure(struct device_node *dn, struct pci_dev *dev)
static inline void pci_addr_cache_build(void)
static inline void eeh_add_device_tree_early(struct device_node *dn)
static inline void eeh_add_device_tree_late(struct pci_bus *bus)
static inline void eeh_remove_bus_device(struct pci_dev *dev)
#define EEH_POSSIBLE_ERROR(val, type) (0)
#define EEH_IO_ERROR_VALUE(size) (-1UL)
static inline u8 eeh_readb(const volatile void __iomem *addr)
static inline u16 eeh_readw(const volatile void __iomem *addr)
static inline u32 eeh_readl(const volatile void __iomem *addr)
static inline u64 eeh_readq(const volatile void __iomem *addr)
static inline u16 eeh_readw_be(const volatile void __iomem *addr)
static inline u32 eeh_readl_be(const volatile void __iomem *addr)
static inline u64 eeh_readq_be(const volatile void __iomem *addr)
static inline void eeh_memcpy_fromio(void *dest, const
volatile void __iomem *src,
unsigned long n)
static inline void eeh_readsb(const volatile void __iomem *addr, void * buf,
int ns)
static inline void eeh_readsw(const volatile void __iomem *addr, void * buf,
int ns)
static inline void eeh_readsl(const volatile void __iomem *addr, void * buf,
int nl)
