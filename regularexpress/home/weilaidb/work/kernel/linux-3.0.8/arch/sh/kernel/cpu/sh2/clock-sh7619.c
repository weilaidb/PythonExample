static const int pll1rate[] = ;
static const int pfc_divisors[] = ;
static unsigned int pll2_mult;
static void master_clk_init(struct clk *clk)
static struct clk_ops sh7619_master_clk_ops = ;
static unsigned long module_clk_recalc(struct clk *clk)
static struct clk_ops sh7619_module_clk_ops = ;
static unsigned long bus_clk_recalc(struct clk *clk)
static struct clk_ops sh7619_bus_clk_ops = ;
static struct clk_ops sh7619_cpu_clk_ops = ;
static struct clk_ops *sh7619_clk_ops[] = ;
void __init arch_init_clk_ops(struct clk_ops **ops, int idx)
