static void __iomem *hga_vram;
static unsigned long hga_vram_len;
#define HGA_ROWADDR(row) ((row%4)*8192 + (row>>2)*90)
#define HGA_TXT			0
#define HGA_GFX			1
static inline u8 __iomem * rowaddr(struct fb_info *info, u_int row)
static int hga_mode = -1;
static enum  hga_type;
static char *hga_type_name;
#define HGA_INDEX_PORT		0x3b4
#define HGA_VALUE_PORT		0x3b5
#define HGA_MODE_PORT		0x3b8
#define HGA_STATUS_PORT		0x3ba
#define HGA_GFX_PORT		0x3bf
#define HGA_CURSOR_BLINKING	0x00
#define HGA_CURSOR_OFF		0x20
#define HGA_CURSOR_SLOWBLINK	0x60
#define HGA_MODE_GRAPHICS	0x02
#define HGA_MODE_VIDEO_EN	0x08
#define HGA_MODE_BLINK_EN	0x20
#define HGA_MODE_GFX_PAGE1	0x80
#define HGA_STATUS_HSYNC	0x01
#define HGA_STATUS_VSYNC	0x80
#define HGA_STATUS_VIDEO	0x08
#define HGA_CONFIG_COL132	0x08
#define HGA_GFX_MODE_EN		0x01
#define HGA_GFX_PAGE_EN		0x02
static DEFINE_SPINLOCK(hga_reg_lock);
static struct fb_var_screeninfo hga_default_var __devinitdata = ;
static struct fb_fix_screeninfo hga_fix __devinitdata = ;
static int release_io_port = 0;
static int release_io_ports = 0;
static int nologo = 0;
static void write_hga_b(unsigned int val, unsigned char reg)
static void write_hga_w(unsigned int val, unsigned char reg)
static int test_hga_b(unsigned char val, unsigned char reg)
static void hga_clear_screen(void)
static void hga_txt_mode(void)
static void hga_gfx_mode(void)
static void hga_show_logo(struct fb_info *info)
static void hga_pan(unsigned int xoffset, unsigned int yoffset)
static void hga_blank(int blank_mode)
static int __devinit hga_card_detect(void)
static int hgafb_open(struct fb_info *info, int init)
static int hgafb_release(struct fb_info *info, int init)
static int hgafb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int hgafb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int hgafb_blank(int blank_mode, struct fb_info *info)
static void hgafb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void hgafb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void hgafb_imageblit(struct fb_info *info, const struct fb_image *image)
static struct fb_ops hgafb_ops = ;
static int __devinit hgafb_probe(struct platform_device *pdev)
static int __devexit hgafb_remove(struct platform_device *pdev)
static struct platform_driver hgafb_driver = ;
static struct platform_device *hgafb_device;
static int __init hgafb_init(void)
static void __exit hgafb_exit(void)
MODULE_AUTHOR("Ferenc Bakonyi (fero@drama.obuda.kando.hu)");
MODULE_DESCRIPTION("FBDev driver for Hercules Graphics Adaptor");
MODULE_LICENSE("GPL");
module_param(nologo, bool, 0);
MODULE_PARM_DESC(nologo, "Disables startup logo if != 0 (default=0)");
module_init(hgafb_init);
module_exit(hgafb_exit);
