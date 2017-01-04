#define _LINUX_UNWINDER_H
struct unwinder ;
extern int unwinder_init(void);
extern int unwinder_register(struct unwinder *);
extern void unwind_stack(struct task_struct *, struct pt_regs *,
unsigned long *, const struct stacktrace_ops *,
void *);
extern void stack_reader_dump(struct task_struct *, struct pt_regs *,
unsigned long *, const struct stacktrace_ops *,
void *);
extern int unwinder_faulted;
