void (*pm_idle)(void);
EXPORT_SYMBOL(pm_idle);
void (*pm_power_off)(void) = machine_power_off;
EXPORT_SYMBOL(pm_power_off);
int scons_pwroff = 1;
extern void fpsave(unsigned long *, unsigned long *, void *, unsigned long *);
struct task_struct *last_task_used_math = NULL;
struct thread_info *current_set[NR_CPUS];
#define SUN4C_FAULT_HIGH 100
void cpu_idle(void)
void cpu_idle(void)
void machine_halt(void)
void machine_restart(char * cmd)
void machine_power_off(void)
void show_stackframe(struct sparc_stackf *sf)
void show_regs(struct pt_regs *r)
void show_stack(struct task_struct *tsk, unsigned long *_ksp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
unsigned long thread_saved_pc(struct task_struct *tsk)
void exit_thread(void)
{
if(last_task_used_math == current)
void flush_thread(void)
{
current_thread_info()->w_saved = 0;
if(last_task_used_math == current)
static inline struct sparc_stackf __user *
clone_stackframe(struct sparc_stackf __user *dst,
struct sparc_stackf __user *src)
asmlinkage int sparc_do_fork(unsigned long clone_flags,
unsigned long stack_start,
struct pt_regs *regs,
unsigned long stack_size)
extern void ret_from_fork(void);
int copy_thread(unsigned long clone_flags, unsigned long sp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
{
struct thread_info *ti = task_thread_info(p);
struct pt_regs *childregs;
char *new_stack;
if(last_task_used_math == current)
int dump_fpu (struct pt_regs * regs, elf_fpregset_t * fpregs)
asmlinkage int sparc_execve(struct pt_regs *regs)
pid_t kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
unsigned long get_wchan(struct task_struct *task)
