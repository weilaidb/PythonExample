extern void build_tlb_refill_handler(void);
#define TFP_TLB_SIZE		384
#define TFP_TLB_SET_SHIFT	7
#define BARRIER __asm__ __volatile__(".set noreorder\n\t" \
"nop; nop; nop; nop; nop; nop;\n\t" \
".set reorder\n\t")
void local_flush_tlb_all(void)
void local_flush_tlb_mm(struct mm_struct *mm)
void local_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void local_flush_tlb_kernel_range(unsigned long start, unsigned long end)
void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void __update_tlb(struct vm_area_struct * vma, unsigned long address, pte_t pte)
static void __cpuinit probe_tlb(unsigned long config)
void __cpuinit tlb_init(void)
