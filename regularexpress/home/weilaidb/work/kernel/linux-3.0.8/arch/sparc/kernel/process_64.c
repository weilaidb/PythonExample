static void sparc64_yield(int cpu)
void cpu_idle(void)
static void show_regwindow32(struct pt_regs *regs)
#define show_regwindow32(regs)	do  while (0)
static void show_regwindow(struct pt_regs *regs)
void show_regs(struct pt_regs *regs)
struct global_reg_snapshot global_reg_snapshot[NR_CPUS];
static DEFINE_SPINLOCK(global_reg_snapshot_lock);
static void __global_reg_self(struct thread_info *tp, struct pt_regs *regs,
int this_cpu)
static void __global_reg_poll(struct global_reg_snapshot *gp)
void arch_trigger_all_cpu_backtrace(void)
static void sysrq_handle_globreg(int key)
static struct sysrq_key_op sparc_globalreg_op = ;
static int __init sparc_globreg_init(void)
core_initcall(sparc_globreg_init);
unsigned long thread_saved_pc(struct task_struct *tsk)
void exit_thread(void)
void flush_thread(void)
static unsigned long clone_stackframe(unsigned long csp, unsigned long psp)
static inline void shift_window_buffer(int first_win, int last_win,
struct thread_info *t)
void synchronize_user_stack(void)
static void stack_unaligned(unsigned long sp)
void fault_in_user_windows(void)
asmlinkage long sparc_do_fork(unsigned long clone_flags,
unsigned long stack_start,
struct pt_regs *regs,
unsigned long stack_size)
int copy_thread(unsigned long clone_flags, unsigned long sp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
pid_t kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
typedef struct  elf_fpregset_t32;
int dump_fpu (struct pt_regs * regs, elf_fpregset_t * fpregs)
EXPORT_SYMBOL(dump_fpu);
asmlinkage int sparc_execve(struct pt_regs *regs)
unsigned long get_wchan(struct task_struct *task)
