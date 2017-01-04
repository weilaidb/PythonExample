#if !defined(CONFIG_PCI)
#error "Only generic PCI cards supported."
#undef PM3FB_MASTER_DEBUG
#define DPRINTK(a, b...)	\
printk(KERN_DEBUG "pm3fb: %s: " a, __func__ , ## b)
#define DPRINTK(a, b...)
#define PM3_PIXMAP_SIZE	(2048 * 4)
static int hwcursor = 1;
static char *mode_option __devinitdata;
static int noaccel __devinitdata;
static int nomtrr __devinitdata;
struct pm3_par ;
static struct fb_fix_screeninfo pm3fb_fix __devinitdata = ;
static inline u32 PM3_READ_REG(struct pm3_par *par, s32 off)
static inline void PM3_WRITE_REG(struct pm3_par *par, s32 off, u32 v)
static inline void PM3_WAIT(struct pm3_par *par, u32 n)
static inline void PM3_WRITE_DAC_REG(struct pm3_par *par, unsigned r, u8 v)
static inline void pm3fb_set_color(struct pm3_par *par, unsigned char regno,
unsigned char r, unsigned char g, unsigned char b)
static void pm3fb_clear_colormap(struct pm3_par *par,
unsigned char r, unsigned char g, unsigned char b)
static void pm3fb_calculate_clock(unsigned long reqclock,
unsigned char *prescale,
unsigned char *feedback,
unsigned char *postscale)
static inline int pm3fb_depth(const struct fb_var_screeninfo *var)
static inline int pm3fb_shift_bpp(unsigned bpp, int v)
static int pm3fb_sync(struct fb_info *info)
static void pm3fb_init_engine(struct fb_info *info)
static void pm3fb_fillrect(struct fb_info *info,
const struct fb_fillrect *region)
static void pm3fb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void pm3fb_imageblit(struct fb_info *info, const struct fb_image *image)
static const u8 cursor_bits_lookup[16] = ;
static int pm3fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static void pm3fb_write_mode(struct fb_info *info)
static int pm3fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int pm3fb_set_par(struct fb_info *info)
static int pm3fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int pm3fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int pm3fb_blank(int blank_mode, struct fb_info *info)
static struct fb_ops pm3fb_ops = ;
static unsigned long __devinit pm3fb_size_memory(struct pm3_par *par)
static int __devinit pm3fb_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit pm3fb_remove(struct pci_dev *dev)
static struct pci_device_id pm3fb_id_table[] = ;
static struct pci_driver pm3fb_driver = ;
MODULE_DEVICE_TABLE(pci, pm3fb_id_table);
static int __init pm3fb_setup(char *options)
static int __init pm3fb_init(void)
static void __exit pm3fb_exit(void)
module_exit(pm3fb_exit);
module_init(pm3fb_init);
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Initial video mode e.g. '648x480-8@60'");
module_param(noaccel, bool, 0);
MODULE_PARM_DESC(noaccel, "Disable acceleration");
module_param(hwcursor, int, 0644);
MODULE_PARM_DESC(hwcursor, "Enable hardware cursor "
"(1=enable, 0=disable, default=1)");
module_param(nomtrr, bool, 0);
MODULE_PARM_DESC(nomtrr, "Disable MTRR support (0 or 1=disabled) (default=0)");
MODULE_DESCRIPTION("Permedia3 framebuffer device driver");
MODULE_LICENSE("GPL");
