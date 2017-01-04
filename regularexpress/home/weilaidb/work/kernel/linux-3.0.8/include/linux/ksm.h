#define __LINUX_KSM_H
struct stable_node;
struct mem_cgroup;
struct page *ksm_does_need_to_copy(struct page *page,
struct vm_area_struct *vma, unsigned long address);
int ksm_madvise(struct vm_area_struct *vma, unsigned long start,
unsigned long end, int advice, unsigned long *vm_flags);
int __ksm_enter(struct mm_struct *mm);
void __ksm_exit(struct mm_struct *mm);
static inline int ksm_fork(struct mm_struct *mm, struct mm_struct *oldmm)
static inline void ksm_exit(struct mm_struct *mm)
static inline int PageKsm(struct page *page)
static inline struct stable_node *page_stable_node(struct page *page)
static inline void set_page_stable_node(struct page *page,
struct stable_node *stable_node)
static inline int ksm_might_need_to_copy(struct page *page,
struct vm_area_struct *vma, unsigned long address)
int page_referenced_ksm(struct page *page,
struct mem_cgroup *memcg, unsigned long *vm_flags);
int try_to_unmap_ksm(struct page *page, enum ttu_flags flags);
int rmap_walk_ksm(struct page *page, int (*rmap_one)(struct page *,
struct vm_area_struct *, unsigned long, void *), void *arg);
void ksm_migrate_page(struct page *newpage, struct page *oldpage);
static inline int ksm_fork(struct mm_struct *mm, struct mm_struct *oldmm)
static inline void ksm_exit(struct mm_struct *mm)
static inline int PageKsm(struct page *page)
static inline int ksm_madvise(struct vm_area_struct *vma, unsigned long start,
unsigned long end, int advice, unsigned long *vm_flags)
static inline int ksm_might_need_to_copy(struct page *page,
struct vm_area_struct *vma, unsigned long address)
static inline int page_referenced_ksm(struct page *page,
struct mem_cgroup *memcg, unsigned long *vm_flags)
static inline int try_to_unmap_ksm(struct page *page, enum ttu_flags flags)
static inline int rmap_walk_ksm(struct page *page, int (*rmap_one)(struct page*,
struct vm_area_struct *, unsigned long, void *), void *arg)
static inline void ksm_migrate_page(struct page *newpage, struct page *oldpage)
