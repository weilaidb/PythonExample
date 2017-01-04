static struct proc_dir_entry * proc_gsc_root __read_mostly = NULL;
static unsigned long pcxl_used_bytes __read_mostly = 0;
static unsigned long pcxl_used_pages __read_mostly = 0;
extern unsigned long pcxl_dma_start;
static spinlock_t   pcxl_res_lock;
static char    *pcxl_res_map;
static int     pcxl_res_hint;
static int     pcxl_res_size;
#define DBG_RES(x...)	printk(x)
#define DBG_RES(x...)
static
void dump_resmap(void)
static inline void dump_resmap(void)
static int pa11_dma_supported( struct device *dev, u64 mask)
static inline int map_pte_uncached(pte_t * pte,
unsigned long vaddr,
unsigned long size, unsigned long *paddr_ptr)
static inline int map_pmd_uncached(pmd_t * pmd, unsigned long vaddr,
unsigned long size, unsigned long *paddr_ptr)
static inline int map_uncached_pages(unsigned long vaddr, unsigned long size,
unsigned long paddr)
static inline void unmap_uncached_pte(pmd_t * pmd, unsigned long vaddr,
unsigned long size)
static inline void unmap_uncached_pmd(pgd_t * dir, unsigned long vaddr,
unsigned long size)
static void unmap_uncached_pages(unsigned long vaddr, unsigned long size)
#define PCXL_SEARCH_LOOP(idx, mask, size)  \
for(; res_ptr < res_end; ++res_ptr) \
#define PCXL_FIND_FREE_MAPPING(idx, mask, size)
unsigned long
pcxl_alloc_range(size_t size)
#define PCXL_FREE_MAPPINGS(idx, m, size) \
u##size *res_ptr = (u##size *)&(pcxl_res_map[(idx) + (((size >> 3) - 1) & (~((size >> 3) - 1)))]); \ \
*res_ptr &= ~m;
static void
pcxl_free_range(unsigned long vaddr, size_t size)
static int proc_pcxl_dma_show(struct seq_file *m, void *v)
static int proc_pcxl_dma_open(struct inode *inode, struct file *file)
static const struct file_operations proc_pcxl_dma_ops = ;
static int __init
pcxl_dma_init(void)
__initcall(pcxl_dma_init);
static void * pa11_dma_alloc_consistent (struct device *dev, size_t size, dma_addr_t *dma_handle, gfp_t flag)
static void pa11_dma_free_consistent (struct device *dev, size_t size, void *vaddr, dma_addr_t dma_handle)
static dma_addr_t pa11_dma_map_single(struct device *dev, void *addr, size_t size, enum dma_data_direction direction)
static void pa11_dma_unmap_single(struct device *dev, dma_addr_t dma_handle, size_t size, enum dma_data_direction direction)
static int pa11_dma_map_sg(struct device *dev, struct scatterlist *sglist, int nents, enum dma_data_direction direction)
static void pa11_dma_unmap_sg(struct device *dev, struct scatterlist *sglist, int nents, enum dma_data_direction direction)
static void pa11_dma_sync_single_for_cpu(struct device *dev, dma_addr_t dma_handle, unsigned long offset, size_t size, enum dma_data_direction direction)
static void pa11_dma_sync_single_for_device(struct device *dev, dma_addr_t dma_handle, unsigned long offset, size_t size, enum dma_data_direction direction)
static void pa11_dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sglist, int nents, enum dma_data_direction direction)
static void pa11_dma_sync_sg_for_device(struct device *dev, struct scatterlist *sglist, int nents, enum dma_data_direction direction)
struct hppa_dma_ops pcxl_dma_ops = ;
static void *fail_alloc_consistent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static void *pa11_dma_alloc_noncoherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static void pa11_dma_free_noncoherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t iova)
struct hppa_dma_ops pcx_dma_ops = ;
