static int stc_multipliers[] = ;
static int ifc_divisors[]    = ;
static int pfc_divisors[]    = ;
static void master_clk_init(struct clk *clk)
static struct clk_ops sh7709_master_clk_ops = ;
static unsigned long module_clk_recalc(struct clk *clk)
static struct clk_ops sh7709_module_clk_ops = ;
static unsigned long bus_clk_recalc(struct clk *clk)
static struct clk_ops sh7709_bus_clk_ops = ;
static unsigned long cpu_clk_recalc(struct clk *clk)
static struct clk_ops sh7709_cpu_clk_ops = ;
static struct clk_ops *sh7709_clk_ops[] = ;
void __init arch_init_clk_ops(struct clk_ops **ops, int idx)
