void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
void cpu_idle(void)
void machine_halt(void)
void machine_power_off(void)
void machine_restart(char *cmd)
asmlinkage extern void kernel_thread_helper(void);
__asm__("	.type	kernel_thread_helper, @function\n"
"kernel_thread_helper:\n"
"	mov	r12, r0\n"
"	mov	lr, r2\n"
"	mov	pc, r1\n"
"	.size	kernel_thread_helper, . - kernel_thread_helper");
int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void exit_thread(void)
void flush_thread(void)
void release_thread(struct task_struct *dead_task)
static void dump_mem(const char *str, const char *log_lvl,
unsigned long bottom, unsigned long top)
static inline int valid_stack_ptr(struct thread_info *tinfo, unsigned long p)
static void show_trace_log_lvl(struct task_struct *tsk, unsigned long *sp,
struct pt_regs *regs, const char *log_lvl)
static void show_trace_log_lvl(struct task_struct *tsk, unsigned long *sp,
struct pt_regs *regs, const char *log_lvl)
void show_stack_log_lvl(struct task_struct *tsk, unsigned long sp,
struct pt_regs *regs, const char *log_lvl)
void show_stack(struct task_struct *tsk, unsigned long *stack)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
static const char *cpu_modes[] = ;
void show_regs_log_lvl(struct pt_regs *regs, const char *log_lvl)
void show_regs(struct pt_regs *regs)
EXPORT_SYMBOL(show_regs);
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fpu)
asmlinkage void ret_from_fork(void);
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
asmlinkage int sys_fork(struct pt_regs *regs)
asmlinkage int sys_clone(unsigned long clone_flags, unsigned long newsp,
void __user *parent_tidptr, void __user *child_tidptr,
struct pt_regs *regs)
asmlinkage int sys_vfork(struct pt_regs *regs)
asmlinkage int sys_execve(const char __user *ufilename,
const char __user *const __user *uargv,
const char __user *const __user *uenvp,
struct pt_regs *regs)
unsigned long get_wchan(struct task_struct *p)
