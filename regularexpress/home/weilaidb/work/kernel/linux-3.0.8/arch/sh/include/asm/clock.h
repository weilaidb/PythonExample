#define __ASM_SH_CLOCK_H
void __deprecated arch_init_clk_ops(struct clk_ops **, int type);
int __init arch_clk_init(void);
int __init __deprecated cpg_clk_init(void);
int clk_init(void);
