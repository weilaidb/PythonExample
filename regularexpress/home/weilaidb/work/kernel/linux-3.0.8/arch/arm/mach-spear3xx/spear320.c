#define PAD_MUX_CONFIG_REG	0x0C
#define MODE_CONFIG_REG		0x10
#define AUTO_NET_SMII_MODE	(1 << 0)
#define AUTO_NET_MII_MODE	(1 << 1)
#define AUTO_EXP_MODE		(1 << 2)
#define SMALL_PRINTERS_MODE	(1 << 3)
#define ALL_MODES		0xF
struct pmx_mode spear320_auto_net_smii_mode = ;
struct pmx_mode spear320_auto_net_mii_mode = ;
struct pmx_mode spear320_auto_exp_mode = ;
struct pmx_mode spear320_small_printers_mode = ;
static struct pmx_dev_mode pmx_clcd_modes[] = ;
struct pmx_dev spear320_pmx_clcd = ;
static struct pmx_dev_mode pmx_emi_modes[] = ;
struct pmx_dev spear320_pmx_emi = ;
static struct pmx_dev_mode pmx_fsmc_modes[] = ;
struct pmx_dev spear320_pmx_fsmc = ;
static struct pmx_dev_mode pmx_spp_modes[] = ;
struct pmx_dev spear320_pmx_spp = ;
static struct pmx_dev_mode pmx_sdhci_modes[] = ;
struct pmx_dev spear320_pmx_sdhci = ;
static struct pmx_dev_mode pmx_i2s_modes[] = ;
struct pmx_dev spear320_pmx_i2s = ;
static struct pmx_dev_mode pmx_uart1_modes[] = ;
struct pmx_dev spear320_pmx_uart1 = ;
static struct pmx_dev_mode pmx_uart1_modem_modes[] = ;
struct pmx_dev spear320_pmx_uart1_modem = ;
static struct pmx_dev_mode pmx_uart2_modes[] = ;
struct pmx_dev spear320_pmx_uart2 = ;
static struct pmx_dev_mode pmx_touchscreen_modes[] = ;
struct pmx_dev spear320_pmx_touchscreen = ;
static struct pmx_dev_mode pmx_can_modes[] = ;
struct pmx_dev spear320_pmx_can = ;
static struct pmx_dev_mode pmx_sdhci_led_modes[] = ;
struct pmx_dev spear320_pmx_sdhci_led = ;
static struct pmx_dev_mode pmx_pwm0_modes[] = ;
struct pmx_dev spear320_pmx_pwm0 = ;
static struct pmx_dev_mode pmx_pwm1_modes[] = ;
struct pmx_dev spear320_pmx_pwm1 = ;
static struct pmx_dev_mode pmx_pwm2_modes[] = ;
struct pmx_dev spear320_pmx_pwm2 = ;
static struct pmx_dev_mode pmx_pwm3_modes[] = ;
struct pmx_dev spear320_pmx_pwm3 = ;
static struct pmx_dev_mode pmx_ssp1_modes[] = ;
struct pmx_dev spear320_pmx_ssp1 = ;
static struct pmx_dev_mode pmx_ssp2_modes[] = ;
struct pmx_dev spear320_pmx_ssp2 = ;
static struct pmx_dev_mode pmx_mii1_modes[] = ;
struct pmx_dev spear320_pmx_mii1 = ;
static struct pmx_dev_mode pmx_smii0_modes[] = ;
struct pmx_dev spear320_pmx_smii0 = ;
static struct pmx_dev_mode pmx_smii1_modes[] = ;
struct pmx_dev spear320_pmx_smii1 = ;
static struct pmx_dev_mode pmx_i2c1_modes[] = ;
struct pmx_dev spear320_pmx_i2c1 = ;
static struct pmx_driver pmx_driver = ;
static struct shirq_dev_config shirq_ras1_config[] = ;
static struct spear_shirq shirq_ras1 = ;
static struct shirq_dev_config shirq_ras3_config[] = ;
static struct spear_shirq shirq_ras3 = ;
static struct shirq_dev_config shirq_intrcomm_ras_config[] = ;
static struct spear_shirq shirq_intrcomm_ras = ;
void __init spear320_init(struct pmx_mode *pmx_mode, struct pmx_dev **pmx_devs,
u8 pmx_dev_count)
