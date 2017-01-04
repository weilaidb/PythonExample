static inline void flush_tce(void* tceaddr)
void tce_build(struct iommu_table *tbl, unsigned long index,
unsigned int npages, unsigned long uaddr, int direction)
void tce_free(struct iommu_table *tbl, long index, unsigned int npages)
static inline unsigned int table_size_to_number_of_entries(unsigned char size)
static int tce_table_setparms(struct pci_dev *dev, struct iommu_table *tbl)
int __init build_tce_table(struct pci_dev *dev, void __iomem *bbar)
void * __init alloc_tce_table(void)
void __init free_tce_table(void *tbl)
