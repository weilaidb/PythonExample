#define DRIVER_NAME	"mvsdio"
static int maxfreq = MVSD_CLOCKRATE_MAX;
static int nodma;
struct mvsd_host ;
#define mvsd_write(offs, val)	writel(val, iobase + (offs))
#define mvsd_read(offs)		readl(iobase + (offs))
static int mvsd_setup_data(struct mvsd_host *host, struct mmc_data *data)
static void mvsd_request(struct mmc_host *mmc, struct mmc_request *mrq)
static u32 mvsd_finish_cmd(struct mvsd_host *host, struct mmc_command *cmd,
u32 err_status)
static u32 mvsd_finish_data(struct mvsd_host *host, struct mmc_data *data,
u32 err_status)
static irqreturn_t mvsd_irq(int irq, void *dev)
static void mvsd_timeout_timer(unsigned long data)
static irqreturn_t mvsd_card_detect_irq(int irq, void *dev)
static void mvsd_enable_sdio_irq(struct mmc_host *mmc, int enable)
static int mvsd_get_ro(struct mmc_host *mmc)
static void mvsd_power_up(struct mvsd_host *host)
static void mvsd_power_down(struct mvsd_host *host)
static void mvsd_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static const struct mmc_host_ops mvsd_ops = ;
static void __init mv_conf_mbus_windows(struct mvsd_host *host,
struct mbus_dram_target_info *dram)
static int __init mvsd_probe(struct platform_device *pdev)
static int __exit mvsd_remove(struct platform_device *pdev)
static int mvsd_suspend(struct platform_device *dev, pm_message_t state)
static int mvsd_resume(struct platform_device *dev)
#define mvsd_suspend	NULL
#define mvsd_resume	NULL
static struct platform_driver mvsd_driver = ;
static int __init mvsd_init(void)
static void __exit mvsd_exit(void)
module_init(mvsd_init);
module_exit(mvsd_exit);
module_param(maxfreq, int, 0);
module_param(nodma, int, 0);
MODULE_AUTHOR("Maen Suleiman, Nicolas Pitre");
MODULE_DESCRIPTION("Marvell MMC,SD,SDIO Host Controller driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:mvsdio");
