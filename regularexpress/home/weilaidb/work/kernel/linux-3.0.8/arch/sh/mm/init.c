pgd_t swapper_pg_dir[PTRS_PER_PGD];
void __init generic_mem_init(void)
void __init __weak plat_mem_setup(void)
static pte_t *__get_pte_phys(unsigned long addr)
static void set_pte_phys(unsigned long addr, unsigned long phys, pgprot_t prot)
static void clear_pte_phys(unsigned long addr, pgprot_t prot)
void __set_fixmap(enum fixed_addresses idx, unsigned long phys, pgprot_t prot)
void __clear_fixmap(enum fixed_addresses idx, pgprot_t prot)
static pmd_t * __init one_md_table_init(pud_t *pud)
static pte_t * __init one_page_table_init(pmd_t *pmd)
static pte_t * __init page_table_kmap_check(pte_t *pte, pmd_t *pmd,
unsigned long vaddr, pte_t *lastpte)
void __init page_table_range_init(unsigned long start, unsigned long end,
pgd_t *pgd_base)
void __init allocate_pgdat(unsigned int nid)
static void __init bootmem_init_one_node(unsigned int nid)
static void __init do_init_bootmem(void)
static void __init early_reserve_mem(void)
void __init paging_init(void)
static void __init iommu_init(void)
unsigned int mem_init_done = 0;
void __init mem_init(void)
void free_initmem(void)
void free_initrd_mem(unsigned long start, unsigned long end)
int arch_add_memory(int nid, u64 start, u64 size)
EXPORT_SYMBOL_GPL(arch_add_memory);
int memory_add_physaddr_to_nid(u64 addr)
EXPORT_SYMBOL_GPL(memory_add_physaddr_to_nid);
