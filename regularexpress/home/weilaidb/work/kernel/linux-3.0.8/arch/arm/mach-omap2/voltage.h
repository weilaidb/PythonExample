#define __ARCH_ARM_MACH_OMAP2_VOLTAGE_H
#define VOLTSCALE_VPFORCEUPDATE		1
#define VOLTSCALE_VCBYPASS		2
#define OMAP3_CLKSETUP		0xff
#define OMAP3_VOLTOFFSET	0xff
#define OMAP3_VOLTSETUP2	0xff
struct omap_vfsm_instance_data ;
struct voltagedomain ;
struct omap_volt_data ;
struct omap_volt_pmic_info ;
struct omap_vdd_info ;
unsigned long omap_vp_get_curr_volt(struct voltagedomain *voltdm);
void omap_vp_enable(struct voltagedomain *voltdm);
void omap_vp_disable(struct voltagedomain *voltdm);
int omap_voltage_scale_vdd(struct voltagedomain *voltdm,
unsigned long target_volt);
void omap_voltage_reset(struct voltagedomain *voltdm);
void omap_voltage_get_volttable(struct voltagedomain *voltdm,
struct omap_volt_data **volt_data);
struct omap_volt_data *omap_voltage_get_voltdata(struct voltagedomain *voltdm,
unsigned long volt);
unsigned long omap_voltage_get_nom_volt(struct voltagedomain *voltdm);
struct dentry *omap_voltage_get_dbgdir(struct voltagedomain *voltdm);
int __init omap_voltage_early_init(s16 prm_mod, s16 prm_irqst_mod,
struct omap_vdd_info *omap_vdd_array[],
u8 omap_vdd_count);
int omap_voltage_register_pmic(struct voltagedomain *voltdm,
struct omap_volt_pmic_info *pmic_info);
void omap_change_voltscale_method(struct voltagedomain *voltdm,
int voltscale_method);
struct voltagedomain *omap_voltage_domain_lookup(char *name);
int omap_voltage_late_init(void);
static inline int omap_voltage_register_pmic(struct voltagedomain *voltdm,
struct omap_volt_pmic_info *pmic_info)
static inline  void omap_change_voltscale_method(struct voltagedomain *voltdm,
int voltscale_method)
static inline int omap_voltage_late_init(void)
static inline struct voltagedomain *omap_voltage_domain_lookup(char *name)
