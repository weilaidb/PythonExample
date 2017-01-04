#define __ASM_SH_TLB_H
# include "tlb_64.h"
struct mmu_gather ;
static inline void init_tlb_gather(struct mmu_gather *tlb)
static inline void
tlb_gather_mmu(struct mmu_gather *tlb, struct mm_struct *mm, unsigned int full_mm_flush)
static inline void
tlb_finish_mmu(struct mmu_gather *tlb, unsigned long start, unsigned long end)
static inline void
tlb_remove_tlb_entry(struct mmu_gather *tlb, pte_t *ptep, unsigned long address)
static inline void
tlb_start_vma(struct mmu_gather *tlb, struct vm_area_struct *vma)
static inline void
tlb_end_vma(struct mmu_gather *tlb, struct vm_area_struct *vma)
static inline void tlb_flush_mmu(struct mmu_gather *tlb)
static inline int __tlb_remove_page(struct mmu_gather *tlb, struct page *page)
static inline void tlb_remove_page(struct mmu_gather *tlb, struct page *page)
#define pte_free_tlb(tlb, ptep, addr)	pte_free((tlb)->mm, ptep)
#define pmd_free_tlb(tlb, pmdp, addr)	pmd_free((tlb)->mm, pmdp)
#define pud_free_tlb(tlb, pudp, addr)	pud_free((tlb)->mm, pudp)
#define tlb_migrate_finish(mm)		do  while (0)
#if defined(CONFIG_CPU_SH4) || defined(CONFIG_SUPERH64)
extern void tlb_wire_entry(struct vm_area_struct *, unsigned long, pte_t);
extern void tlb_unwire_entry(void);
static inline void tlb_wire_entry(struct vm_area_struct *vma ,
unsigned long addr, pte_t pte)
static inline void tlb_unwire_entry(void)
#define tlb_start_vma(tlb, vma)				do  while (0)
#define tlb_end_vma(tlb, vma)				do  while (0)
#define __tlb_remove_tlb_entry(tlb, pte, address)	do  while (0)
#define tlb_flush(tlb)					do  while (0)
