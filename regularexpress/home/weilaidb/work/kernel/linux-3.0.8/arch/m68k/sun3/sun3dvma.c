#undef DVMA_DEBUG
extern void dvma_unmap_iommu(unsigned long baddr, int len);
static inline void dvma_unmap_iommu(unsigned long a, int b)
extern void sun3_dvma_init(void);
static unsigned long iommu_use[IOMMU_TOTAL_ENTRIES];
#define dvma_index(baddr) ((baddr - DVMA_START) >> DVMA_PAGE_SHIFT)
#define dvma_entry_use(baddr)		(iommu_use[dvma_index(baddr)])
struct hole ;
static struct list_head hole_list;
static struct list_head hole_cache;
static struct hole initholes[64];
static unsigned long dvma_allocs;
static unsigned long dvma_frees;
static unsigned long long dvma_alloc_bytes;
static unsigned long long dvma_free_bytes;
static void print_use(void)
static void print_holes(struct list_head *holes)
static inline int refill(void)
static inline struct hole *rmcache(void)
static inline unsigned long get_baddr(int len, unsigned long align)
static inline int free_baddr(unsigned long baddr)
void dvma_init(void)
inline unsigned long dvma_map_align(unsigned long kaddr, int len, int align)
EXPORT_SYMBOL(dvma_map_align);
void dvma_unmap(void *baddr)
EXPORT_SYMBOL(dvma_unmap);
void *dvma_malloc_align(unsigned long len, unsigned long align)
EXPORT_SYMBOL(dvma_malloc_align);
void dvma_free(void *vaddr)
EXPORT_SYMBOL(dvma_free);
