#define LCD_DATA_REG_OFFSET	0x10
#define LCD_XRES_MAX		16
#define LCD_YRES_MAX		2
#define LCD_CHARS_MAX		32
#define LCD_CLEAR		0x01
#define LCD_CURSOR_MOVE_HOME	0x02
#define LCD_RESET		0x06
#define LCD_OFF			0x08
#define LCD_CURSOR_OFF		0x0c
#define LCD_CURSOR_BLINK_OFF	0x0e
#define LCD_CURSOR_ON		0x0f
#define LCD_ON			LCD_CURSOR_ON
#define LCD_CURSOR_MOVE_LEFT	0x10
#define LCD_CURSOR_MOVE_RIGHT	0x14
#define LCD_DISPLAY_LEFT	0x18
#define LCD_DISPLAY_RIGHT	0x1c
#define LCD_PRERESET		0x3f
#define LCD_BUSY		0x80
#define LCD_GRAPHIC_MODE	0x40
#define LCD_TEXT_MODE		0x80
#define LCD_CUR_POS_MASK	0x7f
#define LCD_CUR_POS(x)		((x) & LCD_CUR_POS_MASK)
#define LCD_TEXT_POS(x)		((x) | LCD_TEXT_MODE)
static inline void lcd_write_control(struct fb_info *info, u8 control)
static inline u8 lcd_read_control(struct fb_info *info)
static inline void lcd_write_data(struct fb_info *info, u8 data)
static inline u8 lcd_read_data(struct fb_info *info)
static int lcd_busy_wait(struct fb_info *info)
static void lcd_clear(struct fb_info *info)
static struct fb_fix_screeninfo cobalt_lcdfb_fix __devinitdata = ;
static ssize_t cobalt_lcdfb_read(struct fb_info *info, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t cobalt_lcdfb_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos)
static int cobalt_lcdfb_blank(int blank_mode, struct fb_info *info)
static int cobalt_lcdfb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static struct fb_ops cobalt_lcd_fbops = ;
static int __devinit cobalt_lcdfb_probe(struct platform_device *dev)
static int __devexit cobalt_lcdfb_remove(struct platform_device *dev)
static struct platform_driver cobalt_lcdfb_driver = ;
static int __init cobalt_lcdfb_init(void)
static void __exit cobalt_lcdfb_exit(void)
module_init(cobalt_lcdfb_init);
module_exit(cobalt_lcdfb_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Yoichi Yuasa");
MODULE_DESCRIPTION("Cobalt server LCD frame buffer driver");
