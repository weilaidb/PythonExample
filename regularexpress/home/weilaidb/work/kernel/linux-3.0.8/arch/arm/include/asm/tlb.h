#define __ASMARM_TLB_H
#define tlb_flush(tlb)	((void) tlb)
#if defined(CONFIG_SMP) || defined(CONFIG_CPU_32v7)
#define tlb_fast_mode(tlb)	0
#define tlb_fast_mode(tlb)	1
#define MMU_GATHER_BUNDLE	8
struct mmu_gather ;
DECLARE_PER_CPU(struct mmu_gather, mmu_gathers);
static inline void tlb_flush(struct mmu_gather *tlb)
static inline void tlb_add_flush(struct mmu_gather *tlb, unsigned long addr)
static inline void __tlb_alloc_page(struct mmu_gather *tlb)
static inline void tlb_flush_mmu(struct mmu_gather *tlb)
static inline void
tlb_gather_mmu(struct mmu_gather *tlb, struct mm_struct *mm, unsigned int fullmm)
static inline void
tlb_finish_mmu(struct mmu_gather *tlb, unsigned long start, unsigned long end)
static inline void
tlb_remove_tlb_entry(struct mmu_gather *tlb, pte_t *ptep, unsigned long addr)
static inline void
tlb_start_vma(struct mmu_gather *tlb, struct vm_area_struct *vma)
static inline void
tlb_end_vma(struct mmu_gather *tlb, struct vm_area_struct *vma)
static inline int __tlb_remove_page(struct mmu_gather *tlb, struct page *page)
static inline void tlb_remove_page(struct mmu_gather *tlb, struct page *page)
static inline void __pte_free_tlb(struct mmu_gather *tlb, pgtable_t pte,
unsigned long addr)
#define pte_free_tlb(tlb, ptep, addr)	__pte_free_tlb(tlb, ptep, addr)
#define pmd_free_tlb(tlb, pmdp, addr)	pmd_free((tlb)->mm, pmdp)
#define tlb_migrate_finish(mm)		do  while (0)
