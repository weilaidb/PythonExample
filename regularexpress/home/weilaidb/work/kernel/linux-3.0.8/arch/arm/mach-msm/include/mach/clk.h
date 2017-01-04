#define __MACH_CLK_H
#define MSM_AXI_MAX_FREQ	LONG_MAX
enum clk_reset_action ;
struct clk;
int clk_set_min_rate(struct clk *clk, unsigned long rate);
int clk_set_max_rate(struct clk *clk, unsigned long rate);
int clk_reset(struct clk *clk, enum clk_reset_action action);
int clk_set_flags(struct clk *clk, unsigned long flags);
