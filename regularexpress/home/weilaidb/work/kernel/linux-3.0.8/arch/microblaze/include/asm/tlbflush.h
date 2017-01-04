#define _ASM_MICROBLAZE_TLBFLUSH_H
extern void _tlbie(unsigned long address);
extern void _tlbia(void);
#define __tlbia()
#define __tlbie(x)
static inline void local_flush_tlb_all(void)
static inline void local_flush_tlb_mm(struct mm_struct *mm)
static inline void local_flush_tlb_page(struct vm_area_struct *vma,
unsigned long vmaddr)
static inline void local_flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
#define flush_tlb_kernel_range(start, end)	do  while (0)
#define update_mmu_cache(vma, addr, ptep)	do  while (0)
#define flush_tlb_all local_flush_tlb_all
#define flush_tlb_mm local_flush_tlb_mm
#define flush_tlb_page local_flush_tlb_page
#define flush_tlb_range local_flush_tlb_range
static inline void flush_tlb_pgtables(struct mm_struct *mm,
unsigned long start, unsigned long end)
#define flush_tlb()				BUG()
#define flush_tlb_all()				BUG()
#define flush_tlb_mm(mm)			BUG()
#define flush_tlb_page(vma, addr)		BUG()
#define flush_tlb_range(mm, start, end)		BUG()
#define flush_tlb_pgtables(mm, start, end)	BUG()
#define flush_tlb_kernel_range(start, end)	BUG()
