#define OMAP4430_VDD_MPU_OPP50_UV		1025000
#define OMAP4430_VDD_MPU_OPP100_UV		1200000
#define OMAP4430_VDD_MPU_OPPTURBO_UV		1313000
#define OMAP4430_VDD_MPU_OPPNITRO_UV		1375000
struct omap_volt_data omap44xx_vdd_mpu_volt_data[] = ;
#define OMAP4430_VDD_IVA_OPP50_UV		1013000
#define OMAP4430_VDD_IVA_OPP100_UV		1188000
#define OMAP4430_VDD_IVA_OPPTURBO_UV		1300000
struct omap_volt_data omap44xx_vdd_iva_volt_data[] = ;
#define OMAP4430_VDD_CORE_OPP50_UV		1025000
#define OMAP4430_VDD_CORE_OPP100_UV		1200000
struct omap_volt_data omap44xx_vdd_core_volt_data[] = ;
static struct omap_opp_def __initdata omap44xx_opp_def_list[] = ;
int __init omap4_opp_init(void)
device_initcall(omap4_opp_init);
