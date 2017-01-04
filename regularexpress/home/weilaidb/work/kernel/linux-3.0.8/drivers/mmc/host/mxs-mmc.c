#define DRIVER_NAME	"mxs-mmc"
#define MXS_MMC_DETECT_TIMEOUT			(HZ/2)
#define SSP_VERSION_LATEST	4
#define ssp_is_old()		(host->version < SSP_VERSION_LATEST)
#define HW_SSP_CTRL0				0x000
#define  BM_SSP_CTRL0_RUN			(1 << 29)
#define  BM_SSP_CTRL0_SDIO_IRQ_CHECK		(1 << 28)
#define  BM_SSP_CTRL0_IGNORE_CRC		(1 << 26)
#define  BM_SSP_CTRL0_READ			(1 << 25)
#define  BM_SSP_CTRL0_DATA_XFER			(1 << 24)
#define  BP_SSP_CTRL0_BUS_WIDTH			(22)
#define  BM_SSP_CTRL0_BUS_WIDTH			(0x3 << 22)
#define  BM_SSP_CTRL0_WAIT_FOR_IRQ		(1 << 21)
#define  BM_SSP_CTRL0_LONG_RESP			(1 << 19)
#define  BM_SSP_CTRL0_GET_RESP			(1 << 17)
#define  BM_SSP_CTRL0_ENABLE			(1 << 16)
#define  BP_SSP_CTRL0_XFER_COUNT		(0)
#define  BM_SSP_CTRL0_XFER_COUNT		(0xffff)
#define HW_SSP_CMD0				0x010
#define  BM_SSP_CMD0_DBL_DATA_RATE_EN		(1 << 25)
#define  BM_SSP_CMD0_SLOW_CLKING_EN		(1 << 22)
#define  BM_SSP_CMD0_CONT_CLKING_EN		(1 << 21)
#define  BM_SSP_CMD0_APPEND_8CYC		(1 << 20)
#define  BP_SSP_CMD0_BLOCK_SIZE			(16)
#define  BM_SSP_CMD0_BLOCK_SIZE			(0xf << 16)
#define  BP_SSP_CMD0_BLOCK_COUNT		(8)
#define  BM_SSP_CMD0_BLOCK_COUNT		(0xff << 8)
#define  BP_SSP_CMD0_CMD			(0)
#define  BM_SSP_CMD0_CMD			(0xff)
#define HW_SSP_CMD1				0x020
#define HW_SSP_XFER_SIZE			0x030
#define HW_SSP_BLOCK_SIZE			0x040
#define  BP_SSP_BLOCK_SIZE_BLOCK_COUNT		(4)
#define  BM_SSP_BLOCK_SIZE_BLOCK_COUNT		(0xffffff << 4)
#define  BP_SSP_BLOCK_SIZE_BLOCK_SIZE		(0)
#define  BM_SSP_BLOCK_SIZE_BLOCK_SIZE		(0xf)
#define HW_SSP_TIMING				(ssp_is_old() ? 0x050 : 0x070)
#define  BP_SSP_TIMING_TIMEOUT			(16)
#define  BM_SSP_TIMING_TIMEOUT			(0xffff << 16)
#define  BP_SSP_TIMING_CLOCK_DIVIDE		(8)
#define  BM_SSP_TIMING_CLOCK_DIVIDE		(0xff << 8)
#define  BP_SSP_TIMING_CLOCK_RATE		(0)
#define  BM_SSP_TIMING_CLOCK_RATE		(0xff)
#define HW_SSP_CTRL1				(ssp_is_old() ? 0x060 : 0x080)
#define  BM_SSP_CTRL1_SDIO_IRQ			(1 << 31)
#define  BM_SSP_CTRL1_SDIO_IRQ_EN		(1 << 30)
#define  BM_SSP_CTRL1_RESP_ERR_IRQ		(1 << 29)
#define  BM_SSP_CTRL1_RESP_ERR_IRQ_EN		(1 << 28)
#define  BM_SSP_CTRL1_RESP_TIMEOUT_IRQ		(1 << 27)
#define  BM_SSP_CTRL1_RESP_TIMEOUT_IRQ_EN	(1 << 26)
#define  BM_SSP_CTRL1_DATA_TIMEOUT_IRQ		(1 << 25)
#define  BM_SSP_CTRL1_DATA_TIMEOUT_IRQ_EN	(1 << 24)
#define  BM_SSP_CTRL1_DATA_CRC_IRQ		(1 << 23)
#define  BM_SSP_CTRL1_DATA_CRC_IRQ_EN		(1 << 22)
#define  BM_SSP_CTRL1_FIFO_UNDERRUN_IRQ		(1 << 21)
#define  BM_SSP_CTRL1_FIFO_UNDERRUN_IRQ_EN	(1 << 20)
#define  BM_SSP_CTRL1_RECV_TIMEOUT_IRQ		(1 << 17)
#define  BM_SSP_CTRL1_RECV_TIMEOUT_IRQ_EN	(1 << 16)
#define  BM_SSP_CTRL1_FIFO_OVERRUN_IRQ		(1 << 15)
#define  BM_SSP_CTRL1_FIFO_OVERRUN_IRQ_EN	(1 << 14)
#define  BM_SSP_CTRL1_DMA_ENABLE		(1 << 13)
#define  BM_SSP_CTRL1_POLARITY			(1 << 9)
#define  BP_SSP_CTRL1_WORD_LENGTH		(4)
#define  BM_SSP_CTRL1_WORD_LENGTH		(0xf << 4)
#define  BP_SSP_CTRL1_SSP_MODE			(0)
#define  BM_SSP_CTRL1_SSP_MODE			(0xf)
#define HW_SSP_SDRESP0				(ssp_is_old() ? 0x080 : 0x0a0)
#define HW_SSP_SDRESP1				(ssp_is_old() ? 0x090 : 0x0b0)
#define HW_SSP_SDRESP2				(ssp_is_old() ? 0x0a0 : 0x0c0)
#define HW_SSP_SDRESP3				(ssp_is_old() ? 0x0b0 : 0x0d0)
#define HW_SSP_STATUS				(ssp_is_old() ? 0x0c0 : 0x100)
#define  BM_SSP_STATUS_CARD_DETECT		(1 << 28)
#define  BM_SSP_STATUS_SDIO_IRQ			(1 << 17)
#define HW_SSP_VERSION				(cpu_is_mx23() ? 0x110 : 0x130)
#define  BP_SSP_VERSION_MAJOR			(24)
#define BF_SSP(value, field)	(((value) << BP_SSP_##field) & BM_SSP_##field)
#define MXS_MMC_IRQ_BITS	(BM_SSP_CTRL1_SDIO_IRQ		| \
BM_SSP_CTRL1_RESP_ERR_IRQ	| \
BM_SSP_CTRL1_RESP_TIMEOUT_IRQ	| \
BM_SSP_CTRL1_DATA_TIMEOUT_IRQ	| \
BM_SSP_CTRL1_DATA_CRC_IRQ	| \
BM_SSP_CTRL1_FIFO_UNDERRUN_IRQ	| \
BM_SSP_CTRL1_RECV_TIMEOUT_IRQ  | \
BM_SSP_CTRL1_FIFO_OVERRUN_IRQ)
#define SSP_PIO_NUM	3
struct mxs_mmc_host ;
static int mxs_mmc_get_ro(struct mmc_host *mmc)
static int mxs_mmc_get_cd(struct mmc_host *mmc)
static void mxs_mmc_reset(struct mxs_mmc_host *host)
static void mxs_mmc_start_cmd(struct mxs_mmc_host *host,
struct mmc_command *cmd);
static void mxs_mmc_request_done(struct mxs_mmc_host *host)
static void mxs_mmc_dma_irq_callback(void *param)
static irqreturn_t mxs_mmc_irq_handler(int irq, void *dev_id)
static struct dma_async_tx_descriptor *mxs_mmc_prep_dma(
struct mxs_mmc_host *host, unsigned int append)
static void mxs_mmc_bc(struct mxs_mmc_host *host)
static void mxs_mmc_ac(struct mxs_mmc_host *host)
static unsigned short mxs_ns_to_ssp_ticks(unsigned clock_rate, unsigned ns)
static void mxs_mmc_adtc(struct mxs_mmc_host *host)
static void mxs_mmc_start_cmd(struct mxs_mmc_host *host,
struct mmc_command *cmd)
static void mxs_mmc_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void mxs_mmc_set_clk_rate(struct mxs_mmc_host *host, unsigned int rate)
static void mxs_mmc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static void mxs_mmc_enable_sdio_irq(struct mmc_host *mmc, int enable)
static const struct mmc_host_ops mxs_mmc_ops = ;
static bool mxs_mmc_dma_filter(struct dma_chan *chan, void *param)
static int mxs_mmc_probe(struct platform_device *pdev)
static int mxs_mmc_remove(struct platform_device *pdev)
static int mxs_mmc_suspend(struct device *dev)
static int mxs_mmc_resume(struct device *dev)
static const struct dev_pm_ops mxs_mmc_pm_ops = ;
static struct platform_driver mxs_mmc_driver = ;
static int __init mxs_mmc_init(void)
static void __exit mxs_mmc_exit(void)
module_init(mxs_mmc_init);
module_exit(mxs_mmc_exit);
MODULE_DESCRIPTION("FREESCALE MXS MMC peripheral");
MODULE_AUTHOR("Freescale Semiconductor");
MODULE_LICENSE("GPL");
