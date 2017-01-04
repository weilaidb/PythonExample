#if defined(CONFIG_AX88796)
#define ETHER_ADDR_LEN 6
static u8 ether_mac_addr[ETHER_ADDR_LEN];
void __init colibri_pxa3xx_init_eth(struct ax_plat_data *plat_data)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static int lcd_bl_pin;
static void colibri_lcd_backlight(int on)
static struct pxafb_mode_info sharp_lq43_mode = ;
static struct pxafb_mach_info sharp_lq43_info = ;
void __init colibri_pxa3xx_init_lcd(int bl_pin)
#if defined(CONFIG_MTD_NAND_PXA3xx) || defined(CONFIG_MTD_NAND_PXA3xx_MODULE)
static struct mtd_partition colibri_nand_partitions[] = ;
static struct pxa3xx_nand_platform_data colibri_nand_info = ;
void __init colibri_pxa3xx_init_nand(void)
