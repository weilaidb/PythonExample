struct mmu_psize_def mmu_psize_defs[MMU_PAGE_COUNT] = ;
static inline int mmu_get_tsize(int psize)
static inline int mmu_get_tsize(int psize)
int mmu_linear_psize;
int mmu_pte_psize;
int mmu_vmemmap_psize;
int book3e_htw_enabled;
unsigned long linear_map_top;
void local_flush_tlb_mm(struct mm_struct *mm)
EXPORT_SYMBOL(local_flush_tlb_mm);
void __local_flush_tlb_page(struct mm_struct *mm, unsigned long vmaddr,
int tsize, int ind)
void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long vmaddr)
EXPORT_SYMBOL(local_flush_tlb_page);
static DEFINE_RAW_SPINLOCK(tlbivax_lock);
static int mm_is_core_local(struct mm_struct *mm)
struct tlb_flush_param ;
static void do_flush_tlb_mm_ipi(void *param)
static void do_flush_tlb_page_ipi(void *param)
void flush_tlb_mm(struct mm_struct *mm)
EXPORT_SYMBOL(flush_tlb_mm);
void __flush_tlb_page(struct mm_struct *mm, unsigned long vmaddr,
int tsize, int ind)
void flush_tlb_page(struct vm_area_struct *vma, unsigned long vmaddr)
EXPORT_SYMBOL(flush_tlb_page);
void flush_tlb_kernel_range(unsigned long start, unsigned long end)
EXPORT_SYMBOL(flush_tlb_kernel_range);
void flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
EXPORT_SYMBOL(flush_tlb_range);
void tlb_flush(struct mmu_gather *tlb)
void tlb_flush_pgtable(struct mmu_gather *tlb, unsigned long address)
static void setup_page_sizes(void)
static void setup_mmu_htw(void)
static void __early_init_mmu(int boot_cpu)
void __init early_init_mmu(void)
void __cpuinit early_init_mmu_secondary(void)
void setup_initial_memory_limit(phys_addr_t first_memblock_base,
phys_addr_t first_memblock_size)
