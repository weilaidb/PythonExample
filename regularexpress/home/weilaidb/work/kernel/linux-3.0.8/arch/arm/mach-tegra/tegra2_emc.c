static bool emc_enable = true;
static bool emc_enable;
module_param(emc_enable, bool, 0644);
static void __iomem *emc = IO_ADDRESS(TEGRA_EMC_BASE);
static const struct tegra_emc_table *tegra_emc_table;
static int tegra_emc_table_size;
static inline void emc_writel(u32 val, unsigned long addr)
static inline u32 emc_readl(unsigned long addr)
static const unsigned long emc_reg_addr[TEGRA_EMC_NUM_REGS] = ;
long tegra_emc_round_rate(unsigned long rate)
int tegra_emc_set_rate(unsigned long rate)
void tegra_init_emc(const struct tegra_emc_table *table, int table_size)
