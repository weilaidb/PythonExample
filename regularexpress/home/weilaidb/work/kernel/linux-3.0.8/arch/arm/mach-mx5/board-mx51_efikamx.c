#define EFIKAMX_PCBID0		IMX_GPIO_NR(3, 16)
#define EFIKAMX_PCBID1		IMX_GPIO_NR(3, 17)
#define EFIKAMX_PCBID2		IMX_GPIO_NR(3, 11)
#define EFIKAMX_BLUE_LED	IMX_GPIO_NR(3, 13)
#define EFIKAMX_GREEN_LED	IMX_GPIO_NR(3, 14)
#define EFIKAMX_RED_LED		IMX_GPIO_NR(3, 15)
#define EFIKAMX_POWER_KEY	IMX_GPIO_NR(2, 31)
#define EFIKAMX_RESET1_1	IMX_GPIO_NR(3, 2)
#define EFIKAMX_RESET		IMX_GPIO_NR(1, 4)
#define EFIKAMX_POWEROFF	IMX_GPIO_NR(4, 13)
#define EFIKAMX_PMIC		IMX_GPIO_NR(1, 6)
#define MX51_PAD_PCBID0	IOMUX_PAD(0x518, 0x130, 3, 0x0,   0, PAD_CTL_PUS_100K_UP)
#define MX51_PAD_PCBID1	IOMUX_PAD(0x51C, 0x134, 3, 0x0,   0, PAD_CTL_PUS_100K_UP)
#define MX51_PAD_PCBID2	IOMUX_PAD(0x504, 0x128, 3, 0x0,   0, PAD_CTL_PUS_100K_UP)
#define MX51_PAD_PWRKEY	IOMUX_PAD(0x48c, 0x0f8, 1, 0x0,   0, PAD_CTL_PUS_100K_UP | PAD_CTL_PKE)
static iomux_v3_cfg_t mx51efikamx_pads[] = ;
static void __init mx51_efikamx_board_id(void)
static struct gpio_led mx51_efikamx_leds[] = ;
static struct gpio_led_platform_data mx51_efikamx_leds_data = ;
static struct platform_device mx51_efikamx_leds_device = ;
static struct gpio_keys_button mx51_efikamx_powerkey[] = ;
static const struct gpio_keys_platform_data mx51_efikamx_powerkey_data __initconst = ;
void mx51_efikamx_reset(void)
static struct regulator *pwgt1, *pwgt2, *coincell;
static void mx51_efikamx_power_off(void)
static int __init mx51_efikamx_power_init(void)
late_initcall(mx51_efikamx_power_init);
static void __init mx51_efikamx_init(void)
static void __init mx51_efikamx_timer_init(void)
static struct sys_timer mx51_efikamx_timer = ;
MACHINE_START(MX51_EFIKAMX, "Genesi EfikaMX nettop")
.boot_params = MX51_PHYS_OFFSET + 0x100,
.map_io = mx51_map_io,
.init_early = imx51_init_early,
.init_irq = mx51_init_irq,
.timer = &mx51_efikamx_timer,
.init_machine = mx51_efikamx_init,
MACHINE_END
