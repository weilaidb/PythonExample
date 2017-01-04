DEFINE_PER_CPU(struct ppc64_tlb_batch, ppc64_tlb_batch);
void hpte_need_flush(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, unsigned long pte, int huge)
void __flush_tlb_pending(struct ppc64_tlb_batch *batch)
void tlb_flush(struct mmu_gather *tlb)
void __flush_hash_table_range(struct mm_struct *mm, unsigned long start,
unsigned long end)
