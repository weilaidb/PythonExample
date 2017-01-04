static struct fiq_handler fh = ;
unsigned int fiq_buffer[1024];
EXPORT_SYMBOL(fiq_buffer);
static unsigned int irq_counter[16];
static irqreturn_t deferred_fiq(int irq, void *dev_id)
void __init ams_delta_init_fiq(void)
