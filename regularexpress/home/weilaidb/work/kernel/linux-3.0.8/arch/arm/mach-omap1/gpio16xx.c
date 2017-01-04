#define OMAP1610_GPIO1_BASE		0xfffbe400
#define OMAP1610_GPIO2_BASE		0xfffbec00
#define OMAP1610_GPIO3_BASE		0xfffbb400
#define OMAP1610_GPIO4_BASE		0xfffbbc00
#define OMAP1_MPUIO_VBASE		OMAP1_MPUIO_BASE
static struct __initdata resource omap16xx_mpu_gpio_resources[] = ;
static struct __initdata omap_gpio_platform_data omap16xx_mpu_gpio_config = ;
static struct platform_device omap16xx_mpu_gpio = ;
static struct __initdata resource omap16xx_gpio1_resources[] = ;
static struct __initdata omap_gpio_platform_data omap16xx_gpio1_config = ;
static struct platform_device omap16xx_gpio1 = ;
static struct __initdata resource omap16xx_gpio2_resources[] = ;
static struct __initdata omap_gpio_platform_data omap16xx_gpio2_config = ;
static struct platform_device omap16xx_gpio2 = ;
static struct __initdata resource omap16xx_gpio3_resources[] = ;
static struct __initdata omap_gpio_platform_data omap16xx_gpio3_config = ;
static struct platform_device omap16xx_gpio3 = ;
static struct __initdata resource omap16xx_gpio4_resources[] = ;
static struct __initdata omap_gpio_platform_data omap16xx_gpio4_config = ;
static struct platform_device omap16xx_gpio4 = ;
static struct __initdata platform_device * omap16xx_gpio_dev[] = ;
static int __init omap16xx_gpio_init(void)
postcore_initcall(omap16xx_gpio_init);
