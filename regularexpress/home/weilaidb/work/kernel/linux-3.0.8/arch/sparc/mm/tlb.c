static DEFINE_PER_CPU(struct tlb_batch, tlb_batch);
void flush_tlb_pending(void)
void tlb_batch_add(struct mm_struct *mm, unsigned long vaddr,
pte_t *ptep, pte_t orig, int fullmm)
