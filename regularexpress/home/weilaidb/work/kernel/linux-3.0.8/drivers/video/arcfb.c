#define floor8(a) (a&(~0x07))
#define floorXres(a,xres) (a&(~(xres - 1)))
#define iceil8(a) (((int)((a+7)/8))*8)
#define ceil64(a) (a|0x3F)
#define ceilXres(a,xres) (a|(xres - 1))
#define KS_SET_DPY_START_LINE 	0xC0
#define KS_SET_PAGE_NUM 	0xB8
#define KS_SET_X 		0x40
#define KS_CEHI 		0x01
#define KS_CELO 		0x00
#define KS_SEL_CMD 		0x08
#define KS_SEL_DATA 		0x00
#define KS_DPY_ON 		0x3F
#define KS_DPY_OFF 		0x3E
#define KS_INTACK 		0x40
#define KS_CLRINT		0x02
struct arcfb_par ;
static struct fb_fix_screeninfo arcfb_fix __devinitdata = ;
static struct fb_var_screeninfo arcfb_var __devinitdata = ;
static unsigned long num_cols;
static unsigned long num_rows;
static unsigned long dio_addr;
static unsigned long cio_addr;
static unsigned long c2io_addr;
static unsigned long splashval;
static unsigned long tuhold;
static unsigned int nosplash;
static unsigned int arcfb_enable;
static unsigned int irq;
static DECLARE_WAIT_QUEUE_HEAD(arcfb_waitq);
static void ks108_writeb_ctl(struct arcfb_par *par,
unsigned int chipindex, unsigned char value)
static void ks108_writeb_mainctl(struct arcfb_par *par, unsigned char value)
static unsigned char ks108_readb_ctl2(struct arcfb_par *par)
static void ks108_writeb_data(struct arcfb_par *par,
unsigned int chipindex, unsigned char value)
static void ks108_set_start_line(struct arcfb_par *par,
unsigned int chipindex, unsigned char y)
static void ks108_set_yaddr(struct arcfb_par *par,
unsigned int chipindex, unsigned char y)
static void ks108_set_xaddr(struct arcfb_par *par,
unsigned int chipindex, unsigned char x)
static void ks108_clear_lcd(struct arcfb_par *par, unsigned int chipindex)
static int arcfb_open(struct fb_info *info, int user)
static int arcfb_release(struct fb_info *info, int user)
static int arcfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static irqreturn_t arcfb_interrupt(int vec, void *dev_instance)
static void arcfb_lcd_update_page(struct arcfb_par *par, unsigned int upper,
unsigned int left, unsigned int right, unsigned int distance)
static void arcfb_lcd_update_vert(struct arcfb_par *par, unsigned int top,
unsigned int bottom, unsigned int left, unsigned int right)
static void arcfb_lcd_update_horiz(struct arcfb_par *par, unsigned int left,
unsigned int right, unsigned int top, unsigned int h)
static void arcfb_lcd_update(struct arcfb_par *par, unsigned int dx,
unsigned int dy, unsigned int w, unsigned int h)
static void arcfb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void arcfb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void arcfb_imageblit(struct fb_info *info, const struct fb_image *image)
static int arcfb_ioctl(struct fb_info *info,
unsigned int cmd, unsigned long arg)
static ssize_t arcfb_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos)
static struct fb_ops arcfb_ops = ;
static int __devinit arcfb_probe(struct platform_device *dev)
static int __devexit arcfb_remove(struct platform_device *dev)
static struct platform_driver arcfb_driver = ;
static struct platform_device *arcfb_device;
static int __init arcfb_init(void)
static void __exit arcfb_exit(void)
module_param(num_cols, ulong, 0);
MODULE_PARM_DESC(num_cols, "Num horiz panels, eg: 2 = 128 bit wide");
module_param(num_rows, ulong, 0);
MODULE_PARM_DESC(num_rows, "Num vert panels, eg: 1 = 64 bit high");
module_param(nosplash, uint, 0);
MODULE_PARM_DESC(nosplash, "Disable doing the splash screen");
module_param(arcfb_enable, uint, 0);
MODULE_PARM_DESC(arcfb_enable, "Enable communication with Arc board");
module_param(dio_addr, ulong, 0);
MODULE_PARM_DESC(dio_addr, "IO address for data, eg: 0x480");
module_param(cio_addr, ulong, 0);
MODULE_PARM_DESC(cio_addr, "IO address for control, eg: 0x400");
module_param(c2io_addr, ulong, 0);
MODULE_PARM_DESC(c2io_addr, "IO address for secondary control, eg: 0x408");
module_param(splashval, ulong, 0);
MODULE_PARM_DESC(splashval, "Splash pattern: 0xFF is black, 0x00 is green");
module_param(tuhold, ulong, 0);
MODULE_PARM_DESC(tuhold, "Time to hold between strobing data to Arc board");
module_param(irq, uint, 0);
MODULE_PARM_DESC(irq, "IRQ for the Arc board");
module_init(arcfb_init);
module_exit(arcfb_exit);
MODULE_DESCRIPTION("fbdev driver for Arc monochrome LCD board");
MODULE_AUTHOR("Jaya Kumar");
MODULE_LICENSE("GPL");
