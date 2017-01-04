#define DRIVER_NAME "imx-mmc"
#define IMXMCI_INT_MASK_DEFAULT (INT_MASK_BUF_READY | INT_MASK_DATA_TRAN | \
INT_MASK_WRITE_OP_DONE | INT_MASK_END_CMD_RES | \
INT_MASK_AUTO_CARD_DETECT | INT_MASK_DAT0_EN | INT_MASK_SDIO)
struct imxmci_host ;
#define IMXMCI_PEND_IRQ_b	0
#define IMXMCI_PEND_DMA_END_b	1
#define IMXMCI_PEND_DMA_ERR_b	2
#define IMXMCI_PEND_WAIT_RESP_b	3
#define IMXMCI_PEND_DMA_DATA_b	4
#define IMXMCI_PEND_CPU_DATA_b	5
#define IMXMCI_PEND_CARD_XCHG_b	6
#define IMXMCI_PEND_SET_INIT_b	7
#define IMXMCI_PEND_STARTED_b	8
#define IMXMCI_PEND_IRQ_m	(1 << IMXMCI_PEND_IRQ_b)
#define IMXMCI_PEND_DMA_END_m	(1 << IMXMCI_PEND_DMA_END_b)
#define IMXMCI_PEND_DMA_ERR_m	(1 << IMXMCI_PEND_DMA_ERR_b)
#define IMXMCI_PEND_WAIT_RESP_m	(1 << IMXMCI_PEND_WAIT_RESP_b)
#define IMXMCI_PEND_DMA_DATA_m	(1 << IMXMCI_PEND_DMA_DATA_b)
#define IMXMCI_PEND_CPU_DATA_m	(1 << IMXMCI_PEND_CPU_DATA_b)
#define IMXMCI_PEND_CARD_XCHG_m	(1 << IMXMCI_PEND_CARD_XCHG_b)
#define IMXMCI_PEND_SET_INIT_m	(1 << IMXMCI_PEND_SET_INIT_b)
#define IMXMCI_PEND_STARTED_m	(1 << IMXMCI_PEND_STARTED_b)
static void imxmci_stop_clock(struct imxmci_host *host)
static int imxmci_start_clock(struct imxmci_host *host)
static void imxmci_softreset(struct imxmci_host *host)
static int imxmci_busy_wait_for_status(struct imxmci_host *host,
unsigned int *pstat, unsigned int stat_mask,
int timeout, const char *where)
static void imxmci_setup_data(struct imxmci_host *host, struct mmc_data *data)
static void imxmci_start_cmd(struct imxmci_host *host, struct mmc_command *cmd, unsigned int cmdat)
static void imxmci_finish_request(struct imxmci_host *host, struct mmc_request *req)
static int imxmci_finish_data(struct imxmci_host *host, unsigned int stat)
static int imxmci_cmd_done(struct imxmci_host *host, unsigned int stat)
static int imxmci_data_done(struct imxmci_host *host, unsigned int stat)
static int imxmci_cpu_driven_data(struct imxmci_host *host, unsigned int *pstat)
static void imxmci_dma_irq(int dma, void *devid)
static irqreturn_t imxmci_irq(int irq, void *devid)
static void imxmci_tasklet_fnc(unsigned long data)
static void imxmci_request(struct mmc_host *mmc, struct mmc_request *req)
#define CLK_RATE 19200000
static void imxmci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int imxmci_get_ro(struct mmc_host *mmc)
static const struct mmc_host_ops imxmci_ops = ;
static void imxmci_check_status(unsigned long data)
static int __init imxmci_probe(struct platform_device *pdev)
static int __exit imxmci_remove(struct platform_device *pdev)
static int imxmci_suspend(struct platform_device *dev, pm_message_t state)
static int imxmci_resume(struct platform_device *dev)
#define imxmci_suspend  NULL
#define imxmci_resume   NULL
static struct platform_driver imxmci_driver = ;
static int __init imxmci_init(void)
static void __exit imxmci_exit(void)
module_init(imxmci_init);
module_exit(imxmci_exit);
MODULE_DESCRIPTION("i.MX Multimedia Card Interface Driver");
MODULE_AUTHOR("Sascha Hauer, Pengutronix");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:imx-mmc");
