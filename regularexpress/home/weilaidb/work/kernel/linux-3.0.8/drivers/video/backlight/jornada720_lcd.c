#define LCD_MAX_CONTRAST	0xff
#define LCD_DEF_CONTRAST	0x80
static int jornada_lcd_get_power(struct lcd_device *dev)
static int jornada_lcd_get_contrast(struct lcd_device *dev)
static int jornada_lcd_set_contrast(struct lcd_device *dev, int value)
static int jornada_lcd_set_power(struct lcd_device *dev, int power)
static struct lcd_ops jornada_lcd_props = ;
static int jornada_lcd_probe(struct platform_device *pdev)
static int jornada_lcd_remove(struct platform_device *pdev)
static struct platform_driver jornada_lcd_driver = ;
static int __init jornada_lcd_init(void)
static void __exit jornada_lcd_exit(void)
MODULE_AUTHOR("Kristoffer Ericson <kristoffer.ericson@gmail.com>");
MODULE_DESCRIPTION("HP Jornada 710/720/728 LCD driver");
MODULE_LICENSE("GPL");
module_init(jornada_lcd_init);
module_exit(jornada_lcd_exit);
