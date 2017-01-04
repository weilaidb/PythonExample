#define __PLAT_CLOCK_H
#define	ALWAYS_ENABLED		(1 << 0)
#define	RESET_TO_ENABLE		(1 << 1)
#define	ENABLED_ON_INIT		(1 << 2)
struct clkops ;
struct pclk_info ;
struct pclk_sel ;
struct rate_config ;
struct clk ;
struct pll_clk_masks ;
struct pll_clk_config ;
struct pll_rate_tbl ;
struct bus_clk_masks ;
struct bus_clk_config ;
struct bus_rate_tbl ;
struct aux_clk_masks ;
struct aux_clk_config ;
struct aux_rate_tbl ;
struct gpt_clk_masks ;
struct gpt_clk_config ;
struct gpt_rate_tbl ;
struct clcd_synth_masks ;
struct clcd_clk_config ;
struct clcd_rate_tbl ;
void __init clk_init(void);
void clk_register(struct clk_lookup *cl);
void recalc_root_clocks(void);
int follow_parent(struct clk *clk);
unsigned long pll_calc_rate(struct clk *clk, int index);
int pll_clk_recalc(struct clk *clk);
int pll_clk_set_rate(struct clk *clk, unsigned long desired_rate);
unsigned long bus_calc_rate(struct clk *clk, int index);
int bus_clk_recalc(struct clk *clk);
int bus_clk_set_rate(struct clk *clk, unsigned long desired_rate);
unsigned long gpt_calc_rate(struct clk *clk, int index);
int gpt_clk_recalc(struct clk *clk);
int gpt_clk_set_rate(struct clk *clk, unsigned long desired_rate);
unsigned long aux_calc_rate(struct clk *clk, int index);
int aux_clk_recalc(struct clk *clk);
int aux_clk_set_rate(struct clk *clk, unsigned long desired_rate);
unsigned long clcd_calc_rate(struct clk *clk, int index);
int clcd_clk_recalc(struct clk *clk);
int clcd_clk_set_rate(struct clk *clk, unsigned long desired_rate);
