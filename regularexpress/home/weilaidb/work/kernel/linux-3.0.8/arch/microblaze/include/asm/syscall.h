#define __ASM_MICROBLAZE_SYSCALL_H
static inline long syscall_get_nr(struct task_struct *task,
struct pt_regs *regs)
static inline void syscall_rollback(struct task_struct *task,
struct pt_regs *regs)
static inline long syscall_get_error(struct task_struct *task,
struct pt_regs *regs)
static inline long syscall_get_return_value(struct task_struct *task,
struct pt_regs *regs)
static inline void syscall_set_return_value(struct task_struct *task,
struct pt_regs *regs,
int error, long val)
static inline microblaze_reg_t microblaze_get_syscall_arg(struct pt_regs *regs,
unsigned int n)
static inline void microblaze_set_syscall_arg(struct pt_regs *regs,
unsigned int n,
unsigned long val)
static inline void syscall_get_arguments(struct task_struct *task,
struct pt_regs *regs,
unsigned int i, unsigned int n,
unsigned long *args)
static inline void syscall_set_arguments(struct task_struct *task,
struct pt_regs *regs,
unsigned int i, unsigned int n,
const unsigned long *args)
asmlinkage long do_syscall_trace_enter(struct pt_regs *regs);
asmlinkage void do_syscall_trace_leave(struct pt_regs *regs);
