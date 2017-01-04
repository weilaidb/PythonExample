#undef DEBUG_TLB
extern void build_tlb_refill_handler(void);
#define BARRIER				\
__asm__ __volatile__(		\
".set	push\n\t"	\
".set	noreorder\n\t"	\
"nop\n\t"		\
".set	pop\n\t")
int r3k_have_wired_reg;
void local_flush_tlb_all(void)
void local_flush_tlb_mm(struct mm_struct *mm)
void local_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void local_flush_tlb_kernel_range(unsigned long start, unsigned long end)
void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void __update_tlb(struct vm_area_struct *vma, unsigned long address, pte_t pte)
void __init add_wired_entry(unsigned long entrylo0, unsigned long entrylo1,
unsigned long entryhi, unsigned long pagemask)
void __cpuinit tlb_init(void)
