#define __ASM_ARCH_TCC_CLOCK_H__
struct clk ;
int clk_register(struct clk *clk);
void clk_unregister(struct clk *clk);
