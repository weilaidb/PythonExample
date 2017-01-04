#undef DEBUG
static struct omap_sdrc_params *sdrc_init_params_cs0, *sdrc_init_params_cs1;
void __iomem *omap2_sdrc_base;
void __iomem *omap2_sms_base;
struct omap2_sms_regs ;
static struct omap2_sms_regs sms_context;
#define SDRC_POWER_EXTCLKDIS_SHIFT		3
#define SDRC_POWER_PWDENA_SHIFT			2
#define SDRC_POWER_PAGEPOLICY_SHIFT		0
void omap2_sms_save_context(void)
void omap2_sms_restore_context(void)
int omap2_sdrc_get_params(unsigned long r,
struct omap_sdrc_params **sdrc_cs0,
struct omap_sdrc_params **sdrc_cs1)
void __init omap2_set_globals_sdrc(struct omap_globals *omap2_globals)
void __init omap2_sdrc_init(struct omap_sdrc_params *sdrc_cs0,
struct omap_sdrc_params *sdrc_cs1)
void omap2_sms_write_rot_control(u32 val, unsigned ctx)
void omap2_sms_write_rot_size(u32 val, unsigned ctx)
void omap2_sms_write_rot_physical_ba(u32 val, unsigned ctx)
