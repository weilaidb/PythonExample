void __init_waitqueue_head(wait_queue_head_t *q, struct lock_class_key *key)
EXPORT_SYMBOL(__init_waitqueue_head);
void add_wait_queue(wait_queue_head_t *q, wait_queue_t *wait)
EXPORT_SYMBOL(add_wait_queue);
void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t *wait)
EXPORT_SYMBOL(add_wait_queue_exclusive);
void remove_wait_queue(wait_queue_head_t *q, wait_queue_t *wait)
EXPORT_SYMBOL(remove_wait_queue);
void
prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state)
EXPORT_SYMBOL(prepare_to_wait);
void
prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state)
EXPORT_SYMBOL(prepare_to_wait_exclusive);
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait)
EXPORT_SYMBOL(finish_wait);
void abort_exclusive_wait(wait_queue_head_t *q, wait_queue_t *wait,
unsigned int mode, void *key)
EXPORT_SYMBOL(abort_exclusive_wait);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key)
EXPORT_SYMBOL(autoremove_wake_function);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *arg)
EXPORT_SYMBOL(wake_bit_function);
int __sched
__wait_on_bit(wait_queue_head_t *wq, struct wait_bit_queue *q,
int (*action)(void *), unsigned mode)
EXPORT_SYMBOL(__wait_on_bit);
int __sched out_of_line_wait_on_bit(void *word, int bit,
int (*action)(void *), unsigned mode)
EXPORT_SYMBOL(out_of_line_wait_on_bit);
int __sched
__wait_on_bit_lock(wait_queue_head_t *wq, struct wait_bit_queue *q,
int (*action)(void *), unsigned mode)
EXPORT_SYMBOL(__wait_on_bit_lock);
int __sched out_of_line_wait_on_bit_lock(void *word, int bit,
int (*action)(void *), unsigned mode)
EXPORT_SYMBOL(out_of_line_wait_on_bit_lock);
void __wake_up_bit(wait_queue_head_t *wq, void *word, int bit)
EXPORT_SYMBOL(__wake_up_bit);
void wake_up_bit(void *word, int bit)
EXPORT_SYMBOL(wake_up_bit);
wait_queue_head_t *bit_waitqueue(void *word, int bit)
EXPORT_SYMBOL(bit_waitqueue);
