#define _ASMAXP_PTRACE_H
struct pt_regs ;
struct switch_stack ;
#define arch_has_single_step()		(1)
#define user_mode(regs) (((regs)->ps & 8) != 0)
#define instruction_pointer(regs) ((regs)->pc)
#define profile_pc(regs) instruction_pointer(regs)
extern void show_regs(struct pt_regs *);
#define task_pt_regs(task) \
((struct pt_regs *) (task_stack_page(task) + 2*PAGE_SIZE) - 1)
#define force_successful_syscall_return() (task_pt_regs(current)->r0 = 0)
