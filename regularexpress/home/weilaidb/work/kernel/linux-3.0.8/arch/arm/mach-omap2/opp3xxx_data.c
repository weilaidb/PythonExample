#define OMAP3430_VDD_MPU_OPP1_UV		975000
#define OMAP3430_VDD_MPU_OPP2_UV		1075000
#define OMAP3430_VDD_MPU_OPP3_UV		1200000
#define OMAP3430_VDD_MPU_OPP4_UV		1270000
#define OMAP3430_VDD_MPU_OPP5_UV		1350000
struct omap_volt_data omap34xx_vddmpu_volt_data[] = ;
#define OMAP3430_VDD_CORE_OPP1_UV		975000
#define OMAP3430_VDD_CORE_OPP2_UV		1050000
#define OMAP3430_VDD_CORE_OPP3_UV		1150000
struct omap_volt_data omap34xx_vddcore_volt_data[] = ;
#define OMAP3630_VDD_MPU_OPP50_UV		1012500
#define OMAP3630_VDD_MPU_OPP100_UV		1200000
#define OMAP3630_VDD_MPU_OPP120_UV		1325000
#define OMAP3630_VDD_MPU_OPP1G_UV		1375000
struct omap_volt_data omap36xx_vddmpu_volt_data[] = ;
#define OMAP3630_VDD_CORE_OPP50_UV		1000000
#define OMAP3630_VDD_CORE_OPP100_UV		1200000
struct omap_volt_data omap36xx_vddcore_volt_data[] = ;
static struct omap_opp_def __initdata omap34xx_opp_def_list[] = ;
static struct omap_opp_def __initdata omap36xx_opp_def_list[] = ;
int __init omap3_opp_init(void)
device_initcall(omap3_opp_init);
