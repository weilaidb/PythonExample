#define _ASM_POWERPC_TLBFLUSH_H
struct vm_area_struct;
struct mm_struct;
#define MMU_NO_CONTEXT      	((unsigned int)-1)
extern void flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end);
extern void flush_tlb_kernel_range(unsigned long start, unsigned long end);
extern void local_flush_tlb_mm(struct mm_struct *mm);
extern void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long vmaddr);
extern void __local_flush_tlb_page(struct mm_struct *mm, unsigned long vmaddr,
int tsize, int ind);
extern void flush_tlb_mm(struct mm_struct *mm);
extern void flush_tlb_page(struct vm_area_struct *vma, unsigned long vmaddr);
extern void __flush_tlb_page(struct mm_struct *mm, unsigned long vmaddr,
int tsize, int ind);
#define flush_tlb_mm(mm)		local_flush_tlb_mm(mm)
#define flush_tlb_page(vma,addr)	local_flush_tlb_page(vma,addr)
#define __flush_tlb_page(mm,addr,p,i)	__local_flush_tlb_page(mm,addr,p,i)
#define flush_tlb_page_nohash(vma,addr)	flush_tlb_page(vma,addr)
#elif defined(CONFIG_PPC_STD_MMU_32)
extern void flush_tlb_mm(struct mm_struct *mm);
extern void flush_tlb_page(struct vm_area_struct *vma, unsigned long vmaddr);
extern void flush_tlb_page_nohash(struct vm_area_struct *vma, unsigned long addr);
extern void flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end);
extern void flush_tlb_kernel_range(unsigned long start, unsigned long end);
static inline void local_flush_tlb_page(struct vm_area_struct *vma,
unsigned long vmaddr)
static inline void local_flush_tlb_mm(struct mm_struct *mm)
#elif defined(CONFIG_PPC_STD_MMU_64)
#define MMU_NO_CONTEXT		0
#define PPC64_TLB_BATCH_NR 192
struct ppc64_tlb_batch ;
DECLARE_PER_CPU(struct ppc64_tlb_batch, ppc64_tlb_batch);
extern void __flush_tlb_pending(struct ppc64_tlb_batch *batch);
extern void hpte_need_flush(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, unsigned long pte, int huge);
#define __HAVE_ARCH_ENTER_LAZY_MMU_MODE
static inline void arch_enter_lazy_mmu_mode(void)
static inline void arch_leave_lazy_mmu_mode(void)
#define arch_flush_lazy_mmu_mode()      do  while (0)
extern void flush_hash_page(unsigned long va, real_pte_t pte, int psize,
int ssize, int local);
extern void flush_hash_range(unsigned long number, int local);
static inline void local_flush_tlb_mm(struct mm_struct *mm)
static inline void flush_tlb_mm(struct mm_struct *mm)
static inline void local_flush_tlb_page(struct vm_area_struct *vma,
unsigned long vmaddr)
static inline void flush_tlb_page(struct vm_area_struct *vma,
unsigned long vmaddr)
static inline void flush_tlb_page_nohash(struct vm_area_struct *vma,
unsigned long vmaddr)
static inline void flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static inline void flush_tlb_kernel_range(unsigned long start,
unsigned long end)
extern void __flush_hash_table_range(struct mm_struct *mm, unsigned long start,
unsigned long end);
#error Unsupported MMU type
