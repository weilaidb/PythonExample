#define _LINUX_LCD_H
struct lcd_device;
struct fb_info;
struct lcd_properties ;
struct lcd_ops ;
struct lcd_device ;
struct lcd_platform_data ;
static inline void lcd_set_power(struct lcd_device *ld, int power)
extern struct lcd_device *lcd_device_register(const char *name,
struct device *parent, void *devdata, struct lcd_ops *ops);
extern void lcd_device_unregister(struct lcd_device *ld);
#define to_lcd_device(obj) container_of(obj, struct lcd_device, dev)
static inline void * lcd_get_data(struct lcd_device *ld_dev)
