static int ffb_setcolreg(unsigned, unsigned, unsigned, unsigned,
unsigned, struct fb_info *);
static int ffb_blank(int, struct fb_info *);
static void ffb_imageblit(struct fb_info *, const struct fb_image *);
static void ffb_fillrect(struct fb_info *, const struct fb_fillrect *);
static void ffb_copyarea(struct fb_info *, const struct fb_copyarea *);
static int ffb_sync(struct fb_info *);
static int ffb_mmap(struct fb_info *, struct vm_area_struct *);
static int ffb_ioctl(struct fb_info *, unsigned int, unsigned long);
static int ffb_pan_display(struct fb_var_screeninfo *, struct fb_info *);
static struct fb_ops ffb_ops = ;
#define	FFB_SFB8R_VOFF		0x00000000
#define	FFB_SFB8G_VOFF		0x00400000
#define	FFB_SFB8B_VOFF		0x00800000
#define	FFB_SFB8X_VOFF		0x00c00000
#define	FFB_SFB32_VOFF		0x01000000
#define	FFB_SFB64_VOFF		0x02000000
#define	FFB_FBC_REGS_VOFF	0x04000000
#define	FFB_BM_FBC_REGS_VOFF	0x04002000
#define	FFB_DFB8R_VOFF		0x04004000
#define	FFB_DFB8G_VOFF		0x04404000
#define	FFB_DFB8B_VOFF		0x04804000
#define	FFB_DFB8X_VOFF		0x04c04000
#define	FFB_DFB24_VOFF		0x05004000
#define	FFB_DFB32_VOFF		0x06004000
#define	FFB_DFB422A_VOFF	0x07004000
#define	FFB_DFB422AD_VOFF	0x07804000
#define	FFB_DFB24B_VOFF		0x08004000
#define	FFB_DFB422B_VOFF	0x09004000
#define	FFB_DFB422BD_VOFF	0x09804000
#define	FFB_SFB16Z_VOFF		0x0a004000
#define	FFB_SFB8Z_VOFF		0x0a404000
#define	FFB_SFB422_VOFF		0x0ac04000
#define	FFB_SFB422D_VOFF	0x0b404000
#define	FFB_FBC_KREGS_VOFF	0x0bc04000
#define	FFB_DAC_VOFF		0x0bc06000
#define	FFB_PROM_VOFF		0x0bc08000
#define	FFB_EXP_VOFF		0x0bc18000
#define	FFB_SFB8R_POFF		0x04000000UL
#define	FFB_SFB8G_POFF		0x04400000UL
#define	FFB_SFB8B_POFF		0x04800000UL
#define	FFB_SFB8X_POFF		0x04c00000UL
#define	FFB_SFB32_POFF		0x05000000UL
#define	FFB_SFB64_POFF		0x06000000UL
#define	FFB_FBC_REGS_POFF	0x00600000UL
#define	FFB_BM_FBC_REGS_POFF	0x00600000UL
#define	FFB_DFB8R_POFF		0x01000000UL
#define	FFB_DFB8G_POFF		0x01400000UL
#define	FFB_DFB8B_POFF		0x01800000UL
#define	FFB_DFB8X_POFF		0x01c00000UL
#define	FFB_DFB24_POFF		0x02000000UL
#define	FFB_DFB32_POFF		0x03000000UL
#define	FFB_FBC_KREGS_POFF	0x00610000UL
#define	FFB_DAC_POFF		0x00400000UL
#define	FFB_PROM_POFF		0x00000000UL
#define	FFB_EXP_POFF		0x00200000UL
#define FFB_DFB422A_POFF	0x09000000UL
#define FFB_DFB422AD_POFF	0x09800000UL
#define FFB_DFB24B_POFF		0x0a000000UL
#define FFB_DFB422B_POFF	0x0b000000UL
#define FFB_DFB422BD_POFF	0x0b800000UL
#define FFB_SFB16Z_POFF		0x0c800000UL
#define FFB_SFB8Z_POFF		0x0c000000UL
#define FFB_SFB422_POFF		0x0d000000UL
#define FFB_SFB422D_POFF	0x0d800000UL
#define FFB_DRAWOP_DOT		0x00
#define FFB_DRAWOP_AADOT	0x01
#define FFB_DRAWOP_BRLINECAP	0x02
#define FFB_DRAWOP_BRLINEOPEN	0x03
#define FFB_DRAWOP_DDLINE	0x04
#define FFB_DRAWOP_AALINE	0x05
#define FFB_DRAWOP_TRIANGLE	0x06
#define FFB_DRAWOP_POLYGON	0x07
#define FFB_DRAWOP_RECTANGLE	0x08
#define FFB_DRAWOP_FASTFILL	0x09
#define FFB_DRAWOP_BCOPY	0x0a
#define FFB_DRAWOP_VSCROLL	0x0b
#define FFB_PPC_FW_DISABLE	0x800000
#define FFB_PPC_FW_ENABLE	0xc00000
#define FFB_PPC_ACE_DISABLE	0x040000
#define FFB_PPC_ACE_AUX_SUB	0x080000
#define FFB_PPC_ACE_AUX_ADD	0x0c0000
#define FFB_PPC_DCE_DISABLE	0x020000
#define FFB_PPC_DCE_ENABLE	0x030000
#define FFB_PPC_ABE_DISABLE	0x008000
#define FFB_PPC_ABE_ENABLE	0x00c000
#define FFB_PPC_VCE_DISABLE	0x001000
#define FFB_PPC_VCE_2D		0x002000
#define FFB_PPC_VCE_3D		0x003000
#define FFB_PPC_APE_DISABLE	0x000800
#define FFB_PPC_APE_ENABLE	0x000c00
#define FFB_PPC_TBE_OPAQUE	0x000200
#define FFB_PPC_TBE_TRANSPARENT	0x000300
#define FFB_PPC_ZS_VAR		0x000080
#define FFB_PPC_ZS_CONST	0x0000c0
#define FFB_PPC_YS_VAR		0x000020
#define FFB_PPC_YS_CONST	0x000030
#define FFB_PPC_XS_WID		0x000004
#define FFB_PPC_XS_VAR		0x000008
#define FFB_PPC_XS_CONST	0x00000c
#define FFB_PPC_CS_VAR		0x000002
#define FFB_PPC_CS_CONST	0x000003
#define FFB_ROP_NEW		0x83
#define FFB_ROP_OLD		0x85
#define FFB_ROP_NEW_XOR_OLD	0x86
#define FFB_UCSR_FIFO_MASK	0x00000fff
#define FFB_UCSR_FB_BUSY	0x01000000
#define FFB_UCSR_RP_BUSY	0x02000000
#define FFB_UCSR_ALL_BUSY	(FFB_UCSR_RP_BUSY|FFB_UCSR_FB_BUSY)
#define FFB_UCSR_READ_ERR	0x40000000
#define FFB_UCSR_FIFO_OVFL	0x80000000
#define FFB_UCSR_ALL_ERRORS	(FFB_UCSR_READ_ERR|FFB_UCSR_FIFO_OVFL)
struct ffb_fbc ;
struct ffb_dac ;
#define FFB_DAC_UCTRL		0x1001
#define FFB_DAC_UCTRL_MANREV	0x00000f00
#define FFB_DAC_UCTRL_MANREV_SHIFT 8
#define FFB_DAC_TGEN		0x6000
#define FFB_DAC_TGEN_VIDE	0x00000001
#define FFB_DAC_DID		0x8000
#define FFB_DAC_DID_PNUM	0x0ffff000
#define FFB_DAC_DID_PNUM_SHIFT	12
#define FFB_DAC_DID_REV		0xf0000000
#define FFB_DAC_DID_REV_SHIFT	28
#define FFB_DAC_CUR_CTRL	0x100
#define FFB_DAC_CUR_CTRL_P0	0x00000001
#define FFB_DAC_CUR_CTRL_P1	0x00000002
struct ffb_par ;
static void FFBFifo(struct ffb_par *par, int n)
static void FFBWait(struct ffb_par *par)
static int ffb_sync(struct fb_info *p)
static __inline__ void ffb_rop(struct ffb_par *par, u32 rop)
static void ffb_switch_from_graph(struct ffb_par *par)
static int ffb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static void ffb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void ffb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void ffb_imageblit(struct fb_info *info, const struct fb_image *image)
static void ffb_fixup_var_rgb(struct fb_var_screeninfo *var)
static int ffb_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int ffb_blank(int blank, struct fb_info *info)
static struct sbus_mmap_map ffb_mmap_map[] = ;
static int ffb_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int ffb_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
static void ffb_init_fix(struct fb_info *info)
static int __devinit ffb_probe(struct platform_device *op)
static int __devexit ffb_remove(struct platform_device *op)
static const struct of_device_id ffb_match[] = ;
MODULE_DEVICE_TABLE(of, ffb_match);
static struct platform_driver ffb_driver = ;
static int __init ffb_init(void)
static void __exit ffb_exit(void)
module_init(ffb_init);
module_exit(ffb_exit);
MODULE_DESCRIPTION("framebuffer driver for Creator/Elite3D chipsets");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
