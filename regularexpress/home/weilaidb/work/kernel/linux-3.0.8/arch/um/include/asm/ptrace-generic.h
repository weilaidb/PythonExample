#define __UM_PTRACE_GENERIC_H
struct pt_regs ;
#define arch_has_single_step()	(1)
#define EMPTY_REGS
#define PT_REGS_IP(r) UPT_IP(&(r)->regs)
#define PT_REGS_SP(r) UPT_SP(&(r)->regs)
#define PT_REG(r, reg) UPT_REG(&(r)->regs, reg)
#define PT_REGS_SET(r, reg, val) UPT_SET(&(r)->regs, reg, val)
#define PT_REGS_SET_SYSCALL_RETURN(r, res) \
UPT_SET_SYSCALL_RETURN(&(r)->regs, res)
#define PT_REGS_RESTART_SYSCALL(r) UPT_RESTART_SYSCALL(&(r)->regs)
#define PT_REGS_SYSCALL_NR(r) UPT_SYSCALL_NR(&(r)->regs)
#define PT_REGS_SC(r) UPT_SC(&(r)->regs)
#define instruction_pointer(regs) PT_REGS_IP(regs)
struct task_struct;
extern long subarch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data);
extern unsigned long getreg(struct task_struct *child, int regno);
extern int putreg(struct task_struct *child, int regno, unsigned long value);
extern int get_fpregs(struct user_i387_struct __user *buf,
struct task_struct *child);
extern int set_fpregs(struct user_i387_struct __user *buf,
struct task_struct *child);
extern void show_regs(struct pt_regs *regs);
extern int arch_copy_tls(struct task_struct *new);
extern void clear_flushed_tls(struct task_struct *task);
