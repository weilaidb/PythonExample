static LIST_HEAD(syscore_ops_list);
static DEFINE_MUTEX(syscore_ops_lock);
void register_syscore_ops(struct syscore_ops *ops)
EXPORT_SYMBOL_GPL(register_syscore_ops);
void unregister_syscore_ops(struct syscore_ops *ops)
EXPORT_SYMBOL_GPL(unregister_syscore_ops);
int syscore_suspend(void)
EXPORT_SYMBOL_GPL(syscore_suspend);
void syscore_resume(void)
EXPORT_SYMBOL_GPL(syscore_resume);
void syscore_shutdown(void)
