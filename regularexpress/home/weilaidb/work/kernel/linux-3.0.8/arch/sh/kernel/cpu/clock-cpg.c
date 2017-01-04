static struct clk master_clk = ;
static struct clk peripheral_clk = ;
static struct clk bus_clk = ;
static struct clk cpu_clk = ;
static struct clk *onchip_clocks[] = ;
#define CLKDEV_CON_ID(_id, _clk)
static struct clk_lookup lookups[] = ;
int __init __deprecated cpg_clk_init(void)
int __init __weak arch_clk_init(void)
