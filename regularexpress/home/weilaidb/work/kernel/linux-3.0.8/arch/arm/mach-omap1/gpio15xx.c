#define OMAP1_MPUIO_VBASE		OMAP1_MPUIO_BASE
#define OMAP1510_GPIO_BASE		0xFFFCE000
static struct __initdata resource omap15xx_mpu_gpio_resources[] = ;
static struct __initdata omap_gpio_platform_data omap15xx_mpu_gpio_config = ;
static struct platform_device omap15xx_mpu_gpio = ;
static struct __initdata resource omap15xx_gpio_resources[] = ;
static struct __initdata omap_gpio_platform_data omap15xx_gpio_config = ;
static struct platform_device omap15xx_gpio = ;
static int __init omap15xx_gpio_init(void)
postcore_initcall(omap15xx_gpio_init);
