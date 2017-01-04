static void __devinit get_initial_mode(struct intelfb_info *dinfo);
static void update_dinfo(struct intelfb_info *dinfo,
struct fb_var_screeninfo *var);
static int intelfb_open(struct fb_info *info, int user);
static int intelfb_release(struct fb_info *info, int user);
static int intelfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int intelfb_set_par(struct fb_info *info);
static int intelfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info);
static int intelfb_blank(int blank, struct fb_info *info);
static int intelfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static void intelfb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect);
static void intelfb_copyarea(struct fb_info *info,
const struct fb_copyarea *region);
static void intelfb_imageblit(struct fb_info *info,
const struct fb_image *image);
static int intelfb_cursor(struct fb_info *info,
struct fb_cursor *cursor);
static int intelfb_sync(struct fb_info *info);
static int intelfb_ioctl(struct fb_info *info,
unsigned int cmd, unsigned long arg);
static int __devinit intelfb_pci_register(struct pci_dev *pdev,
const struct pci_device_id *ent);
static void __devexit intelfb_pci_unregister(struct pci_dev *pdev);
static int __devinit intelfb_set_fbinfo(struct intelfb_info *dinfo);
#if DETECT_VGA_CLASS_ONLY
#define INTELFB_CLASS_MASK ~0 << 8
#define INTELFB_CLASS_MASK 0
static struct pci_device_id intelfb_pci_table[] __devinitdata = ;
static int num_registered = 0;
static struct fb_ops intel_fb_ops = ;
static struct pci_driver intelfb_driver = ;
MODULE_AUTHOR("David Dawes <dawes@tungstengraphics.com>, "
"Sylvain Meyer <sylvain.meyer@worldonline.fr>");
MODULE_DESCRIPTION("Framebuffer driver for Intel(R) " SUPPORTED_CHIPSETS
" chipsets");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DEVICE_TABLE(pci, intelfb_pci_table);
static int accel        = 1;
static int vram         = 4;
static int hwcursor     = 0;
static int mtrr         = 1;
static int fixed        = 0;
static int noinit       = 0;
static int noregister   = 0;
static int probeonly    = 0;
static int idonly       = 0;
static int bailearly    = 0;
static int voffset	= 48;
static char *mode       = NULL;
module_param(accel, bool, S_IRUGO);
MODULE_PARM_DESC(accel, "Enable hardware acceleration");
module_param(vram, int, S_IRUGO);
MODULE_PARM_DESC(vram, "System RAM to allocate to framebuffer in MiB");
module_param(voffset, int, S_IRUGO);
MODULE_PARM_DESC(voffset, "Offset of framebuffer in MiB");
module_param(hwcursor, bool, S_IRUGO);
MODULE_PARM_DESC(hwcursor, "Enable HW cursor");
module_param(mtrr, bool, S_IRUGO);
MODULE_PARM_DESC(mtrr, "Enable MTRR support");
module_param(fixed, bool, S_IRUGO);
MODULE_PARM_DESC(fixed, "Disable mode switching");
module_param(noinit, bool, 0);
MODULE_PARM_DESC(noinit, "Don't initialise graphics mode when loading");
module_param(noregister, bool, 0);
MODULE_PARM_DESC(noregister, "Don't register, just probe and exit (debug)");
module_param(probeonly, bool, 0);
MODULE_PARM_DESC(probeonly, "Do a minimal probe (debug)");
module_param(idonly, bool, 0);
MODULE_PARM_DESC(idonly, "Just identify without doing anything else (debug)");
module_param(bailearly, bool, 0);
MODULE_PARM_DESC(bailearly, "Bail out early, depending on value (debug)");
module_param(mode, charp, S_IRUGO);
MODULE_PARM_DESC(mode,
"Initial video mode \"<xres>x<yres>[-<depth>][@<refresh>]\"");
#define OPT_EQUAL(opt, name) (!strncmp(opt, name, strlen(name)))
#define OPT_INTVAL(opt, name) simple_strtoul(opt + strlen(name) + 1, NULL, 0)
#define OPT_STRVAL(opt, name) (opt + strlen(name))
static __inline__ char * get_opt_string(const char *this_opt, const char *name)
static __inline__ int get_opt_int(const char *this_opt, const char *name,
int *ret)
static __inline__ int get_opt_bool(const char *this_opt, const char *name,
int *ret)
static int __init intelfb_setup(char *options)
static int __init intelfb_init(void)
static void __exit intelfb_exit(void)
module_init(intelfb_init);
module_exit(intelfb_exit);
static inline void __devinit set_mtrr(struct intelfb_info *dinfo)
static inline void unset_mtrr(struct intelfb_info *dinfo)
#define set_mtrr(x) WRN_MSG("MTRR is disabled in the kernel\n")
#define unset_mtrr(x) do  while (0)
static void cleanup(struct intelfb_info *dinfo)
#define bailout(dinfo) do  while (0)
static int __devinit intelfb_pci_register(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit
intelfb_pci_unregister(struct pci_dev *pdev)
int __inline__ intelfb_var_to_depth(const struct fb_var_screeninfo *var)
static __inline__ int var_to_refresh(const struct fb_var_screeninfo *var)
static void __devinit get_initial_mode(struct intelfb_info *dinfo)
static int __devinit intelfb_init_var(struct intelfb_info *dinfo)
static int __devinit intelfb_set_fbinfo(struct intelfb_info *dinfo)
static void update_dinfo(struct intelfb_info *dinfo,
struct fb_var_screeninfo *var)
static int intelfb_open(struct fb_info *info, int user)
static int intelfb_release(struct fb_info *info, int user)
static int intelfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int intelfb_set_par(struct fb_info *info)
static int intelfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int intelfb_blank(int blank, struct fb_info *info)
static int intelfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int intelfb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static void intelfb_fillrect (struct fb_info *info,
const struct fb_fillrect *rect)
static void intelfb_copyarea(struct fb_info *info,
const struct fb_copyarea *region)
static void intelfb_imageblit(struct fb_info *info,
const struct fb_image *image)
static int intelfb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int intelfb_sync(struct fb_info *info)
