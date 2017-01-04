#define DPY_W 832
#define DPY_H 622
static int user_wfm_size;
struct epd_frame ;
static struct epd_frame epd_frame_table[] = ;
static struct fb_fix_screeninfo metronomefb_fix __devinitdata = ;
static struct fb_var_screeninfo metronomefb_var __devinitdata = ;
struct waveform_hdr  __attribute__ ((packed));
static u8 calc_cksum(int start, int end, u8 *mem)
static u16 calc_img_cksum(u16 *start, int length)
static int __devinit load_waveform(u8 *mem, size_t size, int m, int t,
struct metronomefb_par *par)
static int metronome_display_cmd(struct metronomefb_par *par)
static int __devinit metronome_powerup_cmd(struct metronomefb_par *par)
static int __devinit metronome_config_cmd(struct metronomefb_par *par)
static int __devinit metronome_init_cmd(struct metronomefb_par *par)
static int __devinit metronome_init_regs(struct metronomefb_par *par)
static void metronomefb_dpy_update(struct metronomefb_par *par)
static u16 metronomefb_dpy_update_page(struct metronomefb_par *par, int index)
static void metronomefb_dpy_deferred_io(struct fb_info *info,
struct list_head *pagelist)
static void metronomefb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void metronomefb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void metronomefb_imageblit(struct fb_info *info,
const struct fb_image *image)
static ssize_t metronomefb_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos)
static struct fb_ops metronomefb_ops = ;
static struct fb_deferred_io metronomefb_defio = ;
static int __devinit metronomefb_probe(struct platform_device *dev)
static int __devexit metronomefb_remove(struct platform_device *dev)
static struct platform_driver metronomefb_driver = ;
static int __init metronomefb_init(void)
static void __exit metronomefb_exit(void)
module_param(user_wfm_size, uint, 0);
MODULE_PARM_DESC(user_wfm_size, "Set custom waveform size");
module_init(metronomefb_init);
module_exit(metronomefb_exit);
MODULE_DESCRIPTION("fbdev driver for Metronome controller");
MODULE_AUTHOR("Jaya Kumar");
MODULE_LICENSE("GPL");
