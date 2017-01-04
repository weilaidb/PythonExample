#define MPOL_MF_DISCONTIG_OK (MPOL_MF_INTERNAL << 0)
#define MPOL_MF_INVERT (MPOL_MF_INTERNAL << 1)
static struct kmem_cache *policy_cache;
static struct kmem_cache *sn_cache;
enum zone_type policy_zone = 0;
struct mempolicy default_policy = ;
static const struct mempolicy_operations  mpol_ops[MPOL_MAX];
static int is_valid_nodemask(const nodemask_t *nodemask)
static inline int mpol_store_user_nodemask(const struct mempolicy *pol)
static void mpol_relative_nodemask(nodemask_t *ret, const nodemask_t *orig,
const nodemask_t *rel)
static int mpol_new_interleave(struct mempolicy *pol, const nodemask_t *nodes)
static int mpol_new_preferred(struct mempolicy *pol, const nodemask_t *nodes)
static int mpol_new_bind(struct mempolicy *pol, const nodemask_t *nodes)
static int mpol_set_nodemask(struct mempolicy *pol,
const nodemask_t *nodes, struct nodemask_scratch *nsc)
static struct mempolicy *mpol_new(unsigned short mode, unsigned short flags,
nodemask_t *nodes)
void __mpol_put(struct mempolicy *p)
static void mpol_rebind_default(struct mempolicy *pol, const nodemask_t *nodes,
enum mpol_rebind_step step)
static void mpol_rebind_nodemask(struct mempolicy *pol, const nodemask_t *nodes,
enum mpol_rebind_step step)
static void mpol_rebind_preferred(struct mempolicy *pol,
const nodemask_t *nodes,
enum mpol_rebind_step step)
static void mpol_rebind_policy(struct mempolicy *pol, const nodemask_t *newmask,
enum mpol_rebind_step step)
void mpol_rebind_task(struct task_struct *tsk, const nodemask_t *new,
enum mpol_rebind_step step)
void mpol_rebind_mm(struct mm_struct *mm, nodemask_t *new)
static const struct mempolicy_operations mpol_ops[MPOL_MAX] = ;
static void migrate_page_add(struct page *page, struct list_head *pagelist,
unsigned long flags);
static int check_pte_range(struct vm_area_struct *vma, pmd_t *pmd,
unsigned long addr, unsigned long end,
const nodemask_t *nodes, unsigned long flags,
void *private)
static inline int check_pmd_range(struct vm_area_struct *vma, pud_t *pud,
unsigned long addr, unsigned long end,
const nodemask_t *nodes, unsigned long flags,
void *private)
static inline int check_pud_range(struct vm_area_struct *vma, pgd_t *pgd,
unsigned long addr, unsigned long end,
const nodemask_t *nodes, unsigned long flags,
void *private)
static inline int check_pgd_range(struct vm_area_struct *vma,
unsigned long addr, unsigned long end,
const nodemask_t *nodes, unsigned long flags,
void *private)
static struct vm_area_struct *
check_range(struct mm_struct *mm, unsigned long start, unsigned long end,
const nodemask_t *nodes, unsigned long flags, void *private)
static int policy_vma(struct vm_area_struct *vma, struct mempolicy *new)
static int mbind_range(struct mm_struct *mm, unsigned long start,
unsigned long end, struct mempolicy *new_pol)
void mpol_fix_fork_child_flag(struct task_struct *p)
static void mpol_set_task_struct_flag(void)
static long do_set_mempolicy(unsigned short mode, unsigned short flags,
nodemask_t *nodes)
static void get_policy_nodemask(struct mempolicy *p, nodemask_t *nodes)
static int lookup_node(struct mm_struct *mm, unsigned long addr)
static long do_get_mempolicy(int *policy, nodemask_t *nmask,
unsigned long addr, unsigned long flags)
static void migrate_page_add(struct page *page, struct list_head *pagelist,
unsigned long flags)
static struct page *new_node_page(struct page *page, unsigned long node, int **x)
static int migrate_to_node(struct mm_struct *mm, int source, int dest,
int flags)
int do_migrate_pages(struct mm_struct *mm,
const nodemask_t *from_nodes, const nodemask_t *to_nodes, int flags)
static struct page *new_vma_page(struct page *page, unsigned long private, int **x)
static void migrate_page_add(struct page *page, struct list_head *pagelist,
unsigned long flags)
int do_migrate_pages(struct mm_struct *mm,
const nodemask_t *from_nodes, const nodemask_t *to_nodes, int flags)
static struct page *new_vma_page(struct page *page, unsigned long private, int **x)
static long do_mbind(unsigned long start, unsigned long len,
unsigned short mode, unsigned short mode_flags,
nodemask_t *nmask, unsigned long flags)
static int get_nodes(nodemask_t *nodes, const unsigned long __user *nmask,
unsigned long maxnode)
static int copy_nodes_to_user(unsigned long __user *mask, unsigned long maxnode,
nodemask_t *nodes)
SYSCALL_DEFINE6(mbind, unsigned long, start, unsigned long, len,
unsigned long, mode, unsigned long __user *, nmask,
unsigned long, maxnode, unsigned, flags)
SYSCALL_DEFINE3(set_mempolicy, int, mode, unsigned long __user *, nmask,
unsigned long, maxnode)
SYSCALL_DEFINE4(migrate_pages, pid_t, pid, unsigned long, maxnode,
const unsigned long __user *, old_nodes,
const unsigned long __user *, new_nodes)
SYSCALL_DEFINE5(get_mempolicy, int __user *, policy,
unsigned long __user *, nmask, unsigned long, maxnode,
unsigned long, addr, unsigned long, flags)
asmlinkage long compat_sys_get_mempolicy(int __user *policy,
compat_ulong_t __user *nmask,
compat_ulong_t maxnode,
compat_ulong_t addr, compat_ulong_t flags)
asmlinkage long compat_sys_set_mempolicy(int mode, compat_ulong_t __user *nmask,
compat_ulong_t maxnode)
asmlinkage long compat_sys_mbind(compat_ulong_t start, compat_ulong_t len,
compat_ulong_t mode, compat_ulong_t __user *nmask,
compat_ulong_t maxnode, compat_ulong_t flags)
struct mempolicy *get_vma_policy(struct task_struct *task,
struct vm_area_struct *vma, unsigned long addr)
static nodemask_t *policy_nodemask(gfp_t gfp, struct mempolicy *policy)
static struct zonelist *policy_zonelist(gfp_t gfp, struct mempolicy *policy,
int nd)
static unsigned interleave_nodes(struct mempolicy *policy)
unsigned slab_node(struct mempolicy *policy)
static unsigned offset_il_node(struct mempolicy *pol,
struct vm_area_struct *vma, unsigned long off)
static inline unsigned interleave_nid(struct mempolicy *pol,
struct vm_area_struct *vma, unsigned long addr, int shift)
struct zonelist *huge_zonelist(struct vm_area_struct *vma, unsigned long addr,
gfp_t gfp_flags, struct mempolicy **mpol,
nodemask_t **nodemask)
bool init_nodemask_of_mempolicy(nodemask_t *mask)
bool mempolicy_nodemask_intersects(struct task_struct *tsk,
const nodemask_t *mask)
static struct page *alloc_page_interleave(gfp_t gfp, unsigned order,
unsigned nid)
struct page *
alloc_pages_vma(gfp_t gfp, int order, struct vm_area_struct *vma,
unsigned long addr, int node)
struct page *alloc_pages_current(gfp_t gfp, unsigned order)
EXPORT_SYMBOL(alloc_pages_current);
struct mempolicy *__mpol_dup(struct mempolicy *old)
struct mempolicy *__mpol_cond_copy(struct mempolicy *tompol,
struct mempolicy *frompol)
int __mpol_equal(struct mempolicy *a, struct mempolicy *b)
static struct sp_node *
sp_lookup(struct shared_policy *sp, unsigned long start, unsigned long end)
static void sp_insert(struct shared_policy *sp, struct sp_node *new)
struct mempolicy *
mpol_shared_policy_lookup(struct shared_policy *sp, unsigned long idx)
static void sp_delete(struct shared_policy *sp, struct sp_node *n)
static struct sp_node *sp_alloc(unsigned long start, unsigned long end,
struct mempolicy *pol)
static int shared_policy_replace(struct shared_policy *sp, unsigned long start,
unsigned long end, struct sp_node *new)
void mpol_shared_policy_init(struct shared_policy *sp, struct mempolicy *mpol)
int mpol_set_shared_policy(struct shared_policy *info,
struct vm_area_struct *vma, struct mempolicy *npol)
void mpol_free_shared_policy(struct shared_policy *p)
void __init numa_policy_init(void)
void numa_default_policy(void)
#define MPOL_LOCAL MPOL_MAX
static const char * const policy_modes[] =
;
int mpol_parse_str(char *str, struct mempolicy **mpol, int no_context)
int mpol_to_str(char *buffer, int maxlen, struct mempolicy *pol, int no_context)
