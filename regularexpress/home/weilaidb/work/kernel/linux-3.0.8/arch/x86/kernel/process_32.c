asmlinkage void ret_from_fork(void) __asm__("ret_from_fork");
unsigned long thread_saved_pc(struct task_struct *tsk)
static inline void play_dead(void)
void cpu_idle(void)
void __show_regs(struct pt_regs *regs, int all)
void release_thread(struct task_struct *dead_task)
void prepare_to_copy(struct task_struct *tsk)
int copy_thread(unsigned long clone_flags, unsigned long sp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
void
start_thread(struct pt_regs *regs, unsigned long new_ip, unsigned long new_sp)
EXPORT_SYMBOL_GPL(start_thread);
__notrace_funcgraph struct task_struct *
__switch_to(struct task_struct *prev_p, struct task_struct *next_p)
#define top_esp                (THREAD_SIZE - sizeof(unsigned long))
#define top_ebp                (THREAD_SIZE - 2*sizeof(unsigned long))
unsigned long get_wchan(struct task_struct *p)
