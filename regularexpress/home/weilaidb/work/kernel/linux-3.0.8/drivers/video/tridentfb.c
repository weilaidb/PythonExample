struct tridentfb_par ;
static struct fb_fix_screeninfo tridentfb_fix = ;
static char *mode_option __devinitdata = "640x480-8@60";
static int bpp __devinitdata = 8;
static int noaccel __devinitdata;
static int center;
static int stretch;
static int fp __devinitdata;
static int crt __devinitdata;
static int memsize __devinitdata;
static int memdiff __devinitdata;
static int nativex;
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Initial video mode e.g. '648x480-8@60'");
module_param_named(mode, mode_option, charp, 0);
MODULE_PARM_DESC(mode, "Initial video mode e.g. '648x480-8@60' (deprecated)");
module_param(bpp, int, 0);
module_param(center, int, 0);
module_param(stretch, int, 0);
module_param(noaccel, int, 0);
module_param(memsize, int, 0);
module_param(memdiff, int, 0);
module_param(nativex, int, 0);
module_param(fp, int, 0);
MODULE_PARM_DESC(fp, "Define if flatpanel is connected");
module_param(crt, int, 0);
MODULE_PARM_DESC(crt, "Define if CRT is connected");
static inline int is_oldclock(int id)
static inline int is_oldprotect(int id)
static inline int is_blade(int id)
static inline int is_xp(int id)
static inline int is3Dchip(int id)
static inline int iscyber(int id)
static inline void t_outb(struct tridentfb_par *p, u8 val, u16 reg)
static inline u8 t_inb(struct tridentfb_par *p, u16 reg)
static inline void writemmr(struct tridentfb_par *par, u16 r, u32 v)
static inline u32 readmmr(struct tridentfb_par *par, u16 r)
#define point(x, y) ((y) << 16 | (x))
static void blade_init_accel(struct tridentfb_par *par, int pitch, int bpp)
static void blade_wait_engine(struct tridentfb_par *par)
static void blade_fill_rect(struct tridentfb_par *par,
u32 x, u32 y, u32 w, u32 h, u32 c, u32 rop)
static void blade_image_blit(struct tridentfb_par *par, const char *data,
u32 x, u32 y, u32 w, u32 h, u32 c, u32 b)
static void blade_copy_rect(struct tridentfb_par *par,
u32 x1, u32 y1, u32 x2, u32 y2, u32 w, u32 h)
static void xp_init_accel(struct tridentfb_par *par, int pitch, int bpp)
static void xp_wait_engine(struct tridentfb_par *par)
static void xp_fill_rect(struct tridentfb_par *par,
u32 x, u32 y, u32 w, u32 h, u32 c, u32 rop)
static void xp_copy_rect(struct tridentfb_par *par,
u32 x1, u32 y1, u32 x2, u32 y2, u32 w, u32 h)
static void image_init_accel(struct tridentfb_par *par, int pitch, int bpp)
static void image_wait_engine(struct tridentfb_par *par)
static void image_fill_rect(struct tridentfb_par *par,
u32 x, u32 y, u32 w, u32 h, u32 c, u32 rop)
static void image_copy_rect(struct tridentfb_par *par,
u32 x1, u32 y1, u32 x2, u32 y2, u32 w, u32 h)
static void tgui_init_accel(struct tridentfb_par *par, int pitch, int bpp)
static void tgui_fill_rect(struct tridentfb_par *par,
u32 x, u32 y, u32 w, u32 h, u32 c, u32 rop)
static void tgui_copy_rect(struct tridentfb_par *par,
u32 x1, u32 y1, u32 x2, u32 y2, u32 w, u32 h)
static void tridentfb_fillrect(struct fb_info *info,
const struct fb_fillrect *fr)
static void tridentfb_imageblit(struct fb_info *info,
const struct fb_image *img)
static void tridentfb_copyarea(struct fb_info *info,
const struct fb_copyarea *ca)
static int tridentfb_sync(struct fb_info *info)
static inline unsigned char read3X4(struct tridentfb_par *par, int reg)
static inline void write3X4(struct tridentfb_par *par, int reg,
unsigned char val)
static inline unsigned char read3CE(struct tridentfb_par *par,
unsigned char reg)
static inline void writeAttr(struct tridentfb_par *par, int reg,
unsigned char val)
static inline void write3CE(struct tridentfb_par *par, int reg,
unsigned char val)
static void enable_mmio(struct tridentfb_par *par)
static void disable_mmio(struct tridentfb_par *par)
static inline void crtc_unlock(struct tridentfb_par *par)
static int __devinit get_nativex(struct tridentfb_par *par)
static inline void set_lwidth(struct tridentfb_par *par, int width)
static void screen_stretch(struct tridentfb_par *par)
static inline void screen_center(struct tridentfb_par *par)
static void set_screen_start(struct tridentfb_par *par, int base)
static void set_vclk(struct tridentfb_par *par, unsigned long freq)
static void set_number_of_lines(struct tridentfb_par *par, int lines)
static int __devinit is_flatpanel(struct tridentfb_par *par)
static unsigned int __devinit get_memsize(struct tridentfb_par *par)
static int tridentfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int tridentfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static inline void shadowmode_on(struct tridentfb_par *par)
static inline void shadowmode_off(struct tridentfb_par *par)
static int tridentfb_set_par(struct fb_info *info)
static int tridentfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int tridentfb_blank(int blank_mode, struct fb_info *info)
static struct fb_ops tridentfb_ops = ;
static int __devinit trident_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit trident_pci_remove(struct pci_dev *dev)
static struct pci_device_id trident_devices[] = ;
MODULE_DEVICE_TABLE(pci, trident_devices);
static struct pci_driver tridentfb_pci_driver = ;
static int __init tridentfb_setup(char *options)
static int __init tridentfb_init(void)
static void __exit tridentfb_exit(void)
module_init(tridentfb_init);
module_exit(tridentfb_exit);
MODULE_AUTHOR("Jani Monoses <jani@iv.ro>");
MODULE_DESCRIPTION("Framebuffer driver for Trident cards");
MODULE_LICENSE("GPL");
MODULE_ALIAS("cyblafb");
