#define VOLTAGE_DIR_SIZE	16
static struct omap_vdd_info **vdd_info;
static int nr_scalable_vdd;
static s16 prm_mod_offs;
static s16 prm_irqst_ocp_mod_offs;
static struct dentry *voltage_dir;
static int vp_forceupdate_scale_voltage(struct omap_vdd_info *vdd,
unsigned long target_volt);
static u32 omap3_voltage_read_reg(u16 mod, u8 offset)
static void omap3_voltage_write_reg(u32 val, u16 mod, u8 offset)
static u32 omap4_voltage_read_reg(u16 mod, u8 offset)
static void omap4_voltage_write_reg(u32 val, u16 mod, u8 offset)
static int __init _config_common_vdd_data(struct omap_vdd_info *vdd)
static int vp_volt_debug_get(void *data, u64 *val)
static int nom_volt_debug_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(vp_volt_debug_fops, vp_volt_debug_get, NULL, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(nom_volt_debug_fops, nom_volt_debug_get, NULL,
"%llu\n");
static void vp_latch_vsel(struct omap_vdd_info *vdd)
static void __init vp_init(struct omap_vdd_info *vdd)
static void __init vdd_debugfs_init(struct omap_vdd_info *vdd)
static int _pre_volt_scale(struct omap_vdd_info *vdd,
unsigned long target_volt, u8 *target_vsel, u8 *current_vsel)
static void _post_volt_scale(struct omap_vdd_info *vdd,
unsigned long target_volt, u8 target_vsel, u8 current_vsel)
static int vc_bypass_scale_voltage(struct omap_vdd_info *vdd,
unsigned long target_volt)
static int vp_forceupdate_scale_voltage(struct omap_vdd_info *vdd,
unsigned long target_volt)
static void __init omap3_vfsm_init(struct omap_vdd_info *vdd)
static void __init omap3_vc_init(struct omap_vdd_info *vdd)
static void __init omap4_vc_init(struct omap_vdd_info *vdd)
static void __init omap_vc_init(struct omap_vdd_info *vdd)
static int __init omap_vdd_data_configure(struct omap_vdd_info *vdd)
unsigned long omap_voltage_get_nom_volt(struct voltagedomain *voltdm)
unsigned long omap_vp_get_curr_volt(struct voltagedomain *voltdm)
void omap_vp_enable(struct voltagedomain *voltdm)
void omap_vp_disable(struct voltagedomain *voltdm)
int omap_voltage_scale_vdd(struct voltagedomain *voltdm,
unsigned long target_volt)
void omap_voltage_reset(struct voltagedomain *voltdm)
void omap_voltage_get_volttable(struct voltagedomain *voltdm,
struct omap_volt_data **volt_data)
struct omap_volt_data *omap_voltage_get_voltdata(struct voltagedomain *voltdm,
unsigned long volt)
int omap_voltage_register_pmic(struct voltagedomain *voltdm,
struct omap_volt_pmic_info *pmic_info)
struct dentry *omap_voltage_get_dbgdir(struct voltagedomain *voltdm)
void omap_change_voltscale_method(struct voltagedomain *voltdm,
int voltscale_method)
struct voltagedomain *omap_voltage_domain_lookup(char *name)
int __init omap_voltage_late_init(void)
int __init omap_voltage_early_init(s16 prm_mod, s16 prm_irqst_ocp_mod,
struct omap_vdd_info *omap_vdd_array[],
u8 omap_vdd_count)
