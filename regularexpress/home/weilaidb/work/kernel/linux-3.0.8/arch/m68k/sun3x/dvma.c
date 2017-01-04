#define IOMMU_ADDR_MASK            0x03ffe000
#define IOMMU_CACHE_INHIBIT        0x00000040
#define IOMMU_FULL_BLOCK           0x00000020
#define IOMMU_MODIFIED             0x00000010
#define IOMMU_USED                 0x00000008
#define IOMMU_WRITE_PROTECT        0x00000004
#define IOMMU_DT_MASK              0x00000003
#define IOMMU_DT_INVALID           0x00000000
#define IOMMU_DT_VALID             0x00000001
#define IOMMU_DT_BAD               0x00000002
static volatile unsigned long *iommu_pte = (unsigned long *)SUN3X_IOMMU;
#define dvma_entry_paddr(index)		(iommu_pte[index] & IOMMU_ADDR_MASK)
#define dvma_entry_vaddr(index,paddr)	((index << DVMA_PAGE_SHIFT) |  \
(paddr & (DVMA_PAGE_SIZE-1)))
#define dvma_entry_clr(index)		(iommu_pte[index] = IOMMU_DT_INVALID)
#define dvma_entry_hash(addr)		((addr >> DVMA_PAGE_SHIFT) ^ \
((addr & 0x03c00000) >>     \
(DVMA_PAGE_SHIFT+4)))
#undef DEBUG
void dvma_print (unsigned long dvma_addr)
inline int dvma_map_cpu(unsigned long kaddr,
unsigned long vaddr, int len)
inline int dvma_map_iommu(unsigned long kaddr, unsigned long baddr,
int len)
void dvma_unmap_iommu(unsigned long baddr, int len)
