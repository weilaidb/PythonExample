static int __init parse_direct_gbpages_off(char *arg)
early_param("nogbpages", parse_direct_gbpages_off);
static int __init parse_direct_gbpages_on(char *arg)
early_param("gbpages", parse_direct_gbpages_on);
pteval_t __supported_pte_mask __read_mostly = ~_PAGE_IOMAP;
EXPORT_SYMBOL_GPL(__supported_pte_mask);
int force_personality32;
static int __init nonx32_setup(char *str)
__setup("noexec32=", nonx32_setup);
void sync_global_pgds(unsigned long start, unsigned long end)
static __ref void *spp_getpage(void)
static pud_t *fill_pud(pgd_t *pgd, unsigned long vaddr)
static pmd_t *fill_pmd(pud_t *pud, unsigned long vaddr)
static pte_t *fill_pte(pmd_t *pmd, unsigned long vaddr)
void set_pte_vaddr_pud(pud_t *pud_page, unsigned long vaddr, pte_t new_pte)
void set_pte_vaddr(unsigned long vaddr, pte_t pteval)
pmd_t * __init populate_extra_pmd(unsigned long vaddr)
pte_t * __init populate_extra_pte(unsigned long vaddr)
static void __init __init_extra_mapping(unsigned long phys, unsigned long size,
pgprot_t prot)
void __init init_extra_mapping_wb(unsigned long phys, unsigned long size)
void __init init_extra_mapping_uc(unsigned long phys, unsigned long size)
void __init cleanup_highmap(void)
static __ref void *alloc_low_page(unsigned long *phys)
static __ref void *map_low_page(void *virt)
static __ref void unmap_low_page(void *adr)
static unsigned long __meminit
phys_pte_init(pte_t *pte_page, unsigned long addr, unsigned long end,
pgprot_t prot)
static unsigned long __meminit
phys_pmd_init(pmd_t *pmd_page, unsigned long address, unsigned long end,
unsigned long page_size_mask, pgprot_t prot)
static unsigned long __meminit
phys_pud_init(pud_t *pud_page, unsigned long addr, unsigned long end,
unsigned long page_size_mask)
unsigned long __meminit
kernel_physical_mapping_init(unsigned long start,
unsigned long end,
unsigned long page_size_mask)
void __init initmem_init(void)
void __init paging_init(void)
static void  update_end_of_memory_vars(u64 start, u64 size)
int arch_add_memory(int nid, u64 start, u64 size)
EXPORT_SYMBOL_GPL(arch_add_memory);
static struct kcore_list kcore_vsyscall;
void __init mem_init(void)
const int rodata_test_data = 0xC3;
EXPORT_SYMBOL_GPL(rodata_test_data);
int kernel_set_to_readonly;
void set_kernel_text_rw(void)
void set_kernel_text_ro(void)
void mark_rodata_ro(void)
int kern_addr_valid(unsigned long addr)
static struct vm_area_struct gate_vma = ;
struct vm_area_struct *get_gate_vma(struct mm_struct *mm)
int in_gate_area(struct mm_struct *mm, unsigned long addr)
int in_gate_area_no_mm(unsigned long addr)
const char *arch_vma_name(struct vm_area_struct *vma)
unsigned long memory_block_size_bytes(void)
static long __meminitdata addr_start, addr_end;
static void __meminitdata *p_start, *p_end;
static int __meminitdata node_start;
int __meminit
vmemmap_populate(struct page *start_page, unsigned long size, int node)
void __meminit vmemmap_populate_print_last(void)
