#define TEGRA_EMC_NUM_REGS 46
struct tegra_emc_table ;
int tegra_emc_set_rate(unsigned long rate);
long tegra_emc_round_rate(unsigned long rate);
void tegra_init_emc(const struct tegra_emc_table *table, int table_size);
