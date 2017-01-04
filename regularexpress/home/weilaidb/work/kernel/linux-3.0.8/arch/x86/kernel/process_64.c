asmlinkage extern void ret_from_fork(void);
DEFINE_PER_CPU(unsigned long, old_rsp);
static DEFINE_PER_CPU(unsigned char, is_idle);
static ATOMIC_NOTIFIER_HEAD(idle_notifier);
void idle_notifier_register(struct notifier_block *n)
EXPORT_SYMBOL_GPL(idle_notifier_register);
void idle_notifier_unregister(struct notifier_block *n)
EXPORT_SYMBOL_GPL(idle_notifier_unregister);
void enter_idle(void)
static void __exit_idle(void)
void exit_idle(void)
static inline void play_dead(void)
void cpu_idle(void)
void __show_regs(struct pt_regs *regs, int all)
void release_thread(struct task_struct *dead_task)
static inline void set_32bit_tls(struct task_struct *t, int tls, u32 addr)
static inline u32 read_32bit_tls(struct task_struct *t, int tls)
void prepare_to_copy(struct task_struct *tsk)
int copy_thread(unsigned long clone_flags, unsigned long sp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
static void
start_thread_common(struct pt_regs *regs, unsigned long new_ip,
unsigned long new_sp,
unsigned int _cs, unsigned int _ss, unsigned int _ds)
void
start_thread(struct pt_regs *regs, unsigned long new_ip, unsigned long new_sp)
void start_thread_ia32(struct pt_regs *regs, u32 new_ip, u32 new_sp)
__notrace_funcgraph struct task_struct *
__switch_to(struct task_struct *prev_p, struct task_struct *next_p)
void set_personality_64bit(void)
void set_personality_ia32(void)
unsigned long get_wchan(struct task_struct *p)
long do_arch_prctl(struct task_struct *task, int code, unsigned long addr)
long sys_arch_prctl(int code, unsigned long addr)
unsigned long KSTK_ESP(struct task_struct *task)
