#define MODE_BITS	(SPI_CPHA | SPI_CPOL | SPI_CS_HIGH)
struct ti_ssp_spi ;
static u32 ti_ssp_spi_rx(struct ti_ssp_spi *hw)
static void ti_ssp_spi_tx(struct ti_ssp_spi *hw, u32 data)
static int ti_ssp_spi_txrx(struct ti_ssp_spi *hw, struct spi_message *msg,
struct spi_transfer *t)
static void ti_ssp_spi_chip_select(struct ti_ssp_spi *hw, int cs_active)
#define __SHIFT_OUT(bits)	(SSP_OPCODE_SHIFT | SSP_OUT_MODE | \
cs_en | clk | SSP_COUNT((bits) * 2 - 1))
#define __SHIFT_IN(bits)	(SSP_OPCODE_SHIFT | SSP_IN_MODE  | \
cs_en | clk | SSP_COUNT((bits) * 2 - 1))
static int ti_ssp_spi_setup_transfer(struct ti_ssp_spi *hw, u8 bpw, u8 mode)
static void ti_ssp_spi_work(struct work_struct *work)
static int ti_ssp_spi_setup(struct spi_device *spi)
static int ti_ssp_spi_transfer(struct spi_device *spi, struct spi_message *m)
static int __devinit ti_ssp_spi_probe(struct platform_device *pdev)
static int __devexit ti_ssp_spi_remove(struct platform_device *pdev)
static struct platform_driver ti_ssp_spi_driver = ;
static int __init ti_ssp_spi_init(void)
module_init(ti_ssp_spi_init);
static void __exit ti_ssp_spi_exit(void)
module_exit(ti_ssp_spi_exit);
MODULE_DESCRIPTION("SSP SPI Master");
MODULE_AUTHOR("Cyril Chemparathy");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ti-ssp-spi");
