static struct omap_mux_cfg *mux_cfg;
int __init omap_mux_register(struct omap_mux_cfg *arch_mux_cfg)
int __init_or_module omap_cfg_reg(const unsigned long index)
EXPORT_SYMBOL(omap_cfg_reg);
#define omap_mux_init() do  while(0)
#define omap_cfg_reg(x)	do  while(0)
