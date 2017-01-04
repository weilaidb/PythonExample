void __iomem *prm_base;
void __iomem *cm_base;
void __iomem *cm2_base;
#define MAX_MODULE_ENABLE_WAIT		100000
u32 omap_prcm_get_reset_sources(void)
EXPORT_SYMBOL(omap_prcm_get_reset_sources);
static void omap_prcm_arch_reset(char mode, const char *cmd)
void (*arch_reset)(char, const char *) = omap_prcm_arch_reset;
int omap2_cm_wait_idlest(void __iomem *reg, u32 mask, u8 idlest,
const char *name)
;
void __init omap2_set_globals_prcm(struct omap_globals *omap2_globals)
