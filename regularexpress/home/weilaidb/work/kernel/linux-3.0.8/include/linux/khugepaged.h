#define _LINUX_KHUGEPAGED_H
extern int __khugepaged_enter(struct mm_struct *mm);
extern void __khugepaged_exit(struct mm_struct *mm);
extern int khugepaged_enter_vma_merge(struct vm_area_struct *vma);
#define khugepaged_enabled()					       \
(transparent_hugepage_flags &				       \
((1<<TRANSPARENT_HUGEPAGE_FLAG) |		       \
(1<<TRANSPARENT_HUGEPAGE_REQ_MADV_FLAG)))
#define khugepaged_always()				\
(transparent_hugepage_flags &			\
(1<<TRANSPARENT_HUGEPAGE_FLAG))
#define khugepaged_req_madv()					\
(transparent_hugepage_flags &				\
(1<<TRANSPARENT_HUGEPAGE_REQ_MADV_FLAG))
#define khugepaged_defrag()					\
(transparent_hugepage_flags &				\
(1<<TRANSPARENT_HUGEPAGE_DEFRAG_KHUGEPAGED_FLAG))
static inline int khugepaged_fork(struct mm_struct *mm, struct mm_struct *oldmm)
static inline void khugepaged_exit(struct mm_struct *mm)
static inline int khugepaged_enter(struct vm_area_struct *vma)
static inline int khugepaged_fork(struct mm_struct *mm, struct mm_struct *oldmm)
static inline void khugepaged_exit(struct mm_struct *mm)
static inline int khugepaged_enter(struct vm_area_struct *vma)
static inline int khugepaged_enter_vma_merge(struct vm_area_struct *vma)
