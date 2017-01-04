typedef long syscall_handler_t(struct pt_regs);
extern syscall_handler_t sys_rt_sigaction;
extern syscall_handler_t *sys_call_table[];
#define EXECUTE_SYSCALL(syscall, regs) \
((long (*)(struct syscall_args)) \
(*sys_call_table[syscall]))(SYSCALL_ARGS(&regs->regs))
