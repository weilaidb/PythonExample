static int stdma_locked;
static irq_handler_t stdma_isr;
static void *stdma_isr_data;
static DECLARE_WAIT_QUEUE_HEAD(stdma_wait);
static irqreturn_t stdma_int (int irq, void *dummy);
void stdma_lock(irq_handler_t handler, void *data)
EXPORT_SYMBOL(stdma_lock);
void stdma_release(void)
EXPORT_SYMBOL(stdma_release);
int stdma_others_waiting(void)
EXPORT_SYMBOL(stdma_others_waiting);
int stdma_islocked(void)
EXPORT_SYMBOL(stdma_islocked);
void __init stdma_init(void)
static irqreturn_t stdma_int(int irq, void *dummy)
