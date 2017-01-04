#undef DEBUG
#define DPLL5_FREQ_FOR_USBHOST		120000000
struct clk *sdrc_ick_p, *arm_fck_p;
int omap3_dpll4_set_rate(struct clk *clk, unsigned long rate)
void __init omap3_clk_lock_dpll5(void)
static int __init omap3xxx_clk_arch_init(void)
arch_initcall(omap3xxx_clk_arch_init);
