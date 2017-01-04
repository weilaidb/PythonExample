#define OMAP7XX_GPIO1_BASE		0xfffbc000
#define OMAP7XX_GPIO2_BASE		0xfffbc800
#define OMAP7XX_GPIO3_BASE		0xfffbd000
#define OMAP7XX_GPIO4_BASE		0xfffbd800
#define OMAP7XX_GPIO5_BASE		0xfffbe000
#define OMAP7XX_GPIO6_BASE		0xfffbe800
#define OMAP1_MPUIO_VBASE		OMAP1_MPUIO_BASE
static struct __initdata resource omap7xx_mpu_gpio_resources[] = ;
static struct __initdata omap_gpio_platform_data omap7xx_mpu_gpio_config = ;
static struct platform_device omap7xx_mpu_gpio = ;
static struct __initdata resource omap7xx_gpio1_resources[] = ;
static struct __initdata omap_gpio_platform_data omap7xx_gpio1_config = ;
static struct platform_device omap7xx_gpio1 = ;
static struct __initdata resource omap7xx_gpio2_resources[] = ;
static struct __initdata omap_gpio_platform_data omap7xx_gpio2_config = ;
static struct platform_device omap7xx_gpio2 = ;
static struct __initdata resource omap7xx_gpio3_resources[] = ;
static struct __initdata omap_gpio_platform_data omap7xx_gpio3_config = ;
static struct platform_device omap7xx_gpio3 = ;
static struct __initdata resource omap7xx_gpio4_resources[] = ;
static struct __initdata omap_gpio_platform_data omap7xx_gpio4_config = ;
static struct platform_device omap7xx_gpio4 = ;
static struct __initdata resource omap7xx_gpio5_resources[] = ;
static struct __initdata omap_gpio_platform_data omap7xx_gpio5_config = ;
static struct platform_device omap7xx_gpio5 = ;
static struct __initdata resource omap7xx_gpio6_resources[] = ;
static struct __initdata omap_gpio_platform_data omap7xx_gpio6_config = ;
static struct platform_device omap7xx_gpio6 = ;
static struct __initdata platform_device * omap7xx_gpio_dev[] = ;
static int __init omap7xx_gpio_init(void)
postcore_initcall(omap7xx_gpio_init);
