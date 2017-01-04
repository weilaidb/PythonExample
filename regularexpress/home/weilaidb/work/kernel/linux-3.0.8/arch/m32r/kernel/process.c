#undef DEBUG_PROCESS
#define DPRINTK(fmt, args...)  printk("%s:%d:%s: " fmt, __FILE__, __LINE__, \
__func__, ##args)
#define DPRINTK(fmt, args...)
unsigned long thread_saved_pc(struct task_struct *tsk)
static void (*pm_idle)(void) = NULL;
void (*pm_power_off)(void) = NULL;
EXPORT_SYMBOL(pm_power_off);
static void default_idle(void)
static void poll_idle (void)
void cpu_idle (void)
void machine_restart(char *__unused)
void machine_halt(void)
void machine_power_off(void)
static int __init idle_setup (char *str)
__setup("idle=", idle_setup);
void show_regs(struct pt_regs * regs)
static void kernel_thread_helper(void *nouse, int (*fn)(void *), void *arg)
int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
void exit_thread(void)
void flush_thread(void)
void release_thread(struct task_struct *dead_task)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fpu)
int copy_thread(unsigned long clone_flags, unsigned long spu,
unsigned long unused, struct task_struct *tsk, struct pt_regs *regs)
asmlinkage int sys_fork(unsigned long r0, unsigned long r1, unsigned long r2,
unsigned long r3, unsigned long r4, unsigned long r5, unsigned long r6,
struct pt_regs regs)
asmlinkage int sys_clone(unsigned long clone_flags, unsigned long newsp,
unsigned long parent_tidptr,
unsigned long child_tidptr,
unsigned long r4, unsigned long r5, unsigned long r6,
struct pt_regs regs)
asmlinkage int sys_vfork(unsigned long r0, unsigned long r1, unsigned long r2,
unsigned long r3, unsigned long r4, unsigned long r5, unsigned long r6,
struct pt_regs regs)
asmlinkage int sys_execve(const char __user *ufilename,
const char __user *const __user *uargv,
const char __user *const __user *uenvp,
unsigned long r3, unsigned long r4, unsigned long r5,
unsigned long r6, struct pt_regs regs)
#define first_sched	((unsigned long) scheduling_functions_start_here)
#define last_sched	((unsigned long) scheduling_functions_end_here)
unsigned long get_wchan(struct task_struct *p)
