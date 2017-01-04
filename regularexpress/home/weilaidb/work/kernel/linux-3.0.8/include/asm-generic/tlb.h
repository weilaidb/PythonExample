#define _ASM_GENERIC__TLB_H
struct mmu_table_batch ;
#define MAX_TABLE_BATCH		\
((PAGE_SIZE - sizeof(struct mmu_table_batch)) / sizeof(void *))
extern void tlb_table_flush(struct mmu_gather *tlb);
extern void tlb_remove_table(struct mmu_gather *tlb, void *table);
#define MMU_GATHER_BUNDLE	8
struct mmu_gather_batch ;
#define MAX_GATHER_BATCH	\
((PAGE_SIZE - sizeof(struct mmu_gather_batch)) / sizeof(void *))
struct mmu_gather ;
#define HAVE_GENERIC_MMU_GATHER
static inline int tlb_fast_mode(struct mmu_gather *tlb)
void tlb_gather_mmu(struct mmu_gather *tlb, struct mm_struct *mm, bool fullmm);
void tlb_flush_mmu(struct mmu_gather *tlb);
void tlb_finish_mmu(struct mmu_gather *tlb, unsigned long start, unsigned long end);
int __tlb_remove_page(struct mmu_gather *tlb, struct page *page);
static inline void tlb_remove_page(struct mmu_gather *tlb, struct page *page)
#define tlb_remove_tlb_entry(tlb, ptep, address)		\
do  while (0)
#define pte_free_tlb(tlb, ptep, address)			\
do  while (0)
#define pud_free_tlb(tlb, pudp, address)			\
do  while (0)
#define pmd_free_tlb(tlb, pmdp, address)			\
do  while (0)
#define tlb_migrate_finish(mm) do  while (0)
