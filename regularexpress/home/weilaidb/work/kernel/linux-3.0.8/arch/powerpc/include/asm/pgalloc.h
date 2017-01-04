#define _ASM_POWERPC_PGALLOC_H
extern void tlb_flush_pgtable(struct mmu_gather *tlb, unsigned long address);
static inline void tlb_flush_pgtable(struct mmu_gather *tlb,
unsigned long address)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t ptepage)
struct mmu_gather;
extern void tlb_remove_table(struct mmu_gather *, void *);
static inline void pgtable_free_tlb(struct mmu_gather *tlb, void *table, int shift)
static inline void __tlb_remove_table(void *_table)
static inline void pgtable_free_tlb(struct mmu_gather *tlb, void *table, unsigned shift)
static inline void __pte_free_tlb(struct mmu_gather *tlb, struct page *ptepage,
unsigned long address)
