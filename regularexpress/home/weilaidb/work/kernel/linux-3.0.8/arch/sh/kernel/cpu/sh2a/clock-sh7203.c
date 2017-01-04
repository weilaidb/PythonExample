static const int pll1rate[]=;
static const int pfc_divisors[]=;
#define ifc_divisors pfc_divisors
static unsigned int pll2_mult;
static void master_clk_init(struct clk *clk)
static struct clk_ops sh7203_master_clk_ops = ;
static unsigned long module_clk_recalc(struct clk *clk)
static struct clk_ops sh7203_module_clk_ops = ;
static unsigned long bus_clk_recalc(struct clk *clk)
static struct clk_ops sh7203_bus_clk_ops = ;
static struct clk_ops sh7203_cpu_clk_ops = ;
static struct clk_ops *sh7203_clk_ops[] = ;
void __init arch_init_clk_ops(struct clk_ops **ops, int idx)
