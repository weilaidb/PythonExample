#define __ARCH_ARM_MACH_OMAP2_CLOCK3XXX_H
int omap3xxx_clk_init(void);
int omap3_dpll4_set_rate(struct clk *clk, unsigned long rate);
int omap3_core_dpll_m2_set_rate(struct clk *clk, unsigned long rate);
void omap3_clk_lock_dpll5(void);
extern struct clk *sdrc_ick_p;
extern struct clk *arm_fck_p;
extern const struct clkops clkops_noncore_dpll_ops;
