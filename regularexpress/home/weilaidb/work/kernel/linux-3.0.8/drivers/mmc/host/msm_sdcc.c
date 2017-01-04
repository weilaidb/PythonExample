#define DRIVER_NAME "msm-sdcc"
#define BUSCLK_PWRSAVE 1
#define BUSCLK_TIMEOUT (HZ)
static unsigned int msmsdcc_fmin = 144000;
static unsigned int msmsdcc_fmax = 50000000;
static unsigned int msmsdcc_4bit = 1;
static unsigned int msmsdcc_pwrsave = 1;
static unsigned int msmsdcc_piopoll = 1;
static unsigned int msmsdcc_sdioirq;
#define PIO_SPINMAX 30
#define CMD_SPINMAX 20
static inline void
msmsdcc_disable_clocks(struct msmsdcc_host *host, int deferr)
static inline int
msmsdcc_enable_clocks(struct msmsdcc_host *host)
static inline unsigned int
msmsdcc_readl(struct msmsdcc_host *host, unsigned int reg)
static inline void
msmsdcc_writel(struct msmsdcc_host *host, u32 data, unsigned int reg)
static void
msmsdcc_start_command(struct msmsdcc_host *host, struct mmc_command *cmd,
u32 c);
static void msmsdcc_reset_and_restore(struct msmsdcc_host *host)
static void
msmsdcc_request_end(struct msmsdcc_host *host, struct mmc_request *mrq)
static void
msmsdcc_stop_data(struct msmsdcc_host *host)
uint32_t msmsdcc_fifo_addr(struct msmsdcc_host *host)
static inline void
msmsdcc_start_command_exec(struct msmsdcc_host *host, u32 arg, u32 c)
static void
msmsdcc_dma_exec_func(struct msm_dmov_cmd *cmd)
static void
msmsdcc_dma_complete_tlet(unsigned long data)
static void
msmsdcc_dma_complete_func(struct msm_dmov_cmd *cmd,
unsigned int result,
struct msm_dmov_errdata *err)
static int validate_dma(struct msmsdcc_host *host, struct mmc_data *data)
static int msmsdcc_config_dma(struct msmsdcc_host *host, struct mmc_data *data)
static int
snoop_cccr_abort(struct mmc_command *cmd)
static void
msmsdcc_start_command_deferred(struct msmsdcc_host *host,
struct mmc_command *cmd, u32 *c)
static void
msmsdcc_start_data(struct msmsdcc_host *host, struct mmc_data *data,
struct mmc_command *cmd, u32 c)
static void
msmsdcc_start_command(struct msmsdcc_host *host, struct mmc_command *cmd, u32 c)
static void
msmsdcc_data_err(struct msmsdcc_host *host, struct mmc_data *data,
unsigned int status)
static int
msmsdcc_pio_read(struct msmsdcc_host *host, char *buffer, unsigned int remain)
static int
msmsdcc_pio_write(struct msmsdcc_host *host, char *buffer,
unsigned int remain, u32 status)
static int
msmsdcc_spin_on_status(struct msmsdcc_host *host, uint32_t mask, int maxspin)
static irqreturn_t
msmsdcc_pio_irq(int irq, void *dev_id)
static void msmsdcc_do_cmdirq(struct msmsdcc_host *host, uint32_t status)
static void
msmsdcc_handle_irq_data(struct msmsdcc_host *host, u32 status,
void __iomem *base)
static irqreturn_t
msmsdcc_irq(int irq, void *dev_id)
static void
msmsdcc_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void msmsdcc_setup_gpio(struct msmsdcc_host *host, bool enable)
static void
msmsdcc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static void msmsdcc_enable_sdio_irq(struct mmc_host *mmc, int enable)
static const struct mmc_host_ops msmsdcc_ops = ;
static void
msmsdcc_check_status(unsigned long data)
static irqreturn_t
msmsdcc_platform_status_irq(int irq, void *dev_id)
static void
msmsdcc_status_notify_cb(int card_present, void *dev_id)
static void
msmsdcc_busclk_expired(unsigned long _data)
static int
msmsdcc_init_dma(struct msmsdcc_host *host)
static int
msmsdcc_probe(struct platform_device *pdev)
static void
do_resume_work(struct work_struct *work)
static int
msmsdcc_suspend(struct platform_device *dev, pm_message_t state)
static int
msmsdcc_resume(struct platform_device *dev)
#define msmsdcc_suspend	0
#define msmsdcc_resume 0
static struct platform_driver msmsdcc_driver = ;
static int __init msmsdcc_init(void)
static void __exit msmsdcc_exit(void)
module_init(msmsdcc_init);
module_exit(msmsdcc_exit);
MODULE_DESCRIPTION("Qualcomm MSM 7X00A Multimedia Card Interface driver");
MODULE_LICENSE("GPL");
