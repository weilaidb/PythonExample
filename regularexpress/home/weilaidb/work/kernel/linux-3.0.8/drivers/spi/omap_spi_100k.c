#define OMAP1_SPI100K_MAX_FREQ          48000000
#define ICR_SPITAS      (OMAP7XX_ICR_BASE + 0x12)
#define SPI_SETUP1      0x00
#define SPI_SETUP2      0x02
#define SPI_CTRL        0x04
#define SPI_STATUS      0x06
#define SPI_TX_LSB      0x08
#define SPI_TX_MSB      0x0a
#define SPI_RX_LSB      0x0c
#define SPI_RX_MSB      0x0e
#define SPI_SETUP1_INT_READ_ENABLE      (1UL << 5)
#define SPI_SETUP1_INT_WRITE_ENABLE     (1UL << 4)
#define SPI_SETUP1_CLOCK_DIVISOR(x)     ((x) << 1)
#define SPI_SETUP1_CLOCK_ENABLE         (1UL << 0)
#define SPI_SETUP2_ACTIVE_EDGE_FALLING  (0UL << 0)
#define SPI_SETUP2_ACTIVE_EDGE_RISING   (1UL << 0)
#define SPI_SETUP2_NEGATIVE_LEVEL       (0UL << 5)
#define SPI_SETUP2_POSITIVE_LEVEL       (1UL << 5)
#define SPI_SETUP2_LEVEL_TRIGGER        (0UL << 10)
#define SPI_SETUP2_EDGE_TRIGGER         (1UL << 10)
#define SPI_CTRL_SEN(x)                 ((x) << 7)
#define SPI_CTRL_WORD_SIZE(x)           (((x) - 1) << 2)
#define SPI_CTRL_WR                     (1UL << 1)
#define SPI_CTRL_RD                     (1UL << 0)
#define SPI_STATUS_WE                   (1UL << 1)
#define SPI_STATUS_RD                   (1UL << 0)
#define WRITE 0
#define READ  1
#define DMA_MIN_BYTES                   8
#define SPI_RUNNING	0
#define SPI_SHUTDOWN	1
struct omap1_spi100k ;
struct omap1_spi100k_cs ;
static struct workqueue_struct *omap1_spi100k_wq;
#define MOD_REG_BIT(val, mask, set) do  while (0)
static void spi100k_enable_clock(struct spi_master *master)
static void spi100k_disable_clock(struct spi_master *master)
static void spi100k_write_data(struct spi_master *master, int len, int data)
static int spi100k_read_data(struct spi_master *master, int len)
static void spi100k_open(struct spi_master *master)
static void omap1_spi100k_force_cs(struct omap1_spi100k *spi100k, int enable)
static unsigned
omap1_spi100k_txrx_pio(struct spi_device *spi, struct spi_transfer *xfer)
static int omap1_spi100k_setup_transfer(struct spi_device *spi,
struct spi_transfer *t)
#define MODEBITS (SPI_CPOL | SPI_CPHA | SPI_CS_HIGH)
static int omap1_spi100k_setup(struct spi_device *spi)
static void omap1_spi100k_work(struct work_struct *work)
static int omap1_spi100k_transfer(struct spi_device *spi, struct spi_message *m)
static int __init omap1_spi100k_reset(struct omap1_spi100k *spi100k)
static int __devinit omap1_spi100k_probe(struct platform_device *pdev)
static int __exit omap1_spi100k_remove(struct platform_device *pdev)
static struct platform_driver omap1_spi100k_driver = ;
static int __init omap1_spi100k_init(void)
static void __exit omap1_spi100k_exit(void)
module_init(omap1_spi100k_init);
module_exit(omap1_spi100k_exit);
MODULE_DESCRIPTION("OMAP7xx SPI 100k controller driver");
MODULE_AUTHOR("Fabrice Crohas <fcrohas@gmail.com>");
MODULE_LICENSE("GPL");
