#define DRIVER_NAME	"bfin-sdh"
#if defined(CONFIG_BF51x)
#define bfin_read_SDH_PWR_CTL		bfin_read_RSI_PWR_CTL
#define bfin_write_SDH_PWR_CTL		bfin_write_RSI_PWR_CTL
#define bfin_read_SDH_CLK_CTL		bfin_read_RSI_CLK_CTL
#define bfin_write_SDH_CLK_CTL		bfin_write_RSI_CLK_CTL
#define bfin_write_SDH_ARGUMENT		bfin_write_RSI_ARGUMENT
#define bfin_write_SDH_COMMAND		bfin_write_RSI_COMMAND
#define bfin_write_SDH_DATA_TIMER	bfin_write_RSI_DATA_TIMER
#define bfin_read_SDH_RESPONSE0		bfin_read_RSI_RESPONSE0
#define bfin_read_SDH_RESPONSE1		bfin_read_RSI_RESPONSE1
#define bfin_read_SDH_RESPONSE2		bfin_read_RSI_RESPONSE2
#define bfin_read_SDH_RESPONSE3		bfin_read_RSI_RESPONSE3
#define bfin_write_SDH_DATA_LGTH	bfin_write_RSI_DATA_LGTH
#define bfin_read_SDH_DATA_CTL		bfin_read_RSI_DATA_CTL
#define bfin_write_SDH_DATA_CTL		bfin_write_RSI_DATA_CTL
#define bfin_read_SDH_DATA_CNT		bfin_read_RSI_DATA_CNT
#define bfin_write_SDH_STATUS_CLR	bfin_write_RSI_STATUS_CLR
#define bfin_read_SDH_E_STATUS		bfin_read_RSI_E_STATUS
#define bfin_write_SDH_E_STATUS		bfin_write_RSI_E_STATUS
#define bfin_read_SDH_STATUS		bfin_read_RSI_STATUS
#define bfin_write_SDH_MASK0		bfin_write_RSI_MASK0
#define bfin_read_SDH_CFG		bfin_read_RSI_CFG
#define bfin_write_SDH_CFG		bfin_write_RSI_CFG
struct dma_desc_array  __packed;
struct sdh_host ;
static struct bfin_sd_host *get_sdh_data(struct platform_device *pdev)
static void sdh_stop_clock(struct sdh_host *host)
static void sdh_enable_stat_irq(struct sdh_host *host, unsigned int mask)
static void sdh_disable_stat_irq(struct sdh_host *host, unsigned int mask)
static int sdh_setup_data(struct sdh_host *host, struct mmc_data *data)
static void sdh_start_cmd(struct sdh_host *host, struct mmc_command *cmd)
static void sdh_finish_request(struct sdh_host *host, struct mmc_request *mrq)
static int sdh_cmd_done(struct sdh_host *host, unsigned int stat)
static int sdh_data_done(struct sdh_host *host, unsigned int stat)
static void sdh_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void sdh_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static const struct mmc_host_ops sdh_ops = ;
static irqreturn_t sdh_dma_irq(int irq, void *devid)
static irqreturn_t sdh_stat_irq(int irq, void *devid)
static int __devinit sdh_probe(struct platform_device *pdev)
static int __devexit sdh_remove(struct platform_device *pdev)
static int sdh_suspend(struct platform_device *dev, pm_message_t state)
static int sdh_resume(struct platform_device *dev)
# define sdh_suspend NULL
# define sdh_resume  NULL
static struct platform_driver sdh_driver = ;
static int __init sdh_init(void)
module_init(sdh_init);
static void __exit sdh_exit(void)
module_exit(sdh_exit);
MODULE_DESCRIPTION("Blackfin Secure Digital Host Driver");
MODULE_AUTHOR("Cliff Cai, Roy Huang");
MODULE_LICENSE("GPL");
