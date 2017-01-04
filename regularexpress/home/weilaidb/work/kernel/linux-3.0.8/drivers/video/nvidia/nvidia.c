#define NVTRACE          printk
#define NVTRACE          if (0) printk
#define NVTRACE_ENTER(...)  NVTRACE("%s START\n", __func__)
#define NVTRACE_LEAVE(...)  NVTRACE("%s END\n", __func__)
#define assert(expr) \
if (!(expr))
#define assert(expr)
#define PFX "nvidiafb: "
#define MAX_CURS		32
static struct pci_device_id nvidiafb_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, nvidiafb_pci_tbl);
static int flatpanel __devinitdata = -1;
static int fpdither __devinitdata = -1;
static int forceCRTC __devinitdata = -1;
static int hwcur __devinitdata = 0;
static int noaccel __devinitdata = 0;
static int noscale __devinitdata = 0;
static int paneltweak __devinitdata = 0;
static int vram __devinitdata = 0;
static int bpp __devinitdata = 8;
static int reverse_i2c __devinitdata;
static int nomtrr __devinitdata = 0;
static int backlight __devinitdata = 1;
static int backlight __devinitdata = 0;
static char *mode_option __devinitdata = NULL;
static struct fb_fix_screeninfo __devinitdata nvidiafb_fix = ;
static struct fb_var_screeninfo __devinitdata nvidiafb_default_var = ;
static void nvidiafb_load_cursor_image(struct nvidia_par *par, u8 * data8,
u16 bg, u16 fg, u32 w, u32 h)
static void nvidia_write_clut(struct nvidia_par *par,
u8 regnum, u8 red, u8 green, u8 blue)
static void nvidia_read_clut(struct nvidia_par *par,
u8 regnum, u8 * red, u8 * green, u8 * blue)
static int nvidia_panel_tweak(struct nvidia_par *par,
struct _riva_hw_state *state)
static void nvidia_screen_off(struct nvidia_par *par, int on)
static void nvidia_save_vga(struct nvidia_par *par,
struct _riva_hw_state *state)
#undef DUMP_REG
static void nvidia_write_regs(struct nvidia_par *par,
struct _riva_hw_state *state)
static int nvidia_calc_regs(struct fb_info *info)
static void nvidia_init_vga(struct fb_info *info)
static int nvidiafb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int nvidiafb_set_par(struct fb_info *info)
static int nvidiafb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int nvidiafb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int nvidiafb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int nvidiafb_blank(int blank, struct fb_info *info)
static void save_vga_x86(struct nvidia_par *par)
static void restore_vga_x86(struct nvidia_par *par)
#define save_vga_x86(x) do  while (0)
#define restore_vga_x86(x) do  while (0)
static int nvidiafb_open(struct fb_info *info, int user)
static int nvidiafb_release(struct fb_info *info, int user)
static struct fb_ops nvidia_fb_ops = ;
static int nvidiafb_suspend(struct pci_dev *dev, pm_message_t mesg)
static int nvidiafb_resume(struct pci_dev *dev)
#define nvidiafb_suspend NULL
#define nvidiafb_resume NULL
static int __devinit nvidia_set_fbinfo(struct fb_info *info)
static u32 __devinit nvidia_get_chipset(struct fb_info *info)
static u32 __devinit nvidia_get_arch(struct fb_info *info)
static int __devinit nvidiafb_probe(struct pci_dev *pd,
const struct pci_device_id *ent)
static void __devexit nvidiafb_remove(struct pci_dev *pd)
static int __devinit nvidiafb_setup(char *options)
static struct pci_driver nvidiafb_driver = ;
static int __devinit nvidiafb_init(void)
module_init(nvidiafb_init);
static void __exit nvidiafb_exit(void)
module_exit(nvidiafb_exit);
module_param(flatpanel, int, 0);
MODULE_PARM_DESC(flatpanel,
"Enables experimental flat panel support for some chipsets. "
"(0=disabled, 1=enabled, -1=autodetect) (default=-1)");
module_param(fpdither, int, 0);
MODULE_PARM_DESC(fpdither,
"Enables dithering of flat panel for 6 bits panels. "
"(0=disabled, 1=enabled, -1=autodetect) (default=-1)");
module_param(hwcur, int, 0);
MODULE_PARM_DESC(hwcur,
"Enables hardware cursor implementation. (0 or 1=enabled) "
"(default=0)");
module_param(noaccel, int, 0);
MODULE_PARM_DESC(noaccel,
"Disables hardware acceleration. (0 or 1=disable) "
"(default=0)");
module_param(noscale, int, 0);
MODULE_PARM_DESC(noscale,
"Disables screen scaleing. (0 or 1=disable) "
"(default=0, do scaling)");
module_param(paneltweak, int, 0);
MODULE_PARM_DESC(paneltweak,
"Tweak display settings for flatpanels. "
"(default=0, no tweaks)");
module_param(forceCRTC, int, 0);
MODULE_PARM_DESC(forceCRTC,
"Forces usage of a particular CRTC in case autodetection "
"fails. (0 or 1) (default=autodetect)");
module_param(vram, int, 0);
MODULE_PARM_DESC(vram,
"amount of framebuffer memory to remap in MiB"
"(default=0 - remap entire memory)");
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Specify initial video mode");
module_param(bpp, int, 0);
MODULE_PARM_DESC(bpp, "pixel width in bits"
"(default=8)");
module_param(reverse_i2c, int, 0);
MODULE_PARM_DESC(reverse_i2c, "reverse port assignment of the i2c bus");
module_param(nomtrr, bool, 0);
MODULE_PARM_DESC(nomtrr, "Disables MTRR support (0 or 1=disabled) "
"(default=0)");
MODULE_AUTHOR("Antonino Daplas");
MODULE_DESCRIPTION("Framebuffer driver for nVidia graphics chipset");
MODULE_LICENSE("GPL");
