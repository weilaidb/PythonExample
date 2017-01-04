extern int arch_switch_tls(struct task_struct *to);
void arch_switch_to(struct task_struct *to)
int is_syscall(unsigned long addr)
#define FLAG_MASK 0x00044dd5
int putreg(struct task_struct *child, int regno, unsigned long value)
int poke_user(struct task_struct *child, long addr, long data)
unsigned long getreg(struct task_struct *child, int regno)
int peek_user(struct task_struct *child, long addr, long data)
int get_fpregs(struct user_i387_struct __user *buf, struct task_struct *child)
int set_fpregs(struct user_i387_struct __user *buf, struct task_struct *child)
int get_fpxregs(struct user_fxsr_struct __user *buf, struct task_struct *child)
int set_fpxregs(struct user_fxsr_struct __user *buf, struct task_struct *child)
long subarch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
