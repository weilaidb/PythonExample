static mfp_cfg_t colibri_pxa300_evalboard_pin_config[] __initdata = ;
static mfp_cfg_t colibri_pxa300_evalboard_pin_config[] __initdata = ;
#if defined(CONFIG_AX88796)
#define COLIBRI_ETH_IRQ_GPIO	mfp_to_gpio(GPIO26_GPIO)
static struct ax_plat_data colibri_asix_platdata = ;
static struct resource colibri_asix_resource[] = ;
static struct platform_device asix_device = ;
static mfp_cfg_t colibri_pxa300_eth_pin_config[] __initdata = ;
static void __init colibri_pxa300_init_eth(void)
static inline void __init colibri_pxa300_init_eth(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static mfp_cfg_t colibri_pxa300_lcd_pin_config[] __initdata = ;
static void __init colibri_pxa300_init_lcd(void)
static inline void colibri_pxa300_init_lcd(void)
#if defined(CONFIG_SND_AC97_CODEC) || defined(CONFIG_SND_AC97_CODEC_MODULE)
static mfp_cfg_t colibri_pxa310_ac97_pin_config[] __initdata = ;
static inline void __init colibri_pxa310_init_ac97(void)
static inline void colibri_pxa310_init_ac97(void)
void __init colibri_pxa300_init(void)
MACHINE_START(COLIBRI300, "Toradex Colibri PXA300")
.boot_params	= COLIBRI_SDRAM_BASE + 0x100,
.init_machine	= colibri_pxa300_init,
.map_io		= pxa3xx_map_io,
.init_irq	= pxa3xx_init_irq,
.timer		= &pxa_timer,
MACHINE_END
