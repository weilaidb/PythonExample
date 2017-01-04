#define __ASM_ARCH_DAVINCI_CLOCK_H
struct clk;
extern int clk_register(struct clk *clk);
extern void clk_unregister(struct clk *clk);
