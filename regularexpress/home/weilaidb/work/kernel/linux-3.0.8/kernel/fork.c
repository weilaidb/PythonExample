unsigned long total_forks;
int nr_threads;
int max_threads;
DEFINE_PER_CPU(unsigned long, process_counts) = 0;
__cacheline_aligned DEFINE_RWLOCK(tasklist_lock);
int lockdep_tasklist_lock_is_held(void)
EXPORT_SYMBOL_GPL(lockdep_tasklist_lock_is_held);
int nr_processes(void)
# define alloc_task_struct_node(node)		\
kmem_cache_alloc_node(task_struct_cachep, GFP_KERNEL, node)
# define free_task_struct(tsk)			\
kmem_cache_free(task_struct_cachep, (tsk))
static struct kmem_cache *task_struct_cachep;
static struct thread_info *alloc_thread_info_node(struct task_struct *tsk,
int node)
static inline void free_thread_info(struct thread_info *ti)
static struct kmem_cache *signal_cachep;
struct kmem_cache *sighand_cachep;
struct kmem_cache *files_cachep;
struct kmem_cache *fs_cachep;
struct kmem_cache *vm_area_cachep;
static struct kmem_cache *mm_cachep;
static void account_kernel_stack(struct thread_info *ti, int account)
void free_task(struct task_struct *tsk)
EXPORT_SYMBOL(free_task);
static inline void free_signal_struct(struct signal_struct *sig)
static inline void put_signal_struct(struct signal_struct *sig)
void __put_task_struct(struct task_struct *tsk)
EXPORT_SYMBOL_GPL(__put_task_struct);
#define arch_task_cache_init()
void __init fork_init(unsigned long mempages)
int __attribute__((weak)) arch_dup_task_struct(struct task_struct *dst,
struct task_struct *src)
static struct task_struct *dup_task_struct(struct task_struct *orig)
static int dup_mmap(struct mm_struct *mm, struct mm_struct *oldmm)
static inline int mm_alloc_pgd(struct mm_struct * mm)
static inline void mm_free_pgd(struct mm_struct * mm)
#define dup_mmap(mm, oldmm)	(0)
#define mm_alloc_pgd(mm)	(0)
#define mm_free_pgd(mm)
__cacheline_aligned_in_smp DEFINE_SPINLOCK(mmlist_lock);
#define allocate_mm()	(kmem_cache_alloc(mm_cachep, GFP_KERNEL))
#define free_mm(mm)	(kmem_cache_free(mm_cachep, (mm)))
static unsigned long default_dump_filter = MMF_DUMP_FILTER_DEFAULT;
static int __init coredump_filter_setup(char *s)
__setup("coredump_filter=", coredump_filter_setup);
static void mm_init_aio(struct mm_struct *mm)
static struct mm_struct * mm_init(struct mm_struct * mm, struct task_struct *p)
struct mm_struct * mm_alloc(void)
void __mmdrop(struct mm_struct *mm)
EXPORT_SYMBOL_GPL(__mmdrop);
void mmput(struct mm_struct *mm)
EXPORT_SYMBOL_GPL(mmput);
void added_exe_file_vma(struct mm_struct *mm)
void removed_exe_file_vma(struct mm_struct *mm)
void set_mm_exe_file(struct mm_struct *mm, struct file *new_exe_file)
struct file *get_mm_exe_file(struct mm_struct *mm)
static void dup_mm_exe_file(struct mm_struct *oldmm, struct mm_struct *newmm)
struct mm_struct *get_task_mm(struct task_struct *task)
EXPORT_SYMBOL_GPL(get_task_mm);
void mm_release(struct task_struct *tsk, struct mm_struct *mm)
struct mm_struct *dup_mm(struct task_struct *tsk)
static int copy_mm(unsigned long clone_flags, struct task_struct * tsk)
static int copy_fs(unsigned long clone_flags, struct task_struct *tsk)
static int copy_files(unsigned long clone_flags, struct task_struct * tsk)
static int copy_io(unsigned long clone_flags, struct task_struct *tsk)
static int copy_sighand(unsigned long clone_flags, struct task_struct *tsk)
void __cleanup_sighand(struct sighand_struct *sighand)
static void posix_cpu_timers_init_group(struct signal_struct *sig)
static int copy_signal(unsigned long clone_flags, struct task_struct *tsk)
static void copy_flags(unsigned long clone_flags, struct task_struct *p)
SYSCALL_DEFINE1(set_tid_address, int __user *, tidptr)
static void rt_mutex_init_task(struct task_struct *p)
void mm_init_owner(struct mm_struct *mm, struct task_struct *p)
static void posix_cpu_timers_init(struct task_struct *tsk)
static struct task_struct *copy_process(unsigned long clone_flags,
unsigned long stack_start,
struct pt_regs *regs,
unsigned long stack_size,
int __user *child_tidptr,
struct pid *pid,
int trace)
noinline struct pt_regs * __cpuinit __attribute__((weak)) idle_regs(struct pt_regs *regs)
static inline void init_idle_pids(struct pid_link *links)
struct task_struct * __cpuinit fork_idle(int cpu)
long do_fork(unsigned long clone_flags,
unsigned long stack_start,
struct pt_regs *regs,
unsigned long stack_size,
int __user *parent_tidptr,
int __user *child_tidptr)
#define ARCH_MIN_MMSTRUCT_ALIGN 0
static void sighand_ctor(void *data)
void __init proc_caches_init(void)
static int check_unshare_flags(unsigned long unshare_flags)
static int unshare_fs(unsigned long unshare_flags, struct fs_struct **new_fsp)
static int unshare_fd(unsigned long unshare_flags, struct files_struct **new_fdp)
SYSCALL_DEFINE1(unshare, unsigned long, unshare_flags)
int unshare_files(struct files_struct **displaced)
