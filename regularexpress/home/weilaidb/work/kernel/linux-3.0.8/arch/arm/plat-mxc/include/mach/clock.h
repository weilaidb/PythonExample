#define __ASM_ARCH_MXC_CLOCK_H__
struct module;
struct clk ;
int clk_register(struct clk *clk);
void clk_unregister(struct clk *clk);
unsigned long mxc_decode_pll(unsigned int pll, u32 f_ref);
