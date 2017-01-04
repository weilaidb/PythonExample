#define __ARCH_ARM_MACH_OMAP2_OMAP_OPP_DATA_H
struct omap_opp_def ;
#define OPP_INITIALIZER(_hwmod_name, _enabled, _freq, _uv)	\
#define VOLT_DATA_DEFINE(_v_nom, _efuse_offs, _errminlimit, _errgain)  \
extern int __init omap_init_opp_table(struct omap_opp_def *opp_def,
u32 opp_def_size);
extern struct omap_volt_data omap34xx_vddmpu_volt_data[];
extern struct omap_volt_data omap34xx_vddcore_volt_data[];
extern struct omap_volt_data omap36xx_vddmpu_volt_data[];
extern struct omap_volt_data omap36xx_vddcore_volt_data[];
extern struct omap_volt_data omap44xx_vdd_mpu_volt_data[];
extern struct omap_volt_data omap44xx_vdd_iva_volt_data[];
extern struct omap_volt_data omap44xx_vdd_core_volt_data[];
