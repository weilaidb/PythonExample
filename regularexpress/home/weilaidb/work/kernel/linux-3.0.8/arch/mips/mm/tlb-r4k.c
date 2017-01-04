extern void build_tlb_refill_handler(void);
#define UNIQUE_ENTRYHI(idx) (CKSEG0 + ((idx) << (PAGE_SHIFT + 1)))
#define ENTER_CRITICAL(flags) \
#define ENTER_CRITICAL(flags) local_irq_save(flags)
#define EXIT_CRITICAL(flags) local_irq_restore(flags)
#if defined(CONFIG_CPU_LOONGSON2)
#define FLUSH_ITLB write_c0_diag(4);
#define FLUSH_ITLB_VM(vma)
#define FLUSH_ITLB
#define FLUSH_ITLB_VM(vma)
void local_flush_tlb_all(void)
void local_flush_tlb_mm(struct mm_struct *mm)
void local_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void local_flush_tlb_kernel_range(unsigned long start, unsigned long end)
void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void local_flush_tlb_one(unsigned long page)
void __update_tlb(struct vm_area_struct * vma, unsigned long address, pte_t pte)
void __init add_wired_entry(unsigned long entrylo0, unsigned long entrylo1,
unsigned long entryhi, unsigned long pagemask)
static int temp_tlb_entry __cpuinitdata;
__init int add_temporary_entry(unsigned long entrylo0, unsigned long entrylo1,
unsigned long entryhi, unsigned long pagemask)
static int __cpuinitdata ntlb;
static int __init set_ntlb(char *str)
__setup("ntlb=", set_ntlb);
void __cpuinit tlb_init(void)
