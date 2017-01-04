static char *fb_mode = "640x480-16@60";
static unsigned long default_bpp = 16;
static struct fb_videomode __devinitdata sm501_default_mode = ;
#define NR_PALETTE	256
enum sm501_controller ;
struct sm501_mem ;
struct sm501fb_info ;
struct sm501fb_par ;
static inline int h_total(struct fb_var_screeninfo *var)
static inline int v_total(struct fb_var_screeninfo *var)
static inline void sm501fb_sync_regs(struct sm501fb_info *info)
#define SM501_MEMF_CURSOR		(1)
#define SM501_MEMF_PANEL		(2)
#define SM501_MEMF_CRT			(4)
#define SM501_MEMF_ACCEL		(8)
static int sm501_alloc_mem(struct sm501fb_info *inf, struct sm501_mem *mem,
unsigned int why, size_t size, u32 smem_len)
static unsigned long sm501fb_ps_to_hz(unsigned long psvalue)
#define sm501fb_hz_to_ps(x) sm501fb_ps_to_hz(x)
static void sm501fb_setup_gamma(struct sm501fb_info *fbi,
unsigned long palette)
static int sm501fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int sm501fb_check_var_crt(struct fb_var_screeninfo *var,
struct fb_info *info)
static int sm501fb_check_var_pnl(struct fb_var_screeninfo *var,
struct fb_info *info)
static int sm501fb_set_par_common(struct fb_info *info,
struct fb_var_screeninfo *var)
static void sm501fb_set_par_geometry(struct fb_info *info,
struct fb_var_screeninfo *var)
static int sm501fb_pan_crt(struct fb_var_screeninfo *var,
struct fb_info *info)
static int sm501fb_pan_pnl(struct fb_var_screeninfo *var,
struct fb_info *info)
static int sm501fb_set_par_crt(struct fb_info *info)
static void sm501fb_panel_power(struct sm501fb_info *fbi, int to)
static int sm501fb_set_par_pnl(struct fb_info *info)
static inline unsigned int chan_to_field(unsigned int chan,
struct fb_bitfield *bf)
static int sm501fb_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int sm501fb_blank_pnl(int blank_mode, struct fb_info *info)
static int sm501fb_blank_crt(int blank_mode, struct fb_info *info)
static int sm501fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static ssize_t sm501fb_crtsrc_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t sm501fb_crtsrc_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(crt_src, 0666, sm501fb_crtsrc_show, sm501fb_crtsrc_store);
static int sm501fb_show_regs(struct sm501fb_info *info, char *ptr,
unsigned int start, unsigned int len)
static ssize_t sm501fb_debug_show_crt(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(fbregs_crt, 0444, sm501fb_debug_show_crt, NULL);
static ssize_t sm501fb_debug_show_pnl(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(fbregs_pnl, 0444, sm501fb_debug_show_pnl, NULL);
static int sm501fb_sync(struct fb_info *info)
static void sm501fb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void sm501fb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static struct fb_ops sm501fb_ops_crt = ;
static struct fb_ops sm501fb_ops_pnl = ;
static int sm501_init_cursor(struct fb_info *fbi, unsigned int reg_base)
static int sm501fb_start(struct sm501fb_info *info,
struct platform_device *pdev)
static void sm501fb_stop(struct sm501fb_info *info)
static int __devinit sm501fb_init_fb(struct fb_info *fb,
enum sm501_controller head,
const char *fbname)
static struct sm501_platdata_fbsub sm501fb_pdata_crt = ;
static struct sm501_platdata_fbsub sm501fb_pdata_pnl = ;
static struct sm501_platdata_fb sm501fb_def_pdata = ;
static char driver_name_crt[] = "sm501fb-crt";
static char driver_name_pnl[] = "sm501fb-panel";
static int __devinit sm501fb_probe_one(struct sm501fb_info *info,
enum sm501_controller head)
static void sm501_free_init_fb(struct sm501fb_info *info,
enum sm501_controller head)
static int __devinit sm501fb_start_one(struct sm501fb_info *info,
enum sm501_controller head,
const char *drvname)
static int __devinit sm501fb_probe(struct platform_device *pdev)
static int sm501fb_remove(struct platform_device *pdev)
static int sm501fb_suspend_fb(struct sm501fb_info *info,
enum sm501_controller head)
static void sm501fb_resume_fb(struct sm501fb_info *info,
enum sm501_controller head)
static int sm501fb_suspend(struct platform_device *pdev, pm_message_t state)
#define SM501_CRT_CTRL_SAVE (SM501_DC_CRT_CONTROL_TVP |        \
SM501_DC_CRT_CONTROL_SEL)
static int sm501fb_resume(struct platform_device *pdev)
#define sm501fb_suspend NULL
#define sm501fb_resume  NULL
static struct platform_driver sm501fb_driver = ;
static int __devinit sm501fb_init(void)
static void __exit sm501fb_cleanup(void)
module_init(sm501fb_init);
module_exit(sm501fb_cleanup);
module_param_named(mode, fb_mode, charp, 0);
MODULE_PARM_DESC(mode,
"Specify resolution as \"<xres>x<yres>[-<bpp>][@<refresh>]\" ");
module_param_named(bpp, default_bpp, ulong, 0);
MODULE_PARM_DESC(bpp, "Specify bit-per-pixel if not specified mode");
MODULE_AUTHOR("Ben Dooks, Vincent Sanders");
MODULE_DESCRIPTION("SM501 Framebuffer driver");
MODULE_LICENSE("GPL v2");
