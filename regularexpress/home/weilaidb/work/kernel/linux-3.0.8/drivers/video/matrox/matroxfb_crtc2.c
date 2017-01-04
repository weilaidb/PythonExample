static int mem = 8192;
module_param(mem, int, 0);
MODULE_PARM_DESC(mem, "Memory size reserved for dualhead (default=8MB)");
static int matroxfb_dh_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info* info)
static void matroxfb_dh_restore(struct matroxfb_dh_fb_info* m2info,
struct my_timming* mt,
int mode,
unsigned int pos)
static void matroxfb_dh_disable(struct matroxfb_dh_fb_info* m2info)
static void matroxfb_dh_pan_var(struct matroxfb_dh_fb_info* m2info,
struct fb_var_screeninfo* var)
static int matroxfb_dh_decode_var(struct matroxfb_dh_fb_info* m2info,
struct fb_var_screeninfo* var,
int *visual,
int *video_cmap_len,
int *mode)
static int matroxfb_dh_open(struct fb_info* info, int user)
static int matroxfb_dh_release(struct fb_info* info, int user)
static void matroxfb_dh_init_fix(struct matroxfb_dh_fb_info *m2info)
static int matroxfb_dh_check_var(struct fb_var_screeninfo* var, struct fb_info* info)
static int matroxfb_dh_set_par(struct fb_info* info)
static int matroxfb_dh_pan_display(struct fb_var_screeninfo* var, struct fb_info* info)
static int matroxfb_dh_get_vblank(const struct matroxfb_dh_fb_info* m2info, struct fb_vblank* vblank)
static int matroxfb_dh_ioctl(struct fb_info *info,
unsigned int cmd,
unsigned long arg)
static int matroxfb_dh_blank(int blank, struct fb_info* info)
static struct fb_ops matroxfb_dh_ops = ;
static struct fb_var_screeninfo matroxfb_dh_defined = ;
static int matroxfb_dh_regit(const struct matrox_fb_info *minfo,
struct matroxfb_dh_fb_info *m2info)
static int matroxfb_dh_registerfb(struct matroxfb_dh_fb_info* m2info)
static void matroxfb_dh_deregisterfb(struct matroxfb_dh_fb_info* m2info)
static void* matroxfb_crtc2_probe(struct matrox_fb_info* minfo)
static void matroxfb_crtc2_remove(struct matrox_fb_info* minfo, void* crtc2)
static struct matroxfb_driver crtc2 = ;
static int matroxfb_crtc2_init(void)
static void matroxfb_crtc2_exit(void)
MODULE_AUTHOR("(c) 1999-2002 Petr Vandrovec <vandrove@vc.cvut.cz>");
MODULE_DESCRIPTION("Matrox G400 CRTC2 driver");
MODULE_LICENSE("GPL");
module_init(matroxfb_crtc2_init);
module_exit(matroxfb_crtc2_exit);
