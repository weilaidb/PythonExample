#undef DEBUG
struct clk *vclk, *sclk, *dclk;
void omap2xxx_clk_prepare_for_reboot(void)
static int __init omap2xxx_clk_arch_init(void)
arch_initcall(omap2xxx_clk_arch_init);
