#define _ASM_IA64_TLBFLUSH_H
extern void setup_ptcg_sem(int max_purges, int from_palo);
extern void local_flush_tlb_all (void);
extern void smp_flush_tlb_all (void);
extern void smp_flush_tlb_mm (struct mm_struct *mm);
extern void smp_flush_tlb_cpumask (cpumask_t xcpumask);
# define flush_tlb_all()	smp_flush_tlb_all()
# define flush_tlb_all()	local_flush_tlb_all()
# define smp_flush_tlb_cpumask(m) local_flush_tlb_all()
static inline void
local_finish_flush_tlb_mm (struct mm_struct *mm)
static inline void
flush_tlb_mm (struct mm_struct *mm)
extern void flush_tlb_range (struct vm_area_struct *vma, unsigned long start, unsigned long end);
static inline void
flush_tlb_page (struct vm_area_struct *vma, unsigned long addr)
void smp_local_flush_tlb(void);
#define smp_local_flush_tlb()
static inline void flush_tlb_kernel_range(unsigned long start,
unsigned long end)
