#define XGIFB_PAN
#define Index_CR_GPIO_Reg1 0x48
#define Index_CR_GPIO_Reg2 0x49
#define Index_CR_GPIO_Reg3 0x4a
#define GPIOG_EN    (1<<6)
#define GPIOG_WRITE (1<<6)
#define GPIOG_READ  (1<<1)
#define XGIFB_ROM_SIZE	65536
#undef XGIFBDEBUG
#define DPRINTK(fmt, args...) printk(KERN_DEBUG "%s: " fmt, __FUNCTION__ , ## args)
#define DPRINTK(fmt, args...)
static void dumpVGAReg(void)
static inline void dumpVGAReg(void)
struct video_info xgi_video_info;
#if 1
#define DEBUGPRN(x)
#define DEBUGPRN(x) printk(KERN_INFO x "\n");
static int XGIfb_mode_rate_to_dclock(struct vb_device_info *XGI_Pr,
struct xgi_hw_device_info *HwDeviceExtension,
unsigned char modeno, unsigned char rateindex)
static int XGIfb_mode_rate_to_ddata(struct vb_device_info *XGI_Pr,
struct xgi_hw_device_info *HwDeviceExtension,
unsigned char modeno, unsigned char rateindex,
u32 *left_margin, u32 *right_margin, u32 *upper_margin,
u32 *lower_margin, u32 *hsync_len, u32 *vsync_len, u32 *sync,
u32 *vmode)
static void XGIRegInit(struct vb_device_info *XGI_Pr, unsigned long BaseAddr)
static unsigned char XGIfb_query_VGA_config_space(
struct xgi_hw_device_info *pXGIhw_ext, unsigned long offset,
unsigned long set, unsigned long *value)
static int XGIfb_GetXG21DefaultLVDSModeIdx(void)
static void XGIfb_search_mode(const char *name)
static void XGIfb_search_vesamode(unsigned int vesamode)
static int XGIfb_GetXG21LVDSData(void)
static int XGIfb_validate_mode(int myindex)
static void XGIfb_search_crt2type(const char *name)
static u8 XGIfb_search_refresh_rate(unsigned int rate)
static void XGIfb_search_tvstd(const char *name)
static void XGIfb_bpp_to_var(struct fb_var_screeninfo *var)
static void XGIfb_pre_setmode(void)
static void XGIfb_post_setmode(void)
static int XGIfb_do_set_var(struct fb_var_screeninfo *var, int isactive,
struct fb_info *info)
static int XGIfb_pan_var(struct fb_var_screeninfo *var)
static int XGIfb_open(struct fb_info *info, int user)
static int XGIfb_release(struct fb_info *info, int user)
static int XGIfb_get_cmap_len(const struct fb_var_screeninfo *var)
static int XGIfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info *info)
static int XGIfb_get_fix(struct fb_fix_screeninfo *fix, int con,
struct fb_info *info)
static int XGIfb_set_par(struct fb_info *info)
static int XGIfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int XGIfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int XGIfb_blank(int blank, struct fb_info *info)
static struct fb_ops XGIfb_ops = ;
static int XGIfb_get_dram_size(void)
static void XGIfb_detect_VB(void)
static int XGIfb_has_VB(void)
static void XGIfb_get_VB_type(void)
XGIINITSTATIC int __init XGIfb_setup(char *options)
static unsigned char *xgifb_copy_rom(struct pci_dev *dev)
static int __devinit xgifb_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit xgifb_remove(struct pci_dev *pdev)
static struct pci_driver xgifb_driver = ;
XGIINITSTATIC int __init xgifb_init(void)
module_init(xgifb_init);
static char *mode = NULL;
static int vesa = 0;
static unsigned int rate = 0;
static unsigned int mem = 0;
static char *forcecrt2type = NULL;
static int forcecrt1 = -1;
static int pdc = -1;
static int pdc1 = -1;
static int noypan = -1;
static int userom = -1;
static int useoem = -1;
static char *tvstandard = NULL;
static int nocrt2rate = 0;
static int scalelcd = -1;
static char *specialtiming = NULL;
static int lvdshl = -1;
static int tvxposoffset = 0, tvyposoffset = 0;
#if !defined(__i386__) && !defined(__x86_64__)
static int resetcard = 0;
static int videoram = 0;
MODULE_DESCRIPTION("Z7 Z9 Z9S Z11 framebuffer device driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("XGITECH , Others");
module_param(mem, int, 0);
module_param(noypan, int, 0);
module_param(userom, int, 0);
module_param(useoem, int, 0);
module_param(mode, charp, 0);
module_param(vesa, int, 0);
module_param(rate, int, 0);
module_param(forcecrt1, int, 0);
module_param(forcecrt2type, charp, 0);
module_param(scalelcd, int, 0);
module_param(pdc, int, 0);
module_param(pdc1, int, 0);
module_param(specialtiming, charp, 0);
module_param(lvdshl, int, 0);
module_param(tvstandard, charp, 0);
module_param(tvxposoffset, int, 0);
module_param(tvyposoffset, int, 0);
module_param(filter, int, 0);
module_param(nocrt2rate, int, 0);
#if !defined(__i386__) && !defined(__x86_64__)
module_param(resetcard, int, 0);
module_param(videoram, int, 0);
MODULE_PARM_DESC(noypan,
"\nIf set to anything other than 0, y-panning will be disabled and scrolling\n"
"will be performed by redrawing the screen. (default: 0)\n");
MODULE_PARM_DESC(mode,
"\nSelects the desired default display mode in the format XxYxDepth,\n"
"eg. 1024x768x16. Other formats supported include XxY-Depth and\n"
"XxY-Depth@Rate. If the parameter is only one (decimal or hexadecimal)\n"
"number, it will be interpreted as a VESA mode number. (default: 800x600x8)\n");
MODULE_PARM_DESC(vesa,
"\nSelects the desired default display mode by VESA defined mode number, eg.\n"
"0x117 (default: 0x0103)\n");
MODULE_PARM_DESC(rate,
"\nSelects the desired vertical refresh rate for CRT1 (external VGA) in Hz.\n"
"If the mode is specified in the format XxY-Depth@Rate, this parameter\n"
"will be ignored (default: 60)\n");
MODULE_PARM_DESC(forcecrt1,
"\nNormally, the driver autodetects whether or not CRT1 (external VGA) is\n"
"connected. With this option, the detection can be overridden (1=CRT1 ON,\n"
"0=CRT1 OFF) (default: [autodetected])\n");
MODULE_PARM_DESC(forcecrt2type,
"\nIf this option is omitted, the driver autodetects CRT2 output devices, such as\n"
"LCD, TV or secondary VGA. With this option, this autodetection can be\n"
"overridden. Possible parameters are LCD, TV, VGA or NONE. NONE disables CRT2.\n"
"On systems with a SiS video bridge, parameters SVIDEO, COMPOSITE or SCART can\n"
"be used instead of TV to override the TV detection. Furthermore, on systems\n"
"with a SiS video bridge, SVIDEO+COMPOSITE, HIVISION, YPBPR480I, YPBPR480P,\n"
"YPBPR720P and YPBPR1080I are understood. However, whether or not these work\n"
"depends on the very hardware in use. (default: [autodetected])\n");
MODULE_PARM_DESC(scalelcd,
"\nSetting this to 1 will force the driver to scale the LCD image to the panel's\n"
"native resolution. Setting it to 0 will disable scaling; LVDS panels will\n"
"show black bars around the image, TMDS panels will probably do the scaling\n"
"themselves. Default: 1 on LVDS panels, 0 on TMDS panels\n");
MODULE_PARM_DESC(pdc,
"\nThis is for manually selecting the LCD panel delay compensation. The driver\n"
"should detect this correctly in most cases; however, sometimes this is not\n"
"possible. If you see 'small waves' on the LCD, try setting this to 4, 32 or 24\n"
"on a 300 series chipset; 6 on a 315 series chipset. If the problem persists,\n"
"try other values (on 300 series: between 4 and 60 in steps of 4; on 315 series:\n"
"any value from 0 to 31). (default: autodetected, if LCD is active during start)\n");
MODULE_PARM_DESC(pdc1,
"\nThis is same as pdc, but for LCD-via CRT1. Hence, this is for the 315/330\n"
"series only. (default: autodetected if LCD is in LCD-via-CRT1 mode during\n"
"startup) - Note: currently, this has no effect because LCD-via-CRT1 is not\n"
"implemented yet.\n");
MODULE_PARM_DESC(specialtiming,
"\nPlease refer to documentation for more information on this option.\n");
MODULE_PARM_DESC(lvdshl,
"\nPlease refer to documentation for more information on this option.\n");
MODULE_PARM_DESC(tvstandard,
"\nThis allows overriding the BIOS default for the TV standard. Valid choices are\n"
"pal, ntsc, palm and paln. (default: [auto; pal or ntsc only])\n");
MODULE_PARM_DESC(tvxposoffset,
"\nRelocate TV output horizontally. Possible parameters: -32 through 32.\n"
"Default: 0\n");
MODULE_PARM_DESC(tvyposoffset,
"\nRelocate TV output vertically. Possible parameters: -32 through 32.\n"
"Default: 0\n");
MODULE_PARM_DESC(filter,
"\nSelects TV flicker filter type (only for systems with a SiS301 video bridge).\n"
"(Possible values 0-7, default: [no filter])\n");
MODULE_PARM_DESC(nocrt2rate,
"\nSetting this to 1 will force the driver to use the default refresh rate for\n"
"CRT2 if CRT2 type is VGA. (default: 0, use same rate as CRT1)\n");
static int __init xgifb_init_module(void)
static void __exit xgifb_remove_module(void)
module_init(xgifb_init_module);
module_exit(xgifb_remove_module);
