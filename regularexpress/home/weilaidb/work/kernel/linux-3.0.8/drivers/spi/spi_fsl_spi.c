#define CPM_SPI_CMD mk_cr_cmd(CPM_CR_CH_SPI, 0)
#define CPM_SPI_CMD mk_cr_cmd(CPM_CR_SPI_PAGE, CPM_CR_SPI_SBLOCK, 0, 0)
struct fsl_spi_reg ;
#define	SPMODE_LOOP		(1 << 30)
#define	SPMODE_CI_INACTIVEHIGH	(1 << 29)
#define	SPMODE_CP_BEGIN_EDGECLK	(1 << 28)
#define	SPMODE_DIV16		(1 << 27)
#define	SPMODE_REV		(1 << 26)
#define	SPMODE_MS		(1 << 25)
#define	SPMODE_ENABLE		(1 << 24)
#define	SPMODE_LEN(x)		((x) << 20)
#define	SPMODE_PM(x)		((x) << 16)
#define	SPMODE_OP		(1 << 14)
#define	SPMODE_CG(x)		((x) << 7)
#define	SPMODE_INIT_VAL (SPMODE_CI_INACTIVEHIGH | SPMODE_DIV16 | SPMODE_REV | \
SPMODE_MS | SPMODE_LEN(7) | SPMODE_PM(0xf))
#define	SPIE_NE		0x00000200
#define	SPIE_NF		0x00000100
#define	SPIM_NE		0x00000200
#define	SPIM_NF		0x00000100
#define	SPIE_TXB	0x00000200
#define	SPIE_RXB	0x00000100
#define	SPCOM_STR	(1 << 23)
#define	SPI_PRAM_SIZE	0x100
#define	SPI_MRBLR	((unsigned int)PAGE_SIZE)
static void *fsl_dummy_rx;
static DEFINE_MUTEX(fsl_dummy_rx_lock);
static int fsl_dummy_rx_refcnt;
static void fsl_spi_change_mode(struct spi_device *spi)
static void fsl_spi_chipselect(struct spi_device *spi, int value)
static int mspi_apply_cpu_mode_quirks(struct spi_mpc8xxx_cs *cs,
struct spi_device *spi,
struct mpc8xxx_spi *mpc8xxx_spi,
int bits_per_word)
static int mspi_apply_qe_mode_quirks(struct spi_mpc8xxx_cs *cs,
struct spi_device *spi,
int bits_per_word)
static int fsl_spi_setup_transfer(struct spi_device *spi,
struct spi_transfer *t)
static void fsl_spi_cpm_bufs_start(struct mpc8xxx_spi *mspi)
static int fsl_spi_cpm_bufs(struct mpc8xxx_spi *mspi,
struct spi_transfer *t, bool is_dma_mapped)
static void fsl_spi_cpm_bufs_complete(struct mpc8xxx_spi *mspi)
static int fsl_spi_cpu_bufs(struct mpc8xxx_spi *mspi,
struct spi_transfer *t, unsigned int len)
static int fsl_spi_bufs(struct spi_device *spi, struct spi_transfer *t,
bool is_dma_mapped)
static void fsl_spi_do_one_msg(struct spi_message *m)
static int fsl_spi_setup(struct spi_device *spi)
static void fsl_spi_cpm_irq(struct mpc8xxx_spi *mspi, u32 events)
static void fsl_spi_cpu_irq(struct mpc8xxx_spi *mspi, u32 events)
static irqreturn_t fsl_spi_irq(s32 irq, void *context_data)
static void *fsl_spi_alloc_dummy_rx(void)
static void fsl_spi_free_dummy_rx(void)
static unsigned long fsl_spi_cpm_get_pram(struct mpc8xxx_spi *mspi)
static int fsl_spi_cpm_init(struct mpc8xxx_spi *mspi)
static void fsl_spi_cpm_free(struct mpc8xxx_spi *mspi)
static void fsl_spi_remove(struct mpc8xxx_spi *mspi)
static struct spi_master * __devinit fsl_spi_probe(struct device *dev,
struct resource *mem, unsigned int irq)
static void fsl_spi_cs_control(struct spi_device *spi, bool on)
static int of_fsl_spi_get_chipselects(struct device *dev)
static int of_fsl_spi_free_chipselects(struct device *dev)
static int __devinit of_fsl_spi_probe(struct platform_device *ofdev)
static int __devexit of_fsl_spi_remove(struct platform_device *ofdev)
static const struct of_device_id of_fsl_spi_match[] = ;
MODULE_DEVICE_TABLE(of, of_fsl_spi_match);
static struct platform_driver of_fsl_spi_driver = ;
static int __devinit plat_mpc8xxx_spi_probe(struct platform_device *pdev)
static int __devexit plat_mpc8xxx_spi_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:mpc8xxx_spi");
static struct platform_driver mpc8xxx_spi_driver = ;
static bool legacy_driver_failed;
static void __init legacy_driver_register(void)
static void __exit legacy_driver_unregister(void)
static void __init legacy_driver_register(void)
static void __exit legacy_driver_unregister(void)
static int __init fsl_spi_init(void)
module_init(fsl_spi_init);
static void __exit fsl_spi_exit(void)
module_exit(fsl_spi_exit);
MODULE_AUTHOR("Kumar Gala");
MODULE_DESCRIPTION("Simple Freescale SPI Driver");
MODULE_LICENSE("GPL");
