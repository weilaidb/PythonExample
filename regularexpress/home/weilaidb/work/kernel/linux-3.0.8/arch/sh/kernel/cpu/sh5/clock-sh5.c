static int ifc_table[] = ;
#define	CPRC_BLOCK_OFF	0x01010000
#define CPRC_BASE	(PHYS_PERIPHERAL_BLOCK + CPRC_BLOCK_OFF)
static unsigned long cprc_base;
static void master_clk_init(struct clk *clk)
static struct clk_ops sh5_master_clk_ops = ;
static unsigned long module_clk_recalc(struct clk *clk)
static struct clk_ops sh5_module_clk_ops = ;
static unsigned long bus_clk_recalc(struct clk *clk)
static struct clk_ops sh5_bus_clk_ops = ;
static unsigned long cpu_clk_recalc(struct clk *clk)
static struct clk_ops sh5_cpu_clk_ops = ;
static struct clk_ops *sh5_clk_ops[] = ;
void __init arch_init_clk_ops(struct clk_ops **ops, int idx)
