#define CPU_FTR_COHERENT_ICACHE	0
#define CPU_FTR_NOEXECUTE	0
int init_bootmem_done;
int mem_init_done;
phys_addr_t memory_limit;
pte_t *kmap_pte;
pgprot_t kmap_prot;
EXPORT_SYMBOL(kmap_prot);
EXPORT_SYMBOL(kmap_pte);
static inline pte_t *virt_to_kpte(unsigned long vaddr)
int page_is_ram(unsigned long pfn)
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t vma_prot)
EXPORT_SYMBOL(phys_mem_access_prot);
int memory_add_physaddr_to_nid(u64 start)
int arch_add_memory(int nid, u64 start, u64 size)
int
walk_system_ram_range(unsigned long start_pfn, unsigned long nr_pages,
void *arg, int (*func)(unsigned long, unsigned long, void *))
EXPORT_SYMBOL_GPL(walk_system_ram_range);
void __init do_init_bootmem(void)
static int __init mark_nonram_nosave(void)
void __init paging_init(void)
void __init mem_init(void)
void __init free_initrd_mem(unsigned long start, unsigned long end)
void flush_dcache_page(struct page *page)
EXPORT_SYMBOL(flush_dcache_page);
void flush_dcache_icache_page(struct page *page)
void clear_user_page(void *page, unsigned long vaddr, struct page *pg)
EXPORT_SYMBOL(clear_user_page);
void copy_user_page(void *vto, void *vfrom, unsigned long vaddr,
struct page *pg)
void flush_icache_user_range(struct vm_area_struct *vma, struct page *page,
unsigned long addr, int len)
EXPORT_SYMBOL(flush_icache_user_range);
void update_mmu_cache(struct vm_area_struct *vma, unsigned long address,
pte_t *ptep)
