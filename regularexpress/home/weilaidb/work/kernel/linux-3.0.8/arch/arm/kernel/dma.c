DEFINE_SPINLOCK(dma_spin_lock);
EXPORT_SYMBOL(dma_spin_lock);
static dma_t *dma_chan[MAX_DMA_CHANNELS];
static inline dma_t *dma_channel(unsigned int chan)
int __init isa_dma_add(unsigned int chan, dma_t *dma)
int request_dma(unsigned int chan, const char *device_id)
EXPORT_SYMBOL(request_dma);
void free_dma(unsigned int chan)
EXPORT_SYMBOL(free_dma);
void set_dma_sg (unsigned int chan, struct scatterlist *sg, int nr_sg)
EXPORT_SYMBOL(set_dma_sg);
void __set_dma_addr (unsigned int chan, void *addr)
EXPORT_SYMBOL(__set_dma_addr);
void set_dma_count (unsigned int chan, unsigned long count)
EXPORT_SYMBOL(set_dma_count);
void set_dma_mode (unsigned int chan, unsigned int mode)
EXPORT_SYMBOL(set_dma_mode);
void enable_dma (unsigned int chan)
EXPORT_SYMBOL(enable_dma);
void disable_dma (unsigned int chan)
EXPORT_SYMBOL(disable_dma);
int dma_channel_active(unsigned int chan)
EXPORT_SYMBOL(dma_channel_active);
void set_dma_page(unsigned int chan, char pagenr)
EXPORT_SYMBOL(set_dma_page);
void set_dma_speed(unsigned int chan, int cycle_ns)
EXPORT_SYMBOL(set_dma_speed);
int get_dma_residue(unsigned int chan)
EXPORT_SYMBOL(get_dma_residue);
static int proc_dma_show(struct seq_file *m, void *v)
static int proc_dma_open(struct inode *inode, struct file *file)
static const struct file_operations proc_dma_operations = ;
static int __init proc_dma_init(void)
__initcall(proc_dma_init);
