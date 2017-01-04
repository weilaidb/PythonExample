static mfp_cfg_t common_mfp_cfg[] __initdata = ;
static mfp_cfg_t pxa300_mfp_cfg[] __initdata = ;
static mfp_cfg_t pxa310_mfp_cfg[] __initdata = ;
#define NUM_LCD_DETECT_PINS	7
static int lcd_detect_pins[] __initdata = ;
static void __init zylonite_detect_lcd_panel(void)
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static struct pca953x_platform_data gpio_exp[] = ;
static struct i2c_board_info zylonite_i2c_board_info[] = ;
static void __init zylonite_init_i2c(void)
static inline void zylonite_init_i2c(void)
void __init zylonite_pxa300_init(void)
