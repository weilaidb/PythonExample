#define __ASM_SH_KFR2R09_H
#if defined(CONFIG_FB_SH_MOBILE_LCDC) || defined(CONFIG_FB_SH_MOBILE_LCDC_MODULE)
void kfr2r09_lcd_on(void *board_data, struct fb_info *info);
void kfr2r09_lcd_off(void *board_data);
int kfr2r09_lcd_setup(void *board_data, void *sys_ops_handle,
struct sh_mobile_lcdc_sys_bus_ops *sys_ops);
void kfr2r09_lcd_start(void *board_data, void *sys_ops_handle,
struct sh_mobile_lcdc_sys_bus_ops *sys_ops);
static void kfr2r09_lcd_on(void *board_data)
static void kfr2r09_lcd_off(void *board_data)
static int kfr2r09_lcd_setup(void *board_data, void *sys_ops_handle,
struct sh_mobile_lcdc_sys_bus_ops *sys_ops)
static void kfr2r09_lcd_start(void *board_data, void *sys_ops_handle,
struct sh_mobile_lcdc_sys_bus_ops *sys_ops)
