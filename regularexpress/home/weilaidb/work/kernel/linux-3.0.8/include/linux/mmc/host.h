#define LINUX_MMC_HOST_H
struct mmc_ios ;
struct mmc_host_ops ;
struct mmc_card;
struct device;
struct mmc_host ;
extern struct mmc_host *mmc_alloc_host(int extra, struct device *);
extern int mmc_add_host(struct mmc_host *);
extern void mmc_remove_host(struct mmc_host *);
extern void mmc_free_host(struct mmc_host *);
static inline void *mmc_priv(struct mmc_host *host)
#define mmc_host_is_spi(host)	((host)->caps & MMC_CAP_SPI)
#define mmc_dev(x)	((x)->parent)
#define mmc_classdev(x)	(&(x)->class_dev)
#define mmc_hostname(x)	(dev_name(&(x)->class_dev))
extern int mmc_suspend_host(struct mmc_host *);
extern int mmc_resume_host(struct mmc_host *);
extern int mmc_power_save_host(struct mmc_host *host);
extern int mmc_power_restore_host(struct mmc_host *host);
extern void mmc_detect_change(struct mmc_host *, unsigned long delay);
extern void mmc_request_done(struct mmc_host *, struct mmc_request *);
static inline void mmc_signal_sdio_irq(struct mmc_host *host)
struct regulator;
int mmc_regulator_get_ocrmask(struct regulator *supply);
int mmc_regulator_set_ocr(struct mmc_host *mmc,
struct regulator *supply,
unsigned short vdd_bit);
static inline int mmc_regulator_get_ocrmask(struct regulator *supply)
static inline int mmc_regulator_set_ocr(struct mmc_host *mmc,
struct regulator *supply,
unsigned short vdd_bit)
int mmc_card_awake(struct mmc_host *host);
int mmc_card_sleep(struct mmc_host *host);
int mmc_card_can_sleep(struct mmc_host *host);
int mmc_host_enable(struct mmc_host *host);
int mmc_host_disable(struct mmc_host *host);
int mmc_host_lazy_disable(struct mmc_host *host);
int mmc_pm_notify(struct notifier_block *notify_block, unsigned long, void *);
static inline void mmc_set_disable_delay(struct mmc_host *host,
unsigned int disable_delay)
extern int mmc_assume_removable;
static inline int mmc_card_is_removable(struct mmc_host *host)
static inline int mmc_card_keep_power(struct mmc_host *host)
static inline int mmc_card_wake_sdio_irq(struct mmc_host *host)
static inline int mmc_host_cmd23(struct mmc_host *host)
