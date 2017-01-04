static inline void frozen_process(void)
void refrigerator(void)
EXPORT_SYMBOL(refrigerator);
static void fake_signal_wake_up(struct task_struct *p)
bool freeze_task(struct task_struct *p, bool sig_only)
void cancel_freezing(struct task_struct *p)
static int __thaw_process(struct task_struct *p)
int thaw_process(struct task_struct *p)
EXPORT_SYMBOL(thaw_process);
