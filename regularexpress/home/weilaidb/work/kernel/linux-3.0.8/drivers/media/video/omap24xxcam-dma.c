static void omap24xxcam_dmahw_ack_all(unsigned long base)
static u32 omap24xxcam_dmahw_ack_ch(unsigned long base, int dmach)
static int omap24xxcam_dmahw_running(unsigned long base, int dmach)
static void omap24xxcam_dmahw_transfer_setup(unsigned long base, int dmach,
dma_addr_t start, u32 len)
static void omap24xxcam_dmahw_transfer_start(unsigned long base, int dmach)
static void omap24xxcam_dmahw_transfer_chain(unsigned long base, int dmach,
int free_dmach)
static void omap24xxcam_dmahw_abort_ch(unsigned long base, int dmach)
static void omap24xxcam_dmahw_init(unsigned long base)
static int omap24xxcam_dma_start(struct omap24xxcam_dma *dma, dma_addr_t start,
u32 len, dma_callback_t callback, void *arg)
static void omap24xxcam_dma_abort(struct omap24xxcam_dma *dma, u32 csr)
static void omap24xxcam_dma_stop(struct omap24xxcam_dma *dma, u32 csr)
void omap24xxcam_dma_isr(struct omap24xxcam_dma *dma)
void omap24xxcam_dma_hwinit(struct omap24xxcam_dma *dma)
static void omap24xxcam_dma_init(struct omap24xxcam_dma *dma,
unsigned long base)
static void omap24xxcam_sgdma_callback(struct omap24xxcam_dma *dma, u32 csr,
void *arg)
void omap24xxcam_sgdma_process(struct omap24xxcam_sgdma *sgdma)
int omap24xxcam_sgdma_queue(struct omap24xxcam_sgdma *sgdma,
const struct scatterlist *sglist, int sglen,
int len, sgdma_callback_t callback, void *arg)
void omap24xxcam_sgdma_sync(struct omap24xxcam_sgdma *sgdma)
void omap24xxcam_sgdma_init(struct omap24xxcam_sgdma *sgdma,
unsigned long base,
void (*reset_callback)(unsigned long data),
unsigned long reset_callback_data)
