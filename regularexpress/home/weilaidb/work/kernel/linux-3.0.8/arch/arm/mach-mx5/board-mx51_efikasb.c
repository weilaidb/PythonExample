#define EFIKASB_USBH2_STP	IMX_GPIO_NR(2, 20)
#define EFIKASB_GREEN_LED	IMX_GPIO_NR(1, 3)
#define EFIKASB_WHITE_LED	IMX_GPIO_NR(2, 25)
#define EFIKASB_PCBID0		IMX_GPIO_NR(2, 28)
#define EFIKASB_PCBID1		IMX_GPIO_NR(2, 29)
#define EFIKASB_PWRKEY		IMX_GPIO_NR(2, 31)
#define EFIKASB_LID		IMX_GPIO_NR(3, 14)
#define EFIKASB_POWEROFF	IMX_GPIO_NR(4, 13)
#define EFIKASB_RFKILL		IMX_GPIO_NR(3, 1)
#define MX51_PAD_PWRKEY IOMUX_PAD(0x48c, 0x0f8, 1, 0x0,   0, PAD_CTL_PUS_100K_UP | PAD_CTL_PKE)
static iomux_v3_cfg_t mx51efikasb_pads[] = ;
static int initialize_usbh2_port(struct platform_device *pdev)
static struct mxc_usbh_platform_data usbh2_config = ;
static void __init mx51_efikasb_usb(void)
static struct gpio_led mx51_efikasb_leds[] = ;
static struct gpio_led_platform_data mx51_efikasb_leds_data = ;
static struct platform_device mx51_efikasb_leds_device = ;
static struct gpio_keys_button mx51_efikasb_keys[] = ;
static const struct gpio_keys_platform_data mx51_efikasb_keys_data __initconst = ;
static struct regulator *pwgt1, *pwgt2;
static void mx51_efikasb_power_off(void)
static int __init mx51_efikasb_power_init(void)
late_initcall(mx51_efikasb_power_init);
static void __init mx51_efikasb_board_id(void)
static void __init efikasb_board_init(void)
static void __init mx51_efikasb_timer_init(void)
static struct sys_timer mx51_efikasb_timer = ;
MACHINE_START(MX51_EFIKASB, "Genesi Efika Smartbook")
.boot_params = MX51_PHYS_OFFSET + 0x100,
.map_io = mx51_map_io,
.init_early = imx51_init_early,
.init_irq = mx51_init_irq,
.init_machine =  efikasb_board_init,
.timer = &mx51_efikasb_timer,
MACHINE_END
