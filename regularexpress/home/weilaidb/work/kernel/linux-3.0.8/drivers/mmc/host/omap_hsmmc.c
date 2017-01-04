#define OMAP_HSMMC_SYSCONFIG	0x0010
#define OMAP_HSMMC_SYSSTATUS	0x0014
#define OMAP_HSMMC_CON		0x002C
#define OMAP_HSMMC_BLK		0x0104
#define OMAP_HSMMC_ARG		0x0108
#define OMAP_HSMMC_CMD		0x010C
#define OMAP_HSMMC_RSP10	0x0110
#define OMAP_HSMMC_RSP32	0x0114
#define OMAP_HSMMC_RSP54	0x0118
#define OMAP_HSMMC_RSP76	0x011C
#define OMAP_HSMMC_DATA		0x0120
#define OMAP_HSMMC_HCTL		0x0128
#define OMAP_HSMMC_SYSCTL	0x012C
#define OMAP_HSMMC_STAT		0x0130
#define OMAP_HSMMC_IE		0x0134
#define OMAP_HSMMC_ISE		0x0138
#define OMAP_HSMMC_CAPA		0x0140
#define VS18			(1 << 26)
#define VS30			(1 << 25)
#define SDVS18			(0x5 << 9)
#define SDVS30			(0x6 << 9)
#define SDVS33			(0x7 << 9)
#define SDVS_MASK		0x00000E00
#define SDVSCLR			0xFFFFF1FF
#define SDVSDET			0x00000400
#define AUTOIDLE		0x1
#define SDBP			(1 << 8)
#define DTO			0xe
#define ICE			0x1
#define ICS			0x2
#define CEN			(1 << 2)
#define CLKD_MASK		0x0000FFC0
#define CLKD_SHIFT		6
#define DTO_MASK		0x000F0000
#define DTO_SHIFT		16
#define INT_EN_MASK		0x307F0033
#define BWR_ENABLE		(1 << 4)
#define BRR_ENABLE		(1 << 5)
#define DTO_ENABLE		(1 << 20)
#define INIT_STREAM		(1 << 1)
#define DP_SELECT		(1 << 21)
#define DDIR			(1 << 4)
#define DMA_EN			0x1
#define MSBS			(1 << 5)
#define BCE			(1 << 1)
#define FOUR_BIT		(1 << 1)
#define DW8			(1 << 5)
#define CC			0x1
#define TC			0x02
#define OD			0x1
#define ERR			(1 << 15)
#define CMD_TIMEOUT		(1 << 16)
#define DATA_TIMEOUT		(1 << 20)
#define CMD_CRC			(1 << 17)
#define DATA_CRC		(1 << 21)
#define CARD_ERR		(1 << 28)
#define STAT_CLEAR		0xFFFFFFFF
#define INIT_STREAM_CMD		0x00000000
#define DUAL_VOLT_OCR_BIT	7
#define SRC			(1 << 25)
#define SRD			(1 << 26)
#define SOFTRESET		(1 << 1)
#define RESETDONE		(1 << 0)
#define OMAP_MMC1_DEVID		0
#define OMAP_MMC2_DEVID		1
#define OMAP_MMC3_DEVID		2
#define OMAP_MMC4_DEVID		3
#define OMAP_MMC5_DEVID		4
#define MMC_TIMEOUT_MS		20
#define OMAP_MMC_MASTER_CLOCK	96000000
#define DRIVER_NAME		"omap_hsmmc"
#define OMAP_MMC_DISABLED_TIMEOUT	100
#define OMAP_MMC_SLEEP_TIMEOUT		1000
#define OMAP_MMC_OFF_TIMEOUT		8000
#define mmc_slot(host)		(host->pdata->slots[host->slot_id])
#define OMAP_HSMMC_READ(base, reg)	\
__raw_readl((base) + OMAP_HSMMC_##reg)
#define OMAP_HSMMC_WRITE(base, reg, val) \
__raw_writel((val), (base) + OMAP_HSMMC_##reg)
struct omap_hsmmc_host ;
static int omap_hsmmc_card_detect(struct device *dev, int slot)
static int omap_hsmmc_get_wp(struct device *dev, int slot)
static int omap_hsmmc_get_cover_state(struct device *dev, int slot)
static int omap_hsmmc_suspend_cdirq(struct device *dev, int slot)
static int omap_hsmmc_resume_cdirq(struct device *dev, int slot)
#define omap_hsmmc_suspend_cdirq	NULL
#define omap_hsmmc_resume_cdirq		NULL
static int omap_hsmmc_1_set_power(struct device *dev, int slot, int power_on,
int vdd)
static int omap_hsmmc_235_set_power(struct device *dev, int slot, int power_on,
int vdd)
static int omap_hsmmc_4_set_power(struct device *dev, int slot, int power_on,
int vdd)
static int omap_hsmmc_1_set_sleep(struct device *dev, int slot, int sleep,
int vdd, int cardsleep)
static int omap_hsmmc_235_set_sleep(struct device *dev, int slot, int sleep,
int vdd, int cardsleep)
static int omap_hsmmc_4_set_sleep(struct device *dev, int slot, int sleep,
int vdd, int cardsleep)
static int omap_hsmmc_reg_get(struct omap_hsmmc_host *host)
static void omap_hsmmc_reg_put(struct omap_hsmmc_host *host)
static inline int omap_hsmmc_have_reg(void)
static inline int omap_hsmmc_reg_get(struct omap_hsmmc_host *host)
static inline void omap_hsmmc_reg_put(struct omap_hsmmc_host *host)
static inline int omap_hsmmc_have_reg(void)
static int omap_hsmmc_gpio_init(struct omap_mmc_platform_data *pdata)
static void omap_hsmmc_gpio_free(struct omap_mmc_platform_data *pdata)
static void omap_hsmmc_stop_clock(struct omap_hsmmc_host *host)
static void omap_hsmmc_enable_irq(struct omap_hsmmc_host *host,
struct mmc_command *cmd)
static void omap_hsmmc_disable_irq(struct omap_hsmmc_host *host)
static int omap_hsmmc_context_restore(struct omap_hsmmc_host *host)
static void omap_hsmmc_context_save(struct omap_hsmmc_host *host)
static int omap_hsmmc_context_restore(struct omap_hsmmc_host *host)
static void omap_hsmmc_context_save(struct omap_hsmmc_host *host)
static void send_init_stream(struct omap_hsmmc_host *host)
static inline
int omap_hsmmc_cover_is_closed(struct omap_hsmmc_host *host)
static ssize_t
omap_hsmmc_show_cover_switch(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cover_switch, S_IRUGO, omap_hsmmc_show_cover_switch, NULL);
static ssize_t
omap_hsmmc_show_slot_name(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(slot_name, S_IRUGO, omap_hsmmc_show_slot_name, NULL);
static void
omap_hsmmc_start_command(struct omap_hsmmc_host *host, struct mmc_command *cmd,
struct mmc_data *data)
static int
omap_hsmmc_get_dma_dir(struct omap_hsmmc_host *host, struct mmc_data *data)
static void omap_hsmmc_request_done(struct omap_hsmmc_host *host, struct mmc_request *mrq)
static void
omap_hsmmc_xfer_done(struct omap_hsmmc_host *host, struct mmc_data *data)
static void
omap_hsmmc_cmd_done(struct omap_hsmmc_host *host, struct mmc_command *cmd)
static void omap_hsmmc_dma_cleanup(struct omap_hsmmc_host *host, int errno)
static void omap_hsmmc_report_irq(struct omap_hsmmc_host *host, u32 status)
static inline void omap_hsmmc_reset_controller_fsm(struct omap_hsmmc_host *host,
unsigned long bit)
static void omap_hsmmc_do_irq(struct omap_hsmmc_host *host, int status)
static irqreturn_t omap_hsmmc_irq(int irq, void *dev_id)
static void set_sd_bus_power(struct omap_hsmmc_host *host)
static int omap_hsmmc_switch_opcond(struct omap_hsmmc_host *host, int vdd)
static void omap_hsmmc_protect_card(struct omap_hsmmc_host *host)
static void omap_hsmmc_detect(struct work_struct *work)
static irqreturn_t omap_hsmmc_cd_handler(int irq, void *dev_id)
static int omap_hsmmc_get_dma_sync_dev(struct omap_hsmmc_host *host,
struct mmc_data *data)
static void omap_hsmmc_config_dma_params(struct omap_hsmmc_host *host,
struct mmc_data *data,
struct scatterlist *sgl)
static void omap_hsmmc_dma_cb(int lch, u16 ch_status, void *cb_data)
static int omap_hsmmc_start_dma_transfer(struct omap_hsmmc_host *host,
struct mmc_request *req)
static void set_data_timeout(struct omap_hsmmc_host *host,
unsigned int timeout_ns,
unsigned int timeout_clks)
static int
omap_hsmmc_prepare_data(struct omap_hsmmc_host *host, struct mmc_request *req)
static void omap_hsmmc_request(struct mmc_host *mmc, struct mmc_request *req)
static void omap_hsmmc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int omap_hsmmc_get_cd(struct mmc_host *mmc)
static int omap_hsmmc_get_ro(struct mmc_host *mmc)
static void omap_hsmmc_init_card(struct mmc_host *mmc, struct mmc_card *card)
static void omap_hsmmc_conf_bus_power(struct omap_hsmmc_host *host)
enum ;
static int omap_hsmmc_enabled_to_disabled(struct omap_hsmmc_host *host)
static int omap_hsmmc_disabled_to_sleep(struct omap_hsmmc_host *host)
static int omap_hsmmc_sleep_to_off(struct omap_hsmmc_host *host)
static int omap_hsmmc_disabled_to_enabled(struct omap_hsmmc_host *host)
static int omap_hsmmc_sleep_to_enabled(struct omap_hsmmc_host *host)
static int omap_hsmmc_off_to_enabled(struct omap_hsmmc_host *host)
static int omap_hsmmc_enable(struct mmc_host *mmc)
static int omap_hsmmc_disable(struct mmc_host *mmc, int lazy)
static int omap_hsmmc_enable_fclk(struct mmc_host *mmc)
static int omap_hsmmc_disable_fclk(struct mmc_host *mmc, int lazy)
static const struct mmc_host_ops omap_hsmmc_ops = ;
static const struct mmc_host_ops omap_hsmmc_ps_ops = ;
static int omap_hsmmc_regs_show(struct seq_file *s, void *data)
static int omap_hsmmc_regs_open(struct inode *inode, struct file *file)
static const struct file_operations mmc_regs_fops = ;
static void omap_hsmmc_debugfs(struct mmc_host *mmc)
static void omap_hsmmc_debugfs(struct mmc_host *mmc)
static int __init omap_hsmmc_probe(struct platform_device *pdev)
static int omap_hsmmc_remove(struct platform_device *pdev)
static int omap_hsmmc_suspend(struct device *dev)
static int omap_hsmmc_resume(struct device *dev)
#define omap_hsmmc_suspend	NULL
#define omap_hsmmc_resume		NULL
static struct dev_pm_ops omap_hsmmc_dev_pm_ops = ;
static struct platform_driver omap_hsmmc_driver = ;
static int __init omap_hsmmc_init(void)
static void __exit omap_hsmmc_cleanup(void)
module_init(omap_hsmmc_init);
module_exit(omap_hsmmc_cleanup);
MODULE_DESCRIPTION("OMAP High Speed Multimedia Card driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);
MODULE_AUTHOR("Texas Instruments Inc");
