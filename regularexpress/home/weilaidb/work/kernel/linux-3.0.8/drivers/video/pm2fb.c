#if !defined(__LITTLE_ENDIAN) && !defined(__BIG_ENDIAN)
#error	"The endianness of the target host has not been defined."
#if !defined(CONFIG_PCI)
#error "Only generic PCI cards supported."
#undef PM2FB_MASTER_DEBUG
#define DPRINTK(a, b...)	\
printk(KERN_DEBUG "pm2fb: %s: " a, __func__ , ## b)
#define DPRINTK(a, b...)
#define PM2_PIXMAP_SIZE	(1600 * 4)
static int hwcursor = 1;
static char *mode_option __devinitdata;
static int lowhsync;
static int lowvsync;
static int noaccel __devinitdata;
static int nomtrr __devinitdata;
struct pm2fb_par
;
static struct fb_fix_screeninfo pm2fb_fix __devinitdata = ;
static struct fb_var_screeninfo pm2fb_var __devinitdata = ;
static inline u32 pm2_RD(struct pm2fb_par *p, s32 off)
static inline void pm2_WR(struct pm2fb_par *p, s32 off, u32 v)
static inline u32 pm2_RDAC_RD(struct pm2fb_par *p, s32 idx)
static inline u32 pm2v_RDAC_RD(struct pm2fb_par *p, s32 idx)
static inline void pm2_RDAC_WR(struct pm2fb_par *p, s32 idx, u32 v)
static inline void pm2v_RDAC_WR(struct pm2fb_par *p, s32 idx, u32 v)
#define WAIT_FIFO(p, a)
static inline void WAIT_FIFO(struct pm2fb_par *p, u32 a)
#define PACKPP(p0, p1, p2)	(((p2) << 6) | ((p1) << 3) | (p0))
static const struct  pp_table[] = ;
static u32 partprod(u32 xres)
static u32 to3264(u32 timing, int bpp, int is64)
static void pm2_mnp(u32 clk, unsigned char *mm, unsigned char *nn,
unsigned char *pp)
static void pm2v_mnp(u32 clk, unsigned char *mm, unsigned char *nn,
unsigned char *pp)
static void clear_palette(struct pm2fb_par *p)
static void reset_card(struct pm2fb_par *p)
static void reset_config(struct pm2fb_par *p)
static void set_aperture(struct pm2fb_par *p, u32 depth)
static void set_color(struct pm2fb_par *p, unsigned char regno,
unsigned char r, unsigned char g, unsigned char b)
static void set_memclock(struct pm2fb_par *par, u32 clk)
static void set_pixclock(struct pm2fb_par *par, u32 clk)
static void set_video(struct pm2fb_par *p, u32 video)
static int pm2fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int pm2fb_set_par(struct fb_info *info)
static int pm2fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int pm2fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int pm2fb_blank(int blank_mode, struct fb_info *info)
static int pm2fb_sync(struct fb_info *info)
static void pm2fb_fillrect(struct fb_info *info,
const struct fb_fillrect *region)
static void pm2fb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void pm2fb_imageblit(struct fb_info *info, const struct fb_image *image)
static const u8 cursor_bits_lookup[16] = ;
static int pm2vfb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int pm2fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static struct fb_ops pm2fb_ops = ;
static int __devinit pm2fb_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit pm2fb_remove(struct pci_dev *pdev)
static struct pci_device_id pm2fb_id_table[] = ;
static struct pci_driver pm2fb_driver = ;
MODULE_DEVICE_TABLE(pci, pm2fb_id_table);
static int __init pm2fb_setup(char *options)
static int __init pm2fb_init(void)
module_init(pm2fb_init);
static void __exit pm2fb_exit(void)
module_exit(pm2fb_exit);
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Initial video mode e.g. '648x480-8@60'");
module_param_named(mode, mode_option, charp, 0);
MODULE_PARM_DESC(mode, "Initial video mode e.g. '648x480-8@60' (deprecated)");
module_param(lowhsync, bool, 0);
MODULE_PARM_DESC(lowhsync, "Force horizontal sync low regardless of mode");
module_param(lowvsync, bool, 0);
MODULE_PARM_DESC(lowvsync, "Force vertical sync low regardless of mode");
module_param(noaccel, bool, 0);
MODULE_PARM_DESC(noaccel, "Disable acceleration");
module_param(hwcursor, int, 0644);
MODULE_PARM_DESC(hwcursor, "Enable hardware cursor "
"(1=enable, 0=disable, default=1)");
module_param(nomtrr, bool, 0);
MODULE_PARM_DESC(nomtrr, "Disable MTRR support (0 or 1=disabled) (default=0)");
MODULE_AUTHOR("Jim Hague <jim.hague@acm.org>");
MODULE_DESCRIPTION("Permedia2 framebuffer device driver");
MODULE_LICENSE("GPL");
