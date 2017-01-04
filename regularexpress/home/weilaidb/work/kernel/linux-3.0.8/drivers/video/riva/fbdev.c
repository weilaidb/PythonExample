#define RIVAFB_VERSION "0.9.5b"
#define NVTRACE          printk
#define NVTRACE          if(0) printk
#define NVTRACE_ENTER(...)  NVTRACE("%s START\n", __func__)
#define NVTRACE_LEAVE(...)  NVTRACE("%s END\n", __func__)
#define assert(expr) \
if(!(expr))
#define assert(expr)
#define PFX "rivafb: "
#define SetBitField(value,from,to) SetBF(to,GetBF(value,from))
#define SetBit(n)		(1<<(n))
#define Set8Bits(value)		((value)&0xff)
#define MAX_CURS		32
static int rivafb_blank(int blank, struct fb_info *info);
static struct pci_device_id rivafb_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, rivafb_pci_tbl);
static int flatpanel __devinitdata = -1;
static int forceCRTC __devinitdata = -1;
static int noaccel   __devinitdata = 0;
static int nomtrr __devinitdata = 0;
static int backlight __devinitdata = 1;
static int backlight __devinitdata = 0;
static char *mode_option __devinitdata = NULL;
static int  strictmode       = 0;
static struct fb_fix_screeninfo __devinitdata rivafb_fix = ;
static struct fb_var_screeninfo __devinitdata rivafb_default_var = ;
static const struct riva_regs reg_template = ;
#define MIN_LEVEL 0x158
#define MAX_LEVEL 0x534
#define LEVEL_STEP ((MAX_LEVEL - MIN_LEVEL) / FB_BACKLIGHT_MAX)
static int riva_bl_get_level_brightness(struct riva_par *par,
int level)
static int riva_bl_update_status(struct backlight_device *bd)
static int riva_bl_get_brightness(struct backlight_device *bd)
static const struct backlight_ops riva_bl_ops = ;
static void riva_bl_init(struct riva_par *par)
static void riva_bl_exit(struct fb_info *info)
static inline void riva_bl_init(struct riva_par *par)
static inline void riva_bl_exit(struct fb_info *info)
static inline void CRTCout(struct riva_par *par, unsigned char index,
unsigned char val)
static inline unsigned char CRTCin(struct riva_par *par,
unsigned char index)
static inline void GRAout(struct riva_par *par, unsigned char index,
unsigned char val)
static inline unsigned char GRAin(struct riva_par *par,
unsigned char index)
static inline void SEQout(struct riva_par *par, unsigned char index,
unsigned char val)
static inline unsigned char SEQin(struct riva_par *par,
unsigned char index)
static inline void ATTRout(struct riva_par *par, unsigned char index,
unsigned char val)
static inline unsigned char ATTRin(struct riva_par *par,
unsigned char index)
static inline void MISCout(struct riva_par *par, unsigned char val)
static inline unsigned char MISCin(struct riva_par *par)
static inline void reverse_order(u32 *l)
static void rivafb_load_cursor_image(struct riva_par *par, u8 *data8,
u16 bg, u16 fg, u32 w, u32 h)
static void riva_wclut(RIVA_HW_INST *chip,
unsigned char regnum, unsigned char red,
unsigned char green, unsigned char blue)
static void riva_rclut(RIVA_HW_INST *chip,
unsigned char regnum, unsigned char *red,
unsigned char *green, unsigned char *blue)
static void riva_save_state(struct riva_par *par, struct riva_regs *regs)
static void riva_load_state(struct riva_par *par, struct riva_regs *regs)
static int riva_load_video_mode(struct fb_info *info)
static void riva_update_var(struct fb_var_screeninfo *var,
const struct fb_videomode *modedb)
static int rivafb_do_maximize(struct fb_info *info,
struct fb_var_screeninfo *var,
int nom, int den)
static void
riva_set_pattern(struct riva_par *par, int clr0, int clr1, int pat0, int pat1)
static inline void wait_for_idle(struct riva_par *par)
static void
riva_set_rop_solid(struct riva_par *par, int rop)
static void riva_setup_accel(struct fb_info *info)
static int riva_get_cmap_len(const struct fb_var_screeninfo *var)
static int rivafb_open(struct fb_info *info, int user)
static int rivafb_release(struct fb_info *info, int user)
static int rivafb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int rivafb_set_par(struct fb_info *info)
static int rivafb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int rivafb_blank(int blank, struct fb_info *info)
static int rivafb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static void rivafb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void rivafb_copyarea(struct fb_info *info, const struct fb_copyarea *region)
static inline void convert_bgcolor_16(u32 *col)
static void rivafb_imageblit(struct fb_info *info,
const struct fb_image *image)
static int rivafb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int rivafb_sync(struct fb_info *info)
static struct fb_ops riva_fb_ops = ;
static int __devinit riva_set_fbinfo(struct fb_info *info)
static int __devinit riva_get_EDID_OF(struct fb_info *info, struct pci_dev *pd)
#if defined(CONFIG_FB_RIVA_I2C) && !defined(CONFIG_PPC_OF)
static int __devinit riva_get_EDID_i2c(struct fb_info *info)
static void __devinit riva_update_default_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void __devinit riva_get_EDID(struct fb_info *info, struct pci_dev *pdev)
static void __devinit riva_get_edidinfo(struct fb_info *info)
static u32 __devinit riva_get_arch(struct pci_dev *pd)
static int __devinit rivafb_probe(struct pci_dev *pd,
const struct pci_device_id *ent)
static void __devexit rivafb_remove(struct pci_dev *pd)
static int __devinit rivafb_setup(char *options)
static struct pci_driver rivafb_driver = ;
static int __devinit rivafb_init(void)
module_init(rivafb_init);
static void __exit rivafb_exit(void)
module_exit(rivafb_exit);
module_param(noaccel, bool, 0);
MODULE_PARM_DESC(noaccel, "bool: disable acceleration");
module_param(flatpanel, int, 0);
MODULE_PARM_DESC(flatpanel, "Enables experimental flat panel support for some chipsets. (0 or 1=enabled) (default=0)");
module_param(forceCRTC, int, 0);
MODULE_PARM_DESC(forceCRTC, "Forces usage of a particular CRTC in case autodetection fails. (0 or 1) (default=autodetect)");
module_param(nomtrr, bool, 0);
MODULE_PARM_DESC(nomtrr, "Disables MTRR support (0 or 1=disabled) (default=0)");
module_param(strictmode, bool, 0);
MODULE_PARM_DESC(strictmode, "Only use video modes from EDID");
MODULE_AUTHOR("Ani Joshi, maintainer");
MODULE_DESCRIPTION("Framebuffer driver for nVidia Riva 128, TNT, TNT2, and the GeForce series");
MODULE_LICENSE("GPL");
