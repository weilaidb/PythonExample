#define _SPARC64_IOMMU_H
#define IOPTE_VALID   0x8000000000000000UL
#define IOPTE_64K     0x2000000000000000UL
#define IOPTE_STBUF   0x1000000000000000UL
#define IOPTE_INTRA   0x0800000000000000UL
#define IOPTE_CONTEXT 0x07ff800000000000UL
#define IOPTE_PAGE    0x00007fffffffe000UL
#define IOPTE_CACHE   0x0000000000000010UL
#define IOPTE_WRITE   0x0000000000000002UL
#define IOMMU_NUM_CTXS	4096
struct iommu_arena ;
struct iommu ;
struct strbuf ;
extern int iommu_table_init(struct iommu *iommu, int tsbsize,
u32 dma_offset, u32 dma_addr_mask,
int numa_node);
