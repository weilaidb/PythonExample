static mfp_cfg_t tavorevb_mfp_cfg[] __initdata = ;
#define TAVOREVB_ETH_PHYS	(0x14000000)
static struct resource smc91x_resources[] = ;
static struct smc91x_platdata tavorevb_smc91x_info = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int tavorevb_matrix_key_map[] = ;
static struct pxa27x_keypad_platform_data tavorevb_keypad_info = ;
static void __init tavorevb_init_keypad(void)
static inline void tavorevb_init_keypad(void)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct platform_pwm_backlight_data tavorevb_backlight_data[] = ;
static struct platform_device tavorevb_backlight_devices[] = ;
static uint16_t panel_init[] = ;
static uint16_t panel_on[] = ;
static uint16_t panel_off[] = ;
static uint16_t update_framedata[] = ;
static void ltm020d550_lcd_power(int on, struct fb_var_screeninfo *var)
static void ltm020d550_update(struct fb_info *info)
static struct pxafb_mode_info toshiba_ltm020d550_modes[] = ;
static struct pxafb_mach_info tavorevb_lcd_info = ;
static void __init tavorevb_init_lcd(void)
static inline void tavorevb_init_lcd(void)
static void __init tavorevb_init(void)
MACHINE_START(TAVOREVB, "PXA930 Evaluation Board (aka TavorEVB)")
.boot_params    = 0xa0000100,
.map_io         = pxa3xx_map_io,
.init_irq       = pxa3xx_init_irq,
.timer          = &pxa_timer,
.init_machine   = tavorevb_init,
MACHINE_END
