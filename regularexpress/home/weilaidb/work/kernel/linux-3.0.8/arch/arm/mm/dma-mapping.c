static u64 get_coherent_dma_mask(struct device *dev)
static struct page *__dma_alloc_buffer(struct device *dev, size_t size, gfp_t gfp)
static void __dma_free_buffer(struct page *page, size_t size)
#if (CONSISTENT_DMA_SIZE % SZ_2M)
#error "CONSISTENT_DMA_SIZE must be multiple of 2MiB"
#define CONSISTENT_OFFSET(x)	(((unsigned long)(x) - CONSISTENT_BASE) >> PAGE_SHIFT)
#define CONSISTENT_PTE_INDEX(x) (((unsigned long)(x) - CONSISTENT_BASE) >> PGDIR_SHIFT)
#define NUM_CONSISTENT_PTES (CONSISTENT_DMA_SIZE >> PGDIR_SHIFT)
static pte_t *consistent_pte[NUM_CONSISTENT_PTES];
static struct arm_vmregion_head consistent_head = ;
#error ARM Coherent DMA allocator does not (yet) support huge TLB
static int __init consistent_init(void)
core_initcall(consistent_init);
static void *
__dma_alloc_remap(struct page *page, size_t size, gfp_t gfp, pgprot_t prot)
static void __dma_free_remap(void *cpu_addr, size_t size)
#define __dma_alloc_remap(page, size, gfp, prot)	page_address(page)
#define __dma_free_remap(addr, size)			do  while (0)
static void *
__dma_alloc(struct device *dev, size_t size, dma_addr_t *handle, gfp_t gfp,
pgprot_t prot)
void *
dma_alloc_coherent(struct device *dev, size_t size, dma_addr_t *handle, gfp_t gfp)
EXPORT_SYMBOL(dma_alloc_coherent);
void *
dma_alloc_writecombine(struct device *dev, size_t size, dma_addr_t *handle, gfp_t gfp)
EXPORT_SYMBOL(dma_alloc_writecombine);
static int dma_mmap(struct device *dev, struct vm_area_struct *vma,
void *cpu_addr, dma_addr_t dma_addr, size_t size)
int dma_mmap_coherent(struct device *dev, struct vm_area_struct *vma,
void *cpu_addr, dma_addr_t dma_addr, size_t size)
EXPORT_SYMBOL(dma_mmap_coherent);
int dma_mmap_writecombine(struct device *dev, struct vm_area_struct *vma,
void *cpu_addr, dma_addr_t dma_addr, size_t size)
EXPORT_SYMBOL(dma_mmap_writecombine);
void dma_free_coherent(struct device *dev, size_t size, void *cpu_addr, dma_addr_t handle)
EXPORT_SYMBOL(dma_free_coherent);
void ___dma_single_cpu_to_dev(const void *kaddr, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL(___dma_single_cpu_to_dev);
void ___dma_single_dev_to_cpu(const void *kaddr, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL(___dma_single_dev_to_cpu);
static void dma_cache_maint_page(struct page *page, unsigned long offset,
size_t size, enum dma_data_direction dir,
void (*op)(const void *, size_t, int))
void ___dma_page_cpu_to_dev(struct page *page, unsigned long off,
size_t size, enum dma_data_direction dir)
EXPORT_SYMBOL(___dma_page_cpu_to_dev);
void ___dma_page_dev_to_cpu(struct page *page, unsigned long off,
size_t size, enum dma_data_direction dir)
EXPORT_SYMBOL(___dma_page_dev_to_cpu);
int dma_map_sg(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction dir)
EXPORT_SYMBOL(dma_map_sg);
void dma_unmap_sg(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction dir)
EXPORT_SYMBOL(dma_unmap_sg);
void dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction dir)
EXPORT_SYMBOL(dma_sync_sg_for_cpu);
void dma_sync_sg_for_device(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction dir)
EXPORT_SYMBOL(dma_sync_sg_for_device);
#define PREALLOC_DMA_DEBUG_ENTRIES	4096
static int __init dma_debug_do_init(void)
fs_initcall(dma_debug_do_init);
