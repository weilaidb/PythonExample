#undef DEBUG
static int omap2_enable_osc_ck(struct clk *clk)
static void omap2_disable_osc_ck(struct clk *clk)
const struct clkops clkops_oscck = ;
unsigned long omap2_osc_clk_recalc(struct clk *clk)
