static int ifc_divisors[] = ;
static int bfc_divisors[] = ;
static int pfc_divisors[] = ;
static int cfc_divisors[] = ;
static void master_clk_init(struct clk *clk)
static struct clk_ops sh7780_master_clk_ops = ;
static unsigned long module_clk_recalc(struct clk *clk)
static struct clk_ops sh7780_module_clk_ops = ;
static unsigned long bus_clk_recalc(struct clk *clk)
static struct clk_ops sh7780_bus_clk_ops = ;
static unsigned long cpu_clk_recalc(struct clk *clk)
static struct clk_ops sh7780_cpu_clk_ops = ;
static struct clk_ops *sh7780_clk_ops[] = ;
void __init arch_init_clk_ops(struct clk_ops **ops, int idx)
static unsigned long shyway_clk_recalc(struct clk *clk)
static struct clk_ops sh7780_shyway_clk_ops = ;
static struct clk sh7780_shyway_clk = ;
static struct clk *sh7780_onchip_clocks[] = ;
#define CLKDEV_CON_ID(_id, _clk)
static struct clk_lookup lookups[] = ;
int __init arch_clk_init(void)
