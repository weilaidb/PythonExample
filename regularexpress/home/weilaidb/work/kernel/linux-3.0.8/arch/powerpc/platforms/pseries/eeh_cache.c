struct pci_io_addr_range
;
static struct pci_io_addr_cache
pci_io_addr_cache_root;
static inline struct pci_dev *__pci_get_device_by_addr(unsigned long addr)
struct pci_dev *pci_get_device_by_addr(unsigned long addr)
static void pci_addr_cache_print(struct pci_io_addr_cache *cache)
static struct pci_io_addr_range *
pci_addr_cache_insert(struct pci_dev *dev, unsigned long alo,
unsigned long ahi, unsigned int flags)
static void __pci_addr_cache_insert_device(struct pci_dev *dev)
void pci_addr_cache_insert_device(struct pci_dev *dev)
static inline void __pci_addr_cache_remove_device(struct pci_dev *dev)
void pci_addr_cache_remove_device(struct pci_dev *dev)
void __init pci_addr_cache_build(void)
