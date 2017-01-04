static struct kmem_cache *anon_vma_cachep;
static struct kmem_cache *anon_vma_chain_cachep;
static inline struct anon_vma *anon_vma_alloc(void)
static inline void anon_vma_free(struct anon_vma *anon_vma)
static inline struct anon_vma_chain *anon_vma_chain_alloc(gfp_t gfp)
static void anon_vma_chain_free(struct anon_vma_chain *anon_vma_chain)
int anon_vma_prepare(struct vm_area_struct *vma)
static inline struct anon_vma *lock_anon_vma_root(struct anon_vma *root, struct anon_vma *anon_vma)
static inline void unlock_anon_vma_root(struct anon_vma *root)
static void anon_vma_chain_link(struct vm_area_struct *vma,
struct anon_vma_chain *avc,
struct anon_vma *anon_vma)
int anon_vma_clone(struct vm_area_struct *dst, struct vm_area_struct *src)
int anon_vma_fork(struct vm_area_struct *vma, struct vm_area_struct *pvma)
void unlink_anon_vmas(struct vm_area_struct *vma)
static void anon_vma_ctor(void *data)
void __init anon_vma_init(void)
struct anon_vma *page_get_anon_vma(struct page *page)
struct anon_vma *page_lock_anon_vma(struct page *page)
void page_unlock_anon_vma(struct anon_vma *anon_vma)
inline unsigned long
vma_address(struct page *page, struct vm_area_struct *vma)
unsigned long page_address_in_vma(struct page *page, struct vm_area_struct *vma)
pte_t *__page_check_address(struct page *page, struct mm_struct *mm,
unsigned long address, spinlock_t **ptlp, int sync)
int page_mapped_in_vma(struct page *page, struct vm_area_struct *vma)
int page_referenced_one(struct page *page, struct vm_area_struct *vma,
unsigned long address, unsigned int *mapcount,
unsigned long *vm_flags)
static int page_referenced_anon(struct page *page,
struct mem_cgroup *mem_cont,
unsigned long *vm_flags)
static int page_referenced_file(struct page *page,
struct mem_cgroup *mem_cont,
unsigned long *vm_flags)
int page_referenced(struct page *page,
int is_locked,
struct mem_cgroup *mem_cont,
unsigned long *vm_flags)
static int page_mkclean_one(struct page *page, struct vm_area_struct *vma,
unsigned long address)
static int page_mkclean_file(struct address_space *mapping, struct page *page)
int page_mkclean(struct page *page)
EXPORT_SYMBOL_GPL(page_mkclean);
void page_move_anon_rmap(struct page *page,
struct vm_area_struct *vma, unsigned long address)
static void __page_set_anon_rmap(struct page *page,
struct vm_area_struct *vma, unsigned long address, int exclusive)
static void __page_check_anon_rmap(struct page *page,
struct vm_area_struct *vma, unsigned long address)
void page_add_anon_rmap(struct page *page,
struct vm_area_struct *vma, unsigned long address)
void do_page_add_anon_rmap(struct page *page,
struct vm_area_struct *vma, unsigned long address, int exclusive)
void page_add_new_anon_rmap(struct page *page,
struct vm_area_struct *vma, unsigned long address)
void page_add_file_rmap(struct page *page)
void page_remove_rmap(struct page *page)
int try_to_unmap_one(struct page *page, struct vm_area_struct *vma,
unsigned long address, enum ttu_flags flags)
#define CLUSTER_SIZE	min(32*PAGE_SIZE, PMD_SIZE)
#define CLUSTER_MASK	(~(CLUSTER_SIZE - 1))
static int try_to_unmap_cluster(unsigned long cursor, unsigned int *mapcount,
struct vm_area_struct *vma, struct page *check_page)
bool is_vma_temporary_stack(struct vm_area_struct *vma)
static int try_to_unmap_anon(struct page *page, enum ttu_flags flags)
static int try_to_unmap_file(struct page *page, enum ttu_flags flags)
int try_to_unmap(struct page *page, enum ttu_flags flags)
int try_to_munlock(struct page *page)
void __put_anon_vma(struct anon_vma *anon_vma)
static int rmap_walk_anon(struct page *page, int (*rmap_one)(struct page *,
struct vm_area_struct *, unsigned long, void *), void *arg)
static int rmap_walk_file(struct page *page, int (*rmap_one)(struct page *,
struct vm_area_struct *, unsigned long, void *), void *arg)
int rmap_walk(struct page *page, int (*rmap_one)(struct page *,
struct vm_area_struct *, unsigned long, void *), void *arg)
static void __hugepage_set_anon_rmap(struct page *page,
struct vm_area_struct *vma, unsigned long address, int exclusive)
void hugepage_add_anon_rmap(struct page *page,
struct vm_area_struct *vma, unsigned long address)
void hugepage_add_new_anon_rmap(struct page *page,
struct vm_area_struct *vma, unsigned long address)
