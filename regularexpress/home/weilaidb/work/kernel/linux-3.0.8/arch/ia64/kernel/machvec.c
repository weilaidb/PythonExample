struct ia64_machine_vector ia64_mv;
EXPORT_SYMBOL(ia64_mv);
static struct ia64_machine_vector * __init
lookup_machvec (const char *name)
void __init
machvec_init (const char *name)
void __init
machvec_init_from_cmdline(const char *cmdline)
void
machvec_setup (char **arg)
EXPORT_SYMBOL(machvec_setup);
void
machvec_timer_interrupt (int irq, void *dev_id)
EXPORT_SYMBOL(machvec_timer_interrupt);
void
machvec_dma_sync_single(struct device *hwdev, dma_addr_t dma_handle, size_t size,
enum dma_data_direction dir)
EXPORT_SYMBOL(machvec_dma_sync_single);
void
machvec_dma_sync_sg(struct device *hwdev, struct scatterlist *sg, int n,
enum dma_data_direction dir)
EXPORT_SYMBOL(machvec_dma_sync_sg);
