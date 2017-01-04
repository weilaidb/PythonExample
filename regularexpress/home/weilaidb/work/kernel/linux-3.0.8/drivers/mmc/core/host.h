#define _MMC_CORE_HOST_H
int mmc_register_host_class(void);
void mmc_unregister_host_class(void);
void mmc_host_clk_hold(struct mmc_host *host);
void mmc_host_clk_release(struct mmc_host *host);
unsigned int mmc_host_clk_rate(struct mmc_host *host);
static inline void mmc_host_clk_hold(struct mmc_host *host)
static inline void mmc_host_clk_release(struct mmc_host *host)
static inline unsigned int mmc_host_clk_rate(struct mmc_host *host)
void mmc_host_deeper_disable(struct work_struct *work);
