#define DEBUG_VAR 1
#if defined(CONFIG_BACKLIGHT_CLASS_DEVICE) || \
(defined(CONFIG_BACKLIGHT_CLASS_DEVICE_MODULE) && \
defined(CONFIG_FB_IMX_MODULE))
#define PWMR_BACKLIGHT_AVAILABLE
#define DRIVER_NAME "imx-fb"
#define LCDC_SSA	0x00
#define LCDC_SIZE	0x04
#define SIZE_XMAX(x)	((((x) >> 4) & 0x3f) << 20)
#define YMAX_MASK       (cpu_is_mx1() ? 0x1ff : 0x3ff)
#define SIZE_YMAX(y)	((y) & YMAX_MASK)
#define LCDC_VPW	0x08
#define VPW_VPW(x)	((x) & 0x3ff)
#define LCDC_CPOS	0x0C
#define CPOS_CC1	(1<<31)
#define CPOS_CC0	(1<<30)
#define CPOS_OP		(1<<28)
#define CPOS_CXP(x)	(((x) & 3ff) << 16)
#define LCDC_LCWHB	0x10
#define LCWHB_BK_EN	(1<<31)
#define LCWHB_CW(w)	(((w) & 0x1f) << 24)
#define LCWHB_CH(h)	(((h) & 0x1f) << 16)
#define LCWHB_BD(x)	((x) & 0xff)
#define LCDC_LCHCC	0x14
#define LCDC_PCR	0x18
#define LCDC_HCR	0x1C
#define HCR_H_WIDTH(x)	(((x) & 0x3f) << 26)
#define HCR_H_WAIT_1(x)	(((x) & 0xff) << 8)
#define HCR_H_WAIT_2(x)	((x) & 0xff)
#define LCDC_VCR	0x20
#define VCR_V_WIDTH(x)	(((x) & 0x3f) << 26)
#define VCR_V_WAIT_1(x)	(((x) & 0xff) << 8)
#define VCR_V_WAIT_2(x)	((x) & 0xff)
#define LCDC_POS	0x24
#define POS_POS(x)	((x) & 1f)
#define LCDC_LSCR1	0x28
#define LCDC_PWMR	0x2C
#define LCDC_DMACR	0x30
#define LCDC_RMCR	0x34
#define RMCR_LCDC_EN_MX1	(1<<1)
#define RMCR_SELF_REF	(1<<0)
#define LCDC_LCDICR	0x38
#define LCDICR_INT_SYN	(1<<2)
#define LCDICR_INT_CON	(1)
#define LCDC_LCDISR	0x40
#define LCDISR_UDR_ERR	(1<<3)
#define LCDISR_ERR_RES	(1<<2)
#define LCDISR_EOF	(1<<1)
#define LCDISR_BOF	(1<<0)
static const char *fb_mode;
struct imxfb_rgb ;
struct imxfb_info ;
#define IMX_NAME	"IMX"
#define MIN_XRES	64
#define MIN_YRES	64
static struct imxfb_rgb def_rgb_18 = ;
static struct imxfb_rgb def_rgb_16_tft = ;
static struct imxfb_rgb def_rgb_16_stn = ;
static struct imxfb_rgb def_rgb_8 = ;
static int imxfb_activate_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static inline u_int chan_to_field(u_int chan, struct fb_bitfield *bf)
static int imxfb_setpalettereg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
static int imxfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
static const struct imx_fb_videomode *imxfb_find_mode(struct imxfb_info *fbi)
static int imxfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int imxfb_set_par(struct fb_info *info)
static int imxfb_bl_get_brightness(struct backlight_device *bl)
static int imxfb_bl_update_status(struct backlight_device *bl)
static const struct backlight_ops imxfb_lcdc_bl_ops = ;
static void imxfb_init_backlight(struct imxfb_info *fbi)
static void imxfb_exit_backlight(struct imxfb_info *fbi)
static void imxfb_enable_controller(struct imxfb_info *fbi)
static void imxfb_disable_controller(struct imxfb_info *fbi)
static int imxfb_blank(int blank, struct fb_info *info)
static struct fb_ops imxfb_ops = ;
static int imxfb_activate_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int imxfb_suspend(struct platform_device *dev, pm_message_t state)
static int imxfb_resume(struct platform_device *dev)
#define imxfb_suspend	NULL
#define imxfb_resume	NULL
static int __init imxfb_init_fbinfo(struct platform_device *pdev)
static int __init imxfb_probe(struct platform_device *pdev)
static int __devexit imxfb_remove(struct platform_device *pdev)
void  imxfb_shutdown(struct platform_device * dev)
static struct platform_driver imxfb_driver = ;
static int imxfb_setup(void)
int __init imxfb_init(void)
static void __exit imxfb_cleanup(void)
module_init(imxfb_init);
module_exit(imxfb_cleanup);
MODULE_DESCRIPTION("Freescale i.MX framebuffer driver");
MODULE_AUTHOR("Sascha Hauer, Pengutronix");
MODULE_LICENSE("GPL");
