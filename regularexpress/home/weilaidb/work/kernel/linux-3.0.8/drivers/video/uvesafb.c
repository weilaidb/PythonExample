static struct cb_id uvesafb_cn_id = ;
static char v86d_path[PATH_MAX] = "/sbin/v86d";
static char v86d_started;
static struct fb_fix_screeninfo uvesafb_fix __devinitdata = ;
static int mtrr		__devinitdata = 3;
static int blank	= 1;
static int ypan		= 1;
static bool pmi_setpal	__devinitdata = true;
static int nocrtc	__devinitdata;
static int noedid	__devinitdata;
static int vram_remap	__devinitdata;
static int vram_total	__devinitdata;
static u16 maxclk	__devinitdata;
static u16 maxvf	__devinitdata;
static u16 maxhf	__devinitdata;
static u16 vbemode	__devinitdata;
static char *mode_option __devinitdata;
static u8  dac_width	= 6;
static struct uvesafb_ktask *uvfb_tasks[UVESAFB_TASKS_MAX];
static DEFINE_MUTEX(uvfb_lock);
static void uvesafb_cn_callback(struct cn_msg *msg, struct netlink_skb_parms *nsp)
static int uvesafb_helper_start(void)
static int uvesafb_exec(struct uvesafb_ktask *task)
static void uvesafb_free(struct uvesafb_ktask *task)
static void uvesafb_reset(struct uvesafb_ktask *task)
static struct uvesafb_ktask *uvesafb_prep(void)
static void uvesafb_setup_var(struct fb_var_screeninfo *var,
struct fb_info *info, struct vbe_mode_ib *mode)
static int uvesafb_vbe_find_mode(struct uvesafb_par *par,
int xres, int yres, int depth, unsigned char flags)
static u8 *uvesafb_vbe_state_save(struct uvesafb_par *par)
static void uvesafb_vbe_state_restore(struct uvesafb_par *par, u8 *state_buf)
static int __devinit uvesafb_vbe_getinfo(struct uvesafb_ktask *task,
struct uvesafb_par *par)
static int __devinit uvesafb_vbe_getmodes(struct uvesafb_ktask *task,
struct uvesafb_par *par)
static int __devinit uvesafb_vbe_getpmi(struct uvesafb_ktask *task,
struct uvesafb_par *par)
static int __devinit uvesafb_is_valid_mode(struct fb_videomode *mode,
struct fb_info *info)
static int __devinit uvesafb_vbe_getedid(struct uvesafb_ktask *task,
struct fb_info *info)
static void __devinit uvesafb_vbe_getmonspecs(struct uvesafb_ktask *task,
struct fb_info *info)
static void __devinit uvesafb_vbe_getstatesize(struct uvesafb_ktask *task,
struct uvesafb_par *par)
static int __devinit uvesafb_vbe_init(struct fb_info *info)
static int __devinit uvesafb_vbe_init_mode(struct fb_info *info)
static int uvesafb_setpalette(struct uvesafb_pal_entry *entries, int count,
int start, struct fb_info *info)
static int uvesafb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int uvesafb_setcmap(struct fb_cmap *cmap, struct fb_info *info)
static int uvesafb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int uvesafb_blank(int blank, struct fb_info *info)
static int uvesafb_open(struct fb_info *info, int user)
static int uvesafb_release(struct fb_info *info, int user)
static int uvesafb_set_par(struct fb_info *info)
static void uvesafb_check_limits(struct fb_var_screeninfo *var,
struct fb_info *info)
static int uvesafb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static struct fb_ops uvesafb_ops = ;
static void __devinit uvesafb_init_info(struct fb_info *info,
struct vbe_mode_ib *mode)
static void __devinit uvesafb_init_mtrr(struct fb_info *info)
static void __devinit uvesafb_ioremap(struct fb_info *info)
static ssize_t uvesafb_show_vbe_ver(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(vbe_version, S_IRUGO, uvesafb_show_vbe_ver, NULL);
static ssize_t uvesafb_show_vbe_modes(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(vbe_modes, S_IRUGO, uvesafb_show_vbe_modes, NULL);
static ssize_t uvesafb_show_vendor(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(oem_vendor, S_IRUGO, uvesafb_show_vendor, NULL);
static ssize_t uvesafb_show_product_name(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(oem_product_name, S_IRUGO, uvesafb_show_product_name, NULL);
static ssize_t uvesafb_show_product_rev(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(oem_product_rev, S_IRUGO, uvesafb_show_product_rev, NULL);
static ssize_t uvesafb_show_oem_string(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(oem_string, S_IRUGO, uvesafb_show_oem_string, NULL);
static ssize_t uvesafb_show_nocrtc(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t uvesafb_store_nocrtc(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(nocrtc, S_IRUGO | S_IWUSR, uvesafb_show_nocrtc,
uvesafb_store_nocrtc);
static struct attribute *uvesafb_dev_attrs[] = ;
static struct attribute_group uvesafb_dev_attgrp = ;
static int __devinit uvesafb_probe(struct platform_device *dev)
static int uvesafb_remove(struct platform_device *dev)
static struct platform_driver uvesafb_driver = ;
static struct platform_device *uvesafb_device;
static int __devinit uvesafb_setup(char *options)
static ssize_t show_v86d(struct device_driver *dev, char *buf)
static ssize_t store_v86d(struct device_driver *dev, const char *buf,
size_t count)
static DRIVER_ATTR(v86d, S_IRUGO | S_IWUSR, show_v86d, store_v86d);
static int __devinit uvesafb_init(void)
module_init(uvesafb_init);
static void __devexit uvesafb_exit(void)
module_exit(uvesafb_exit);
static int param_set_scroll(const char *val, const struct kernel_param *kp)
static struct kernel_param_ops param_ops_scroll = ;
#define param_check_scroll(name, p) __param_check(name, p, void)
module_param_named(scroll, ypan, scroll, 0);
MODULE_PARM_DESC(scroll,
"Scrolling mode, set to 'redraw', 'ypan', or 'ywrap'");
module_param_named(vgapal, pmi_setpal, invbool, 0);
MODULE_PARM_DESC(vgapal, "Set palette using VGA registers");
module_param_named(pmipal, pmi_setpal, bool, 0);
MODULE_PARM_DESC(pmipal, "Set palette using PMI calls");
module_param(mtrr, uint, 0);
MODULE_PARM_DESC(mtrr,
"Memory Type Range Registers setting. Use 0 to disable.");
module_param(blank, bool, 0);
MODULE_PARM_DESC(blank, "Enable hardware blanking");
module_param(nocrtc, bool, 0);
MODULE_PARM_DESC(nocrtc, "Ignore CRTC timings when setting modes");
module_param(noedid, bool, 0);
MODULE_PARM_DESC(noedid,
"Ignore EDID-provided monitor limits when setting modes");
module_param(vram_remap, uint, 0);
MODULE_PARM_DESC(vram_remap, "Set amount of video memory to be used [MiB]");
module_param(vram_total, uint, 0);
MODULE_PARM_DESC(vram_total, "Set total amount of video memoery [MiB]");
module_param(maxclk, ushort, 0);
MODULE_PARM_DESC(maxclk, "Maximum pixelclock [MHz], overrides EDID data");
module_param(maxhf, ushort, 0);
MODULE_PARM_DESC(maxhf,
"Maximum horizontal frequency [kHz], overrides EDID data");
module_param(maxvf, ushort, 0);
MODULE_PARM_DESC(maxvf,
"Maximum vertical frequency [Hz], overrides EDID data");
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option,
"Specify initial video mode as \"<xres>x<yres>[-<bpp>][@<refresh>]\"");
module_param(vbemode, ushort, 0);
MODULE_PARM_DESC(vbemode,
"VBE mode number to set, overrides the 'mode' option");
module_param_string(v86d, v86d_path, PATH_MAX, 0660);
MODULE_PARM_DESC(v86d, "Path to the v86d userspace helper.");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michal Januszewski <spock@gentoo.org>");
MODULE_DESCRIPTION("Framebuffer driver for VBE2.0+ compliant graphics boards");
