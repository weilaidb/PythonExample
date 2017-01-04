#define DPLL_AUTOIDLE_DISABLE				0x0
#define OMAP2XXX_DPLL_AUTOIDLE_LOW_POWER_STOP		0x3
#define OMAP2XXX_APLL_AUTOIDLE_DISABLE			0x0
#define OMAP2XXX_APLL_AUTOIDLE_LOW_POWER_STOP		0x3
static const u8 cm_idlest_offs[] = ;
u32 omap2_cm_read_mod_reg(s16 module, u16 idx)
void omap2_cm_write_mod_reg(u32 val, s16 module, u16 idx)
u32 omap2_cm_rmw_mod_reg_bits(u32 mask, u32 bits, s16 module, s16 idx)
u32 omap2_cm_set_mod_reg_bits(u32 bits, s16 module, s16 idx)
u32 omap2_cm_clear_mod_reg_bits(u32 bits, s16 module, s16 idx)
static void _write_clktrctrl(u8 c, s16 module, u32 mask)
bool omap2_cm_is_clkdm_in_hwsup(s16 module, u32 mask)
void omap2xxx_cm_clkdm_enable_hwsup(s16 module, u32 mask)
void omap2xxx_cm_clkdm_disable_hwsup(s16 module, u32 mask)
void omap3xxx_cm_clkdm_enable_hwsup(s16 module, u32 mask)
void omap3xxx_cm_clkdm_disable_hwsup(s16 module, u32 mask)
void omap3xxx_cm_clkdm_force_sleep(s16 module, u32 mask)
void omap3xxx_cm_clkdm_force_wakeup(s16 module, u32 mask)
static void _omap2xxx_set_dpll_autoidle(u8 m)
void omap2xxx_cm_set_dpll_disable_autoidle(void)
void omap2xxx_cm_set_dpll_auto_low_power_stop(void)
static void _omap2xxx_set_apll_autoidle(u8 m, u32 mask)
void omap2xxx_cm_set_apll54_disable_autoidle(void)
void omap2xxx_cm_set_apll54_auto_low_power_stop(void)
void omap2xxx_cm_set_apll96_disable_autoidle(void)
void omap2xxx_cm_set_apll96_auto_low_power_stop(void)
int omap2_cm_wait_module_ready(s16 prcm_mod, u8 idlest_id, u8 idlest_shift)
struct omap3_cm_regs ;
static struct omap3_cm_regs cm_context;
void omap3_cm_save_context(void)
void omap3_cm_restore_context(void)
