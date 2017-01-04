#define __UNICORE_TLBFLUSH_H__
extern void __cpu_flush_user_tlb_range(unsigned long, unsigned long,
struct vm_area_struct *);
extern void __cpu_flush_kern_tlb_range(unsigned long, unsigned long);
static inline void local_flush_tlb_all(void)
static inline void local_flush_tlb_mm(struct mm_struct *mm)
static inline void
local_flush_tlb_page(struct vm_area_struct *vma, unsigned long uaddr)
static inline void local_flush_tlb_kernel_page(unsigned long kaddr)
static inline void flush_pmd_entry(pmd_t *pmd)
static inline void clean_pmd_entry(pmd_t *pmd)
#define local_flush_tlb_range(vma, start, end)	\
__cpu_flush_user_tlb_range(start, end, vma)
#define local_flush_tlb_kernel_range(s, e)	\
__cpu_flush_kern_tlb_range(s, e)
#define flush_tlb_all		local_flush_tlb_all
#define flush_tlb_mm		local_flush_tlb_mm
#define flush_tlb_page		local_flush_tlb_page
#define flush_tlb_kernel_page	local_flush_tlb_kernel_page
#define flush_tlb_range		local_flush_tlb_range
#define flush_tlb_kernel_range	local_flush_tlb_kernel_range
extern void update_mmu_cache(struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep);
extern void do_bad_area(unsigned long addr, unsigned int fsr,
struct pt_regs *regs);
