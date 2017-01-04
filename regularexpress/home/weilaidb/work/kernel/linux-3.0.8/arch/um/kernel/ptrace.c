void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
extern int peek_user(struct task_struct * child, long addr, long data);
extern int poke_user(struct task_struct * child, long addr, long data);
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
static void send_sigtrap(struct task_struct *tsk, struct uml_pt_regs *regs,
int error_code)
void syscall_trace(struct uml_pt_regs *regs, int entryexit)
