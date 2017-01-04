#define _ASM_TLBFLUSH_H
struct tlb_state ;
DECLARE_PER_CPU_SHARED_ALIGNED(struct tlb_state, cpu_tlbstate);
static inline void local_flush_tlb(void)
static inline void local_flush_tlb_all(void)
static inline void local_flush_tlb_one(unsigned long addr)
static inline
void local_flush_tlb_page(struct mm_struct *mm, unsigned long addr)
extern void flush_tlb_all(void);
extern void flush_tlb_current_task(void);
extern void flush_tlb_mm(struct mm_struct *);
extern void flush_tlb_page(struct vm_area_struct *, unsigned long);
#define flush_tlb()		flush_tlb_current_task()
static inline void flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static inline void flush_tlb_all(void)
static inline void flush_tlb_mm(struct mm_struct *mm)
static inline void flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
#define flush_tlb_page(vma, addr)	local_flush_tlb_page((vma)->vm_mm, addr)
#define flush_tlb()			flush_tlb_all()
static inline void flush_tlb_kernel_range(unsigned long start,
unsigned long end)
static inline void flush_tlb_pgtables(struct mm_struct *mm,
unsigned long start, unsigned long end)
