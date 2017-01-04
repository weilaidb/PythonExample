#define __MACH_CLK_H
struct clk;
void tegra_periph_reset_deassert(struct clk *c);
void tegra_periph_reset_assert(struct clk *c);
unsigned long clk_get_rate_all_locked(struct clk *c);
void tegra_sdmmc_tap_delay(struct clk *c, int delay);
