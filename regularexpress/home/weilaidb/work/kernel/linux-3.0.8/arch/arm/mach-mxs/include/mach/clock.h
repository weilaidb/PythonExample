#define __MACH_MXS_CLOCK_H__
struct module;
struct clk ;
int clk_register(struct clk *clk);
void clk_unregister(struct clk *clk);
