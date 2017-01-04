static int pio;
static int clock;
#define STMP_SPI_TIMEOUT	(2 * HZ)
struct stmp_spi ;
#define busy_wait(cond)							\
()
static int stmp_spi_init_hw(struct stmp_spi *ss)
static void stmp_spi_release_hw(struct stmp_spi *ss)
static int stmp_spi_setup_transfer(struct spi_device *spi,
struct spi_transfer *t)
static int stmp_spi_setup(struct spi_device *spi)
static inline u32 stmp_spi_cs(unsigned cs)
static int stmp_spi_txrx_dma(struct stmp_spi *ss, int cs,
unsigned char *buf, dma_addr_t dma_buf, int len,
int first, int last, bool write)
static inline void stmp_spi_enable(struct stmp_spi *ss)
static inline void stmp_spi_disable(struct stmp_spi *ss)
static int stmp_spi_txrx_pio(struct stmp_spi *ss, int cs,
unsigned char *buf, int len,
bool first, bool last, bool write)
static int stmp_spi_handle_message(struct stmp_spi *ss, struct spi_message *m)
static void stmp_spi_handle(struct work_struct *w)
static int stmp_spi_transfer(struct spi_device *spi, struct spi_message *m)
static irqreturn_t stmp_spi_irq(int irq, void *dev_id)
static irqreturn_t stmp_spi_irq_err(int irq, void *dev_id)
static int __devinit stmp_spi_probe(struct platform_device *dev)
static int __devexit stmp_spi_remove(struct platform_device *dev)
static int stmp_spi_suspend(struct platform_device *pdev, pm_message_t pmsg)
static int stmp_spi_resume(struct platform_device *pdev)
#define stmp_spi_suspend NULL
#define stmp_spi_resume  NULL
static struct platform_driver stmp_spi_driver = ;
static int __init stmp_spi_init(void)
static void __exit stmp_spi_exit(void)
module_init(stmp_spi_init);
module_exit(stmp_spi_exit);
module_param(pio, int, S_IRUGO);
module_param(clock, int, S_IRUGO);
MODULE_AUTHOR("dmitry pervushin <dpervushin@embeddedalley.com>");
MODULE_DESCRIPTION("STMP3xxx SPI/SSP driver");
MODULE_LICENSE("GPL");
