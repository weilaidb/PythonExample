#define PCI_DEVICE_ID_IBM_GXT4500P	0x21c
#define PCI_DEVICE_ID_IBM_GXT6000P	0x170
#define CFG_ENDIAN0		0x40
#define STATUS			0x1000
#define CTRL_REG0		0x1004
#define   CR0_HALT_DMA			0x4
#define   CR0_RASTER_RESET		0x8
#define   CR0_GEOM_RESET		0x10
#define   CR0_MEM_CTRLER_RESET		0x20
#define FB_AB_CTRL		0x1100
#define FB_CD_CTRL		0x1104
#define FB_WID_CTRL		0x1108
#define FB_Z_CTRL		0x110c
#define FB_VGA_CTRL		0x1110
#define REFRESH_AB_CTRL		0x1114
#define REFRESH_CD_CTRL		0x1118
#define FB_OVL_CTRL		0x111c
#define   FB_CTRL_TYPE			0x80000000
#define   FB_CTRL_WIDTH_MASK		0x007f0000
#define   FB_CTRL_WIDTH_SHIFT		16
#define   FB_CTRL_START_SEG_MASK	0x00003fff
#define REFRESH_START		0x1098
#define REFRESH_SIZE		0x109c
#define DFA_FB_A		0x11e0
#define DFA_FB_B		0x11e4
#define DFA_FB_C		0x11e8
#define DFA_FB_D		0x11ec
#define   DFA_FB_ENABLE			0x80000000
#define   DFA_FB_BASE_MASK		0x03f00000
#define   DFA_FB_STRIDE_1k		0x00000000
#define   DFA_FB_STRIDE_2k		0x00000010
#define   DFA_FB_STRIDE_4k		0x00000020
#define   DFA_PIX_8BIT			0x00000000
#define   DFA_PIX_16BIT_565		0x00000001
#define   DFA_PIX_16BIT_1555		0x00000002
#define   DFA_PIX_24BIT			0x00000004
#define   DFA_PIX_32BIT			0x00000005
static const unsigned char pixsize[] = ;
#define DTG_CONTROL		0x1900
#define   DTG_CTL_SCREEN_REFRESH	2
#define   DTG_CTL_ENABLE		1
#define DTG_HORIZ_EXTENT	0x1904
#define DTG_HORIZ_DISPLAY	0x1908
#define DTG_HSYNC_START		0x190c
#define DTG_HSYNC_END		0x1910
#define DTG_HSYNC_END_COMP	0x1914
#define DTG_VERT_EXTENT		0x1918
#define DTG_VERT_DISPLAY	0x191c
#define DTG_VSYNC_START		0x1920
#define DTG_VSYNC_END		0x1924
#define DTG_VERT_SHORT		0x1928
#define DISP_CTL		0x402c
#define   DISP_CTL_OFF			2
#define SYNC_CTL		0x4034
#define   SYNC_CTL_SYNC_ON_RGB		1
#define   SYNC_CTL_SYNC_OFF		2
#define   SYNC_CTL_HSYNC_INV		8
#define   SYNC_CTL_VSYNC_INV		0x10
#define   SYNC_CTL_HSYNC_OFF		0x20
#define   SYNC_CTL_VSYNC_OFF		0x40
#define PLL_M			0x4040
#define PLL_N			0x4044
#define PLL_POSTDIV		0x4048
#define PLL_C			0x404c
#define CURSOR_X		0x4078
#define CURSOR_Y		0x407c
#define CURSOR_HOTSPOT		0x4080
#define CURSOR_MODE		0x4084
#define   CURSOR_MODE_OFF		0
#define   CURSOR_MODE_4BPP		1
#define CURSOR_PIXMAP		0x5000
#define CURSOR_CMAP		0x7400
#define WAT_FMT			0x4100
#define   WAT_FMT_24BIT			0
#define   WAT_FMT_16BIT_565		1
#define   WAT_FMT_16BIT_1555		2
#define   WAT_FMT_32BIT			3
#define   WAT_FMT_8BIT_332		9
#define   WAT_FMT_8BIT			0xa
#define   WAT_FMT_NO_CMAP		4
#define WAT_CMAP_OFFSET		0x4104
#define WAT_CTRL		0x4108
#define   WAT_CTRL_SEL_B		1
#define   WAT_CTRL_NO_INC		2
#define WAT_GAMMA_CTRL		0x410c
#define   WAT_GAMMA_DISABLE		1
#define WAT_OVL_CTRL		0x430c
static const unsigned char watfmt[] = ;
#define CMAP			0x6000
#define readreg(par, reg)	readl((par)->regs + (reg))
#define writereg(par, reg, val)	writel((val), (par)->regs + (reg))
struct gxt4500_par ;
static char *mode_option;
static const struct fb_videomode defaultmode __devinitdata = ;
enum gxt_cards ;
static const struct cardinfo  cardinfo[] = ;
static const unsigned char mdivtab[] = ;
static const unsigned char ndivtab[] = ;
static int calc_pll(int period_ps, struct gxt4500_par *par)
static int calc_pixclock(struct gxt4500_par *par)
static int gxt4500_var_to_par(struct fb_var_screeninfo *var,
struct gxt4500_par *par)
static const struct fb_bitfield eightbits = ;
static const struct fb_bitfield nobits = ;
static void gxt4500_unpack_pixfmt(struct fb_var_screeninfo *var,
int pixfmt)
static int gxt4500_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int gxt4500_set_par(struct fb_info *info)
static int gxt4500_setcolreg(unsigned int reg, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static int gxt4500_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int gxt4500_blank(int blank, struct fb_info *info)
static const struct fb_fix_screeninfo gxt4500_fix __devinitdata = ;
static struct fb_ops gxt4500_ops = ;
static int __devinit gxt4500_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit gxt4500_remove(struct pci_dev *pdev)
static const struct pci_device_id gxt4500_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, gxt4500_pci_tbl);
static struct pci_driver gxt4500_driver = ;
static int __devinit gxt4500_init(void)
module_init(gxt4500_init);
static void __exit gxt4500_exit(void)
module_exit(gxt4500_exit);
MODULE_AUTHOR("Paul Mackerras <paulus@samba.org>");
MODULE_DESCRIPTION("FBDev driver for IBM GXT4500P/6000P");
MODULE_LICENSE("GPL");
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Specify resolution as \"<xres>x<yres>[-<bpp>][@<refresh>]\"");
