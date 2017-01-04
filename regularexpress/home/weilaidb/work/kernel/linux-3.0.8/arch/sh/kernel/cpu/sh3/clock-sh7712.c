static int multipliers[] = ;
static int divisors[]    = ;
static void master_clk_init(struct clk *clk)
static struct clk_ops sh7712_master_clk_ops = ;
static unsigned long module_clk_recalc(struct clk *clk)
static struct clk_ops sh7712_module_clk_ops = ;
static unsigned long cpu_clk_recalc(struct clk *clk)
static struct clk_ops sh7712_cpu_clk_ops = ;
static struct clk_ops *sh7712_clk_ops[] = ;
void __init arch_init_clk_ops(struct clk_ops **ops, int idx)
