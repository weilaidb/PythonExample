void omap2_mcbsp1_mux_clkr_src(u8 mux)
EXPORT_SYMBOL(omap2_mcbsp1_mux_clkr_src);
void omap2_mcbsp1_mux_fsr_src(u8 mux)
EXPORT_SYMBOL(omap2_mcbsp1_mux_fsr_src);
int omap2_mcbsp_set_clks_src(u8 id, u8 fck_src_id)
EXPORT_SYMBOL(omap2_mcbsp_set_clks_src);
struct omap_device_pm_latency omap2_mcbsp_latency[] = ;
static int omap_init_mcbsp(struct omap_hwmod *oh, void *unused)
static int __init omap2_mcbsp_init(void)
arch_initcall(omap2_mcbsp_init);
