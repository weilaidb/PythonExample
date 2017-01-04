static int no_idle_nap;
static int __init idle_setup(char *str)
early_param("idle", idle_setup);
void cpu_idle(void)
struct thread_info *alloc_thread_info_node(struct task_struct *task, int node)
void free_thread_info(struct thread_info *info)
static void save_arch_state(struct thread_struct *t);
int copy_thread(unsigned long clone_flags, unsigned long sp,
unsigned long stack_size,
struct task_struct *p, struct pt_regs *regs)
struct task_struct *validate_current(void)
struct task_struct *sim_notify_fork(struct task_struct *prev)
int dump_task_regs(struct task_struct *tsk, elf_gregset_t *regs)
#if CHIP_HAS_TILE_DMA()
void grant_dma_mpls(void)
void restrict_dma_mpls(void)
static void save_tile_dma_state(struct tile_dma_state *dma)
static void restore_tile_dma_state(struct thread_struct *t)
static void save_arch_state(struct thread_struct *t)
static void restore_arch_state(const struct thread_struct *t)
void _prepare_arch_switch(struct task_struct *next)
struct task_struct *__sched _switch_to(struct task_struct *prev,
struct task_struct *next)
int do_work_pending(struct pt_regs *regs, u32 thread_info_flags)
SYSCALL_DEFINE5(clone, unsigned long, clone_flags, unsigned long, newsp,
void __user *, parent_tidptr, void __user *, child_tidptr,
struct pt_regs *, regs)
SYSCALL_DEFINE4(execve, const char __user *, path,
const char __user *const __user *, argv,
const char __user *const __user *, envp,
struct pt_regs *, regs)
long compat_sys_execve(const char __user *path,
compat_uptr_t __user *argv,
compat_uptr_t __user *envp,
struct pt_regs *regs)
unsigned long get_wchan(struct task_struct *p)
static void start_kernel_thread(int dummy, int (*fn)(int), int arg)
int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void flush_thread(void)
void exit_thread(void)
void show_regs(struct pt_regs *regs)
