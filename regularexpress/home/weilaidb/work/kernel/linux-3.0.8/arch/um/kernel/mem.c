unsigned long *empty_zero_page = NULL;
static unsigned long *empty_bad_page = NULL;
pgd_t swapper_pg_dir[PTRS_PER_PGD];
unsigned long long highmem;
int kmalloc_ok = 0;
static unsigned long brk_end;
static void setup_highmem(unsigned long highmem_start,
unsigned long highmem_len)
void __init mem_init(void)
static void __init one_page_table_init(pmd_t *pmd)
static void __init one_md_table_init(pud_t *pud)
static void __init fixrange_init(unsigned long start, unsigned long end,
pgd_t *pgd_base)
pte_t *kmap_pte;
pgprot_t kmap_prot;
#define kmap_get_fixmap_pte(vaddr)					\
pte_offset_kernel(pmd_offset(pud_offset(pgd_offset_k(vaddr), (vaddr)),\
(vaddr)), (vaddr))
static void __init kmap_init(void)
static void __init init_highmem(void)
static void __init fixaddr_user_init( void)
void __init paging_init(void)
void free_initmem(void)
void free_initrd_mem(unsigned long start, unsigned long end)
pgd_t *pgd_alloc(struct mm_struct *mm)
void pgd_free(struct mm_struct *mm, pgd_t *pgd)
pte_t *pte_alloc_one_kernel(struct mm_struct *mm, unsigned long address)
pgtable_t pte_alloc_one(struct mm_struct *mm, unsigned long address)
pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long address)
void *uml_kmalloc(int size, int flags)
