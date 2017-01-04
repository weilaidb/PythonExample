#define ENTER_CRITICAL(flags) \
#define ENTER_CRITICAL(flags) local_irq_save(flags)
#define EXIT_CRITICAL(flags) local_irq_restore(flags)
unsigned long empty_zero_page, zero_page_mask;
EXPORT_SYMBOL_GPL(empty_zero_page);
unsigned long setup_zero_pages(void)
static pte_t *kmap_coherent_pte;
static void __init kmap_coherent_init(void)
static inline void kmap_coherent_init(void)
void *kmap_coherent(struct page *page, unsigned long addr)
#define UNIQUE_ENTRYHI(idx) (CKSEG0 + ((idx) << (PAGE_SHIFT + 1)))
void kunmap_coherent(void)
void copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
void copy_to_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr, void *dst, const void *src,
unsigned long len)
void copy_from_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr, void *dst, const void *src,
unsigned long len)
void __init fixrange_init(unsigned long start, unsigned long end,
pgd_t *pgd_base)
int page_is_ram(unsigned long pagenr)
void __init paging_init(void)
static struct kcore_list kcore_kseg0;
void __init mem_init(void)
void free_init_pages(const char *what, unsigned long begin, unsigned long end)
void free_initrd_mem(unsigned long start, unsigned long end)
void __init_refok free_initmem(void)
unsigned long pgd_current[NR_CPUS];
#define __page_aligned(order) __attribute__((__aligned__(PAGE_SIZE<<order)))
pgd_t swapper_pg_dir[_PTRS_PER_PGD] __page_aligned(_PGD_ORDER);
pmd_t invalid_pmd_table[PTRS_PER_PMD] __page_aligned(PMD_ORDER);
pte_t invalid_pte_table[PTRS_PER_PTE] __page_aligned(PTE_ORDER);
