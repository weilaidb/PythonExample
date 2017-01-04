#undef DEBUG
#define DPRINTK( s, arg... )  printk( "dma<%p>: " s, regs , ##arg )
#define DPRINTK( x... )
typedef struct  sa1100_dma_t;
static sa1100_dma_t dma_chan[SA1100_DMA_CHANNELS];
static DEFINE_SPINLOCK(dma_list_lock);
static irqreturn_t dma_irq_handler(int irq, void *dev_id)
int sa1100_request_dma (dma_device_t device, const char *device_id,
dma_callback_t callback, void *data,
dma_regs_t **dma_regs)
void sa1100_free_dma(dma_regs_t *regs)
int sa1100_start_dma(dma_regs_t *regs, dma_addr_t dma_ptr, u_int size)
dma_addr_t sa1100_get_dma_pos(dma_regs_t *regs)
void sa1100_reset_dma(dma_regs_t *regs)
EXPORT_SYMBOL(sa1100_request_dma);
EXPORT_SYMBOL(sa1100_free_dma);
EXPORT_SYMBOL(sa1100_start_dma);
EXPORT_SYMBOL(sa1100_get_dma_pos);
EXPORT_SYMBOL(sa1100_reset_dma);
