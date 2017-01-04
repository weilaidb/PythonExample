#undef DEBUG
static bool off_mode_enabled;
static u32 dummy_context_loss_counter;
int omap_pm_set_max_mpu_wakeup_lat(struct device *dev, long t)
int omap_pm_set_min_bus_tput(struct device *dev, u8 agent_id, unsigned long r)
int omap_pm_set_max_dev_wakeup_lat(struct device *req_dev, struct device *dev,
long t)
int omap_pm_set_max_sdma_lat(struct device *dev, long t)
int omap_pm_set_min_clk_rate(struct device *dev, struct clk *c, long r)
const struct omap_opp *omap_pm_dsp_get_opp_table(void)
void omap_pm_dsp_set_min_opp(u8 opp_id)
u8 omap_pm_dsp_get_opp(void)
struct cpufreq_frequency_table **omap_pm_cpu_get_freq_table(void)
void omap_pm_cpu_set_freq(unsigned long f)
unsigned long omap_pm_cpu_get_freq(void)
void omap_pm_enable_off_mode(void)
void omap_pm_disable_off_mode(void)
u32 omap_pm_get_dev_context_loss_count(struct device *dev)
u32 omap_pm_get_dev_context_loss_count(struct device *dev)
int __init omap_pm_if_early_init(void)
int __init omap_pm_if_init(void)
void omap_pm_if_exit(void)
