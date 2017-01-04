#define _ASM_TILE_TLBFLUSH_H
DECLARE_PER_CPU(int, current_asid);
extern int min_asid, max_asid;
static inline unsigned long hv_page_size(const struct vm_area_struct *vma)
#define FLUSH_NONEXEC ((const struct vm_area_struct *)-1UL)
static inline void local_flush_tlb_page(const struct vm_area_struct *vma,
unsigned long addr,
unsigned long page_size)
static inline void local_flush_tlb_pages(const struct vm_area_struct *vma,
unsigned long addr,
unsigned long page_size,
unsigned long len)
static inline void local_flush_tlb(void)
static inline void local_flush_tlb_all(void)
extern void flush_tlb_all(void);
extern void flush_tlb_kernel_range(unsigned long start, unsigned long end);
extern void flush_tlb_current_task(void);
extern void flush_tlb_mm(struct mm_struct *);
extern void flush_tlb_page(const struct vm_area_struct *, unsigned long);
extern void flush_tlb_page_mm(const struct vm_area_struct *,
struct mm_struct *, unsigned long);
extern void flush_tlb_range(const struct vm_area_struct *,
unsigned long start, unsigned long end);
#define flush_tlb()     flush_tlb_current_task()
