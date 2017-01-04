static int ivtvfb_card_id = -1;
static int ivtvfb_debug = 0;
static int osd_laced;
static int osd_depth;
static int osd_upper;
static int osd_left;
static int osd_yres;
static int osd_xres;
module_param(ivtvfb_card_id, int, 0444);
module_param_named(debug,ivtvfb_debug, int, 0644);
module_param(osd_laced, bool, 0444);
module_param(osd_depth, int, 0444);
module_param(osd_upper, int, 0444);
module_param(osd_left, int, 0444);
module_param(osd_yres, int, 0444);
module_param(osd_xres, int, 0444);
MODULE_PARM_DESC(ivtvfb_card_id,
"Only use framebuffer of the specified ivtv card (0-31)\n"
"\t\t\tdefault -1: initialize all available framebuffers");
MODULE_PARM_DESC(debug,
"Debug level (bitmask). Default: errors only\n"
"\t\t\t(debug = 3 gives full debugging)");
MODULE_PARM_DESC(osd_laced,
"Interlaced mode\n"
"\t\t\t0=off\n"
"\t\t\t1=on\n"
"\t\t\tdefault off");
MODULE_PARM_DESC(osd_depth,
"Bits per pixel - 8, 16, 32\n"
"\t\t\tdefault 8");
MODULE_PARM_DESC(osd_upper,
"Vertical start position\n"
"\t\t\tdefault 0 (Centered)");
MODULE_PARM_DESC(osd_left,
"Horizontal start position\n"
"\t\t\tdefault 0 (Centered)");
MODULE_PARM_DESC(osd_yres,
"Display height\n"
"\t\t\tdefault 480 (PAL)\n"
"\t\t\t        400 (NTSC)");
MODULE_PARM_DESC(osd_xres,
"Display width\n"
"\t\t\tdefault 640");
MODULE_AUTHOR("Kevin Thayer, Chris Kennedy, Hans Verkuil, John Harvey, Ian Armstrong");
MODULE_LICENSE("GPL");
#define IVTVFB_DBGFLG_WARN  (1 << 0)
#define IVTVFB_DBGFLG_INFO  (1 << 1)
#define IVTVFB_DEBUG(x, type, fmt, args...) \
do  while (0)
#define IVTVFB_DEBUG_WARN(fmt, args...)  IVTVFB_DEBUG(IVTVFB_DBGFLG_WARN, "warning", fmt , ## args)
#define IVTVFB_DEBUG_INFO(fmt, args...)  IVTVFB_DEBUG(IVTVFB_DBGFLG_INFO, "info", fmt , ## args)
#define IVTVFB_ERR(fmt, args...)   printk(KERN_ERR  "ivtvfb%d: " fmt, itv->instance , ## args)
#define IVTVFB_WARN(fmt, args...)  printk(KERN_WARNING  "ivtvfb%d: " fmt, itv->instance , ## args)
#define IVTVFB_INFO(fmt, args...)  printk(KERN_INFO "ivtvfb%d: " fmt, itv->instance , ## args)
#define IVTV_OSD_MAX_WIDTH  720
#define IVTV_OSD_MAX_HEIGHT 576
#define IVTV_OSD_BPP_8      0x00
#define IVTV_OSD_BPP_16_444 0x03
#define IVTV_OSD_BPP_16_555 0x02
#define IVTV_OSD_BPP_16_565 0x01
#define IVTV_OSD_BPP_32     0x04
struct osd_info ;
struct ivtv_osd_coords ;
static int ivtvfb_get_framebuffer(struct ivtv *itv, u32 *fbbase,
u32 *fblength)
static int ivtvfb_get_osd_coords(struct ivtv *itv,
struct ivtv_osd_coords *osd)
static int ivtvfb_set_osd_coords(struct ivtv *itv, const struct ivtv_osd_coords *osd)
static int ivtvfb_set_display_window(struct ivtv *itv, struct v4l2_rect *ivtv_window)
static int ivtvfb_prep_dec_dma_to_device(struct ivtv *itv,
unsigned long ivtv_dest_addr, void __user *userbuf,
int size_in_bytes)
static int ivtvfb_prep_frame(struct ivtv *itv, int cmd, void __user *source,
unsigned long dest_offset, int count)
static ssize_t ivtvfb_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos)
static int ivtvfb_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
static int ivtvfb_set_var(struct ivtv *itv, struct fb_var_screeninfo *var)
static int ivtvfb_get_fix(struct ivtv *itv, struct fb_fix_screeninfo *fix)
static int _ivtvfb_check_var(struct fb_var_screeninfo *var, struct ivtv *itv)
static int ivtvfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int ivtvfb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static int ivtvfb_set_par(struct fb_info *info)
static int ivtvfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int ivtvfb_blank(int blank_mode, struct fb_info *info)
static struct fb_ops ivtvfb_ops = ;
static void ivtvfb_restore(struct ivtv *itv)
static int ivtvfb_init_vidmode(struct ivtv *itv)
static int ivtvfb_init_io(struct ivtv *itv)
static void ivtvfb_release_buffers (struct ivtv *itv)
static int ivtvfb_init_card(struct ivtv *itv)
static int __init ivtvfb_callback_init(struct device *dev, void *p)
static int ivtvfb_callback_cleanup(struct device *dev, void *p)
static int __init ivtvfb_init(void)
static void ivtvfb_cleanup(void)
module_init(ivtvfb_init);
module_exit(ivtvfb_cleanup);
