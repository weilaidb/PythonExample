#define OMAP3_SRI2C_SLAVE_ADDR		0x12
#define OMAP3_VDD_MPU_SR_CONTROL_REG	0x00
#define OMAP3_VDD_CORE_SR_CONTROL_REG	0x01
#define OMAP3_VP_CONFIG_ERROROFFSET	0x00
#define OMAP3_VP_VSTEPMIN_VSTEPMIN	0x1
#define OMAP3_VP_VSTEPMAX_VSTEPMAX	0x04
#define OMAP3_VP_VLIMITTO_TIMEOUT_US	200
#define OMAP3430_VP1_VLIMITTO_VDDMIN	0x14
#define OMAP3430_VP1_VLIMITTO_VDDMAX	0x42
#define OMAP3430_VP2_VLIMITTO_VDDMIN	0x18
#define OMAP3430_VP2_VLIMITTO_VDDMAX	0x2c
#define OMAP3630_VP1_VLIMITTO_VDDMIN	0x18
#define OMAP3630_VP1_VLIMITTO_VDDMAX	0x3c
#define OMAP3630_VP2_VLIMITTO_VDDMIN	0x18
#define OMAP3630_VP2_VLIMITTO_VDDMAX	0x30
#define OMAP4_SRI2C_SLAVE_ADDR		0x12
#define OMAP4_VDD_MPU_SR_VOLT_REG	0x55
#define OMAP4_VDD_IVA_SR_VOLT_REG	0x5B
#define OMAP4_VDD_CORE_SR_VOLT_REG	0x61
#define OMAP4_VP_CONFIG_ERROROFFSET	0x00
#define OMAP4_VP_VSTEPMIN_VSTEPMIN	0x01
#define OMAP4_VP_VSTEPMAX_VSTEPMAX	0x04
#define OMAP4_VP_VLIMITTO_TIMEOUT_US	200
#define OMAP4_VP_MPU_VLIMITTO_VDDMIN	0xA
#define OMAP4_VP_MPU_VLIMITTO_VDDMAX	0x39
#define OMAP4_VP_IVA_VLIMITTO_VDDMIN	0xA
#define OMAP4_VP_IVA_VLIMITTO_VDDMAX	0x2D
#define OMAP4_VP_CORE_VLIMITTO_VDDMIN	0xA
#define OMAP4_VP_CORE_VLIMITTO_VDDMAX	0x28
static bool is_offset_valid;
static u8 smps_offset;
static bool __initdata twl_sr_enable_autoinit;
#define TWL4030_DCDC_GLOBAL_CFG        0x06
#define REG_SMPS_OFFSET         0xE0
#define SMARTREFLEX_ENABLE     BIT(3)
static unsigned long twl4030_vsel_to_uv(const u8 vsel)
static u8 twl4030_uv_to_vsel(unsigned long uv)
static unsigned long twl6030_vsel_to_uv(const u8 vsel)
static u8 twl6030_uv_to_vsel(unsigned long uv)
static struct omap_volt_pmic_info omap3_mpu_volt_info = ;
static struct omap_volt_pmic_info omap3_core_volt_info = ;
static struct omap_volt_pmic_info omap4_mpu_volt_info = ;
static struct omap_volt_pmic_info omap4_iva_volt_info = ;
static struct omap_volt_pmic_info omap4_core_volt_info = ;
int __init omap4_twl_init(void)
int __init omap3_twl_init(void)
int __init omap3_twl_set_sr_bit(bool enable)
