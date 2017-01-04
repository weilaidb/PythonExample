static pteval_t shared_pte_mask = L_PTE_MT_BUFFERABLE;
#if __LINUX_ARM_ARCH__ < 6
static int do_adjust_pte(struct vm_area_struct *vma, unsigned long address,
unsigned long pfn, pte_t *ptep)
#if USE_SPLIT_PTLOCKS
static inline void do_pte_lock(spinlock_t *ptl)
static inline void do_pte_unlock(spinlock_t *ptl)
static inline void do_pte_lock(spinlock_t *ptl)
static inline void do_pte_unlock(spinlock_t *ptl)
static int adjust_pte(struct vm_area_struct *vma, unsigned long address,
unsigned long pfn)
static void
make_coherent(struct address_space *mapping, struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep, unsigned long pfn)
void update_mmu_cache(struct vm_area_struct *vma, unsigned long addr,
pte_t *ptep)
static int __init check_writebuffer(unsigned long *p1, unsigned long *p2)
void __init check_writebuffer_bugs(void)
