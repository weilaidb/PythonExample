struct page *empty_zero_page;
EXPORT_SYMBOL(empty_zero_page);
pmd_t *top_pmd;
#define CPOLICY_UNCACHED	0
#define CPOLICY_BUFFERED	1
#define CPOLICY_WRITETHROUGH	2
#define CPOLICY_WRITEBACK	3
#define CPOLICY_WRITEALLOC	4
static unsigned int cachepolicy __initdata = CPOLICY_WRITEBACK;
static unsigned int ecc_mask __initdata = 0;
pgprot_t pgprot_user;
pgprot_t pgprot_kernel;
EXPORT_SYMBOL(pgprot_user);
EXPORT_SYMBOL(pgprot_kernel);
struct cachepolicy ;
static struct cachepolicy cache_policies[] __initdata = ;
static int __init early_cachepolicy(char *p)
early_param("cachepolicy", early_cachepolicy);
static int __init early_nocache(char *__unused)
early_param("nocache", early_nocache);
static int __init early_nowrite(char *__unused)
early_param("nowb", early_nowrite);
static int __init early_ecc(char *p)
early_param("ecc", early_ecc);
static int __init noalign_setup(char *__unused)
__setup("noalign", noalign_setup);
void adjust_cr(unsigned long mask, unsigned long set)
#define PROT_PTE_DEVICE		L_PTE_PRESENT|L_PTE_YOUNG|L_PTE_DIRTY|L_PTE_XN
#define PROT_SECT_DEVICE	PMD_TYPE_SECT|PMD_SECT_AP_WRITE
static struct mem_type mem_types[] = ;
const struct mem_type *get_mem_type(unsigned int type)
EXPORT_SYMBOL(get_mem_type);
static void __init build_mem_type_table(void)
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t vma_prot)
EXPORT_SYMBOL(phys_mem_access_prot);
#define vectors_base()	(vectors_high() ? 0xffff0000 : 0)
static void __init *early_alloc(unsigned long sz)
static pte_t * __init early_pte_alloc(pmd_t *pmd, unsigned long addr, unsigned long prot)
static void __init alloc_init_pte(pmd_t *pmd, unsigned long addr,
unsigned long end, unsigned long pfn,
const struct mem_type *type)
static void __init alloc_init_section(pud_t *pud, unsigned long addr,
unsigned long end, phys_addr_t phys,
const struct mem_type *type)
static void alloc_init_pud(pgd_t *pgd, unsigned long addr, unsigned long end,
unsigned long phys, const struct mem_type *type)
static void __init create_36bit_mapping(struct map_desc *md,
const struct mem_type *type)
static void __init create_mapping(struct map_desc *md)
void __init iotable_init(struct map_desc *io_desc, int nr)
static void * __initdata vmalloc_min = (void *)(VMALLOC_END - SZ_128M);
static int __init early_vmalloc(char *arg)
early_param("vmalloc", early_vmalloc);
static phys_addr_t lowmem_limit __initdata = 0;
void __init sanity_check_meminfo(void)
static inline void prepare_page_table(void)
void __init arm_mm_memblock_reserve(void)
static void __init devicemaps_init(struct machine_desc *mdesc)
static void __init kmap_init(void)
static void __init map_lowmem(void)
void __init paging_init(struct machine_desc *mdesc)
