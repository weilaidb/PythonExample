struct dma_channel ;
static struct dma_channel dma_channels[MAX_DMA_CHANNELS];
int puv3_request_dma(char *name, puv3_dma_prio prio,
void (*irq_handler)(int, void *),
void (*err_handler)(int, void *),
void *data)
EXPORT_SYMBOL(puv3_request_dma);
void puv3_free_dma(int dma_ch)
EXPORT_SYMBOL(puv3_free_dma);
static irqreturn_t dma_irq_handler(int irq, void *dev_id)
static irqreturn_t dma_err_handler(int irq, void *dev_id)
int __init puv3_init_dma(void)
postcore_initcall(puv3_init_dma);
