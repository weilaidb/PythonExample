#if defined(CONFIG_SOC_AU1000) || defined(CONFIG_SOC_AU1500) || \
defined(CONFIG_SOC_AU1100)
#define DMA_CHANNEL_LEN		0x00000100
DEFINE_SPINLOCK(au1000_dma_spin_lock);
struct dma_chan au1000_dma_table[NUM_AU1000_DMA_CHANNELS] = ;
EXPORT_SYMBOL(au1000_dma_table);
static const struct dma_dev  dma_dev_table[DMA_NUM_DEV] = ;
int au1000_dma_read_proc(char *buf, char **start, off_t fpos,
int length, int *eof, void *data)
static const struct dma_dev dma_dev_table_bank2[DMA_NUM_DEV_BANK2] = ;
void dump_au1000_dma_channel(unsigned int dmanr)
int request_au1000_dma(int dev_id, const char *dev_str,
irq_handler_t irqhandler,
unsigned long irqflags,
void *irq_dev_id)
EXPORT_SYMBOL(request_au1000_dma);
void free_au1000_dma(unsigned int dmanr)
EXPORT_SYMBOL(free_au1000_dma);
static int __init au1000_dma_init(void)
arch_initcall(au1000_dma_init);
