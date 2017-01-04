static inline void __flush_itlb_all (void)
static inline void __flush_dtlb_all (void)
void flush_tlb_all (void)
void flush_tlb_mm(struct mm_struct *mm)
#define _ITLB_ENTRIES (ITLB_ARF_WAYS << XCHAL_ITLB_ARF_ENTRIES_LOG2)
#define _DTLB_ENTRIES (DTLB_ARF_WAYS << XCHAL_DTLB_ARF_ENTRIES_LOG2)
#if _ITLB_ENTRIES > _DTLB_ENTRIES
# define _TLB_ENTRIES _ITLB_ENTRIES
# define _TLB_ENTRIES _DTLB_ENTRIES
void flush_tlb_range (struct vm_area_struct *vma,
unsigned long start, unsigned long end)
void flush_tlb_page (struct vm_area_struct *vma, unsigned long page)
