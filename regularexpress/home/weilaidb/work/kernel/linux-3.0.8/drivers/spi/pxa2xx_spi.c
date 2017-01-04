MODULE_AUTHOR("Stephen Street");
MODULE_DESCRIPTION("PXA2xx SSP SPI Controller");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-spi");
#define MAX_BUSES 3
#define TIMOUT_DFLT		1000
#define DMA_INT_MASK		(DCSR_ENDINTR | DCSR_STARTINTR | DCSR_BUSERR)
#define RESET_DMA_CHANNEL	(DCSR_NODESC | DMA_INT_MASK)
#define IS_DMA_ALIGNED(x)	((((u32)(x)) & 0x07) == 0)
#define MAX_DMA_LEN		8191
#define DMA_ALIGNMENT		8
#define SSCR1_CHANGE_MASK (SSCR1_TTELP | SSCR1_TTE | SSCR1_SCFR \
| SSCR1_ECRA | SSCR1_ECRB | SSCR1_SCLKDIR \
| SSCR1_SFRMDIR | SSCR1_RWOT | SSCR1_TRAIL \
| SSCR1_IFS | SSCR1_STRF | SSCR1_EFWR \
| SSCR1_RFT | SSCR1_TFT | SSCR1_MWDS \
| SSCR1_SPH | SSCR1_SPO | SSCR1_LBM)
#define DEFINE_SSP_REG(reg, off) \
static inline u32 read_##reg(void const __iomem *p) \
\
\
static inline void write_##reg(u32 v, void __iomem *p) \
DEFINE_SSP_REG(SSCR0, 0x00)
DEFINE_SSP_REG(SSCR1, 0x04)
DEFINE_SSP_REG(SSSR, 0x08)
DEFINE_SSP_REG(SSITR, 0x0c)
DEFINE_SSP_REG(SSDR, 0x10)
DEFINE_SSP_REG(SSTO, 0x28)
DEFINE_SSP_REG(SSPSP, 0x2c)
#define START_STATE ((void*)0)
#define RUNNING_STATE ((void*)1)
#define DONE_STATE ((void*)2)
#define ERROR_STATE ((void*)-1)
#define QUEUE_RUNNING 0
#define QUEUE_STOPPED 1
struct driver_data ;
struct chip_data ;
static void pump_messages(struct work_struct *work);
static void cs_assert(struct driver_data *drv_data)
static void cs_deassert(struct driver_data *drv_data)
static void write_SSSR_CS(struct driver_data *drv_data, u32 val)
static int pxa25x_ssp_comp(struct driver_data *drv_data)
static int flush(struct driver_data *drv_data)
static int null_writer(struct driver_data *drv_data)
static int null_reader(struct driver_data *drv_data)
static int u8_writer(struct driver_data *drv_data)
static int u8_reader(struct driver_data *drv_data)
static int u16_writer(struct driver_data *drv_data)
static int u16_reader(struct driver_data *drv_data)
static int u32_writer(struct driver_data *drv_data)
static int u32_reader(struct driver_data *drv_data)
static void *next_transfer(struct driver_data *drv_data)
static int map_dma_buffers(struct driver_data *drv_data)
static void unmap_dma_buffers(struct driver_data *drv_data)
static void giveback(struct driver_data *drv_data)
static int wait_ssp_rx_stall(void const __iomem *ioaddr)
static int wait_dma_channel_stop(int channel)
static void dma_error_stop(struct driver_data *drv_data, const char *msg)
static void dma_transfer_complete(struct driver_data *drv_data)
static void dma_handler(int channel, void *data)
static irqreturn_t dma_transfer(struct driver_data *drv_data)
static void reset_sccr1(struct driver_data *drv_data)
static void int_error_stop(struct driver_data *drv_data, const char* msg)
static void int_transfer_complete(struct driver_data *drv_data)
static irqreturn_t interrupt_transfer(struct driver_data *drv_data)
static irqreturn_t ssp_int(int irq, void *dev_id)
static int set_dma_burst_and_threshold(struct chip_data *chip,
struct spi_device *spi,
u8 bits_per_word, u32 *burst_code,
u32 *threshold)
static unsigned int ssp_get_clk_div(struct ssp_device *ssp, int rate)
static void pump_transfers(unsigned long data)
static void pump_messages(struct work_struct *work)
static int transfer(struct spi_device *spi, struct spi_message *msg)
static int setup_cs(struct spi_device *spi, struct chip_data *chip,
struct pxa2xx_spi_chip *chip_info)
static int setup(struct spi_device *spi)
static void cleanup(struct spi_device *spi)
static int __devinit init_queue(struct driver_data *drv_data)
static int start_queue(struct driver_data *drv_data)
static int stop_queue(struct driver_data *drv_data)
static int destroy_queue(struct driver_data *drv_data)
static int __devinit pxa2xx_spi_probe(struct platform_device *pdev)
static int pxa2xx_spi_remove(struct platform_device *pdev)
static void pxa2xx_spi_shutdown(struct platform_device *pdev)
static int pxa2xx_spi_suspend(struct device *dev)
static int pxa2xx_spi_resume(struct device *dev)
static const struct dev_pm_ops pxa2xx_spi_pm_ops = ;
static struct platform_driver driver = ;
static int __init pxa2xx_spi_init(void)
subsys_initcall(pxa2xx_spi_init);
static void __exit pxa2xx_spi_exit(void)
module_exit(pxa2xx_spi_exit);
