#define TLBSIZE 32
unsigned long asid_cache = ASID_FIRST_VERSION;
EXPORT_SYMBOL(asid_cache);
void local_flush_tlb_all(void)
static inline void
drop_mmu_context(struct mm_struct *mm)
void local_flush_tlb_mm(struct mm_struct *mm)
void local_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void local_flush_tlb_kernel_range(unsigned long start, unsigned long end)
void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void local_flush_tlb_one(unsigned long page)
void __update_tlb(struct vm_area_struct *vma, unsigned long address, pte_t pte)
void __cpuinit tlb_init(void)
