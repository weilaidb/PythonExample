#define _LINUX_MEMPOLICY_H 1
enum ;
enum mpol_rebind_step ;
#define MPOL_F_STATIC_NODES	(1 << 15)
#define MPOL_F_RELATIVE_NODES	(1 << 14)
#define MPOL_MODE_FLAGS	(MPOL_F_STATIC_NODES | MPOL_F_RELATIVE_NODES)
#define MPOL_F_NODE	(1<<0)
#define MPOL_F_ADDR	(1<<1)
#define MPOL_F_MEMS_ALLOWED (1<<2)
#define MPOL_MF_STRICT	(1<<0)
#define MPOL_MF_MOVE	(1<<1)
#define MPOL_MF_MOVE_ALL (1<<2)
#define MPOL_MF_INTERNAL (1<<3)
#define MPOL_F_SHARED  (1 << 0)
#define MPOL_F_LOCAL   (1 << 1)
#define MPOL_F_REBINDING (1 << 2)
struct mm_struct;
struct mempolicy ;
extern void __mpol_put(struct mempolicy *pol);
static inline void mpol_put(struct mempolicy *pol)
static inline int mpol_needs_cond_ref(struct mempolicy *pol)
static inline void mpol_cond_put(struct mempolicy *pol)
extern struct mempolicy *__mpol_cond_copy(struct mempolicy *tompol,
struct mempolicy *frompol);
static inline struct mempolicy *mpol_cond_copy(struct mempolicy *tompol,
struct mempolicy *frompol)
extern struct mempolicy *__mpol_dup(struct mempolicy *pol);
static inline struct mempolicy *mpol_dup(struct mempolicy *pol)
#define vma_policy(vma) ((vma)->vm_policy)
#define vma_set_policy(vma, pol) ((vma)->vm_policy = (pol))
static inline void mpol_get(struct mempolicy *pol)
extern int __mpol_equal(struct mempolicy *a, struct mempolicy *b);
static inline int mpol_equal(struct mempolicy *a, struct mempolicy *b)
struct sp_node ;
struct shared_policy ;
void mpol_shared_policy_init(struct shared_policy *sp, struct mempolicy *mpol);
int mpol_set_shared_policy(struct shared_policy *info,
struct vm_area_struct *vma,
struct mempolicy *new);
void mpol_free_shared_policy(struct shared_policy *p);
struct mempolicy *mpol_shared_policy_lookup(struct shared_policy *sp,
unsigned long idx);
struct mempolicy *get_vma_policy(struct task_struct *tsk,
struct vm_area_struct *vma, unsigned long addr);
extern void numa_default_policy(void);
extern void numa_policy_init(void);
extern void mpol_rebind_task(struct task_struct *tsk, const nodemask_t *new,
enum mpol_rebind_step step);
extern void mpol_rebind_mm(struct mm_struct *mm, nodemask_t *new);
extern void mpol_fix_fork_child_flag(struct task_struct *p);
extern struct zonelist *huge_zonelist(struct vm_area_struct *vma,
unsigned long addr, gfp_t gfp_flags,
struct mempolicy **mpol, nodemask_t **nodemask);
extern bool init_nodemask_of_mempolicy(nodemask_t *mask);
extern bool mempolicy_nodemask_intersects(struct task_struct *tsk,
const nodemask_t *mask);
extern unsigned slab_node(struct mempolicy *policy);
extern enum zone_type policy_zone;
static inline void check_highest_zone(enum zone_type k)
int do_migrate_pages(struct mm_struct *mm,
const nodemask_t *from_nodes, const nodemask_t *to_nodes, int flags);
extern int mpol_parse_str(char *str, struct mempolicy **mpol, int no_context);
extern int mpol_to_str(char *buffer, int maxlen, struct mempolicy *pol,
int no_context);
static inline int vma_migratable(struct vm_area_struct *vma)
struct mempolicy ;
static inline int mpol_equal(struct mempolicy *a, struct mempolicy *b)
static inline void mpol_put(struct mempolicy *p)
static inline void mpol_cond_put(struct mempolicy *pol)
static inline struct mempolicy *mpol_cond_copy(struct mempolicy *to,
struct mempolicy *from)
static inline void mpol_get(struct mempolicy *pol)
static inline struct mempolicy *mpol_dup(struct mempolicy *old)
struct shared_policy ;
static inline int mpol_set_shared_policy(struct shared_policy *info,
struct vm_area_struct *vma,
struct mempolicy *new)
static inline void mpol_shared_policy_init(struct shared_policy *sp,
struct mempolicy *mpol)
static inline void mpol_free_shared_policy(struct shared_policy *p)
static inline struct mempolicy *
mpol_shared_policy_lookup(struct shared_policy *sp, unsigned long idx)
#define vma_policy(vma) NULL
#define vma_set_policy(vma, pol) do  while(0)
static inline void numa_policy_init(void)
static inline void numa_default_policy(void)
static inline void mpol_rebind_task(struct task_struct *tsk,
const nodemask_t *new,
enum mpol_rebind_step step)
static inline void mpol_rebind_mm(struct mm_struct *mm, nodemask_t *new)
static inline void mpol_fix_fork_child_flag(struct task_struct *p)
static inline struct zonelist *huge_zonelist(struct vm_area_struct *vma,
unsigned long addr, gfp_t gfp_flags,
struct mempolicy **mpol, nodemask_t **nodemask)
static inline bool init_nodemask_of_mempolicy(nodemask_t *m)
static inline bool mempolicy_nodemask_intersects(struct task_struct *tsk,
const nodemask_t *mask)
static inline int do_migrate_pages(struct mm_struct *mm,
const nodemask_t *from_nodes,
const nodemask_t *to_nodes, int flags)
static inline void check_highest_zone(int k)
static inline int mpol_parse_str(char *str, struct mempolicy **mpol,
int no_context)
static inline int mpol_to_str(char *buffer, int maxlen, struct mempolicy *pol,
int no_context)
