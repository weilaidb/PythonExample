extern void cmx255_init(void);
extern void cmx270_init(void);
#define CMX2XX_NR_IRQS		(IRQ_BOARD_START + 40)
#define CMX2XX_VIRT_BASE	(0xe8000000)
#define CMX2XX_IT8152_VIRT	(CMX2XX_VIRT_BASE)
#define CMX255_DM9000_PHYS_BASE (PXA_CS1_PHYS + (8 << 22))
#define CMX270_DM9000_PHYS_BASE	(PXA_CS1_PHYS + (6 << 22))
#define CMX255_GPIO_RED		(27)
#define CMX255_GPIO_GREEN	(32)
#define CMX270_GPIO_RED		(93)
#define CMX270_GPIO_GREEN	(94)
#define GPIO22_ETHIRQ		(22)
#define GPIO10_ETHIRQ		(10)
#define CMX255_GPIO_IT8152_IRQ	(0)
#define CMX270_GPIO_IT8152_IRQ	(22)
#define CMX255_ETHIRQ		IRQ_GPIO(GPIO22_ETHIRQ)
#define CMX270_ETHIRQ		IRQ_GPIO(GPIO10_ETHIRQ)
#if defined(CONFIG_DM9000) || defined(CONFIG_DM9000_MODULE)
static struct resource cmx255_dm9000_resource[] = ;
static struct resource cmx270_dm9000_resource[] = ;
static struct dm9000_plat_data cmx270_dm9000_platdata = ;
static struct platform_device cmx2xx_dm9000_device = ;
static void __init cmx2xx_init_dm9000(void)
static inline void cmx2xx_init_dm9000(void)
#if defined(CONFIG_TOUCHSCREEN_UCB1400) || defined(CONFIG_TOUCHSCREEN_UCB1400_MODULE)
static struct platform_device cmx2xx_ts_device = ;
static void __init cmx2xx_init_touchscreen(void)
static inline void cmx2xx_init_touchscreen(void)
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led cmx2xx_leds[] = ;
static struct gpio_led_platform_data cmx2xx_gpio_led_pdata = ;
static struct platform_device cmx2xx_led_device = ;
static void __init cmx2xx_init_leds(void)
static inline void cmx2xx_init_leds(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
#define MTYPE_STN320x240	0
#define MTYPE_TFT640x480	1
#define MTYPE_CRT640x480	2
#define MTYPE_CRT800x600	3
#define MTYPE_TFT320x240	6
#define MTYPE_STN640x480	7
static struct pxafb_mode_info generic_stn_320x240_mode = ;
static struct pxafb_mach_info generic_stn_320x240 = ;
static struct pxafb_mode_info generic_tft_640x480_mode = ;
static struct pxafb_mach_info generic_tft_640x480 = ;
static struct pxafb_mode_info generic_crt_640x480_mode = ;
static struct pxafb_mach_info generic_crt_640x480 = ;
static struct pxafb_mode_info generic_crt_800x600_mode = ;
static struct pxafb_mach_info generic_crt_800x600 = ;
static struct pxafb_mode_info generic_tft_320x240_mode = ;
static struct pxafb_mach_info generic_tft_320x240 = ;
static struct pxafb_mode_info generic_stn_640x480_mode = ;
static struct pxafb_mach_info generic_stn_640x480 = ;
static struct pxafb_mach_info *cmx2xx_display = &generic_crt_640x480;
static int __init cmx2xx_set_display(char *str)
__setup("monitor=", cmx2xx_set_display);
static void __init cmx2xx_init_display(void)
static inline void cmx2xx_init_display(void)
static unsigned long sleep_save_msc[10];
static int cmx2xx_suspend(void)
static void cmx2xx_resume(void)
static struct syscore_ops cmx2xx_pm_syscore_ops = ;
static int __init cmx2xx_pm_init(void)
static int __init cmx2xx_pm_init(void)
#if defined(CONFIG_SND_PXA2XX_AC97) || defined(CONFIG_SND_PXA2XX_AC97_MODULE)
static void __init cmx2xx_init_ac97(void)
static inline void cmx2xx_init_ac97(void)
static void __init cmx2xx_init(void)
static void __init cmx2xx_init_irq(void)
static struct map_desc cmx2xx_io_desc[] __initdata = ;
static void __init cmx2xx_map_io(void)
static void __init cmx2xx_map_io(void)
MACHINE_START(ARMCORE, "Compulab CM-X2XX")
.boot_params	= 0xa0000100,
.map_io		= cmx2xx_map_io,
.nr_irqs	= CMX2XX_NR_IRQS,
.init_irq	= cmx2xx_init_irq,
.timer		= &pxa_timer,
.init_machine	= cmx2xx_init,
MACHINE_END
