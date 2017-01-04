#define DA8XX_FB_H
enum panel_type ;
enum panel_shade ;
enum raster_load_mode ;
struct display_panel ;
struct da8xx_lcdc_platform_data ;
struct lcd_ctrl_config ;
struct lcd_sync_arg ;
#define FBIOGET_CONTRAST	_IOR('F', 1, int)
#define FBIOPUT_CONTRAST	_IOW('F', 2, int)
#define FBIGET_BRIGHTNESS	_IOR('F', 3, int)
#define FBIPUT_BRIGHTNESS	_IOW('F', 3, int)
#define FBIGET_COLOR		_IOR('F', 5, int)
#define FBIPUT_COLOR		_IOW('F', 6, int)
#define FBIPUT_HSYNC		_IOW('F', 9, int)
#define FBIPUT_VSYNC		_IOW('F', 10, int)
