static struct workqueue_struct *workqueue;
int use_spi_crc = 1;
module_param(use_spi_crc, bool, 0);
int mmc_assume_removable;
int mmc_assume_removable = 1;
EXPORT_SYMBOL(mmc_assume_removable);
module_param_named(removable, mmc_assume_removable, bool, 0644);
MODULE_PARM_DESC(
removable,
"MMC/SD cards are removable and may be removed during suspend");
static int mmc_schedule_delayed_work(struct delayed_work *work,
unsigned long delay)
static void mmc_flush_scheduled_work(void)
void mmc_request_done(struct mmc_host *host, struct mmc_request *mrq)
EXPORT_SYMBOL(mmc_request_done);
static void
mmc_start_request(struct mmc_host *host, struct mmc_request *mrq)
static void mmc_wait_done(struct mmc_request *mrq)
void mmc_wait_for_req(struct mmc_host *host, struct mmc_request *mrq)
EXPORT_SYMBOL(mmc_wait_for_req);
int mmc_wait_for_cmd(struct mmc_host *host, struct mmc_command *cmd, int retries)
EXPORT_SYMBOL(mmc_wait_for_cmd);
void mmc_set_data_timeout(struct mmc_data *data, const struct mmc_card *card)
EXPORT_SYMBOL(mmc_set_data_timeout);
unsigned int mmc_align_data_size(struct mmc_card *card, unsigned int sz)
EXPORT_SYMBOL(mmc_align_data_size);
int mmc_host_enable(struct mmc_host *host)
EXPORT_SYMBOL(mmc_host_enable);
static int mmc_host_do_disable(struct mmc_host *host, int lazy)
int mmc_host_disable(struct mmc_host *host)
EXPORT_SYMBOL(mmc_host_disable);
int __mmc_claim_host(struct mmc_host *host, atomic_t *abort)
EXPORT_SYMBOL(__mmc_claim_host);
int mmc_try_claim_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_try_claim_host);
void mmc_do_release_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_do_release_host);
void mmc_host_deeper_disable(struct work_struct *work)
int mmc_host_lazy_disable(struct mmc_host *host)
EXPORT_SYMBOL(mmc_host_lazy_disable);
void mmc_release_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_release_host);
static inline void mmc_set_ios(struct mmc_host *host)
void mmc_set_chip_select(struct mmc_host *host, int mode)
static void __mmc_set_clock(struct mmc_host *host, unsigned int hz)
void mmc_set_clock(struct mmc_host *host, unsigned int hz)
void mmc_gate_clock(struct mmc_host *host)
void mmc_ungate_clock(struct mmc_host *host)
void mmc_set_ungated(struct mmc_host *host)
void mmc_set_ungated(struct mmc_host *host)
void mmc_set_bus_mode(struct mmc_host *host, unsigned int mode)
void mmc_set_bus_width(struct mmc_host *host, unsigned int width)
static int mmc_vdd_to_ocrbitnum(int vdd, bool low_bits)
u32 mmc_vddrange_to_ocrmask(int vdd_min, int vdd_max)
EXPORT_SYMBOL(mmc_vddrange_to_ocrmask);
int mmc_regulator_get_ocrmask(struct regulator *supply)
EXPORT_SYMBOL(mmc_regulator_get_ocrmask);
int mmc_regulator_set_ocr(struct mmc_host *mmc,
struct regulator *supply,
unsigned short vdd_bit)
EXPORT_SYMBOL(mmc_regulator_set_ocr);
u32 mmc_select_voltage(struct mmc_host *host, u32 ocr)
int mmc_set_signal_voltage(struct mmc_host *host, int signal_voltage, bool cmd11)
void mmc_set_timing(struct mmc_host *host, unsigned int timing)
void mmc_set_driver_type(struct mmc_host *host, unsigned int drv_type)
static void mmc_power_up(struct mmc_host *host)
static void mmc_power_off(struct mmc_host *host)
static void __mmc_release_bus(struct mmc_host *host)
static inline void mmc_bus_get(struct mmc_host *host)
static inline void mmc_bus_put(struct mmc_host *host)
void mmc_attach_bus(struct mmc_host *host, const struct mmc_bus_ops *ops)
void mmc_detach_bus(struct mmc_host *host)
void mmc_detect_change(struct mmc_host *host, unsigned long delay)
EXPORT_SYMBOL(mmc_detect_change);
void mmc_init_erase(struct mmc_card *card)
static unsigned int mmc_mmc_erase_timeout(struct mmc_card *card,
unsigned int arg, unsigned int qty)
static unsigned int mmc_sd_erase_timeout(struct mmc_card *card,
unsigned int arg,
unsigned int qty)
static unsigned int mmc_erase_timeout(struct mmc_card *card,
unsigned int arg,
unsigned int qty)
static int mmc_do_erase(struct mmc_card *card, unsigned int from,
unsigned int to, unsigned int arg)
int mmc_erase(struct mmc_card *card, unsigned int from, unsigned int nr,
unsigned int arg)
EXPORT_SYMBOL(mmc_erase);
int mmc_can_erase(struct mmc_card *card)
EXPORT_SYMBOL(mmc_can_erase);
int mmc_can_trim(struct mmc_card *card)
EXPORT_SYMBOL(mmc_can_trim);
int mmc_can_secure_erase_trim(struct mmc_card *card)
EXPORT_SYMBOL(mmc_can_secure_erase_trim);
int mmc_erase_group_aligned(struct mmc_card *card, unsigned int from,
unsigned int nr)
EXPORT_SYMBOL(mmc_erase_group_aligned);
int mmc_set_blocklen(struct mmc_card *card, unsigned int blocklen)
EXPORT_SYMBOL(mmc_set_blocklen);
static int mmc_rescan_try_freq(struct mmc_host *host, unsigned freq)
void mmc_rescan(struct work_struct *work)
void mmc_start_host(struct mmc_host *host)
void mmc_stop_host(struct mmc_host *host)
int mmc_power_save_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_power_save_host);
int mmc_power_restore_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_power_restore_host);
int mmc_card_awake(struct mmc_host *host)
EXPORT_SYMBOL(mmc_card_awake);
int mmc_card_sleep(struct mmc_host *host)
EXPORT_SYMBOL(mmc_card_sleep);
int mmc_card_can_sleep(struct mmc_host *host)
EXPORT_SYMBOL(mmc_card_can_sleep);
int mmc_suspend_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_suspend_host);
int mmc_resume_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_resume_host);
int mmc_pm_notify(struct notifier_block *notify_block,
unsigned long mode, void *unused)
static int __init mmc_init(void)
static void __exit mmc_exit(void)
subsys_initcall(mmc_init);
module_exit(mmc_exit);
MODULE_LICENSE("GPL");
