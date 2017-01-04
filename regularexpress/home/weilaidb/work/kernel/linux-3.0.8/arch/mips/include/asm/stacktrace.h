#define _ASM_STACKTRACE_H
extern int raw_show_trace;
extern unsigned long unwind_stack(struct task_struct *task, unsigned long *sp,
unsigned long pc, unsigned long *ra);
#define raw_show_trace 1
static inline unsigned long unwind_stack(struct task_struct *task,
unsigned long *sp, unsigned long pc, unsigned long *ra)
static __always_inline void prepare_frametrace(struct pt_regs *regs)
