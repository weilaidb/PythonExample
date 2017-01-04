#define __LINUX_STACKTRACE_H
struct task_struct;
struct pt_regs;
struct task_struct;
struct stack_trace ;
extern void save_stack_trace(struct stack_trace *trace);
extern void save_stack_trace_regs(struct stack_trace *trace,
struct pt_regs *regs);
extern void save_stack_trace_tsk(struct task_struct *tsk,
struct stack_trace *trace);
extern void print_stack_trace(struct stack_trace *trace, int spaces);
extern void save_stack_trace_user(struct stack_trace *trace);
# define save_stack_trace_user(trace)              do  while (0)
# define save_stack_trace(trace)			do  while (0)
# define save_stack_trace_tsk(tsk, trace)		do  while (0)
# define save_stack_trace_user(trace)			do  while (0)
# define print_stack_trace(trace, spaces)		do  while (0)
