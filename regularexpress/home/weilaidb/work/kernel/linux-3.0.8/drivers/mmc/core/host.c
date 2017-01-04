#define cls_dev_to_mmc_host(d)	container_of(d, struct mmc_host, class_dev)
static void mmc_host_classdev_release(struct device *dev)
static struct class mmc_host_class = ;
int mmc_register_host_class(void)
void mmc_unregister_host_class(void)
static DEFINE_IDR(mmc_host_idr);
static DEFINE_SPINLOCK(mmc_host_lock);
static void mmc_host_clk_gate_delayed(struct mmc_host *host)
static void mmc_host_clk_gate_work(struct work_struct *work)
void mmc_host_clk_hold(struct mmc_host *host)
static bool mmc_host_may_gate_card(struct mmc_card *card)
void mmc_host_clk_release(struct mmc_host *host)
unsigned int mmc_host_clk_rate(struct mmc_host *host)
static inline void mmc_host_clk_init(struct mmc_host *host)
static inline void mmc_host_clk_exit(struct mmc_host *host)
static inline void mmc_host_clk_init(struct mmc_host *host)
static inline void mmc_host_clk_exit(struct mmc_host *host)
struct mmc_host *mmc_alloc_host(int extra, struct device *dev)
EXPORT_SYMBOL(mmc_alloc_host);
int mmc_add_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_add_host);
void mmc_remove_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_remove_host);
void mmc_free_host(struct mmc_host *host)
EXPORT_SYMBOL(mmc_free_host);
