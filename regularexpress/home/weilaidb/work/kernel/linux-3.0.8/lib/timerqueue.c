void timerqueue_add(struct timerqueue_head *head, struct timerqueue_node *node)
EXPORT_SYMBOL_GPL(timerqueue_add);
void timerqueue_del(struct timerqueue_head *head, struct timerqueue_node *node)
EXPORT_SYMBOL_GPL(timerqueue_del);
struct timerqueue_node *timerqueue_iterate_next(struct timerqueue_node *node)
EXPORT_SYMBOL_GPL(timerqueue_iterate_next);
