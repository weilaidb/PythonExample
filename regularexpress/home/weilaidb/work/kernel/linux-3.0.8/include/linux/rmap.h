#define _LINUX_RMAP_H
struct anon_vma ;
struct anon_vma_chain ;
static inline void get_anon_vma(struct anon_vma *anon_vma)
void __put_anon_vma(struct anon_vma *anon_vma);
static inline void put_anon_vma(struct anon_vma *anon_vma)
static inline struct anon_vma *page_anon_vma(struct page *page)
static inline void vma_lock_anon_vma(struct vm_area_struct *vma)
static inline void vma_unlock_anon_vma(struct vm_area_struct *vma)
static inline void anon_vma_lock(struct anon_vma *anon_vma)
static inline void anon_vma_unlock(struct anon_vma *anon_vma)
void anon_vma_init(void);
int  anon_vma_prepare(struct vm_area_struct *);
void unlink_anon_vmas(struct vm_area_struct *);
int anon_vma_clone(struct vm_area_struct *, struct vm_area_struct *);
int anon_vma_fork(struct vm_area_struct *, struct vm_area_struct *);
void __anon_vma_link(struct vm_area_struct *);
static inline void anon_vma_merge(struct vm_area_struct *vma,
struct vm_area_struct *next)
struct anon_vma *page_get_anon_vma(struct page *page);
void page_move_anon_rmap(struct page *, struct vm_area_struct *, unsigned long);
void page_add_anon_rmap(struct page *, struct vm_area_struct *, unsigned long);
void do_page_add_anon_rmap(struct page *, struct vm_area_struct *,
unsigned long, int);
void page_add_new_anon_rmap(struct page *, struct vm_area_struct *, unsigned long);
void page_add_file_rmap(struct page *);
void page_remove_rmap(struct page *);
void hugepage_add_anon_rmap(struct page *, struct vm_area_struct *,
unsigned long);
void hugepage_add_new_anon_rmap(struct page *, struct vm_area_struct *,
unsigned long);
static inline void page_dup_rmap(struct page *page)
int page_referenced(struct page *, int is_locked,
struct mem_cgroup *cnt, unsigned long *vm_flags);
int page_referenced_one(struct page *, struct vm_area_struct *,
unsigned long address, unsigned int *mapcount, unsigned long *vm_flags);
enum ttu_flags ;
#define TTU_ACTION(x) ((x) & TTU_ACTION_MASK)
bool is_vma_temporary_stack(struct vm_area_struct *vma);
int try_to_unmap(struct page *, enum ttu_flags flags);
int try_to_unmap_one(struct page *, struct vm_area_struct *,
unsigned long address, enum ttu_flags flags);
pte_t *__page_check_address(struct page *, struct mm_struct *,
unsigned long, spinlock_t **, int);
static inline pte_t *page_check_address(struct page *page, struct mm_struct *mm,
unsigned long address,
spinlock_t **ptlp, int sync)
unsigned long page_address_in_vma(struct page *, struct vm_area_struct *);
int page_mkclean(struct page *);
int try_to_munlock(struct page *);
struct anon_vma *page_lock_anon_vma(struct page *page);
void page_unlock_anon_vma(struct anon_vma *anon_vma);
int page_mapped_in_vma(struct page *page, struct vm_area_struct *vma);
int rmap_walk(struct page *page, int (*rmap_one)(struct page *,
struct vm_area_struct *, unsigned long, void *), void *arg);
#define anon_vma_init()		do  while (0)
#define anon_vma_prepare(vma)	(0)
#define anon_vma_link(vma)	do  while (0)
static inline int page_referenced(struct page *page, int is_locked,
struct mem_cgroup *cnt,
unsigned long *vm_flags)
#define try_to_unmap(page, refs) SWAP_FAIL
static inline int page_mkclean(struct page *page)
#define SWAP_SUCCESS	0
#define SWAP_AGAIN	1
#define SWAP_FAIL	2
#define SWAP_MLOCK	3
