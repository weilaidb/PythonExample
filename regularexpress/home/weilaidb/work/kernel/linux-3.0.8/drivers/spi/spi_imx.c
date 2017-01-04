#define DRIVER_NAME "spi_imx"
#define MXC_CSPIRXDATA		0x00
#define MXC_CSPITXDATA		0x04
#define MXC_CSPICTRL		0x08
#define MXC_CSPIINT		0x0c
#define MXC_RESET		0x1c
#define MX3_CSPISTAT		0x14
#define MX3_CSPISTAT_RR		(1 << 3)
#define MXC_INT_RR	(1 << 0)
#define MXC_INT_TE	(1 << 1)
struct spi_imx_config ;
enum spi_imx_devtype ;
struct spi_imx_data;
struct spi_imx_devtype_data ;
struct spi_imx_data ;
#define MXC_SPI_BUF_RX(type)						\
static void spi_imx_buf_rx_##type(struct spi_imx_data *spi_imx)		\
#define MXC_SPI_BUF_TX(type)						\
static void spi_imx_buf_tx_##type(struct spi_imx_data *spi_imx)		\
MXC_SPI_BUF_RX(u8)
MXC_SPI_BUF_TX(u8)
MXC_SPI_BUF_RX(u16)
MXC_SPI_BUF_TX(u16)
MXC_SPI_BUF_RX(u32)
MXC_SPI_BUF_TX(u32)
static int mxc_clkdivs[] = ;
static unsigned int spi_imx_clkdiv_1(unsigned int fin,
unsigned int fspi)
static unsigned int spi_imx_clkdiv_2(unsigned int fin,
unsigned int fspi)
#define SPI_IMX2_3_CTRL		0x08
#define SPI_IMX2_3_CTRL_ENABLE		(1 <<  0)
#define SPI_IMX2_3_CTRL_XCH		(1 <<  2)
#define SPI_IMX2_3_CTRL_MODE_MASK	(0xf << 4)
#define SPI_IMX2_3_CTRL_POSTDIV_OFFSET	8
#define SPI_IMX2_3_CTRL_PREDIV_OFFSET	12
#define SPI_IMX2_3_CTRL_CS(cs)		((cs) << 18)
#define SPI_IMX2_3_CTRL_BL_OFFSET	20
#define SPI_IMX2_3_CONFIG	0x0c
#define SPI_IMX2_3_CONFIG_SCLKPHA(cs)	(1 << ((cs) +  0))
#define SPI_IMX2_3_CONFIG_SCLKPOL(cs)	(1 << ((cs) +  4))
#define SPI_IMX2_3_CONFIG_SBBCTRL(cs)	(1 << ((cs) +  8))
#define SPI_IMX2_3_CONFIG_SSBPOL(cs)	(1 << ((cs) + 12))
#define SPI_IMX2_3_INT		0x10
#define SPI_IMX2_3_INT_TEEN		(1 <<  0)
#define SPI_IMX2_3_INT_RREN		(1 <<  3)
#define SPI_IMX2_3_STAT		0x18
#define SPI_IMX2_3_STAT_RR		(1 <<  3)
static unsigned int spi_imx2_3_clkdiv(unsigned int fin, unsigned int fspi)
static void __maybe_unused spi_imx2_3_intctrl(struct spi_imx_data *spi_imx, int enable)
static void __maybe_unused spi_imx2_3_trigger(struct spi_imx_data *spi_imx)
static int __maybe_unused spi_imx2_3_config(struct spi_imx_data *spi_imx,
struct spi_imx_config *config)
static int __maybe_unused spi_imx2_3_rx_available(struct spi_imx_data *spi_imx)
static void __maybe_unused spi_imx2_3_reset(struct spi_imx_data *spi_imx)
#define MX31_INTREG_TEEN	(1 << 0)
#define MX31_INTREG_RREN	(1 << 3)
#define MX31_CSPICTRL_ENABLE	(1 << 0)
#define MX31_CSPICTRL_MASTER	(1 << 1)
#define MX31_CSPICTRL_XCH	(1 << 2)
#define MX31_CSPICTRL_POL	(1 << 4)
#define MX31_CSPICTRL_PHA	(1 << 5)
#define MX31_CSPICTRL_SSCTL	(1 << 6)
#define MX31_CSPICTRL_SSPOL	(1 << 7)
#define MX31_CSPICTRL_BC_SHIFT	8
#define MX35_CSPICTRL_BL_SHIFT	20
#define MX31_CSPICTRL_CS_SHIFT	24
#define MX35_CSPICTRL_CS_SHIFT	12
#define MX31_CSPICTRL_DR_SHIFT	16
#define MX31_CSPISTATUS		0x14
#define MX31_STATUS_RR		(1 << 3)
static void __maybe_unused mx31_intctrl(struct spi_imx_data *spi_imx, int enable)
static void __maybe_unused mx31_trigger(struct spi_imx_data *spi_imx)
static int __maybe_unused spi_imx0_4_config(struct spi_imx_data *spi_imx,
struct spi_imx_config *config)
static int __maybe_unused spi_imx0_7_config(struct spi_imx_data *spi_imx,
struct spi_imx_config *config)
static int __maybe_unused mx31_rx_available(struct spi_imx_data *spi_imx)
static void __maybe_unused spi_imx0_4_reset(struct spi_imx_data *spi_imx)
#define MX27_INTREG_RR		(1 << 4)
#define MX27_INTREG_TEEN	(1 << 9)
#define MX27_INTREG_RREN	(1 << 13)
#define MX27_CSPICTRL_POL	(1 << 5)
#define MX27_CSPICTRL_PHA	(1 << 6)
#define MX27_CSPICTRL_SSPOL	(1 << 8)
#define MX27_CSPICTRL_XCH	(1 << 9)
#define MX27_CSPICTRL_ENABLE	(1 << 10)
#define MX27_CSPICTRL_MASTER	(1 << 11)
#define MX27_CSPICTRL_DR_SHIFT	14
#define MX27_CSPICTRL_CS_SHIFT	19
static void __maybe_unused mx27_intctrl(struct spi_imx_data *spi_imx, int enable)
static void __maybe_unused mx27_trigger(struct spi_imx_data *spi_imx)
static int __maybe_unused mx27_config(struct spi_imx_data *spi_imx,
struct spi_imx_config *config)
static int __maybe_unused mx27_rx_available(struct spi_imx_data *spi_imx)
static void __maybe_unused spi_imx0_0_reset(struct spi_imx_data *spi_imx)
#define MX1_INTREG_RR		(1 << 3)
#define MX1_INTREG_TEEN		(1 << 8)
#define MX1_INTREG_RREN		(1 << 11)
#define MX1_CSPICTRL_POL	(1 << 4)
#define MX1_CSPICTRL_PHA	(1 << 5)
#define MX1_CSPICTRL_XCH	(1 << 8)
#define MX1_CSPICTRL_ENABLE	(1 << 9)
#define MX1_CSPICTRL_MASTER	(1 << 10)
#define MX1_CSPICTRL_DR_SHIFT	13
static void __maybe_unused mx1_intctrl(struct spi_imx_data *spi_imx, int enable)
static void __maybe_unused mx1_trigger(struct spi_imx_data *spi_imx)
static int __maybe_unused mx1_config(struct spi_imx_data *spi_imx,
struct spi_imx_config *config)
static int __maybe_unused mx1_rx_available(struct spi_imx_data *spi_imx)
static void __maybe_unused mx1_reset(struct spi_imx_data *spi_imx)
static struct spi_imx_devtype_data spi_imx_devtype_data[] __devinitdata = ;
static void spi_imx_chipselect(struct spi_device *spi, int is_active)
static void spi_imx_push(struct spi_imx_data *spi_imx)
static irqreturn_t spi_imx_isr(int irq, void *dev_id)
static int spi_imx_setupxfer(struct spi_device *spi,
struct spi_transfer *t)
static int spi_imx_transfer(struct spi_device *spi,
struct spi_transfer *transfer)
static int spi_imx_setup(struct spi_device *spi)
static void spi_imx_cleanup(struct spi_device *spi)
static struct platform_device_id spi_imx_devtype[] = ;
static int __devinit spi_imx_probe(struct platform_device *pdev)
static int __devexit spi_imx_remove(struct platform_device *pdev)
static struct platform_driver spi_imx_driver = ;
static int __init spi_imx_init(void)
static void __exit spi_imx_exit(void)
module_init(spi_imx_init);
module_exit(spi_imx_exit);
MODULE_DESCRIPTION("SPI Master Controller driver");
MODULE_AUTHOR("Sascha Hauer, Pengutronix");
MODULE_LICENSE("GPL");
