static struct ac97c_platform_data __initdata ac97c0_data = ;
static struct fb_videomode __initdata tcg057vglad_modes[] = ;
static struct fb_monspecs __initdata atevklcd10x_default_monspecs = ;
static struct atmel_lcdfb_info __initdata atevklcd10x_lcdc_data = ;
#elif CONFIG_BOARD_ATNGW100_EVKLCD10X_QVGA
static struct fb_videomode __initdata tcg057qvlad_modes[] = ;
static struct fb_monspecs __initdata atevklcd10x_default_monspecs = ;
static struct atmel_lcdfb_info __initdata atevklcd10x_lcdc_data = ;
#elif CONFIG_BOARD_ATNGW100_EVKLCD10X_POW_QVGA
static struct fb_videomode __initdata ph320240t_modes[] = ;
static struct fb_monspecs __initdata atevklcd10x_default_monspecs = ;
static struct atmel_lcdfb_info __initdata atevklcd10x_lcdc_data = ;
static void atevklcd10x_lcdc_power_control(int on)
static int __init atevklcd10x_init(void)
postcore_initcall(atevklcd10x_init);
