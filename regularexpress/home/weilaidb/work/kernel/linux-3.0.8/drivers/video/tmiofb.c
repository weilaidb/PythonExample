#define TMIOFB_ACC_CSADR(x)	(0x00000000 | ((x) & 0x001ffffe))
#define TMIOFB_ACC_CHPIX(x)	(0x01000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_CVPIX(x)	(0x02000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_PSADR(x)	(0x03000000 | ((x) & 0x00fffffe))
#define TMIOFB_ACC_PHPIX(x)	(0x04000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_PVPIX(x)	(0x05000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_PHOFS(x)	(0x06000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_PVOFS(x)	(0x07000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_POADR(x)	(0x08000000 | ((x) & 0x00fffffe))
#define TMIOFB_ACC_RSTR(x)	(0x09000000 | ((x) & 0x000000ff))
#define TMIOFB_ACC_TCLOR(x)	(0x0A000000 | ((x) & 0x0000ffff))
#define TMIOFB_ACC_FILL(x)	(0x0B000000 | ((x) & 0x0000ffff))
#define TMIOFB_ACC_DSADR(x)	(0x0C000000 | ((x) & 0x00fffffe))
#define TMIOFB_ACC_SSADR(x)	(0x0D000000 | ((x) & 0x00fffffe))
#define TMIOFB_ACC_DHPIX(x)	(0x0E000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_DVPIX(x)	(0x0F000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_SHPIX(x)	(0x10000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_SVPIX(x)	(0x11000000 | ((x) & 0x000003ff))
#define TMIOFB_ACC_LBINI(x)	(0x12000000 | ((x) & 0x0000ffff))
#define TMIOFB_ACC_LBK2(x)	(0x13000000 | ((x) & 0x0000ffff))
#define TMIOFB_ACC_SHBINI(x)	(0x14000000 | ((x) & 0x0000ffff))
#define TMIOFB_ACC_SHBK2(x)	(0x15000000 | ((x) & 0x0000ffff))
#define TMIOFB_ACC_SVBINI(x)	(0x16000000 | ((x) & 0x0000ffff))
#define TMIOFB_ACC_SVBK2(x)	(0x17000000 | ((x) & 0x0000ffff))
#define TMIOFB_ACC_CMGO		0x20000000
#define TMIOFB_ACC_CMGO_CEND	0x00000001
#define TMIOFB_ACC_CMGO_INT	0x00000002
#define TMIOFB_ACC_CMGO_CMOD	0x00000010
#define TMIOFB_ACC_CMGO_CDVRV	0x00000020
#define TMIOFB_ACC_CMGO_CDHRV	0x00000040
#define TMIOFB_ACC_CMGO_RUND	0x00008000
#define TMIOFB_ACC_SCGO		0x21000000
#define TMIOFB_ACC_SCGO_CEND	0x00000001
#define TMIOFB_ACC_SCGO_INT	0x00000002
#define TMIOFB_ACC_SCGO_ROP3	0x00000004
#define TMIOFB_ACC_SCGO_TRNS	0x00000008
#define TMIOFB_ACC_SCGO_DVRV	0x00000010
#define TMIOFB_ACC_SCGO_DHRV	0x00000020
#define TMIOFB_ACC_SCGO_SVRV	0x00000040
#define TMIOFB_ACC_SCGO_SHRV	0x00000080
#define TMIOFB_ACC_SCGO_DSTXY	0x00008000
#define TMIOFB_ACC_SBGO		0x22000000
#define TMIOFB_ACC_SBGO_CEND	0x00000001
#define TMIOFB_ACC_SBGO_INT	0x00000002
#define TMIOFB_ACC_SBGO_DVRV	0x00000010
#define TMIOFB_ACC_SBGO_DHRV	0x00000020
#define TMIOFB_ACC_SBGO_SVRV	0x00000040
#define TMIOFB_ACC_SBGO_SHRV	0x00000080
#define TMIOFB_ACC_SBGO_SBMD	0x00000100
#define TMIOFB_ACC_FLGO		0x23000000
#define TMIOFB_ACC_FLGO_CEND	0x00000001
#define TMIOFB_ACC_FLGO_INT	0x00000002
#define TMIOFB_ACC_FLGO_ROP3	0x00000004
#define TMIOFB_ACC_LDGO		0x24000000
#define TMIOFB_ACC_LDGO_CEND	0x00000001
#define TMIOFB_ACC_LDGO_INT	0x00000002
#define TMIOFB_ACC_LDGO_ROP3	0x00000004
#define TMIOFB_ACC_LDGO_ENDPX	0x00000008
#define TMIOFB_ACC_LDGO_LVRV	0x00000010
#define TMIOFB_ACC_LDGO_LHRV	0x00000020
#define TMIOFB_ACC_LDGO_LDMOD	0x00000040
#define TMIOFB_FIFO_SIZE	512
#define CCR_CMD			0x04
#define CCR_REVID		0x08
#define CCR_BASEL		0x10
#define CCR_BASEH		0x12
#define CCR_UGCC		0x40
#define CCR_GCC			0x42
#define CCR_USC			0x50
#define CCR_VRAMRTC		0x60
#define CCR_VRAMSAC		0x62
#define CCR_VRAMBC		0x64
#define LCR_UIS			0x000
#define LCR_VHPN		0x008
#define LCR_CFSAL		0x00a
#define LCR_CFSAH		0x00c
#define LCR_CFS			0x00e
#define LCR_CFWS		0x010
#define LCR_BBIE		0x012
#define LCR_BBISC		0x014
#define LCR_CCS			0x016
#define LCR_BBES		0x018
#define LCR_CMDL		0x01c
#define LCR_CMDH		0x01e
#define LCR_CFC			0x022
#define LCR_CCIFC		0x024
#define LCR_HWT			0x026
#define LCR_LCDCCRC		0x100
#define LCR_LCDCC		0x102
#define LCR_LCDCOPC		0x104
#define LCR_LCDIS		0x108
#define LCR_LCDIM		0x10a
#define LCR_LCDIE		0x10c
#define LCR_GDSAL		0x122
#define LCR_GDSAH		0x124
#define LCR_VHPCL		0x12a
#define LCR_VHPCH		0x12c
#define LCR_GM			0x12e
#define LCR_HT			0x140
#define LCR_HDS			0x142
#define LCR_HSS			0x144
#define LCR_HSE			0x146
#define LCR_HNP			0x14c
#define LCR_VT			0x150
#define LCR_VDS			0x152
#define LCR_VSS			0x154
#define LCR_VSE			0x156
#define LCR_CDLN		0x160
#define LCR_ILN			0x162
#define LCR_SP			0x164
#define LCR_MISC		0x166
#define LCR_VIHSS		0x16a
#define LCR_VIVS		0x16c
#define LCR_VIVE		0x16e
#define LCR_VIVSS		0x170
#define LCR_VCCIS		0x17e
#define LCR_VIDWSAL		0x180
#define LCR_VIDWSAH		0x182
#define LCR_VIDRSAL		0x184
#define LCR_VIDRSAH		0x186
#define LCR_VIPDDST		0x188
#define LCR_VIPDDET		0x186
#define LCR_VIE			0x18c
#define LCR_VCS			0x18e
#define LCR_VPHWC		0x194
#define LCR_VPHS		0x196
#define LCR_VPVWC		0x198
#define LCR_VPVS		0x19a
#define LCR_PLHPIX		0x1a0
#define LCR_XS			0x1a2
#define LCR_XCKHW		0x1a4
#define LCR_STHS		0x1a8
#define LCR_VT2			0x1aa
#define LCR_YCKSW		0x1ac
#define LCR_YSTS		0x1ae
#define LCR_PPOLS		0x1b0
#define LCR_PRECW		0x1b2
#define LCR_VCLKHW		0x1b4
#define LCR_OC			0x1b6
static char *mode_option __devinitdata;
struct tmiofb_par ;
static irqreturn_t tmiofb_irq(int irq, void *__info)
static int tmiofb_hw_stop(struct platform_device *dev)
static int tmiofb_hw_init(struct platform_device *dev)
static void tmiofb_hw_mode(struct platform_device *dev)
static int __must_check
tmiofb_acc_wait(struct fb_info *info, unsigned int ccs)
static int
tmiofb_acc_write(struct fb_info *info, const u32 *cmd, unsigned int count)
static int tmiofb_sync(struct fb_info *fbi)
static void
tmiofb_fillrect(struct fb_info *fbi, const struct fb_fillrect *rect)
static void
tmiofb_copyarea(struct fb_info *fbi, const struct fb_copyarea *area)
static void tmiofb_clearscreen(struct fb_info *info)
static int tmiofb_vblank(struct fb_info *fbi, struct fb_vblank *vblank)
static int tmiofb_ioctl(struct fb_info *fbi,
unsigned int cmd, unsigned long arg)
static struct fb_videomode *
tmiofb_find_mode(struct fb_info *info, struct fb_var_screeninfo *var)
static int tmiofb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int tmiofb_set_par(struct fb_info *info)
static int tmiofb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int tmiofb_blank(int blank, struct fb_info *info)
static struct fb_ops tmiofb_ops = ;
static int __devinit tmiofb_probe(struct platform_device *dev)
static int __devexit tmiofb_remove(struct platform_device *dev)
static void tmiofb_dump_regs(struct platform_device *dev)
static int tmiofb_suspend(struct platform_device *dev, pm_message_t state)
static int tmiofb_resume(struct platform_device *dev)
#define tmiofb_suspend	NULL
#define tmiofb_resume	NULL
static struct platform_driver tmiofb_driver = ;
static void __init tmiofb_setup(char *options)
static int __init tmiofb_init(void)
static void __exit tmiofb_cleanup(void)
module_init(tmiofb_init);
module_exit(tmiofb_cleanup);
MODULE_DESCRIPTION("TMIO framebuffer driver");
MODULE_AUTHOR("Chris Humbert, Dirk Opfer, Dmitry Baryshkov");
MODULE_LICENSE("GPL");
