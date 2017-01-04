#undef DEBUG
u8 cpu_mask;
static void _omap2_module_wait_ready(struct clk *clk)
void omap2_init_clk_clkdm(struct clk *clk)
void omap2_clk_dflt_find_companion(struct clk *clk, void __iomem **other_reg,
u8 *other_bit)
void omap2_clk_dflt_find_idlest(struct clk *clk, void __iomem **idlest_reg,
u8 *idlest_bit, u8 *idlest_val)
int omap2_dflt_clk_enable(struct clk *clk)
void omap2_dflt_clk_disable(struct clk *clk)
const struct clkops clkops_omap2_dflt_wait = ;
const struct clkops clkops_omap2_dflt = ;
void omap2_clk_disable(struct clk *clk)
int omap2_clk_enable(struct clk *clk)
long omap2_clk_round_rate(struct clk *clk, unsigned long rate)
int omap2_clk_set_rate(struct clk *clk, unsigned long rate)
int omap2_clk_set_parent(struct clk *clk, struct clk *new_parent)
#if defined(CONFIG_ARCH_OMAP3) || defined(CONFIG_ARCH_OMAP4)
const struct clkops clkops_omap3_noncore_dpll_ops = ;
const struct clkops clkops_omap3_core_dpll_ops = ;
void omap2_clk_disable_unused(struct clk *clk)
int __init omap2_clk_switch_mpurate_at_boot(const char *mpurate_ck_name)
void __init omap2_clk_print_new_rates(const char *hfclkin_ck_name,
const char *core_ck_name,
const char *mpu_ck_name)
struct clk_functions omap2_clk_functions = ;
