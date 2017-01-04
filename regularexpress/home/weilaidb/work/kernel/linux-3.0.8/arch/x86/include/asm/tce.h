#define _ASM_X86_TCE_H
extern unsigned int specified_table_size;
struct iommu_table;
#define TCE_ENTRY_SIZE   8
#define TCE_READ_SHIFT   0
#define TCE_WRITE_SHIFT  1
#define TCE_HUBID_SHIFT  2
#define TCE_RSVD_SHIFT   8
#define TCE_RPN_SHIFT    12
#define TCE_UNUSED_SHIFT 48
#define TCE_RPN_MASK     0x0000fffffffff000ULL
extern void tce_build(struct iommu_table *tbl, unsigned long index,
unsigned int npages, unsigned long uaddr, int direction);
extern void tce_free(struct iommu_table *tbl, long index, unsigned int npages);
extern void * __init alloc_tce_table(void);
extern void __init free_tce_table(void *tbl);
extern int __init build_tce_table(struct pci_dev *dev, void __iomem *bbar);
