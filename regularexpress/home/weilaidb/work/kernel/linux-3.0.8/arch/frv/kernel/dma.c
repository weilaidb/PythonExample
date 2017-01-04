struct frv_dma_channel ;
#define __get_DMAC(IO,X)	()
#define __set_DMAC(IO,X,V)					\
do  while(0)
#define ___set_DMAC(IO,X,V)					\
do  while(0)
static struct frv_dma_channel frv_dma_channels[FRV_DMA_NCHANS] = ;
static DEFINE_RWLOCK(frv_dma_channels_lock);
unsigned long frv_dma_inprogress;
#define frv_clear_dma_inprogress(channel) \
atomic_clear_mask(1 << (channel), &frv_dma_inprogress);
#define frv_set_dma_inprogress(channel) \
atomic_set_mask(1 << (channel), &frv_dma_inprogress);
static irqreturn_t dma_irq_handler(int irq, void *_channel)
void __init frv_dma_init(void)
int frv_dma_open(const char *devname,
unsigned long dmamask,
int dmacap,
dma_irq_handler_t handler,
unsigned long irq_flags,
void *data)
EXPORT_SYMBOL(frv_dma_open);
void frv_dma_close(int dma)
EXPORT_SYMBOL(frv_dma_close);
void frv_dma_config(int dma, unsigned long ccfr, unsigned long cctr, unsigned long apr)
EXPORT_SYMBOL(frv_dma_config);
void frv_dma_start(int dma,
unsigned long sba, unsigned long dba,
unsigned long pix, unsigned long six, unsigned long bcl)
EXPORT_SYMBOL(frv_dma_start);
void frv_dma_restart_circular(int dma, unsigned long six)
EXPORT_SYMBOL(frv_dma_restart_circular);
void frv_dma_stop(int dma)
EXPORT_SYMBOL(frv_dma_stop);
int is_frv_dma_interrupting(int dma)
EXPORT_SYMBOL(is_frv_dma_interrupting);
void frv_dma_dump(int dma)
EXPORT_SYMBOL(frv_dma_dump);
void frv_dma_pause_all(void)
EXPORT_SYMBOL(frv_dma_pause_all);
void frv_dma_resume_all(void)
EXPORT_SYMBOL(frv_dma_resume_all);
void frv_dma_status_clear(int dma)
EXPORT_SYMBOL(frv_dma_status_clear);
