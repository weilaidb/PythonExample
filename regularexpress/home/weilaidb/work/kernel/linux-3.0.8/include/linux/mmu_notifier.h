#define _LINUX_MMU_NOTIFIER_H
struct mmu_notifier;
struct mmu_notifier_ops;
struct mmu_notifier_mm ;
struct mmu_notifier_ops ;
struct mmu_notifier ;
static inline int mm_has_notifiers(struct mm_struct *mm)
extern int mmu_notifier_register(struct mmu_notifier *mn,
struct mm_struct *mm);
extern int __mmu_notifier_register(struct mmu_notifier *mn,
struct mm_struct *mm);
extern void mmu_notifier_unregister(struct mmu_notifier *mn,
struct mm_struct *mm);
extern void __mmu_notifier_mm_destroy(struct mm_struct *mm);
extern void __mmu_notifier_release(struct mm_struct *mm);
extern int __mmu_notifier_clear_flush_young(struct mm_struct *mm,
unsigned long address);
extern int __mmu_notifier_test_young(struct mm_struct *mm,
unsigned long address);
extern void __mmu_notifier_change_pte(struct mm_struct *mm,
unsigned long address, pte_t pte);
extern void __mmu_notifier_invalidate_page(struct mm_struct *mm,
unsigned long address);
extern void __mmu_notifier_invalidate_range_start(struct mm_struct *mm,
unsigned long start, unsigned long end);
extern void __mmu_notifier_invalidate_range_end(struct mm_struct *mm,
unsigned long start, unsigned long end);
static inline void mmu_notifier_release(struct mm_struct *mm)
static inline int mmu_notifier_clear_flush_young(struct mm_struct *mm,
unsigned long address)
static inline int mmu_notifier_test_young(struct mm_struct *mm,
unsigned long address)
static inline void mmu_notifier_change_pte(struct mm_struct *mm,
unsigned long address, pte_t pte)
static inline void mmu_notifier_invalidate_page(struct mm_struct *mm,
unsigned long address)
static inline void mmu_notifier_invalidate_range_start(struct mm_struct *mm,
unsigned long start, unsigned long end)
static inline void mmu_notifier_invalidate_range_end(struct mm_struct *mm,
unsigned long start, unsigned long end)
static inline void mmu_notifier_mm_init(struct mm_struct *mm)
static inline void mmu_notifier_mm_destroy(struct mm_struct *mm)
#define ptep_clear_flush_notify(__vma, __address, __ptep)		\
()
#define pmdp_clear_flush_notify(__vma, __address, __pmdp)		\
()
#define pmdp_splitting_flush_notify(__vma, __address, __pmdp)		\
()
#define ptep_clear_flush_young_notify(__vma, __address, __ptep)		\
()
#define pmdp_clear_flush_young_notify(__vma, __address, __pmdp)		\
()
#define set_pte_at_notify(__mm, __address, __ptep, __pte)		\
()
static inline void mmu_notifier_release(struct mm_struct *mm)
static inline int mmu_notifier_clear_flush_young(struct mm_struct *mm,
unsigned long address)
static inline int mmu_notifier_test_young(struct mm_struct *mm,
unsigned long address)
static inline void mmu_notifier_change_pte(struct mm_struct *mm,
unsigned long address, pte_t pte)
static inline void mmu_notifier_invalidate_page(struct mm_struct *mm,
unsigned long address)
static inline void mmu_notifier_invalidate_range_start(struct mm_struct *mm,
unsigned long start, unsigned long end)
static inline void mmu_notifier_invalidate_range_end(struct mm_struct *mm,
unsigned long start, unsigned long end)
static inline void mmu_notifier_mm_init(struct mm_struct *mm)
static inline void mmu_notifier_mm_destroy(struct mm_struct *mm)
#define ptep_clear_flush_young_notify ptep_clear_flush_young
#define pmdp_clear_flush_young_notify pmdp_clear_flush_young
#define ptep_clear_flush_notify ptep_clear_flush
#define pmdp_clear_flush_notify pmdp_clear_flush
#define pmdp_splitting_flush_notify pmdp_splitting_flush
#define set_pte_at_notify set_pte_at
