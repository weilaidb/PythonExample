#define DRIVER_NAME "sdhci"
#define DBG(f, x...) \
pr_debug(DRIVER_NAME " [%s()]: " f, __func__,## x)
#if defined(CONFIG_LEDS_CLASS) || (defined(CONFIG_LEDS_CLASS_MODULE) && \
defined(CONFIG_MMC_SDHCI_MODULE))
#define SDHCI_USE_LEDS_CLASS
#define MAX_TUNING_LOOP 40
static unsigned int debug_quirks = 0;
static void sdhci_finish_data(struct sdhci_host *);
static void sdhci_send_command(struct sdhci_host *, struct mmc_command *);
static void sdhci_finish_command(struct sdhci_host *);
static int sdhci_execute_tuning(struct mmc_host *mmc);
static void sdhci_tuning_timer(unsigned long data);
static void sdhci_dumpregs(struct sdhci_host *host)
static void sdhci_clear_set_irqs(struct sdhci_host *host, u32 clear, u32 set)
static void sdhci_unmask_irqs(struct sdhci_host *host, u32 irqs)
static void sdhci_mask_irqs(struct sdhci_host *host, u32 irqs)
static void sdhci_set_card_detection(struct sdhci_host *host, bool enable)
static void sdhci_enable_card_detection(struct sdhci_host *host)
static void sdhci_disable_card_detection(struct sdhci_host *host)
static void sdhci_reset(struct sdhci_host *host, u8 mask)
static void sdhci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios);
static void sdhci_init(struct sdhci_host *host, int soft)
static void sdhci_reinit(struct sdhci_host *host)
static void sdhci_activate_led(struct sdhci_host *host)
static void sdhci_deactivate_led(struct sdhci_host *host)
static void sdhci_led_control(struct led_classdev *led,
enum led_brightness brightness)
static void sdhci_read_block_pio(struct sdhci_host *host)
static void sdhci_write_block_pio(struct sdhci_host *host)
static void sdhci_transfer_pio(struct sdhci_host *host)
static char *sdhci_kmap_atomic(struct scatterlist *sg, unsigned long *flags)
static void sdhci_kunmap_atomic(void *buffer, unsigned long *flags)
static void sdhci_set_adma_desc(u8 *desc, u32 addr, int len, unsigned cmd)
static int sdhci_adma_table_pre(struct sdhci_host *host,
struct mmc_data *data)
static void sdhci_adma_table_post(struct sdhci_host *host,
struct mmc_data *data)
static u8 sdhci_calc_timeout(struct sdhci_host *host, struct mmc_command *cmd)
static void sdhci_set_transfer_irqs(struct sdhci_host *host)
static void sdhci_prepare_data(struct sdhci_host *host, struct mmc_command *cmd)
static void sdhci_set_transfer_mode(struct sdhci_host *host,
struct mmc_command *cmd)
static void sdhci_finish_data(struct sdhci_host *host)
static void sdhci_send_command(struct sdhci_host *host, struct mmc_command *cmd)
static void sdhci_finish_command(struct sdhci_host *host)
static void sdhci_set_clock(struct sdhci_host *host, unsigned int clock)
static void sdhci_set_power(struct sdhci_host *host, unsigned short power)
static void sdhci_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void sdhci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int check_ro(struct sdhci_host *host)
#define SAMPLE_COUNT	5
static int sdhci_get_ro(struct mmc_host *mmc)
static void sdhci_enable_sdio_irq(struct mmc_host *mmc, int enable)
static int sdhci_start_signal_voltage_switch(struct mmc_host *mmc,
struct mmc_ios *ios)
static int sdhci_execute_tuning(struct mmc_host *mmc)
static void sdhci_enable_preset_value(struct mmc_host *mmc, bool enable)
static const struct mmc_host_ops sdhci_ops = ;
static void sdhci_tasklet_card(unsigned long param)
static void sdhci_tasklet_finish(unsigned long param)
static void sdhci_timeout_timer(unsigned long data)
static void sdhci_tuning_timer(unsigned long data)
static void sdhci_cmd_irq(struct sdhci_host *host, u32 intmask)
static void sdhci_show_adma_error(struct sdhci_host *host)
static void sdhci_show_adma_error(struct sdhci_host *host)
static void sdhci_data_irq(struct sdhci_host *host, u32 intmask)
static irqreturn_t sdhci_irq(int irq, void *dev_id)
int sdhci_suspend_host(struct sdhci_host *host, pm_message_t state)
EXPORT_SYMBOL_GPL(sdhci_suspend_host);
int sdhci_resume_host(struct sdhci_host *host)
EXPORT_SYMBOL_GPL(sdhci_resume_host);
void sdhci_enable_irq_wakeups(struct sdhci_host *host)
EXPORT_SYMBOL_GPL(sdhci_enable_irq_wakeups);
struct sdhci_host *sdhci_alloc_host(struct device *dev,
size_t priv_size)
EXPORT_SYMBOL_GPL(sdhci_alloc_host);
int sdhci_add_host(struct sdhci_host *host)
EXPORT_SYMBOL_GPL(sdhci_add_host);
void sdhci_remove_host(struct sdhci_host *host, int dead)
EXPORT_SYMBOL_GPL(sdhci_remove_host);
void sdhci_free_host(struct sdhci_host *host)
EXPORT_SYMBOL_GPL(sdhci_free_host);
static int __init sdhci_drv_init(void)
static void __exit sdhci_drv_exit(void)
module_init(sdhci_drv_init);
module_exit(sdhci_drv_exit);
module_param(debug_quirks, uint, 0444);
MODULE_AUTHOR("Pierre Ossman <pierre@ossman.eu>");
MODULE_DESCRIPTION("Secure Digital Host Controller Interface core driver");
MODULE_LICENSE("GPL");
MODULE_PARM_DESC(debug_quirks, "Force certain quirks.");
