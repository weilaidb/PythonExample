#define PLAT_CLOCK_H
struct clk_ops ;
int icst_clk_set(struct clk *, unsigned long);
long icst_clk_round(struct clk *, unsigned long);
