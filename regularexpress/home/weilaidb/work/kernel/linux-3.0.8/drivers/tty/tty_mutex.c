static DEFINE_MUTEX(big_tty_mutex);
struct task_struct *__big_tty_mutex_owner;
EXPORT_SYMBOL_GPL(__big_tty_mutex_owner);
void __lockfunc tty_lock(void)
EXPORT_SYMBOL(tty_lock);
void __lockfunc tty_unlock(void)
EXPORT_SYMBOL(tty_unlock);
