struct iomd_dma ;
#define TRANSFER_SIZE	2
#define CURA	(0)
#define ENDA	(IOMD_IO0ENDA - IOMD_IO0CURA)
#define CURB	(IOMD_IO0CURB - IOMD_IO0CURA)
#define ENDB	(IOMD_IO0ENDB - IOMD_IO0CURA)
#define CR	(IOMD_IO0CR - IOMD_IO0CURA)
#define ST	(IOMD_IO0ST - IOMD_IO0CURA)
static void iomd_get_next_sg(struct scatterlist *sg, struct iomd_dma *idma)
static irqreturn_t iomd_dma_handle(int irq, void *dev_id)
static int iomd_request_dma(unsigned int chan, dma_t *dma)
static void iomd_free_dma(unsigned int chan, dma_t *dma)
static void iomd_enable_dma(unsigned int chan, dma_t *dma)
static void iomd_disable_dma(unsigned int chan, dma_t *dma)
static int iomd_set_dma_speed(unsigned int chan, dma_t *dma, int cycle)
static struct dma_ops iomd_dma_ops = ;
static struct fiq_handler fh = ;
struct floppy_dma ;
static void floppy_enable_dma(unsigned int chan, dma_t *dma)
static void floppy_disable_dma(unsigned int chan, dma_t *dma)
static int floppy_get_residue(unsigned int chan, dma_t *dma)
static struct dma_ops floppy_dma_ops = ;
static void sound_enable_disable_dma(unsigned int chan, dma_t *dma)
static struct dma_ops sound_dma_ops = ;
static struct iomd_dma iomd_dma[6];
static struct floppy_dma floppy_dma = ;
static dma_t sound_dma = ;
static int __init rpc_dma_init(void)
core_initcall(rpc_dma_init);
