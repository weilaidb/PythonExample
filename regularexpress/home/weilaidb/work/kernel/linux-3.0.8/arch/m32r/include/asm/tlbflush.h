#define _ASM_M32R_TLBFLUSH_H
extern void local_flush_tlb_all(void);
extern void local_flush_tlb_mm(struct mm_struct *);
extern void local_flush_tlb_page(struct vm_area_struct *, unsigned long);
extern void local_flush_tlb_range(struct vm_area_struct *, unsigned long,
unsigned long);
#define flush_tlb_all()			local_flush_tlb_all()
#define flush_tlb_mm(mm)		local_flush_tlb_mm(mm)
#define flush_tlb_page(vma, page)	local_flush_tlb_page(vma, page)
#define flush_tlb_range(vma, start, end)	\
local_flush_tlb_range(vma, start, end)
#define flush_tlb_kernel_range(start, end)	local_flush_tlb_all()
#define flush_tlb_all()			do  while (0)
#define flush_tlb_mm(mm)		do  while (0)
#define flush_tlb_page(vma, vmaddr)	do  while (0)
#define flush_tlb_range(vma, start, end)	do  while (0)
extern void smp_flush_tlb_all(void);
extern void smp_flush_tlb_mm(struct mm_struct *);
extern void smp_flush_tlb_page(struct vm_area_struct *, unsigned long);
extern void smp_flush_tlb_range(struct vm_area_struct *, unsigned long,
unsigned long);
#define flush_tlb_all()			smp_flush_tlb_all()
#define flush_tlb_mm(mm)		smp_flush_tlb_mm(mm)
#define flush_tlb_page(vma, page)	smp_flush_tlb_page(vma, page)
#define flush_tlb_range(vma, start, end)	\
smp_flush_tlb_range(vma, start, end)
#define flush_tlb_kernel_range(start, end)	smp_flush_tlb_all()
static __inline__ void __flush_tlb_page(unsigned long page)
static __inline__ void __flush_tlb_all(void)
extern void update_mmu_cache(struct vm_area_struct *, unsigned long, pte_t *);
