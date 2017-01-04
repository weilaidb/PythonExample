#if defined(CONFIG_ARCH_OMAP2) || defined(CONFIG_ARCH_OMAP3)
static void __init __omap2_set_globals(struct omap_globals *omap2_globals)
#if defined(CONFIG_SOC_OMAP2420)
static struct omap_globals omap242x_globals = ;
void __init omap2_set_globals_242x(void)
#if defined(CONFIG_SOC_OMAP2430)
static struct omap_globals omap243x_globals = ;
void __init omap2_set_globals_243x(void)
#if defined(CONFIG_ARCH_OMAP3)
static struct omap_globals omap3_globals = ;
void __init omap2_set_globals_3xxx(void)
void __init omap3_map_io(void)
#define TI816X_TAP_BASE		(TI816X_CTRL_BASE + \
TI816X_CONTROL_DEVICE_ID - 0x204)
static struct omap_globals ti816x_globals = ;
void __init omap2_set_globals_ti816x(void)
#if defined(CONFIG_ARCH_OMAP4)
static struct omap_globals omap4_globals = ;
void __init omap2_set_globals_443x(void)
