#define __ASM_SPARC_SYSCALL_H
extern const unsigned int sys_call_table[];
static inline long syscall_get_nr(struct task_struct *task,
struct pt_regs *regs)
static inline void syscall_rollback(struct task_struct *task,
struct pt_regs *regs)
static inline bool syscall_has_error(struct pt_regs *regs)
static inline void syscall_set_error(struct pt_regs *regs)
static inline void syscall_clear_error(struct pt_regs *regs)
static inline bool syscall_has_error(struct pt_regs *regs)
static inline void syscall_set_error(struct pt_regs *regs)
static inline void syscall_clear_error(struct pt_regs *regs)
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
