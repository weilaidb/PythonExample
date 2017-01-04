static bool is_avt2;
#define QI_LB60_GPIO_SD_CD		JZ_GPIO_PORTD(0)
#define QI_LB60_GPIO_SD_VCC_EN_N	JZ_GPIO_PORTD(2)
#define QI_LB60_GPIO_KEYOUT(x)		(JZ_GPIO_PORTC(10) + (x))
#define QI_LB60_GPIO_KEYIN(x)		(JZ_GPIO_PORTD(18) + (x))
#define QI_LB60_GPIO_KEYIN8		JZ_GPIO_PORTD(26)
static struct nand_ecclayout qi_lb60_ecclayout_1gb = ;
static struct mtd_partition qi_lb60_partitions_1gb[] = ;
static struct nand_ecclayout qi_lb60_ecclayout_2gb = ;
static struct mtd_partition qi_lb60_partitions_2gb[] = ;
static void qi_lb60_nand_ident(struct platform_device *pdev,
struct nand_chip *chip, struct mtd_partition **partitions,
int *num_partitions)
static struct jz_nand_platform_data qi_lb60_nand_pdata = ;
#define KEY_QI_QI	KEY_F13
#define KEY_QI_UPRED	KEY_RIGHTALT
#define KEY_QI_VOLUP	KEY_VOLUMEUP
#define KEY_QI_VOLDOWN	KEY_VOLUMEDOWN
#define KEY_QI_FN	KEY_LEFTCTRL
static const uint32_t qi_lb60_keymap[] = ;
static const struct matrix_keymap_data qi_lb60_keymap_data = ;
static const unsigned int qi_lb60_keypad_cols[] = ;
static const unsigned int qi_lb60_keypad_rows[] = ;
static struct matrix_keypad_platform_data qi_lb60_pdata = ;
static struct platform_device qi_lb60_keypad = ;
static struct fb_videomode qi_lb60_video_modes[] = ;
static struct jz4740_fb_platform_data qi_lb60_fb_pdata = ;
struct spi_gpio_platform_data spigpio_platform_data = ;
static struct platform_device spigpio_device = ;
static struct spi_board_info qi_lb60_spi_board_info[] = ;
static struct jz_battery_platform_data qi_lb60_battery_pdata = ;
static struct gpio_keys_button qi_lb60_gpio_keys_buttons[] = ;
static struct gpio_keys_platform_data qi_lb60_gpio_keys_data = ;
static struct platform_device qi_lb60_gpio_keys = ;
static struct jz4740_mmc_platform_data qi_lb60_mmc_pdata = ;
static struct regulator_consumer_supply avt2_usb_regulator_consumer =
REGULATOR_SUPPLY("vbus", "jz4740-ohci");
static struct regulator_init_data avt2_usb_regulator_init_data = ;
static struct fixed_voltage_config avt2_usb_regulator_data = ;
static struct platform_device avt2_usb_regulator_device = ;
static struct platform_device qi_lb60_pwm_beeper = ;
static char *qi_lb60_batteries[] = ;
static struct gpio_charger_platform_data qi_lb60_charger_pdata = ;
static struct platform_device qi_lb60_charger_device = ;
static struct platform_device *jz_platform_devices[] __initdata = ;
static void __init board_gpio_setup(void)
static int __init qi_lb60_init_platform_devices(void)
struct jz4740_clock_board_data jz4740_clock_bdata = ;
static __init int board_avt2(char *str)
__setup("avt2", board_avt2);
static int __init qi_lb60_board_setup(void)
arch_initcall(qi_lb60_board_setup);
