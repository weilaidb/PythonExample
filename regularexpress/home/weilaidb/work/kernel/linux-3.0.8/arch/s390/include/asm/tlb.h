#define _S390_TLB_H
struct mmu_gather ;
struct mmu_table_batch ;
#define MAX_TABLE_BATCH		\
((PAGE_SIZE - sizeof(struct mmu_table_batch)) / sizeof(void *))
extern void tlb_table_flush(struct mmu_gather *tlb);
extern void tlb_remove_table(struct mmu_gather *tlb, void *table);
static inline void tlb_gather_mmu(struct mmu_gather *tlb,
struct mm_struct *mm,
unsigned int full_mm_flush)
static inline void tlb_flush_mmu(struct mmu_gather *tlb)
static inline void tlb_finish_mmu(struct mmu_gather *tlb,
unsigned long start, unsigned long end)
static inline int __tlb_remove_page(struct mmu_gather *tlb, struct page *page)
static inline void tlb_remove_page(struct mmu_gather *tlb, struct page *page)
static inline void pte_free_tlb(struct mmu_gather *tlb, pgtable_t pte,
unsigned long address)
static inline void pmd_free_tlb(struct mmu_gather *tlb, pmd_t *pmd,
unsigned long address)
static inline void pud_free_tlb(struct mmu_gather *tlb, pud_t *pud,
unsigned long address)
#define tlb_start_vma(tlb, vma)			do  while (0)
#define tlb_end_vma(tlb, vma)			do  while (0)
#define tlb_remove_tlb_entry(tlb, ptep, addr)	do  while (0)
#define tlb_migrate_finish(mm)			do  while (0)
