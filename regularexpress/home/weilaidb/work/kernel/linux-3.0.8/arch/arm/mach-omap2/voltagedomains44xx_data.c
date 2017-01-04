static const struct omap_vfsm_instance_data omap4_vdd_mpu_vfsm_data = ;
static struct omap_vdd_info omap4_vdd_mpu_info = ;
static const struct omap_vfsm_instance_data omap4_vdd_iva_vfsm_data = ;
static struct omap_vdd_info omap4_vdd_iva_info = ;
static const struct omap_vfsm_instance_data omap4_vdd_core_vfsm_data = ;
static struct omap_vdd_info omap4_vdd_core_info = ;
static struct omap_vdd_info *omap4_vdd_info[] = ;
static int __init omap44xx_voltage_early_init(void)
;
core_initcall(omap44xx_voltage_early_init);
