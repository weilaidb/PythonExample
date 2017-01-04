void __mmu_notifier_release(struct mm_struct *mm)
int __mmu_notifier_clear_flush_young(struct mm_struct *mm,
unsigned long address)
int __mmu_notifier_test_young(struct mm_struct *mm,
unsigned long address)
void __mmu_notifier_change_pte(struct mm_struct *mm, unsigned long address,
pte_t pte)
void __mmu_notifier_invalidate_page(struct mm_struct *mm,
unsigned long address)
void __mmu_notifier_invalidate_range_start(struct mm_struct *mm,
unsigned long start, unsigned long end)
void __mmu_notifier_invalidate_range_end(struct mm_struct *mm,
unsigned long start, unsigned long end)
static int do_mmu_notifier_register(struct mmu_notifier *mn,
struct mm_struct *mm,
int take_mmap_sem)
int mmu_notifier_register(struct mmu_notifier *mn, struct mm_struct *mm)
EXPORT_SYMBOL_GPL(mmu_notifier_register);
int __mmu_notifier_register(struct mmu_notifier *mn, struct mm_struct *mm)
EXPORT_SYMBOL_GPL(__mmu_notifier_register);
void __mmu_notifier_mm_destroy(struct mm_struct *mm)
void mmu_notifier_unregister(struct mmu_notifier *mn, struct mm_struct *mm)
EXPORT_SYMBOL_GPL(mmu_notifier_unregister);
