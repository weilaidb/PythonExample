unsigned long max_mapnr;
struct page *mem_map;
EXPORT_SYMBOL(max_mapnr);
EXPORT_SYMBOL(mem_map);
unsigned long num_physpages;
void * high_memory;
EXPORT_SYMBOL(num_physpages);
EXPORT_SYMBOL(high_memory);
int randomize_va_space __read_mostly =
1;
2;
static int __init disable_randmaps(char *s)
__setup("norandmaps", disable_randmaps);
unsigned long zero_pfn __read_mostly;
unsigned long highest_memmap_pfn __read_mostly;
static int __init init_zero_pfn(void)
core_initcall(init_zero_pfn);
#if defined(SPLIT_RSS_COUNTING)
static void __sync_task_rss_stat(struct task_struct *task, struct mm_struct *mm)
static void add_mm_counter_fast(struct mm_struct *mm, int member, int val)
#define inc_mm_counter_fast(mm, member) add_mm_counter_fast(mm, member, 1)
#define dec_mm_counter_fast(mm, member) add_mm_counter_fast(mm, member, -1)
#define TASK_RSS_EVENTS_THRESH	(64)
static void check_sync_rss_stat(struct task_struct *task)
unsigned long get_mm_counter(struct mm_struct *mm, int member)
void sync_mm_rss(struct task_struct *task, struct mm_struct *mm)
#define inc_mm_counter_fast(mm, member) inc_mm_counter(mm, member)
#define dec_mm_counter_fast(mm, member) dec_mm_counter(mm, member)
static void check_sync_rss_stat(struct task_struct *task)
static int tlb_next_batch(struct mmu_gather *tlb)
void tlb_gather_mmu(struct mmu_gather *tlb, struct mm_struct *mm, bool fullmm)
void tlb_flush_mmu(struct mmu_gather *tlb)
void tlb_finish_mmu(struct mmu_gather *tlb, unsigned long start, unsigned long end)
int __tlb_remove_page(struct mmu_gather *tlb, struct page *page)
static void tlb_remove_table_smp_sync(void *arg)
static void tlb_remove_table_one(void *table)
static void tlb_remove_table_rcu(struct rcu_head *head)
void tlb_table_flush(struct mmu_gather *tlb)
void tlb_remove_table(struct mmu_gather *tlb, void *table)
void pgd_clear_bad(pgd_t *pgd)
void pud_clear_bad(pud_t *pud)
void pmd_clear_bad(pmd_t *pmd)
static void free_pte_range(struct mmu_gather *tlb, pmd_t *pmd,
unsigned long addr)
static inline void free_pmd_range(struct mmu_gather *tlb, pud_t *pud,
unsigned long addr, unsigned long end,
unsigned long floor, unsigned long ceiling)
static inline void free_pud_range(struct mmu_gather *tlb, pgd_t *pgd,
unsigned long addr, unsigned long end,
unsigned long floor, unsigned long ceiling)
void free_pgd_range(struct mmu_gather *tlb,
unsigned long addr, unsigned long end,
unsigned long floor, unsigned long ceiling)
void free_pgtables(struct mmu_gather *tlb, struct vm_area_struct *vma,
unsigned long floor, unsigned long ceiling)
int __pte_alloc(struct mm_struct *mm, struct vm_area_struct *vma,
pmd_t *pmd, unsigned long address)
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address)
static inline void init_rss_vec(int *rss)
static inline void add_mm_rss_vec(struct mm_struct *mm, int *rss)
static void print_bad_pte(struct vm_area_struct *vma, unsigned long addr,
pte_t pte, struct page *page)
static inline int is_cow_mapping(vm_flags_t flags)
static inline int is_zero_pfn(unsigned long pfn)
static inline unsigned long my_zero_pfn(unsigned long addr)
# define HAVE_PTE_SPECIAL 1
# define HAVE_PTE_SPECIAL 0
struct page *vm_normal_page(struct vm_area_struct *vma, unsigned long addr,
pte_t pte)
static inline unsigned long
copy_one_pte(struct mm_struct *dst_mm, struct mm_struct *src_mm,
pte_t *dst_pte, pte_t *src_pte, struct vm_area_struct *vma,
unsigned long addr, int *rss)
int copy_pte_range(struct mm_struct *dst_mm, struct mm_struct *src_mm,
pmd_t *dst_pmd, pmd_t *src_pmd, struct vm_area_struct *vma,
unsigned long addr, unsigned long end)
static inline int copy_pmd_range(struct mm_struct *dst_mm, struct mm_struct *src_mm,
pud_t *dst_pud, pud_t *src_pud, struct vm_area_struct *vma,
unsigned long addr, unsigned long end)
static inline int copy_pud_range(struct mm_struct *dst_mm, struct mm_struct *src_mm,
pgd_t *dst_pgd, pgd_t *src_pgd, struct vm_area_struct *vma,
unsigned long addr, unsigned long end)
int copy_page_range(struct mm_struct *dst_mm, struct mm_struct *src_mm,
struct vm_area_struct *vma)
static unsigned long zap_pte_range(struct mmu_gather *tlb,
struct vm_area_struct *vma, pmd_t *pmd,
unsigned long addr, unsigned long end,
struct zap_details *details)
static inline unsigned long zap_pmd_range(struct mmu_gather *tlb,
struct vm_area_struct *vma, pud_t *pud,
unsigned long addr, unsigned long end,
struct zap_details *details)
static inline unsigned long zap_pud_range(struct mmu_gather *tlb,
struct vm_area_struct *vma, pgd_t *pgd,
unsigned long addr, unsigned long end,
struct zap_details *details)
static unsigned long unmap_page_range(struct mmu_gather *tlb,
struct vm_area_struct *vma,
unsigned long addr, unsigned long end,
struct zap_details *details)
# define ZAP_BLOCK_SIZE	(8 * PAGE_SIZE)
# define ZAP_BLOCK_SIZE	(1024 * PAGE_SIZE)
unsigned long unmap_vmas(struct mmu_gather *tlb,
struct vm_area_struct *vma, unsigned long start_addr,
unsigned long end_addr, unsigned long *nr_accounted,
struct zap_details *details)
unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
unsigned long size, struct zap_details *details)
int zap_vma_ptes(struct vm_area_struct *vma, unsigned long address,
unsigned long size)
EXPORT_SYMBOL_GPL(zap_vma_ptes);
struct page *follow_page(struct vm_area_struct *vma, unsigned long address,
unsigned int flags)
static inline int stack_guard_page(struct vm_area_struct *vma, unsigned long addr)
int __get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
unsigned long start, int nr_pages, unsigned int gup_flags,
struct page **pages, struct vm_area_struct **vmas,
int *nonblocking)
EXPORT_SYMBOL(__get_user_pages);
int fixup_user_fault(struct task_struct *tsk, struct mm_struct *mm,
unsigned long address, unsigned int fault_flags)
int get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
unsigned long start, int nr_pages, int write, int force,
struct page **pages, struct vm_area_struct **vmas)
EXPORT_SYMBOL(get_user_pages);
struct page *get_dump_page(unsigned long addr)
pte_t *__get_locked_pte(struct mm_struct *mm, unsigned long addr,
spinlock_t **ptl)
static int insert_page(struct vm_area_struct *vma, unsigned long addr,
struct page *page, pgprot_t prot)
int vm_insert_page(struct vm_area_struct *vma, unsigned long addr,
struct page *page)
EXPORT_SYMBOL(vm_insert_page);
static int insert_pfn(struct vm_area_struct *vma, unsigned long addr,
unsigned long pfn, pgprot_t prot)
int vm_insert_pfn(struct vm_area_struct *vma, unsigned long addr,
unsigned long pfn)
EXPORT_SYMBOL(vm_insert_pfn);
int vm_insert_mixed(struct vm_area_struct *vma, unsigned long addr,
unsigned long pfn)
EXPORT_SYMBOL(vm_insert_mixed);
static int remap_pte_range(struct mm_struct *mm, pmd_t *pmd,
unsigned long addr, unsigned long end,
unsigned long pfn, pgprot_t prot)
static inline int remap_pmd_range(struct mm_struct *mm, pud_t *pud,
unsigned long addr, unsigned long end,
unsigned long pfn, pgprot_t prot)
static inline int remap_pud_range(struct mm_struct *mm, pgd_t *pgd,
unsigned long addr, unsigned long end,
unsigned long pfn, pgprot_t prot)
int remap_pfn_range(struct vm_area_struct *vma, unsigned long addr,
unsigned long pfn, unsigned long size, pgprot_t prot)
EXPORT_SYMBOL(remap_pfn_range);
static int apply_to_pte_range(struct mm_struct *mm, pmd_t *pmd,
unsigned long addr, unsigned long end,
pte_fn_t fn, void *data)
static int apply_to_pmd_range(struct mm_struct *mm, pud_t *pud,
unsigned long addr, unsigned long end,
pte_fn_t fn, void *data)
static int apply_to_pud_range(struct mm_struct *mm, pgd_t *pgd,
unsigned long addr, unsigned long end,
pte_fn_t fn, void *data)
int apply_to_page_range(struct mm_struct *mm, unsigned long addr,
unsigned long size, pte_fn_t fn, void *data)
EXPORT_SYMBOL_GPL(apply_to_page_range);
static inline int pte_unmap_same(struct mm_struct *mm, pmd_t *pmd,
pte_t *page_table, pte_t orig_pte)
static inline void cow_user_page(struct page *dst, struct page *src, unsigned long va, struct vm_area_struct *vma)
static int do_wp_page(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pte_t *page_table, pmd_t *pmd,
spinlock_t *ptl, pte_t orig_pte)
__releases(ptl)
static void unmap_mapping_range_vma(struct vm_area_struct *vma,
unsigned long start_addr, unsigned long end_addr,
struct zap_details *details)
static inline void unmap_mapping_range_tree(struct prio_tree_root *root,
struct zap_details *details)
static inline void unmap_mapping_range_list(struct list_head *head,
struct zap_details *details)
void unmap_mapping_range(struct address_space *mapping,
loff_t const holebegin, loff_t const holelen, int even_cows)
EXPORT_SYMBOL(unmap_mapping_range);
static int do_swap_page(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pte_t *page_table, pmd_t *pmd,
unsigned int flags, pte_t orig_pte)
static inline int check_stack_guard_page(struct vm_area_struct *vma, unsigned long address)
static int do_anonymous_page(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pte_t *page_table, pmd_t *pmd,
unsigned int flags)
static int __do_fault(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pmd_t *pmd,
pgoff_t pgoff, unsigned int flags, pte_t orig_pte)
static int do_linear_fault(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pte_t *page_table, pmd_t *pmd,
unsigned int flags, pte_t orig_pte)
static int do_nonlinear_fault(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, pte_t *page_table, pmd_t *pmd,
unsigned int flags, pte_t orig_pte)
int handle_pte_fault(struct mm_struct *mm,
struct vm_area_struct *vma, unsigned long address,
pte_t *pte, pmd_t *pmd, unsigned int flags)
int handle_mm_fault(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, unsigned int flags)
int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address)
int make_pages_present(unsigned long addr, unsigned long end)
#if !defined(__HAVE_ARCH_GATE_AREA)
#if defined(AT_SYSINFO_EHDR)
static struct vm_area_struct gate_vma;
static int __init gate_vma_init(void)
__initcall(gate_vma_init);
struct vm_area_struct *get_gate_vma(struct mm_struct *mm)
int in_gate_area_no_mm(unsigned long addr)
static int __follow_pte(struct mm_struct *mm, unsigned long address,
pte_t **ptepp, spinlock_t **ptlp)
static inline int follow_pte(struct mm_struct *mm, unsigned long address,
pte_t **ptepp, spinlock_t **ptlp)
int follow_pfn(struct vm_area_struct *vma, unsigned long address,
unsigned long *pfn)
EXPORT_SYMBOL(follow_pfn);
int follow_phys(struct vm_area_struct *vma,
unsigned long address, unsigned int flags,
unsigned long *prot, resource_size_t *phys)
int generic_access_phys(struct vm_area_struct *vma, unsigned long addr,
void *buf, int len, int write)
static int __access_remote_vm(struct task_struct *tsk, struct mm_struct *mm,
unsigned long addr, void *buf, int len, int write)
int access_remote_vm(struct mm_struct *mm, unsigned long addr,
void *buf, int len, int write)
int access_process_vm(struct task_struct *tsk, unsigned long addr,
void *buf, int len, int write)
void print_vma_addr(char *prefix, unsigned long ip)
void might_fault(void)
EXPORT_SYMBOL(might_fault);
#if defined(CONFIG_TRANSPARENT_HUGEPAGE) || defined(CONFIG_HUGETLBFS)
static void clear_gigantic_page(struct page *page,
unsigned long addr,
unsigned int pages_per_huge_page)
void clear_huge_page(struct page *page,
unsigned long addr, unsigned int pages_per_huge_page)
static void copy_user_gigantic_page(struct page *dst, struct page *src,
unsigned long addr,
struct vm_area_struct *vma,
unsigned int pages_per_huge_page)
void copy_user_huge_page(struct page *dst, struct page *src,
unsigned long addr, struct vm_area_struct *vma,
unsigned int pages_per_huge_page)
