#define JZ_REG_MMC_STRPCL	0x00
#define JZ_REG_MMC_STATUS	0x04
#define JZ_REG_MMC_CLKRT	0x08
#define JZ_REG_MMC_CMDAT	0x0C
#define JZ_REG_MMC_RESTO	0x10
#define JZ_REG_MMC_RDTO		0x14
#define JZ_REG_MMC_BLKLEN	0x18
#define JZ_REG_MMC_NOB		0x1C
#define JZ_REG_MMC_SNOB		0x20
#define JZ_REG_MMC_IMASK	0x24
#define JZ_REG_MMC_IREG		0x28
#define JZ_REG_MMC_CMD		0x2C
#define JZ_REG_MMC_ARG		0x30
#define JZ_REG_MMC_RESP_FIFO	0x34
#define JZ_REG_MMC_RXFIFO	0x38
#define JZ_REG_MMC_TXFIFO	0x3C
#define JZ_MMC_STRPCL_EXIT_MULTIPLE BIT(7)
#define JZ_MMC_STRPCL_EXIT_TRANSFER BIT(6)
#define JZ_MMC_STRPCL_START_READWAIT BIT(5)
#define JZ_MMC_STRPCL_STOP_READWAIT BIT(4)
#define JZ_MMC_STRPCL_RESET BIT(3)
#define JZ_MMC_STRPCL_START_OP BIT(2)
#define JZ_MMC_STRPCL_CLOCK_CONTROL (BIT(1) | BIT(0))
#define JZ_MMC_STRPCL_CLOCK_STOP BIT(0)
#define JZ_MMC_STRPCL_CLOCK_START BIT(1)
#define JZ_MMC_STATUS_IS_RESETTING BIT(15)
#define JZ_MMC_STATUS_SDIO_INT_ACTIVE BIT(14)
#define JZ_MMC_STATUS_PRG_DONE BIT(13)
#define JZ_MMC_STATUS_DATA_TRAN_DONE BIT(12)
#define JZ_MMC_STATUS_END_CMD_RES BIT(11)
#define JZ_MMC_STATUS_DATA_FIFO_AFULL BIT(10)
#define JZ_MMC_STATUS_IS_READWAIT BIT(9)
#define JZ_MMC_STATUS_CLK_EN BIT(8)
#define JZ_MMC_STATUS_DATA_FIFO_FULL BIT(7)
#define JZ_MMC_STATUS_DATA_FIFO_EMPTY BIT(6)
#define JZ_MMC_STATUS_CRC_RES_ERR BIT(5)
#define JZ_MMC_STATUS_CRC_READ_ERROR BIT(4)
#define JZ_MMC_STATUS_TIMEOUT_WRITE BIT(3)
#define JZ_MMC_STATUS_CRC_WRITE_ERROR BIT(2)
#define JZ_MMC_STATUS_TIMEOUT_RES BIT(1)
#define JZ_MMC_STATUS_TIMEOUT_READ BIT(0)
#define JZ_MMC_STATUS_READ_ERROR_MASK (BIT(4) | BIT(0))
#define JZ_MMC_STATUS_WRITE_ERROR_MASK (BIT(3) | BIT(2))
#define JZ_MMC_CMDAT_IO_ABORT BIT(11)
#define JZ_MMC_CMDAT_BUS_WIDTH_4BIT BIT(10)
#define JZ_MMC_CMDAT_DMA_EN BIT(8)
#define JZ_MMC_CMDAT_INIT BIT(7)
#define JZ_MMC_CMDAT_BUSY BIT(6)
#define JZ_MMC_CMDAT_STREAM BIT(5)
#define JZ_MMC_CMDAT_WRITE BIT(4)
#define JZ_MMC_CMDAT_DATA_EN BIT(3)
#define JZ_MMC_CMDAT_RESPONSE_FORMAT (BIT(2) | BIT(1) | BIT(0))
#define JZ_MMC_CMDAT_RSP_R1 1
#define JZ_MMC_CMDAT_RSP_R2 2
#define JZ_MMC_CMDAT_RSP_R3 3
#define JZ_MMC_IRQ_SDIO BIT(7)
#define JZ_MMC_IRQ_TXFIFO_WR_REQ BIT(6)
#define JZ_MMC_IRQ_RXFIFO_RD_REQ BIT(5)
#define JZ_MMC_IRQ_END_CMD_RES BIT(2)
#define JZ_MMC_IRQ_PRG_DONE BIT(1)
#define JZ_MMC_IRQ_DATA_TRAN_DONE BIT(0)
#define JZ_MMC_CLK_RATE 24000000
enum jz4740_mmc_state ;
struct jz4740_mmc_host ;
static void jz4740_mmc_set_irq_enabled(struct jz4740_mmc_host *host,
unsigned int irq, bool enabled)
static void jz4740_mmc_clock_enable(struct jz4740_mmc_host *host,
bool start_transfer)
static void jz4740_mmc_clock_disable(struct jz4740_mmc_host *host)
static void jz4740_mmc_reset(struct jz4740_mmc_host *host)
static void jz4740_mmc_request_done(struct jz4740_mmc_host *host)
static unsigned int jz4740_mmc_poll_irq(struct jz4740_mmc_host *host,
unsigned int irq)
static void jz4740_mmc_transfer_check_state(struct jz4740_mmc_host *host,
struct mmc_data *data)
static bool jz4740_mmc_write_data(struct jz4740_mmc_host *host,
struct mmc_data *data)
static bool jz4740_mmc_read_data(struct jz4740_mmc_host *host,
struct mmc_data *data)
static void jz4740_mmc_timeout(unsigned long data)
static void jz4740_mmc_read_response(struct jz4740_mmc_host *host,
struct mmc_command *cmd)
static void jz4740_mmc_send_command(struct jz4740_mmc_host *host,
struct mmc_command *cmd)
static void jz_mmc_prepare_data_transfer(struct jz4740_mmc_host *host)
static irqreturn_t jz_mmc_irq_worker(int irq, void *devid)
static irqreturn_t jz_mmc_irq(int irq, void *devid)
static int jz4740_mmc_set_clock_rate(struct jz4740_mmc_host *host, int rate)
static void jz4740_mmc_request(struct mmc_host *mmc, struct mmc_request *req)
static void jz4740_mmc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int jz4740_mmc_get_ro(struct mmc_host *mmc)
static int jz4740_mmc_get_cd(struct mmc_host *mmc)
static irqreturn_t jz4740_mmc_card_detect_irq(int irq, void *devid)
static void jz4740_mmc_enable_sdio_irq(struct mmc_host *mmc, int enable)
static const struct mmc_host_ops jz4740_mmc_ops = ;
static const struct jz_gpio_bulk_request jz4740_mmc_pins[] = ;
static int __devinit jz4740_mmc_request_gpio(struct device *dev, int gpio,
const char *name, bool output, int value)
static int __devinit jz4740_mmc_request_gpios(struct platform_device *pdev)
static int __devinit jz4740_mmc_request_cd_irq(struct platform_device *pdev,
struct jz4740_mmc_host *host)
static void jz4740_mmc_free_gpios(struct platform_device *pdev)
static inline size_t jz4740_mmc_num_pins(struct jz4740_mmc_host *host)
static int __devinit jz4740_mmc_probe(struct platform_device* pdev)
static int __devexit jz4740_mmc_remove(struct platform_device *pdev)
static int jz4740_mmc_suspend(struct device *dev)
static int jz4740_mmc_resume(struct device *dev)
const struct dev_pm_ops jz4740_mmc_pm_ops = ;
#define JZ4740_MMC_PM_OPS (&jz4740_mmc_pm_ops)
#define JZ4740_MMC_PM_OPS NULL
static struct platform_driver jz4740_mmc_driver = ;
static int __init jz4740_mmc_init(void)
module_init(jz4740_mmc_init);
static void __exit jz4740_mmc_exit(void)
module_exit(jz4740_mmc_exit);
MODULE_DESCRIPTION("JZ4740 SD/MMC controller driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
