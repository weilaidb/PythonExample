#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led cm_t3517_leds[] = ;
static struct gpio_led_platform_data cm_t3517_led_pdata = ;
static struct platform_device cm_t3517_led_device = ;
static void __init cm_t3517_init_leds(void)
static inline void cm_t3517_init_leds(void)
#if defined(CONFIG_CAN_TI_HECC) || defined(CONFIG_CAN_TI_HECC_MODULE)
static struct resource cm_t3517_hecc_resources[] = ;
static struct ti_hecc_platform_data cm_t3517_hecc_pdata = ;
static struct platform_device cm_t3517_hecc_device = ;
static void cm_t3517_init_hecc(void)
static inline void cm_t3517_init_hecc(void)
#if defined(CONFIG_RTC_DRV_V3020) || defined(CONFIG_RTC_DRV_V3020_MODULE)
#define RTC_IO_GPIO		(153)
#define RTC_WR_GPIO		(154)
#define RTC_RD_GPIO		(53)
#define RTC_CS_GPIO		(163)
#define RTC_CS_EN_GPIO		(160)
struct v3020_platform_data cm_t3517_v3020_pdata = ;
static struct platform_device cm_t3517_rtc_device = ;
static void __init cm_t3517_init_rtc(void)
static inline void cm_t3517_init_rtc(void)
#if defined(CONFIG_USB_EHCI_HCD) || defined(CONFIG_USB_EHCI_HCD_MODULE)
#define HSUSB1_RESET_GPIO	(146)
#define HSUSB2_RESET_GPIO	(147)
#define USB_HUB_RESET_GPIO	(152)
static struct usbhs_omap_board_data cm_t3517_ehci_pdata __initdata = ;
static int __init cm_t3517_init_usbh(void)
static inline int cm_t3517_init_usbh(void)
#if defined(CONFIG_MTD_NAND_OMAP2) || defined(CONFIG_MTD_NAND_OMAP2_MODULE)
static struct mtd_partition cm_t3517_nand_partitions[] = ;
static struct omap_nand_platform_data cm_t3517_nand_data = ;
static void __init cm_t3517_init_nand(void)
static inline void cm_t3517_init_nand(void)
static struct omap_board_config_kernel cm_t3517_config[] __initdata = ;
static void __init cm_t3517_init_early(void)
static struct omap_board_mux board_mux[] __initdata = ;
static void __init cm_t3517_init(void)
MACHINE_START(CM_T3517, "Compulab CM-T3517")
.boot_params	= 0x80000100,
.reserve        = omap_reserve,
.map_io		= omap3_map_io,
.init_early	= cm_t3517_init_early,
.init_irq	= omap_init_irq,
.init_machine	= cm_t3517_init,
.timer		= &omap_timer,
MACHINE_END
