#define __ARCH_ARM_OMAP_CLOCK_H
struct module;
struct clk;
struct clockdomain;
struct clkops ;
#define RATE_IN_242X		(1 << 0)
#define RATE_IN_243X		(1 << 1)
#define RATE_IN_3430ES1		(1 << 2)
#define RATE_IN_3430ES2PLUS	(1 << 3)
#define RATE_IN_36XX		(1 << 4)
#define RATE_IN_4430		(1 << 5)
#define RATE_IN_TI816X		(1 << 6)
#define RATE_IN_24XX		(RATE_IN_242X | RATE_IN_243X)
#define RATE_IN_34XX		(RATE_IN_3430ES1 | RATE_IN_3430ES2PLUS)
#define RATE_IN_3XXX		(RATE_IN_34XX | RATE_IN_36XX)
#define RATE_IN_3430ES2PLUS_36XX	(RATE_IN_3430ES2PLUS | RATE_IN_36XX)
struct clksel_rate ;
struct clksel ;
struct dpll_data ;
#define ENABLE_REG_32BIT	(1 << 0)
#define CLOCK_IDLE_CONTROL	(1 << 1)
#define CLOCK_NO_IDLE_PARENT	(1 << 2)
#define ENABLE_ON_INIT		(1 << 3)
#define INVERT_ENABLE		(1 << 4)
#define CLOCK_CLKOUTX2		(1 << 5)
struct clk ;
struct cpufreq_frequency_table;
struct clk_functions ;
extern int mpurate;
extern int clk_init(struct clk_functions *custom_clocks);
extern void clk_preinit(struct clk *clk);
extern int clk_register(struct clk *clk);
extern void clk_reparent(struct clk *child, struct clk *parent);
extern void clk_unregister(struct clk *clk);
extern void propagate_rate(struct clk *clk);
extern void recalculate_root_clocks(void);
extern unsigned long followparent_recalc(struct clk *clk);
extern void clk_enable_init_clocks(void);
unsigned long omap_fixed_divisor_recalc(struct clk *clk);
extern void clk_init_cpufreq_table(struct cpufreq_frequency_table **table);
extern void clk_exit_cpufreq_table(struct cpufreq_frequency_table **table);
extern struct clk *omap_clk_get_by_name(const char *name);
extern int omap_clk_enable_autoidle_all(void);
extern int omap_clk_disable_autoidle_all(void);
extern const struct clkops clkops_null;
extern struct clk dummy_ck;
