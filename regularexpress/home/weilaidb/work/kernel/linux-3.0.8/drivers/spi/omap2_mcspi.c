#define OMAP2_MCSPI_MAX_FREQ		48000000
#define OMAP2_MCSPI_MAX_CTRL 		4
#define OMAP2_MCSPI_REVISION		0x00
#define OMAP2_MCSPI_SYSSTATUS		0x14
#define OMAP2_MCSPI_IRQSTATUS		0x18
#define OMAP2_MCSPI_IRQENABLE		0x1c
#define OMAP2_MCSPI_WAKEUPENABLE	0x20
#define OMAP2_MCSPI_SYST		0x24
#define OMAP2_MCSPI_MODULCTRL		0x28
#define OMAP2_MCSPI_CHCONF0		0x2c
#define OMAP2_MCSPI_CHSTAT0		0x30
#define OMAP2_MCSPI_CHCTRL0		0x34
#define OMAP2_MCSPI_TX0			0x38
#define OMAP2_MCSPI_RX0			0x3c
#define OMAP2_MCSPI_MODULCTRL_SINGLE	BIT(0)
#define OMAP2_MCSPI_MODULCTRL_MS	BIT(2)
#define OMAP2_MCSPI_MODULCTRL_STEST	BIT(3)
#define OMAP2_MCSPI_CHCONF_PHA		BIT(0)
#define OMAP2_MCSPI_CHCONF_POL		BIT(1)
#define OMAP2_MCSPI_CHCONF_CLKD_MASK	(0x0f << 2)
#define OMAP2_MCSPI_CHCONF_EPOL		BIT(6)
#define OMAP2_MCSPI_CHCONF_WL_MASK	(0x1f << 7)
#define OMAP2_MCSPI_CHCONF_TRM_RX_ONLY	BIT(12)
#define OMAP2_MCSPI_CHCONF_TRM_TX_ONLY	BIT(13)
#define OMAP2_MCSPI_CHCONF_TRM_MASK	(0x03 << 12)
#define OMAP2_MCSPI_CHCONF_DMAW		BIT(14)
#define OMAP2_MCSPI_CHCONF_DMAR		BIT(15)
#define OMAP2_MCSPI_CHCONF_DPE0		BIT(16)
#define OMAP2_MCSPI_CHCONF_DPE1		BIT(17)
#define OMAP2_MCSPI_CHCONF_IS		BIT(18)
#define OMAP2_MCSPI_CHCONF_TURBO	BIT(19)
#define OMAP2_MCSPI_CHCONF_FORCE	BIT(20)
#define OMAP2_MCSPI_CHSTAT_RXS		BIT(0)
#define OMAP2_MCSPI_CHSTAT_TXS		BIT(1)
#define OMAP2_MCSPI_CHSTAT_EOT		BIT(2)
#define OMAP2_MCSPI_CHCTRL_EN		BIT(0)
#define OMAP2_MCSPI_WAKEUPENABLE_WKEN	BIT(0)
struct omap2_mcspi_dma ;
#define DMA_MIN_BYTES			160
struct omap2_mcspi ;
struct omap2_mcspi_cs ;
struct omap2_mcspi_regs ;
static struct omap2_mcspi_regs omap2_mcspi_ctx[OMAP2_MCSPI_MAX_CTRL];
static struct workqueue_struct *omap2_mcspi_wq;
#define MOD_REG_BIT(val, mask, set) do  while (0)
static inline void mcspi_write_reg(struct spi_master *master,
int idx, u32 val)
static inline u32 mcspi_read_reg(struct spi_master *master, int idx)
static inline void mcspi_write_cs_reg(const struct spi_device *spi,
int idx, u32 val)
static inline u32 mcspi_read_cs_reg(const struct spi_device *spi, int idx)
static inline u32 mcspi_cached_chconf0(const struct spi_device *spi)
static inline void mcspi_write_chconf0(const struct spi_device *spi, u32 val)
static void omap2_mcspi_set_dma_req(const struct spi_device *spi,
int is_read, int enable)
static void omap2_mcspi_set_enable(const struct spi_device *spi, int enable)
static void omap2_mcspi_force_cs(struct spi_device *spi, int cs_active)
static void omap2_mcspi_set_master_mode(struct spi_master *master)
static void omap2_mcspi_restore_ctx(struct omap2_mcspi *mcspi)
static void omap2_mcspi_disable_clocks(struct omap2_mcspi *mcspi)
static int omap2_mcspi_enable_clocks(struct omap2_mcspi *mcspi)
static int mcspi_wait_for_reg_bit(void __iomem *reg, unsigned long bit)
static unsigned
omap2_mcspi_txrx_dma(struct spi_device *spi, struct spi_transfer *xfer)
static unsigned
omap2_mcspi_txrx_pio(struct spi_device *spi, struct spi_transfer *xfer)
static u32 omap2_mcspi_calc_divisor(u32 speed_hz)
static int omap2_mcspi_setup_transfer(struct spi_device *spi,
struct spi_transfer *t)
static void omap2_mcspi_dma_rx_callback(int lch, u16 ch_status, void *data)
static void omap2_mcspi_dma_tx_callback(int lch, u16 ch_status, void *data)
static int omap2_mcspi_request_dma(struct spi_device *spi)
static int omap2_mcspi_setup(struct spi_device *spi)
static void omap2_mcspi_cleanup(struct spi_device *spi)
static void omap2_mcspi_work(struct work_struct *work)
static int omap2_mcspi_transfer(struct spi_device *spi, struct spi_message *m)
static int __init omap2_mcspi_master_setup(struct omap2_mcspi *mcspi)
static int omap_mcspi_runtime_resume(struct device *dev)
static int __init omap2_mcspi_probe(struct platform_device *pdev)
static int __exit omap2_mcspi_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:omap2_mcspi");
static int omap2_mcspi_resume(struct device *dev)
#define	omap2_mcspi_resume	NULL
static const struct dev_pm_ops omap2_mcspi_pm_ops = ;
static struct platform_driver omap2_mcspi_driver = ;
static int __init omap2_mcspi_init(void)
subsys_initcall(omap2_mcspi_init);
static void __exit omap2_mcspi_exit(void)
module_exit(omap2_mcspi_exit);
MODULE_LICENSE("GPL");
