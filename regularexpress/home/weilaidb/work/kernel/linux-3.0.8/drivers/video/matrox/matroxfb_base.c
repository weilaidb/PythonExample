unsigned char nvram_read_byte(int);
static int default_vmode = VMODE_NVRAM;
static int default_cmode = CMODE_NVRAM;
static void matroxfb_unregister_device(struct matrox_fb_info* minfo);
static struct fb_var_screeninfo vesafb_defined = ;
static void update_crtc2(struct matrox_fb_info *minfo, unsigned int pos)
static void matroxfb_crtc1_panpos(struct matrox_fb_info *minfo)
static irqreturn_t matrox_irq(int irq, void *dev_id)
int matroxfb_enable_irq(struct matrox_fb_info *minfo, int reenable)
static void matroxfb_disable_irq(struct matrox_fb_info *minfo)
int matroxfb_wait_for_sync(struct matrox_fb_info *minfo, u_int32_t crtc)
static void matrox_pan_var(struct matrox_fb_info *minfo,
struct fb_var_screeninfo *var)
static void matroxfb_remove(struct matrox_fb_info *minfo, int dummy)
static int matroxfb_open(struct fb_info *info, int user)
static int matroxfb_release(struct fb_info *info, int user)
static int matroxfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info* info)
static int matroxfb_get_final_bppShift(const struct matrox_fb_info *minfo,
int bpp)
static int matroxfb_test_and_set_rounding(const struct matrox_fb_info *minfo,
int xres, int bpp)
static int matroxfb_pitch_adjust(const struct matrox_fb_info *minfo, int xres,
int bpp)
static int matroxfb_get_cmap_len(struct fb_var_screeninfo *var)
static int matroxfb_decode_var(const struct matrox_fb_info *minfo,
struct fb_var_screeninfo *var, int *visual,
int *video_cmap_len, unsigned int* ydstorg)
static int matroxfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *fb_info)
static void matroxfb_init_fix(struct matrox_fb_info *minfo)
static void matroxfb_update_fix(struct matrox_fb_info *minfo)
static int matroxfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int matroxfb_set_par(struct fb_info *info)
static int matroxfb_get_vblank(struct matrox_fb_info *minfo,
struct fb_vblank *vblank)
static struct matrox_altout panellink_output = ;
static int matroxfb_ioctl(struct fb_info *info,
unsigned int cmd, unsigned long arg)
static int matroxfb_blank(int blank, struct fb_info *info)
static struct fb_ops matroxfb_ops = ;
#define RSDepth(X)	(((X) >> 8) & 0x0F)
#define RS8bpp		0x1
#define RS15bpp		0x2
#define RS16bpp		0x3
#define RS32bpp		0x4
#define RS4bpp		0x5
#define RS24bpp		0x6
#define RSText		0x7
#define RSText8		0x8
static struct  colors[] = ;
static unsigned int mem;
static int option_precise_width = 1;
static int inv24;
static int cross4MB = -1;
static int disabled;
static int noaccel;
static int nopan;
static int no_pci_retry;
static int novga;
static int nobios;
static int noinit = 1;
static int inverse;
static int sgram;
static int mtrr = 1;
static int grayscale;
static int dev = -1;
static unsigned int vesa = ~0;
static int depth = -1;
static unsigned int xres;
static unsigned int yres;
static unsigned int upper = ~0;
static unsigned int lower = ~0;
static unsigned int vslen;
static unsigned int left = ~0;
static unsigned int right = ~0;
static unsigned int hslen;
static unsigned int pixclock;
static int sync = -1;
static unsigned int fv;
static unsigned int fh;
static unsigned int maxclk;
static int dfp;
static int dfp_type = -1;
static int memtype = -1;
static char outputs[8];
static char videomode[64];
static int matroxfb_getmemory(struct matrox_fb_info *minfo,
unsigned int maxSize, unsigned int *realSize)
struct video_board ;
static struct video_board vbMillennium		= ;
static struct video_board vbMillennium2		= ;
static struct video_board vbMillennium2A	= ;
static struct video_board vbMystique		= ;
static struct video_board vbG100		= ;
static struct video_board vbG200		= ;
static struct video_board vbG400		= ;
#define DEVF_VIDEO64BIT		0x0001
#define	DEVF_SWAPS		0x0002
#define DEVF_SRCORG		0x0004
#define DEVF_DUALHEAD		0x0008
#define DEVF_CROSS4MB		0x0010
#define DEVF_TEXT4B		0x0020
#define DEVF_SUPPORT32MB	0x0100
#define DEVF_ANY_VXRES		0x0200
#define DEVF_TEXT16B		0x0400
#define DEVF_CRTC2		0x0800
#define DEVF_MAVEN_CAPABLE	0x1000
#define DEVF_PANELLINK_CAPABLE	0x2000
#define DEVF_G450DAC		0x4000
#define DEVF_GCORE	(DEVF_VIDEO64BIT | DEVF_SWAPS | DEVF_CROSS4MB)
#define DEVF_G2CORE	(DEVF_GCORE | DEVF_ANY_VXRES | DEVF_MAVEN_CAPABLE | DEVF_PANELLINK_CAPABLE | DEVF_SRCORG | DEVF_DUALHEAD)
#define DEVF_G100	(DEVF_GCORE)
#define DEVF_G200	(DEVF_G2CORE)
#define DEVF_G400	(DEVF_G2CORE | DEVF_SUPPORT32MB | DEVF_TEXT16B | DEVF_CRTC2)
#define DEVF_G450	(DEVF_GCORE | DEVF_ANY_VXRES | DEVF_SUPPORT32MB | DEVF_TEXT16B | DEVF_CRTC2 | DEVF_G450DAC | DEVF_SRCORG | DEVF_DUALHEAD)
#define DEVF_G550	(DEVF_G450)
static struct board  dev_list[] = ;
static struct fb_videomode defaultmode = ;
static int hotplug = 0;
static void setDefaultOutputs(struct matrox_fb_info *minfo)
static int initMatrox2(struct matrox_fb_info *minfo, struct board *b)
static LIST_HEAD(matroxfb_list);
static LIST_HEAD(matroxfb_driver_list);
#define matroxfb_l(x) list_entry(x, struct matrox_fb_info, next_fb)
#define matroxfb_driver_l(x) list_entry(x, struct matroxfb_driver, node)
int matroxfb_register_driver(struct matroxfb_driver* drv)
void matroxfb_unregister_driver(struct matroxfb_driver* drv)
static void matroxfb_register_device(struct matrox_fb_info* minfo)
static void matroxfb_unregister_device(struct matrox_fb_info* minfo)
static int matroxfb_probe(struct pci_dev* pdev, const struct pci_device_id* dummy)
static void pci_remove_matrox(struct pci_dev* pdev)
static struct pci_device_id matroxfb_devices[] = ;
MODULE_DEVICE_TABLE(pci, matroxfb_devices);
static struct pci_driver matroxfb_driver = ;
#define RSResolution(X)	((X) & 0x0F)
#define RS640x400	1
#define RS640x480	2
#define RS800x600	3
#define RS1024x768	4
#define RS1280x1024	5
#define RS1600x1200	6
#define RS768x576	7
#define RS960x720	8
#define RS1152x864	9
#define RS1408x1056	10
#define RS640x350	11
#define RS1056x344	12
#define RS1056x400	13
#define RS1056x480	14
#define RSNoxNo		15
static struct  timmings[] __initdata = ;
#define RSCreate(X,Y)	((X) | ((Y) << 8))
static struct  *RSptr, vesamap[] __initdata = ;
static void __init matroxfb_init_params(void)
static int __init matrox_init(void)
static void __exit matrox_done(void)
static int __init matroxfb_setup(char *options)
static int __initdata initialized = 0;
static int __init matroxfb_init(void)
module_init(matroxfb_init);
MODULE_AUTHOR("(c) 1998-2002 Petr Vandrovec <vandrove@vc.cvut.cz>");
MODULE_DESCRIPTION("Accelerated FBDev driver for Matrox Millennium/Mystique/G100/G200/G400/G450/G550");
MODULE_LICENSE("GPL");
module_param(mem, int, 0);
MODULE_PARM_DESC(mem, "Size of available memory in MB, KB or B (2,4,8,12,16MB, default=autodetect)");
module_param(disabled, int, 0);
MODULE_PARM_DESC(disabled, "Disabled (0 or 1=disabled) (default=0)");
module_param(noaccel, int, 0);
MODULE_PARM_DESC(noaccel, "Do not use accelerating engine (0 or 1=disabled) (default=0)");
module_param(nopan, int, 0);
MODULE_PARM_DESC(nopan, "Disable pan on startup (0 or 1=disabled) (default=0)");
module_param(no_pci_retry, int, 0);
MODULE_PARM_DESC(no_pci_retry, "PCI retries enabled (0 or 1=disabled) (default=0)");
module_param(novga, int, 0);
MODULE_PARM_DESC(novga, "VGA I/O (0x3C0-0x3DF) disabled (0 or 1=disabled) (default=0)");
module_param(nobios, int, 0);
MODULE_PARM_DESC(nobios, "Disables ROM BIOS (0 or 1=disabled) (default=do not change BIOS state)");
module_param(noinit, int, 0);
MODULE_PARM_DESC(noinit, "Disables W/SG/SD-RAM and bus interface initialization (0 or 1=do not initialize) (default=0)");
module_param(memtype, int, 0);
MODULE_PARM_DESC(memtype, "Memory type for G200/G400 (see Documentation/fb/matroxfb.txt for explanation) (default=3 for G200, 0 for G400)");
module_param(mtrr, int, 0);
MODULE_PARM_DESC(mtrr, "This speeds up video memory accesses (0=disabled or 1) (default=1)");
module_param(sgram, int, 0);
MODULE_PARM_DESC(sgram, "Indicates that G100/G200/G400 has SGRAM memory (0=SDRAM, 1=SGRAM) (default=0)");
module_param(inv24, int, 0);
MODULE_PARM_DESC(inv24, "Inverts clock polarity for 24bpp and loop frequency > 100MHz (default=do not invert polarity)");
module_param(inverse, int, 0);
MODULE_PARM_DESC(inverse, "Inverse (0 or 1) (default=0)");
module_param(dev, int, 0);
MODULE_PARM_DESC(dev, "Multihead support, attach to device ID (0..N) (default=all working)");
module_param(vesa, int, 0);
MODULE_PARM_DESC(vesa, "Startup videomode (0x000-0x1FF) (default=0x101)");
module_param(xres, int, 0);
MODULE_PARM_DESC(xres, "Horizontal resolution (px), overrides xres from vesa (default=vesa)");
module_param(yres, int, 0);
MODULE_PARM_DESC(yres, "Vertical resolution (scans), overrides yres from vesa (default=vesa)");
module_param(upper, int, 0);
MODULE_PARM_DESC(upper, "Upper blank space (scans), overrides upper from vesa (default=vesa)");
module_param(lower, int, 0);
MODULE_PARM_DESC(lower, "Lower blank space (scans), overrides lower from vesa (default=vesa)");
module_param(vslen, int, 0);
MODULE_PARM_DESC(vslen, "Vertical sync length (scans), overrides lower from vesa (default=vesa)");
module_param(left, int, 0);
MODULE_PARM_DESC(left, "Left blank space (px), overrides left from vesa (default=vesa)");
module_param(right, int, 0);
MODULE_PARM_DESC(right, "Right blank space (px), overrides right from vesa (default=vesa)");
module_param(hslen, int, 0);
MODULE_PARM_DESC(hslen, "Horizontal sync length (px), overrides hslen from vesa (default=vesa)");
module_param(pixclock, int, 0);
MODULE_PARM_DESC(pixclock, "Pixelclock (ns), overrides pixclock from vesa (default=vesa)");
module_param(sync, int, 0);
MODULE_PARM_DESC(sync, "Sync polarity, overrides sync from vesa (default=vesa)");
module_param(depth, int, 0);
MODULE_PARM_DESC(depth, "Color depth (0=text,8,15,16,24,32) (default=vesa)");
module_param(maxclk, int, 0);
MODULE_PARM_DESC(maxclk, "Startup maximal clock, 0-999MHz, 1000-999999kHz, 1000000-INF Hz");
module_param(fh, int, 0);
MODULE_PARM_DESC(fh, "Startup horizontal frequency, 0-999kHz, 1000-INF Hz");
module_param(fv, int, 0);
MODULE_PARM_DESC(fv, "Startup vertical frequency, 0-INF Hz\n"
"You should specify \"fv:max_monitor_vsync,fh:max_monitor_hsync,maxclk:max_monitor_dotclock\"");
module_param(grayscale, int, 0);
MODULE_PARM_DESC(grayscale, "Sets display into grayscale. Works perfectly with paletized videomode (4, 8bpp), some limitations apply to 16, 24 and 32bpp videomodes (default=nograyscale)");
module_param(cross4MB, int, 0);
MODULE_PARM_DESC(cross4MB, "Specifies that 4MB boundary can be in middle of line. (default=autodetected)");
module_param(dfp, int, 0);
MODULE_PARM_DESC(dfp, "Specifies whether to use digital flat panel interface of G200/G400 (0 or 1) (default=0)");
module_param(dfp_type, int, 0);
MODULE_PARM_DESC(dfp_type, "Specifies DFP interface type (0 to 255) (default=read from hardware)");
module_param_string(outputs, outputs, sizeof(outputs), 0);
MODULE_PARM_DESC(outputs, "Specifies which CRTC is mapped to which output (string of up to three letters, consisting of 0 (disabled), 1 (CRTC1), 2 (CRTC2)) (default=111 for Gx50, 101 for G200/G400 with DFP, and 100 for all other devices)");
module_param_named(vmode, default_vmode, int, 0);
MODULE_PARM_DESC(vmode, "Specify the vmode mode number that should be used (640x480 default)");
module_param_named(cmode, default_cmode, int, 0);
MODULE_PARM_DESC(cmode, "Specify the video depth that should be used (8bit default)");
int __init init_module(void)
module_exit(matrox_done);
EXPORT_SYMBOL(matroxfb_register_driver);
EXPORT_SYMBOL(matroxfb_unregister_driver);
EXPORT_SYMBOL(matroxfb_wait_for_sync);
EXPORT_SYMBOL(matroxfb_enable_irq);
