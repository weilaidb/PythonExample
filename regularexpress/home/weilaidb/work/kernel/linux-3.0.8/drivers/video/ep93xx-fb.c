#define EP93XXFB_VLINES_TOTAL			0x0000
#define EP93XXFB_VSYNC				0x0004
#define EP93XXFB_VACTIVE			0x0008
#define EP93XXFB_VBLANK				0x0228
#define EP93XXFB_VCLK				0x000c
#define EP93XXFB_HCLKS_TOTAL			0x0010
#define EP93XXFB_HSYNC				0x0014
#define EP93XXFB_HACTIVE			0x0018
#define EP93XXFB_HBLANK				0x022c
#define EP93XXFB_HCLK				0x001c
#define EP93XXFB_SCREEN_PAGE			0x0028
#define EP93XXFB_SCREEN_HPAGE			0x002c
#define EP93XXFB_SCREEN_LINES			0x0030
#define EP93XXFB_LINE_LENGTH			0x0034
#define EP93XXFB_VLINE_STEP			0x0038
#define EP93XXFB_LINE_CARRY			0x003c
#define EP93XXFB_EOL_OFFSET			0x0230
#define EP93XXFB_BRIGHTNESS			0x0020
#define EP93XXFB_ATTRIBS			0x0024
#define EP93XXFB_SWLOCK				0x007c
#define EP93XXFB_AC_RATE			0x0214
#define EP93XXFB_FIFO_LEVEL			0x0234
#define EP93XXFB_PIXELMODE			0x0054
#define EP93XXFB_PIXELMODE_32BPP		(0x7 << 0)
#define EP93XXFB_PIXELMODE_24BPP		(0x6 << 0)
#define EP93XXFB_PIXELMODE_16BPP		(0x4 << 0)
#define EP93XXFB_PIXELMODE_8BPP			(0x2 << 0)
#define EP93XXFB_PIXELMODE_SHIFT_1P_24B		(0x0 << 3)
#define EP93XXFB_PIXELMODE_SHIFT_1P_18B		(0x1 << 3)
#define EP93XXFB_PIXELMODE_COLOR_LUT		(0x0 << 10)
#define EP93XXFB_PIXELMODE_COLOR_888		(0x4 << 10)
#define EP93XXFB_PIXELMODE_COLOR_555		(0x5 << 10)
#define EP93XXFB_PARL_IF_OUT			0x0058
#define EP93XXFB_PARL_IF_IN			0x005c
#define EP93XXFB_BLINK_RATE			0x0040
#define EP93XXFB_BLINK_MASK			0x0044
#define EP93XXFB_BLINK_PATTRN			0x0048
#define EP93XXFB_PATTRN_MASK			0x004c
#define EP93XXFB_BKGRND_OFFSET			0x0050
#define EP93XXFB_CURSOR_ADR_START		0x0060
#define EP93XXFB_CURSOR_ADR_RESET		0x0064
#define EP93XXFB_CURSOR_SIZE			0x0068
#define EP93XXFB_CURSOR_COLOR1			0x006c
#define EP93XXFB_CURSOR_COLOR2			0x0070
#define EP93XXFB_CURSOR_BLINK_COLOR1		0x021c
#define EP93XXFB_CURSOR_BLINK_COLOR2		0x0220
#define EP93XXFB_CURSOR_XY_LOC			0x0074
#define EP93XXFB_CURSOR_DSCAN_HY_LOC		0x0078
#define EP93XXFB_CURSOR_BLINK_RATE_CTRL		0x0224
#define EP93XXFB_GRY_SCL_LUTR			0x0080
#define EP93XXFB_GRY_SCL_LUTG			0x0280
#define EP93XXFB_GRY_SCL_LUTB			0x0300
#define EP93XXFB_LUT_SW_CONTROL			0x0218
#define EP93XXFB_LUT_SW_CONTROL_SWTCH		(1 << 0)
#define EP93XXFB_LUT_SW_CONTROL_SSTAT		(1 << 1)
#define EP93XXFB_COLOR_LUT			0x0400
#define EP93XXFB_VID_SIG_RSLT_VAL		0x0200
#define EP93XXFB_VID_SIG_CTRL			0x0204
#define EP93XXFB_VSIG				0x0208
#define EP93XXFB_HSIG				0x020c
#define EP93XXFB_SIG_CLR_STR			0x0210
#define EP93XXFB_MIN_XRES			64
#define EP93XXFB_MIN_YRES			64
#define EP93XXFB_MAX_XRES			1024
#define EP93XXFB_MAX_YRES			768
struct ep93xx_fbi ;
static int check_screenpage_bug = 1;
module_param(check_screenpage_bug, int, 0644);
MODULE_PARM_DESC(check_screenpage_bug,
"Check for bit 27 screen page bug. Default = 1");
static inline unsigned int ep93xxfb_readl(struct ep93xx_fbi *fbi,
unsigned int off)
static inline void ep93xxfb_writel(struct ep93xx_fbi *fbi,
unsigned int val, unsigned int off)
static inline void ep93xxfb_out_locked(struct ep93xx_fbi *fbi,
unsigned int val, unsigned int reg)
static void ep93xxfb_set_video_attribs(struct fb_info *info)
static int ep93xxfb_set_pixelmode(struct fb_info *info)
static void ep93xxfb_set_timing(struct fb_info *info)
static int ep93xxfb_set_par(struct fb_info *info)
static int ep93xxfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int ep93xxfb_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int ep93xxfb_blank(int blank_mode, struct fb_info *info)
static inline int ep93xxfb_convert_color(int val, int width)
static int ep93xxfb_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static struct fb_ops ep93xxfb_ops = ;
static int __init ep93xxfb_calc_fbsize(struct ep93xxfb_mach_info *mach_info)
static int __init ep93xxfb_alloc_videomem(struct fb_info *info)
static void ep93xxfb_dealloc_videomem(struct fb_info *info)
static int __devinit ep93xxfb_probe(struct platform_device *pdev)
static int __devexit ep93xxfb_remove(struct platform_device *pdev)
static struct platform_driver ep93xxfb_driver = ;
static int __devinit ep93xxfb_init(void)
static void __exit ep93xxfb_exit(void)
module_init(ep93xxfb_init);
module_exit(ep93xxfb_exit);
MODULE_DESCRIPTION("EP93XX Framebuffer Driver");
MODULE_ALIAS("platform:ep93xx-fb");
MODULE_AUTHOR("Ryan Mallon <ryan&bluewatersys.com>, "
"H Hartley Sweeten <hsweeten@visionengravers.com");
MODULE_LICENSE("GPL");
