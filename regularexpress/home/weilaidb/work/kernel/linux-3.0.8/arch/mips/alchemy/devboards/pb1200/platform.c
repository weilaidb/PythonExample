static int mmc_activity;
static void pb1200mmc0_set_power(void *mmc_host, int state)
static int pb1200mmc0_card_readonly(void *mmc_host)
static int pb1200mmc0_card_inserted(void *mmc_host)
static void pb1200_mmcled_set(struct led_classdev *led,
enum led_brightness brightness)
static struct led_classdev pb1200mmc_led = ;
static void pb1200mmc1_set_power(void *mmc_host, int state)
static int pb1200mmc1_card_readonly(void *mmc_host)
static int pb1200mmc1_card_inserted(void *mmc_host)
const struct au1xmmc_platform_data au1xmmc_platdata[2] = ;
static struct resource ide_resources[] = ;
static u64 ide_dmamask = DMA_BIT_MASK(32);
static struct platform_device ide_device = ;
static struct smc91x_platdata smc_data = ;
static struct resource smc91c111_resources[] = ;
static struct platform_device smc91c111_device = ;
static struct platform_device *board_platform_devices[] __initdata = ;
static int __init board_register_devices(void)
device_initcall(board_register_devices);
