#undef DEBUG
const struct prcm_config *curr_prcm_set;
const struct prcm_config *rate_table;
unsigned long omap2_table_mpu_recalc(struct clk *clk)
long omap2_round_to_table_rate(struct clk *clk, unsigned long rate)
int omap2_select_table_rate(struct clk *clk, unsigned long rate)
static struct cpufreq_frequency_table *freq_table;
void omap2_clk_init_cpufreq_table(struct cpufreq_frequency_table **table)
void omap2_clk_exit_cpufreq_table(struct cpufreq_frequency_table **table)
