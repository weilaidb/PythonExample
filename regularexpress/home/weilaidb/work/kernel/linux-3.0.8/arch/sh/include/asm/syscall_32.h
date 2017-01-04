#define __ASM_SH_SYSCALL_32_H
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
static inline void syscall_get_arguments(struct task_struct *task,
struct pt_regs *regs,
unsigned int i, unsigned int n,
unsigned long *args)
static inline void syscall_set_arguments(struct task_struct *task,
struct pt_regs *regs,
unsigned int i, unsigned int n,
const unsigned long *args)
