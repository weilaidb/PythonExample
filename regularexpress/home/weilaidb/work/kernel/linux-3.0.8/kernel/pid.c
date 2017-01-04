#define pid_hashfn(nr, ns)	\
hash_long((unsigned long)nr + (unsigned long)ns, pidhash_shift)
static struct hlist_head *pid_hash;
static unsigned int pidhash_shift = 4;
struct pid init_struct_pid = INIT_STRUCT_PID;
int pid_max = PID_MAX_DEFAULT;
#define RESERVED_PIDS		300
int pid_max_min = RESERVED_PIDS + 1;
int pid_max_max = PID_MAX_LIMIT;
#define BITS_PER_PAGE		(PAGE_SIZE*8)
#define BITS_PER_PAGE_MASK	(BITS_PER_PAGE-1)
static inline int mk_pid(struct pid_namespace *pid_ns,
struct pidmap *map, int off)
#define find_next_offset(map, off)					\
find_next_zero_bit((map)->page, BITS_PER_PAGE, off)
struct pid_namespace init_pid_ns = ;
EXPORT_SYMBOL_GPL(init_pid_ns);
int is_container_init(struct task_struct *tsk)
EXPORT_SYMBOL(is_container_init);
static  __cacheline_aligned_in_smp DEFINE_SPINLOCK(pidmap_lock);
static void free_pidmap(struct upid *upid)
static int pid_before(int base, int a, int b)
static void set_last_pid(struct pid_namespace *pid_ns, int base, int pid)
static int alloc_pidmap(struct pid_namespace *pid_ns)
int next_pidmap(struct pid_namespace *pid_ns, unsigned int last)
void put_pid(struct pid *pid)
EXPORT_SYMBOL_GPL(put_pid);
static void delayed_put_pid(struct rcu_head *rhp)
void free_pid(struct pid *pid)
struct pid *alloc_pid(struct pid_namespace *ns)
struct pid *find_pid_ns(int nr, struct pid_namespace *ns)
EXPORT_SYMBOL_GPL(find_pid_ns);
struct pid *find_vpid(int nr)
EXPORT_SYMBOL_GPL(find_vpid);
void attach_pid(struct task_struct *task, enum pid_type type,
struct pid *pid)
static void __change_pid(struct task_struct *task, enum pid_type type,
struct pid *new)
void detach_pid(struct task_struct *task, enum pid_type type)
void change_pid(struct task_struct *task, enum pid_type type,
struct pid *pid)
void transfer_pid(struct task_struct *old, struct task_struct *new,
enum pid_type type)
struct task_struct *pid_task(struct pid *pid, enum pid_type type)
EXPORT_SYMBOL(pid_task);
struct task_struct *find_task_by_pid_ns(pid_t nr, struct pid_namespace *ns)
struct task_struct *find_task_by_vpid(pid_t vnr)
struct pid *get_task_pid(struct task_struct *task, enum pid_type type)
EXPORT_SYMBOL_GPL(get_task_pid);
struct task_struct *get_pid_task(struct pid *pid, enum pid_type type)
EXPORT_SYMBOL_GPL(get_pid_task);
struct pid *find_get_pid(pid_t nr)
EXPORT_SYMBOL_GPL(find_get_pid);
pid_t pid_nr_ns(struct pid *pid, struct pid_namespace *ns)
pid_t pid_vnr(struct pid *pid)
EXPORT_SYMBOL_GPL(pid_vnr);
pid_t __task_pid_nr_ns(struct task_struct *task, enum pid_type type,
struct pid_namespace *ns)
EXPORT_SYMBOL(__task_pid_nr_ns);
pid_t task_tgid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns)
EXPORT_SYMBOL(task_tgid_nr_ns);
struct pid_namespace *task_active_pid_ns(struct task_struct *tsk)
EXPORT_SYMBOL_GPL(task_active_pid_ns);
struct pid *find_ge_pid(int nr, struct pid_namespace *ns)
void __init pidhash_init(void)
void __init pidmap_init(void)
