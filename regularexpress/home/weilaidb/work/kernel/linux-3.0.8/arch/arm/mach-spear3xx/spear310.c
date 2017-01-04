#define PAD_MUX_CONFIG_REG	0x08
static struct pmx_dev_mode pmx_emi_cs_0_1_4_5_modes[] = ;
struct pmx_dev spear310_pmx_emi_cs_0_1_4_5 = ;
static struct pmx_dev_mode pmx_emi_cs_2_3_modes[] = ;
struct pmx_dev spear310_pmx_emi_cs_2_3 = ;
static struct pmx_dev_mode pmx_uart1_modes[] = ;
struct pmx_dev spear310_pmx_uart1 = ;
static struct pmx_dev_mode pmx_uart2_modes[] = ;
struct pmx_dev spear310_pmx_uart2 = ;
static struct pmx_dev_mode pmx_uart3_4_5_modes[] = ;
struct pmx_dev spear310_pmx_uart3_4_5 = ;
static struct pmx_dev_mode pmx_fsmc_modes[] = ;
struct pmx_dev spear310_pmx_fsmc = ;
static struct pmx_dev_mode pmx_rs485_0_1_modes[] = ;
struct pmx_dev spear310_pmx_rs485_0_1 = ;
static struct pmx_dev_mode pmx_tdm0_modes[] = ;
struct pmx_dev spear310_pmx_tdm0 = ;
static struct pmx_driver pmx_driver = ;
static struct shirq_dev_config shirq_ras1_config[] = ;
static struct spear_shirq shirq_ras1 = ;
static struct shirq_dev_config shirq_ras2_config[] = ;
static struct spear_shirq shirq_ras2 = ;
static struct shirq_dev_config shirq_ras3_config[] = ;
static struct spear_shirq shirq_ras3 = ;
static struct shirq_dev_config shirq_intrcomm_ras_config[] = ;
static struct spear_shirq shirq_intrcomm_ras = ;
void __init spear310_init(struct pmx_mode *pmx_mode, struct pmx_dev **pmx_devs,
u8 pmx_dev_count)
