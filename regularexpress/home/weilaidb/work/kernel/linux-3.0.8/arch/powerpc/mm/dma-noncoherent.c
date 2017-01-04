#define CONSISTENT_BASE		(IOREMAP_TOP)
#define CONSISTENT_END 		(CONSISTENT_BASE + CONFIG_CONSISTENT_SIZE)
#define CONSISTENT_OFFSET(x)	(((unsigned long)(x) - CONSISTENT_BASE) >> PAGE_SHIFT)
static DEFINE_SPINLOCK(consistent_lock);
struct ppc_vm_region ;
static struct ppc_vm_region consistent_head = ;
static struct ppc_vm_region *
ppc_vm_region_alloc(struct ppc_vm_region *head, size_t size, gfp_t gfp)
static struct ppc_vm_region *ppc_vm_region_find(struct ppc_vm_region *head, unsigned long addr)
void *
__dma_alloc_coherent(struct device *dev, size_t size, dma_addr_t *handle, gfp_t gfp)
EXPORT_SYMBOL(__dma_alloc_coherent);
void __dma_free_coherent(size_t size, void *vaddr)
EXPORT_SYMBOL(__dma_free_coherent);
void __dma_sync(void *vaddr, size_t size, int direction)
EXPORT_SYMBOL(__dma_sync);
static inline void __dma_sync_page_highmem(struct page *page,
unsigned long offset, size_t size, int direction)
void __dma_sync_page(struct page *page, unsigned long offset,
size_t size, int direction)
EXPORT_SYMBOL(__dma_sync_page);
unsigned long __dma_get_coherent_pfn(unsigned long cpu_addr)
