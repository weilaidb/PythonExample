#define __LINUX_MFD_PCF50633_BACKLIGHT
struct pcf50633_bl_platform_data ;
struct pcf50633;
int pcf50633_bl_set_brightness_limit(struct pcf50633 *pcf, unsigned int limit);
