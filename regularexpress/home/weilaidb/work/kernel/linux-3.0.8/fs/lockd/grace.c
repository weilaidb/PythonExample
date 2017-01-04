static LIST_HEAD(grace_list);
static DEFINE_SPINLOCK(grace_lock);
void locks_start_grace(struct lock_manager *lm)
EXPORT_SYMBOL_GPL(locks_start_grace);
void locks_end_grace(struct lock_manager *lm)
EXPORT_SYMBOL_GPL(locks_end_grace);
int locks_in_grace(void)
EXPORT_SYMBOL_GPL(locks_in_grace);
