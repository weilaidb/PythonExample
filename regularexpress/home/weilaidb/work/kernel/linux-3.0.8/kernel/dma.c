DEFINE_SPINLOCK(dma_spin_lock);
struct dma_chan ;
static struct dma_chan dma_chan_busy[MAX_DMA_CHANNELS] = ;
int request_dma(unsigned int dmanr, const char * device_id)
void free_dma(unsigned int dmanr)
int request_dma(unsigned int dmanr, const char *device_id)
void free_dma(unsigned int dmanr)
static int proc_dma_show(struct seq_file *m, void *v)
static int proc_dma_show(struct seq_file *m, void *v)
static int proc_dma_open(struct inode *inode, struct file *file)
static const struct file_operations proc_dma_operations = ;
static int __init proc_dma_init(void)
__initcall(proc_dma_init);
EXPORT_SYMBOL(request_dma);
EXPORT_SYMBOL(free_dma);
EXPORT_SYMBOL(dma_spin_lock);
