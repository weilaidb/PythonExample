#define DRIVER_NAME "mxc-mmc"
#define MMC_REG_STR_STP_CLK		0x00
#define MMC_REG_STATUS			0x04
#define MMC_REG_CLK_RATE		0x08
#define MMC_REG_CMD_DAT_CONT		0x0C
#define MMC_REG_RES_TO			0x10
#define MMC_REG_READ_TO			0x14
#define MMC_REG_BLK_LEN			0x18
#define MMC_REG_NOB			0x1C
#define MMC_REG_REV_NO			0x20
#define MMC_REG_INT_CNTR		0x24
#define MMC_REG_CMD			0x28
#define MMC_REG_ARG			0x2C
#define MMC_REG_RES_FIFO		0x34
#define MMC_REG_BUFFER_ACCESS		0x38
#define STR_STP_CLK_RESET               (1 << 3)
#define STR_STP_CLK_START_CLK           (1 << 1)
#define STR_STP_CLK_STOP_CLK            (1 << 0)
#define STATUS_CARD_INSERTION		(1 << 31)
#define STATUS_CARD_REMOVAL		(1 << 30)
#define STATUS_YBUF_EMPTY		(1 << 29)
#define STATUS_XBUF_EMPTY		(1 << 28)
#define STATUS_YBUF_FULL		(1 << 27)
#define STATUS_XBUF_FULL		(1 << 26)
#define STATUS_BUF_UND_RUN		(1 << 25)
#define STATUS_BUF_OVFL			(1 << 24)
#define STATUS_SDIO_INT_ACTIVE		(1 << 14)
#define STATUS_END_CMD_RESP		(1 << 13)
#define STATUS_WRITE_OP_DONE		(1 << 12)
#define STATUS_DATA_TRANS_DONE		(1 << 11)
#define STATUS_READ_OP_DONE		(1 << 11)
#define STATUS_WR_CRC_ERROR_CODE_MASK	(3 << 10)
#define STATUS_CARD_BUS_CLK_RUN		(1 << 8)
#define STATUS_BUF_READ_RDY		(1 << 7)
#define STATUS_BUF_WRITE_RDY		(1 << 6)
#define STATUS_RESP_CRC_ERR		(1 << 5)
#define STATUS_CRC_READ_ERR		(1 << 3)
#define STATUS_CRC_WRITE_ERR		(1 << 2)
#define STATUS_TIME_OUT_RESP		(1 << 1)
#define STATUS_TIME_OUT_READ		(1 << 0)
#define STATUS_ERR_MASK			0x2f
#define CMD_DAT_CONT_CMD_RESP_LONG_OFF	(1 << 12)
#define CMD_DAT_CONT_STOP_READWAIT	(1 << 11)
#define CMD_DAT_CONT_START_READWAIT	(1 << 10)
#define CMD_DAT_CONT_BUS_WIDTH_4	(2 << 8)
#define CMD_DAT_CONT_INIT		(1 << 7)
#define CMD_DAT_CONT_WRITE		(1 << 4)
#define CMD_DAT_CONT_DATA_ENABLE	(1 << 3)
#define CMD_DAT_CONT_RESPONSE_48BIT_CRC	(1 << 0)
#define CMD_DAT_CONT_RESPONSE_136BIT	(2 << 0)
#define CMD_DAT_CONT_RESPONSE_48BIT	(3 << 0)
#define INT_SDIO_INT_WKP_EN		(1 << 18)
#define INT_CARD_INSERTION_WKP_EN	(1 << 17)
#define INT_CARD_REMOVAL_WKP_EN		(1 << 16)
#define INT_CARD_INSERTION_EN		(1 << 15)
#define INT_CARD_REMOVAL_EN		(1 << 14)
#define INT_SDIO_IRQ_EN			(1 << 13)
#define INT_DAT0_EN			(1 << 12)
#define INT_BUF_READ_EN			(1 << 4)
#define INT_BUF_WRITE_EN		(1 << 3)
#define INT_END_CMD_RES_EN		(1 << 2)
#define INT_WRITE_OP_DONE_EN		(1 << 1)
#define INT_READ_OP_EN			(1 << 0)
struct mxcmci_host ;
static void mxcmci_set_clk_rate(struct mxcmci_host *host, unsigned int clk_ios);
static inline void mxcmci_init_ocr(struct mxcmci_host *host)
static inline void mxcmci_set_power(struct mxcmci_host *host,
unsigned char power_mode,
unsigned int vdd)
static inline int mxcmci_use_dma(struct mxcmci_host *host)
static void mxcmci_softreset(struct mxcmci_host *host)
static int mxcmci_setup_dma(struct mmc_host *mmc);
static int mxcmci_setup_data(struct mxcmci_host *host, struct mmc_data *data)
static int mxcmci_start_cmd(struct mxcmci_host *host, struct mmc_command *cmd,
unsigned int cmdat)
static void mxcmci_finish_request(struct mxcmci_host *host,
struct mmc_request *req)
static int mxcmci_finish_data(struct mxcmci_host *host, unsigned int stat)
static void mxcmci_read_response(struct mxcmci_host *host, unsigned int stat)
static int mxcmci_poll_status(struct mxcmci_host *host, u32 mask)
static int mxcmci_pull(struct mxcmci_host *host, void *_buf, int bytes)
static int mxcmci_push(struct mxcmci_host *host, void *_buf, int bytes)
static int mxcmci_transfer_data(struct mxcmci_host *host)
static void mxcmci_datawork(struct work_struct *work)
static void mxcmci_data_done(struct mxcmci_host *host, unsigned int stat)
static void mxcmci_cmd_done(struct mxcmci_host *host, unsigned int stat)
static irqreturn_t mxcmci_irq(int irq, void *devid)
static void mxcmci_request(struct mmc_host *mmc, struct mmc_request *req)
static void mxcmci_set_clk_rate(struct mxcmci_host *host, unsigned int clk_ios)
static int mxcmci_setup_dma(struct mmc_host *mmc)
static void mxcmci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static irqreturn_t mxcmci_detect_irq(int irq, void *data)
static int mxcmci_get_ro(struct mmc_host *mmc)
static void mxcmci_enable_sdio_irq(struct mmc_host *mmc, int enable)
static void mxcmci_init_card(struct mmc_host *host, struct mmc_card *card)
static bool filter(struct dma_chan *chan, void *param)
static const struct mmc_host_ops mxcmci_ops = ;
static int mxcmci_probe(struct platform_device *pdev)
static int mxcmci_remove(struct platform_device *pdev)
static int mxcmci_suspend(struct device *dev)
static int mxcmci_resume(struct device *dev)
static const struct dev_pm_ops mxcmci_pm_ops = ;
static struct platform_driver mxcmci_driver = ;
static int __init mxcmci_init(void)
static void __exit mxcmci_exit(void)
module_init(mxcmci_init);
module_exit(mxcmci_exit);
MODULE_DESCRIPTION("i.MX Multimedia Card Interface Driver");
MODULE_AUTHOR("Sascha Hauer, Pengutronix");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:imx-mmc");
