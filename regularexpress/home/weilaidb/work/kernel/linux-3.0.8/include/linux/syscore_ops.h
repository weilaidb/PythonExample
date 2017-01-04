#define _LINUX_SYSCORE_OPS_H
struct syscore_ops ;
extern void register_syscore_ops(struct syscore_ops *ops);
extern void unregister_syscore_ops(struct syscore_ops *ops);
extern int syscore_suspend(void);
extern void syscore_resume(void);
extern void syscore_shutdown(void);
