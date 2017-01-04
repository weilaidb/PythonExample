struct queue_item ;
static struct kmem_cache *tipc_queue_item_cache;
static struct list_head signal_queue_head;
static DEFINE_SPINLOCK(qitem_lock);
static int handler_enabled;
static void process_signal_queue(unsigned long dummy);
static DECLARE_TASKLET_DISABLED(tipc_tasklet, process_signal_queue, 0);
unsigned int tipc_k_signal(Handler routine, unsigned long argument)
static void process_signal_queue(unsigned long dummy)
int tipc_handler_start(void)
void tipc_handler_stop(void)
