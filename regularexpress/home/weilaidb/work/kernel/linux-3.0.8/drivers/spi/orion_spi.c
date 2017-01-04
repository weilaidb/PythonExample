#define DRIVER_NAME			"orion_spi"
#define ORION_NUM_CHIPSELECTS		1
#define ORION_SPI_WAIT_RDY_MAX_LOOP	2000
#define ORION_SPI_IF_CTRL_REG		0x00
#define ORION_SPI_IF_CONFIG_REG		0x04
#define ORION_SPI_DATA_OUT_REG		0x08
#define ORION_SPI_DATA_IN_REG		0x0c
#define ORION_SPI_INT_CAUSE_REG		0x10
#define ORION_SPI_IF_8_16_BIT_MODE	(1 << 5)
#define ORION_SPI_CLK_PRESCALE_MASK	0x1F
struct orion_spi ;
static struct workqueue_struct *orion_spi_wq;
static inline void __iomem *spi_reg(struct orion_spi *orion_spi, u32 reg)
static inline void
orion_spi_setbits(struct orion_spi *orion_spi, u32 reg, u32 mask)
static inline void
orion_spi_clrbits(struct orion_spi *orion_spi, u32 reg, u32 mask)
static int orion_spi_set_transfer_size(struct orion_spi *orion_spi, int size)
static int orion_spi_baudrate_set(struct spi_device *spi, unsigned int speed)
static int
orion_spi_setup_transfer(struct spi_device *spi, struct spi_transfer *t)
static void orion_spi_set_cs(struct orion_spi *orion_spi, int enable)
static inline int orion_spi_wait_till_ready(struct orion_spi *orion_spi)
static inline int
orion_spi_write_read_8bit(struct spi_device *spi,
const u8 **tx_buf, u8 **rx_buf)
static inline int
orion_spi_write_read_16bit(struct spi_device *spi,
const u16 **tx_buf, u16 **rx_buf)
static unsigned int
orion_spi_write_read(struct spi_device *spi, struct spi_transfer *xfer)
static void orion_spi_work(struct work_struct *work)
static int __init orion_spi_reset(struct orion_spi *orion_spi)
static int orion_spi_setup(struct spi_device *spi)
static int orion_spi_transfer(struct spi_device *spi, struct spi_message *m)
static int __init orion_spi_probe(struct platform_device *pdev)
static int __exit orion_spi_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:" DRIVER_NAME);
static struct platform_driver orion_spi_driver = ;
static int __init orion_spi_init(void)
module_init(orion_spi_init);
static void __exit orion_spi_exit(void)
module_exit(orion_spi_exit);
MODULE_DESCRIPTION("Orion SPI driver");
MODULE_AUTHOR("Shadi Ammouri <shadi@marvell.com>");
MODULE_LICENSE("GPL");
