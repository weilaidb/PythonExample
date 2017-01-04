#undef DEBUG
#  define PCI_DEVICE_ID_NEC_NEON250	0x0067
#define DISP_BASE	par->mmio_base
#define DISP_BRDRCOLR (DISP_BASE + 0x40)
#define DISP_DIWMODE (DISP_BASE + 0x44)
#define DISP_DIWADDRL (DISP_BASE + 0x50)
#define DISP_DIWADDRS (DISP_BASE + 0x54)
#define DISP_DIWSIZE (DISP_BASE + 0x5c)
#define DISP_SYNCCONF (DISP_BASE + 0xd0)
#define DISP_BRDRHORZ (DISP_BASE + 0xd4)
#define DISP_SYNCSIZE (DISP_BASE + 0xd8)
#define DISP_BRDRVERT (DISP_BASE + 0xdc)
#define DISP_DIWCONF (DISP_BASE + 0xe8)
#define DISP_DIWHSTRT (DISP_BASE + 0xec)
#define DISP_DIWVSTRT (DISP_BASE + 0xf0)
#define DISP_PIXDEPTH (DISP_BASE + 0x108)
#define TV_CLK 74239
#define VGA_CLK 37119
#define PAL_HTOTAL 863
#define PAL_VTOTAL 312
#define NTSC_HTOTAL 857
#define NTSC_VTOTAL 262
enum ;
enum ;
enum ;
struct pvr2_params ;
static struct pvr2_params cables[] __devinitdata = ;
static struct pvr2_params outputs[] __devinitdata = ;
static struct pvr2fb_par  *currentpar;
static struct fb_info *fb_info;
static struct fb_fix_screeninfo pvr2_fix __devinitdata = ;
static struct fb_var_screeninfo pvr2_var __devinitdata = ;
static int cable_type = CT_VGA;
static int video_output = VO_VGA;
static int nopan = 0;
static int nowrap = 1;
static unsigned int do_vmode_full = 0;
static unsigned int do_vmode_pan = 0;
static short do_blank = 0;
static unsigned int is_blanked = 0;
static unsigned long pvr2fb_map;
static unsigned int shdma = PVR2_CASCADE_CHAN;
static unsigned int pvr2dma = ONCHIP_NR_DMA_CHANNELS;
static int pvr2fb_setcolreg(unsigned int regno, unsigned int red, unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info);
static int pvr2fb_blank(int blank, struct fb_info *info);
static unsigned long get_line_length(int xres_virtual, int bpp);
static void set_color_bitfields(struct fb_var_screeninfo *var);
static int pvr2fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info);
static int pvr2fb_set_par(struct fb_info *info);
static void pvr2_update_display(struct fb_info *info);
static void pvr2_init_display(struct fb_info *info);
static void pvr2_do_blank(void);
static irqreturn_t pvr2fb_interrupt(int irq, void *dev_id);
static int pvr2_init_cable(void);
static int pvr2_get_param(const struct pvr2_params *p, const char *s,
int val, int size);
static ssize_t pvr2fb_write(struct fb_info *info, const char *buf,
size_t count, loff_t *ppos);
static struct fb_ops pvr2fb_ops = ;
static struct fb_videomode pvr2_modedb[] __devinitdata = ;
#define NUM_TOTAL_MODES  ARRAY_SIZE(pvr2_modedb)
#define DEFMODE_NTSC	0
#define DEFMODE_PAL	0
#define DEFMODE_VGA	2
static int defmode = DEFMODE_NTSC;
static char *mode_option __devinitdata = NULL;
static inline void pvr2fb_set_pal_type(unsigned int type)
static inline void pvr2fb_set_pal_entry(struct pvr2fb_par *par,
unsigned int regno,
unsigned int val)
static int pvr2fb_blank(int blank, struct fb_info *info)
static inline unsigned long get_line_length(int xres_virtual, int bpp)
static void set_color_bitfields(struct fb_var_screeninfo *var)
static int pvr2fb_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static int pvr2fb_set_par(struct fb_info *info)
static int pvr2fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static void pvr2_update_display(struct fb_info *info)
static void pvr2_init_display(struct fb_info *info)
#define BLANK_BIT (1<<3)
static void pvr2_do_blank(void)
static irqreturn_t pvr2fb_interrupt(int irq, void *dev_id)
#define PCTRA 0xff80002c
#define PDTRA 0xff800030
#define VOUTC 0xa0702c00
static int pvr2_init_cable(void)
static ssize_t pvr2fb_write(struct fb_info *info, const char *buf,
size_t count, loff_t *ppos)
static int __devinit pvr2fb_common_init(void)
static int __init pvr2fb_dc_init(void)
static void __exit pvr2fb_dc_exit(void)
static int __devinit pvr2fb_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit pvr2fb_pci_remove(struct pci_dev *pdev)
static struct pci_device_id pvr2fb_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, pvr2fb_pci_tbl);
static struct pci_driver pvr2fb_pci_driver = ;
static int __init pvr2fb_pci_init(void)
static void __exit pvr2fb_pci_exit(void)
static int __devinit pvr2_get_param(const struct pvr2_params *p, const char *s,
int val, int size)
static int __init pvr2fb_setup(char *options)
static struct pvr2_board  board_driver[] = ;
static int __init pvr2fb_init(void)
static void __exit pvr2fb_exit(void)
module_init(pvr2fb_init);
module_exit(pvr2fb_exit);
MODULE_AUTHOR("Paul Mundt <lethal@linux-sh.org>, M. R. Brown <mrbrown@0xd6.org>");
MODULE_DESCRIPTION("Framebuffer driver for NEC PowerVR 2 based graphics boards");
MODULE_LICENSE("GPL");
