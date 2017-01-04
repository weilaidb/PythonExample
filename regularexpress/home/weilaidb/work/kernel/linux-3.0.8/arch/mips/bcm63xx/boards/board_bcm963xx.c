#define PFX	"board_bcm963xx: "
static struct bcm963xx_nvram nvram;
static unsigned int mac_addr_used;
static struct board_info board;
static struct board_info __initdata board_96338gw = ;
static struct board_info __initdata board_96338w = ;
static struct board_info __initdata board_96345gw2 = ;
static struct board_info __initdata board_96348r = ;
static struct board_info __initdata board_96348gw_10 = ;
static struct board_info __initdata board_96348gw_11 = ;
static struct board_info __initdata board_96348gw = ;
static struct board_info __initdata board_FAST2404 = ;
static struct board_info __initdata board_rta1025w_16 = ;
static struct board_info __initdata board_DV201AMR = ;
static struct board_info __initdata board_96348gw_a = ;
static struct board_info __initdata board_96358vw = ;
static struct board_info __initdata board_96358vw2 = ;
static struct board_info __initdata board_AGPFS0 = ;
static struct board_info __initdata board_DWVS0 = ;
static const struct board_info __initdata *bcm963xx_boards[] = ;
static struct ssb_sprom bcm63xx_sprom = ;
int bcm63xx_get_fallback_sprom(struct ssb_bus *bus, struct ssb_sprom *out)
const char *board_get_name(void)
static int board_get_mac_address(u8 *mac)
void __init board_prom_init(void)
void __init board_setup(void)
static struct mtd_partition mtd_partitions[] = ;
static struct physmap_flash_data flash_data = ;
static struct resource mtd_resources[] = ;
static struct platform_device mtd_dev = ;
static struct gpio_led_platform_data bcm63xx_led_data;
static struct platform_device bcm63xx_gpio_leds = ;
int __init board_register_devices(void)
