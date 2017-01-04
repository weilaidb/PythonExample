#define PAD_MUX_CONFIG_REG	0x00
#define MODE_CONFIG_REG		0x04
#define NAND_MODE			(1 << 0)
#define NOR_MODE			(1 << 1)
#define PHOTO_FRAME_MODE		(1 << 2)
#define LEND_IP_PHONE_MODE		(1 << 3)
#define HEND_IP_PHONE_MODE		(1 << 4)
#define LEND_WIFI_PHONE_MODE		(1 << 5)
#define HEND_WIFI_PHONE_MODE		(1 << 6)
#define ATA_PABX_WI2S_MODE		(1 << 7)
#define ATA_PABX_I2S_MODE		(1 << 8)
#define CAML_LCDW_MODE			(1 << 9)
#define CAMU_LCD_MODE			(1 << 10)
#define CAMU_WLCD_MODE			(1 << 11)
#define CAML_LCD_MODE			(1 << 12)
#define ALL_MODES			0x1FFF
struct pmx_mode spear300_nand_mode = ;
struct pmx_mode spear300_nor_mode = ;
struct pmx_mode spear300_photo_frame_mode = ;
struct pmx_mode spear300_lend_ip_phone_mode = ;
struct pmx_mode spear300_hend_ip_phone_mode = ;
struct pmx_mode spear300_lend_wifi_phone_mode = ;
struct pmx_mode spear300_hend_wifi_phone_mode = ;
struct pmx_mode spear300_ata_pabx_wi2s_mode = ;
struct pmx_mode spear300_ata_pabx_i2s_mode = ;
struct pmx_mode spear300_caml_lcdw_mode = ;
struct pmx_mode spear300_camu_lcd_mode = ;
struct pmx_mode spear300_camu_wlcd_mode = ;
struct pmx_mode spear300_caml_lcd_mode = ;
static struct pmx_dev_mode pmx_fsmc_2_chips_modes[] = ;
struct pmx_dev spear300_pmx_fsmc_2_chips = ;
static struct pmx_dev_mode pmx_fsmc_4_chips_modes[] = ;
struct pmx_dev spear300_pmx_fsmc_4_chips = ;
static struct pmx_dev_mode pmx_keyboard_modes[] = ;
struct pmx_dev spear300_pmx_keyboard = ;
static struct pmx_dev_mode pmx_clcd_modes[] = ;
struct pmx_dev spear300_pmx_clcd = ;
static struct pmx_dev_mode pmx_telecom_gpio_modes[] = ;
struct pmx_dev spear300_pmx_telecom_gpio = ;
static struct pmx_dev_mode pmx_telecom_tdm_modes[] = ;
struct pmx_dev spear300_pmx_telecom_tdm = ;
static struct pmx_dev_mode pmx_telecom_spi_cs_i2c_clk_modes[] = ;
struct pmx_dev spear300_pmx_telecom_spi_cs_i2c_clk = ;
static struct pmx_dev_mode pmx_telecom_camera_modes[] = ;
struct pmx_dev spear300_pmx_telecom_camera = ;
static struct pmx_dev_mode pmx_telecom_dac_modes[] = ;
struct pmx_dev spear300_pmx_telecom_dac = ;
static struct pmx_dev_mode pmx_telecom_i2s_modes[] = ;
struct pmx_dev spear300_pmx_telecom_i2s = ;
static struct pmx_dev_mode pmx_telecom_boot_pins_modes[] = ;
struct pmx_dev spear300_pmx_telecom_boot_pins = ;
static struct pmx_dev_mode pmx_telecom_sdhci_4bit_modes[] = ;
struct pmx_dev spear300_pmx_telecom_sdhci_4bit = ;
static struct pmx_dev_mode pmx_telecom_sdhci_8bit_modes[] = ;
struct pmx_dev spear300_pmx_telecom_sdhci_8bit = ;
static struct pmx_dev_mode pmx_gpio1_modes[] = ;
struct pmx_dev spear300_pmx_gpio1 = ;
static struct pmx_driver pmx_driver = ;
static struct shirq_dev_config shirq_ras1_config[] = ;
static struct spear_shirq shirq_ras1 = ;
static struct pl061_platform_data gpio1_plat_data = ;
struct amba_device spear300_gpio1_device = ;
void __init spear300_init(struct pmx_mode *pmx_mode, struct pmx_dev **pmx_devs,
u8 pmx_dev_count)
