struct page *empty_zero_page;
EXPORT_SYMBOL(empty_zero_page);
pmd_t *top_pmd;
pgprot_t pgprot_user;
EXPORT_SYMBOL(pgprot_user);
pgprot_t pgprot_kernel;
EXPORT_SYMBOL(pgprot_kernel);
static int __init noalign_setup(char *__unused)
__setup("noalign", noalign_setup);
void adjust_cr(unsigned long mask, unsigned long set)
struct map_desc ;
#define PROT_PTE_DEVICE		(PTE_PRESENT | PTE_YOUNG |	\
PTE_DIRTY | PTE_READ | PTE_WRITE)
#define PROT_SECT_DEVICE	(PMD_TYPE_SECT | PMD_PRESENT |	\
PMD_SECT_READ | PMD_SECT_WRITE)
static struct mem_type mem_types[] = ;
const struct mem_type *get_mem_type(unsigned int type)
EXPORT_SYMBOL(get_mem_type);
static void __init build_mem_type_table(void)
#define vectors_base()	(vectors_high() ? 0xffff0000 : 0)
static void __init *early_alloc(unsigned long sz)
static pte_t * __init early_pte_alloc(pmd_t *pmd, unsigned long addr,
unsigned long prot)
static void __init alloc_init_pte(pmd_t *pmd, unsigned long addr,
unsigned long end, unsigned long pfn,
const struct mem_type *type)
static void __init alloc_init_section(pgd_t *pgd, unsigned long addr,
unsigned long end, unsigned long phys,
const struct mem_type *type)
static void __init create_mapping(struct map_desc *md)
static void * __initdata vmalloc_min = (void *)(VMALLOC_END - SZ_128M);
static int __init early_vmalloc(char *arg)
early_param("vmalloc", early_vmalloc);
static phys_addr_t lowmem_limit __initdata = SZ_1G;
static void __init sanity_check_meminfo(void)
static inline void prepare_page_table(void)
void __init uc32_mm_memblock_reserve(void)
static void __init devicemaps_init(void)
static void __init map_lowmem(void)
void __init paging_init(void)
void setup_mm_for_reboot(char mode)
void update_mmu_cache(struct vm_area_struct *vma, unsigned long addr,
pte_t *ptep)
