#undef DEBUG
unsigned long omap2xxx_clk_get_core_rate(struct clk *clk)
static long omap2_dpllcore_round_rate(unsigned long target_rate)
unsigned long omap2_dpllcore_recalc(struct clk *clk)
int omap2_reprogram_dpllcore(struct clk *clk, unsigned long rate)
