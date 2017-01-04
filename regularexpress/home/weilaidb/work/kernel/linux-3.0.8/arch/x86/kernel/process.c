struct kmem_cache *task_xstate_cachep;
EXPORT_SYMBOL_GPL(task_xstate_cachep);
int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src)
void free_thread_xstate(struct task_struct *tsk)
void free_thread_info(struct thread_info *ti)
void arch_task_cache_init(void)
void exit_thread(void)
void show_regs(struct pt_regs *regs)
void show_regs_common(void)
void flush_thread(void)
static void hard_disable_TSC(void)
void disable_TSC(void)
static void hard_enable_TSC(void)
static void enable_TSC(void)
int get_tsc_mode(unsigned long adr)
int set_tsc_mode(unsigned int val)
void __switch_to_xtra(struct task_struct *prev_p, struct task_struct *next_p,
struct tss_struct *tss)
int sys_fork(struct pt_regs *regs)
int sys_vfork(struct pt_regs *regs)
long
sys_clone(unsigned long clone_flags, unsigned long newsp,
void __user *parent_tid, void __user *child_tid, struct pt_regs *regs)
extern void kernel_thread_helper(void);
int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
long sys_execve(const char __user *name,
const char __user *const __user *argv,
const char __user *const __user *envp, struct pt_regs *regs)
unsigned long boot_option_idle_override = IDLE_NO_OVERRIDE;
EXPORT_SYMBOL(boot_option_idle_override);
void (*pm_idle)(void);
EXPORT_SYMBOL(pm_idle);
static int hlt_counter;
void disable_hlt(void)
EXPORT_SYMBOL(disable_hlt);
void enable_hlt(void)
EXPORT_SYMBOL(enable_hlt);
static inline int hlt_use_halt(void)
static inline int hlt_use_halt(void)
void default_idle(void)
EXPORT_SYMBOL(default_idle);
void stop_this_cpu(void *dummy)
static void do_nothing(void *unused)
void cpu_idle_wait(void)
EXPORT_SYMBOL_GPL(cpu_idle_wait);
void mwait_idle_with_hints(unsigned long ax, unsigned long cx)
static void mwait_idle(void)
static void poll_idle(void)
#define MWAIT_INFO			0x05
#define MWAIT_ECX_EXTENDED_INFO		0x01
#define MWAIT_EDX_C1			0xf0
int mwait_usable(const struct cpuinfo_x86 *c)
bool amd_e400_c1e_detected;
EXPORT_SYMBOL(amd_e400_c1e_detected);
static cpumask_var_t amd_e400_c1e_mask;
void amd_e400_remove_cpu(int cpu)
static void amd_e400_idle(void)
void __cpuinit select_idle_routine(const struct cpuinfo_x86 *c)
void __init init_amd_e400_c1e_mask(void)
static int __init idle_setup(char *str)
early_param("idle", idle_setup);
unsigned long arch_align_stack(unsigned long sp)
unsigned long arch_randomize_brk(struct mm_struct *mm)
