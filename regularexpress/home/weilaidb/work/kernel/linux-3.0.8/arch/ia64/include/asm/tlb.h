#define _ASM_IA64_TLB_H
# define tlb_fast_mode(tlb)	((tlb)->nr == ~0U)
# define tlb_fast_mode(tlb)	(1)
#define	IA64_GATHER_BUNDLE	8
struct mmu_gather ;
struct ia64_tr_entry ;
extern int ia64_itr_entry(u64 target_mask, u64 va, u64 pte, u64 log_size);
extern void ia64_ptr_entry(u64 target_mask, int slot);
extern struct ia64_tr_entry *ia64_idtrs[NR_CPUS];
#define RR_TO_VE(val)   (((val) >> 0) & 0x0000000000000001)
#define RR_VE(val)	(((val) & 0x0000000000000001) << 0)
#define RR_VE_MASK	0x0000000000000001L
#define RR_VE_SHIFT	0
#define RR_TO_PS(val)	(((val) >> 2) & 0x000000000000003f)
#define RR_PS(val)	(((val) & 0x000000000000003f) << 2)
#define RR_PS_MASK	0x00000000000000fcL
#define RR_PS_SHIFT	2
#define RR_RID_MASK	0x00000000ffffff00L
#define RR_TO_RID(val) 	((val >> 8) & 0xffffff)
static inline void
ia64_tlb_flush_mmu (struct mmu_gather *tlb, unsigned long start, unsigned long end)
static inline void __tlb_alloc_page(struct mmu_gather *tlb)
static inline void
tlb_gather_mmu(struct mmu_gather *tlb, struct mm_struct *mm, unsigned int full_mm_flush)
static inline void
tlb_finish_mmu(struct mmu_gather *tlb, unsigned long start, unsigned long end)
static inline int __tlb_remove_page(struct mmu_gather *tlb, struct page *page)
static inline void tlb_flush_mmu(struct mmu_gather *tlb)
static inline void tlb_remove_page(struct mmu_gather *tlb, struct page *page)
static inline void
__tlb_remove_tlb_entry (struct mmu_gather *tlb, pte_t *ptep, unsigned long address)
#define tlb_migrate_finish(mm)	platform_tlb_migrate_finish(mm)
#define tlb_start_vma(tlb, vma)			do  while (0)
#define tlb_end_vma(tlb, vma)			do  while (0)
#define tlb_remove_tlb_entry(tlb, ptep, addr)		\
do  while (0)
#define pte_free_tlb(tlb, ptep, address)		\
do  while (0)
#define pmd_free_tlb(tlb, ptep, address)		\
do  while (0)
#define pud_free_tlb(tlb, pudp, address)		\
do  while (0)
