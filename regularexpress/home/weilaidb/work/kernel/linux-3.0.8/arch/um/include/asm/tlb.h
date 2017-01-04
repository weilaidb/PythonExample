#define __UM_TLB_H
#define tlb_start_vma(tlb, vma) do  while (0)
#define tlb_end_vma(tlb, vma) do  while (0)
#define tlb_flush(tlb) flush_tlb_mm((tlb)->mm)
struct mmu_gather ;
static inline void __tlb_remove_tlb_entry(struct mmu_gather *tlb, pte_t *ptep,
unsigned long address)
static inline void init_tlb_gather(struct mmu_gather *tlb)
static inline void
tlb_gather_mmu(struct mmu_gather *tlb, struct mm_struct *mm, unsigned int full_mm_flush)
extern void flush_tlb_mm_range(struct mm_struct *mm, unsigned long start,
unsigned long end);
static inline void
tlb_flush_mmu(struct mmu_gather *tlb)
static inline void
tlb_finish_mmu(struct mmu_gather *tlb, unsigned long start, unsigned long end)
static inline int __tlb_remove_page(struct mmu_gather *tlb, struct page *page)
static inline void tlb_remove_page(struct mmu_gather *tlb, struct page *page)
#define tlb_remove_tlb_entry(tlb, ptep, address)		\
do  while (0)
#define pte_free_tlb(tlb, ptep, addr) __pte_free_tlb(tlb, ptep, addr)
#define pud_free_tlb(tlb, pudp, addr) __pud_free_tlb(tlb, pudp, addr)
#define pmd_free_tlb(tlb, pmdp, addr) __pmd_free_tlb(tlb, pmdp, addr)
#define tlb_migrate_finish(mm) do  while (0)
