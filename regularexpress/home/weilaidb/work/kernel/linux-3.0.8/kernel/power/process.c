#undef DEBUG
#define TIMEOUT	(20 * HZ)
static inline int freezable(struct task_struct * p)
static int try_to_freeze_tasks(bool sig_only)
int freeze_processes(void)
static void thaw_tasks(bool nosig_only)
void thaw_processes(void)
