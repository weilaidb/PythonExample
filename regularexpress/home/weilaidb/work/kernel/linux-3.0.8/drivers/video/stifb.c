#undef FALLBACK_TO_1BPP
#undef DEBUG_STIFB_REGS
#define REGION_BASE(fb_info, index) \
F_EXTEND(fb_info->sti->glob_cfg->region_ptrs[index])
#define NGLEDEVDEPROM_CRT_REGION 1
#define NR_PALETTE 256
typedef struct  video_setup_t;
typedef struct  ngle_rom_t;
struct stifb_info ;
static int __initdata stifb_bpp_pref[MAX_STI_ROMS];
#define REG_1		0x000118
#define REG_2		0x000480
#define REG_3		0x0004a0
#define REG_4		0x000600
#define REG_6		0x000800
#define REG_8		0x000820
#define REG_9		0x000a04
#define REG_10		0x018000
#define REG_11		0x018004
#define REG_12		0x01800c
#define REG_13		0x018018
#define REG_14  	0x01801c
#define REG_15		0x200000
#define REG_15b0	0x200000
#define REG_16b1	0x200005
#define REG_16b3	0x200007
#define REG_21		0x200218
#define REG_22		0x0005a0
#define REG_23		0x0005c0
#define REG_26		0x200118
#define REG_27		0x200308
#define REG_32		0x21003c
#define REG_33		0x210040
#define REG_34		0x200008
#define REG_35		0x018010
#define REG_38		0x210020
#define REG_39		0x210120
#define REG_40		0x210130
#define REG_42		0x210028
#define REG_43		0x21002c
#define REG_44		0x210030
#define REG_45		0x210034
#define READ_BYTE(fb,reg)		gsc_readb((fb)->info.fix.mmio_start + (reg))
#define READ_WORD(fb,reg)		gsc_readl((fb)->info.fix.mmio_start + (reg))
# define  DEBUG_OFF()
# define  DEBUG_ON()
# define WRITE_BYTE(value,fb,reg)	gsc_writeb((value),(fb)->info.fix.mmio_start + (reg))
# define WRITE_WORD(value,fb,reg)	gsc_writel((value),(fb)->info.fix.mmio_start + (reg))
static int debug_on = 1;
# define  DEBUG_OFF() debug_on=0
# define  DEBUG_ON()  debug_on=1
# define WRITE_BYTE(value,fb,reg)	do  while (0)
# define WRITE_WORD(value,fb,reg)	do  while (0)
#define ENABLE	1
#define DISABLE 0
#define NGLE_LOCK(fb_info)	do  while (0)
#define NGLE_UNLOCK(fb_info)	do  while (0)
static void
SETUP_HW(struct stifb_info *fb)
static void
SETUP_FB(struct stifb_info *fb)
static void
START_IMAGE_COLORMAP_ACCESS(struct stifb_info *fb)
static void
WRITE_IMAGE_COLOR(struct stifb_info *fb, int index, int color)
static void
FINISH_IMAGE_COLORMAP_ACCESS(struct stifb_info *fb)
static void
SETUP_RAMDAC(struct stifb_info *fb)
static void
CRX24_SETUP_RAMDAC(struct stifb_info *fb)
static void
CRX24_SET_OVLY_MASK(struct stifb_info *fb)
static void
ENABLE_DISABLE_DISPLAY(struct stifb_info *fb, int enable)
static void
CRX24_ENABLE_DISABLE_DISPLAY(struct stifb_info *fb, int enable)
static void
ARTIST_ENABLE_DISABLE_DISPLAY(struct stifb_info *fb, int enable)
#define GET_ROMTABLE_INDEX(fb) \
(READ_BYTE(fb, REG_16b3) - 1)
#define HYPER_CONFIG_PLANES_24 0x00000100
#define IS_24_DEVICE(fb) \
(fb->deviceSpecificConfig & HYPER_CONFIG_PLANES_24)
#define IS_888_DEVICE(fb) \
(!(IS_24_DEVICE(fb)))
#define GET_FIFO_SLOTS(fb, cnt, numslots)	\
#define	    IndexedDcd	0
#define	    Otc04	2
#define	    Otc32	5
#define	    Ots08	3
#define	    OtsIndirect	6
#define	    AddrLong	5
#define	    BINovly	0x2
#define	    BINapp0I	0x0
#define	    BINapp1I	0x1
#define	    BINapp0F8	0xa
#define	    BINattr	0xd
#define	    RopSrc 	0x3
#define	    BitmapExtent08  3
#define	    BitmapExtent32  5
#define	    DataDynamic	    0
#define	    MaskDynamic	    1
#define	    MaskOtc	    0
#define MaskAddrOffset(offset) (offset)
#define StaticReg(en) (en)
#define BGx(en) (en)
#define FGx(en) (en)
#define BAJustPoint(offset) (offset)
#define BAIndexBase(base) (base)
#define BA(F,C,S,A,J,B,I) \
(((F)<<31)|((C)<<27)|((S)<<24)|((A)<<21)|((J)<<16)|((B)<<12)|(I))
#define IBOvals(R,M,X,S,D,L,B,F) \
(((R)<<8)|((M)<<16)|((X)<<24)|((S)<<29)|((D)<<28)|((L)<<31)|((B)<<1)|(F))
#define NGLE_QUICK_SET_IMAGE_BITMAP_OP(fb, val) \
WRITE_WORD(val, fb, REG_14)
#define NGLE_QUICK_SET_DST_BM_ACCESS(fb, val) \
WRITE_WORD(val, fb, REG_11)
#define NGLE_QUICK_SET_CTL_PLN_REG(fb, val) \
WRITE_WORD(val, fb, REG_12)
#define NGLE_REALLY_SET_IMAGE_PLANEMASK(fb, plnmsk32) \
WRITE_WORD(plnmsk32, fb, REG_13)
#define NGLE_REALLY_SET_IMAGE_FG_COLOR(fb, fg32) \
WRITE_WORD(fg32, fb, REG_35)
#define NGLE_SET_TRANSFERDATA(fb, val) \
WRITE_WORD(val, fb, REG_8)
#define NGLE_SET_DSTXY(fb, val) \
WRITE_WORD(val, fb, REG_6)
#define NGLE_LONG_FB_ADDRESS(fbaddrbase, x, y) (		\
(u32) (fbaddrbase) +					\
(	(unsigned int)  ( (y) << 13      ) |		\
(unsigned int)  ( (x) << 2       )	)	\
)
#define NGLE_BINC_SET_DSTADDR(fb, addr) \
WRITE_WORD(addr, fb, REG_3)
#define NGLE_BINC_SET_SRCADDR(fb, addr) \
WRITE_WORD(addr, fb, REG_2)
#define NGLE_BINC_SET_DSTMASK(fb, mask) \
WRITE_WORD(mask, fb, REG_22)
#define NGLE_BINC_WRITE32(fb, data32) \
WRITE_WORD(data32, fb, REG_23)
#define START_COLORMAPLOAD(fb, cmapBltCtlData32) \
WRITE_WORD((cmapBltCtlData32), fb, REG_38)
#define SET_LENXY_START_RECFILL(fb, lenxy) \
WRITE_WORD(lenxy, fb, REG_9)
static void
HYPER_ENABLE_DISABLE_DISPLAY(struct stifb_info *fb, int enable)
#define BUFF0_CMAP0	0x00001e02
#define BUFF1_CMAP0	0x02001e02
#define BUFF1_CMAP3	0x0c001e02
#define ARTIST_CMAP0	0x00000102
#define HYPER_CMAP8	0x00000100
#define HYPER_CMAP24	0x00000800
static void
SETUP_ATTR_ACCESS(struct stifb_info *fb, unsigned BufferNumber)
static void
SET_ATTR_SIZE(struct stifb_info *fb, int width, int height)
static void
FINISH_ATTR_ACCESS(struct stifb_info *fb)
static void
elkSetupPlanes(struct stifb_info *fb)
static void
ngleSetupAttrPlanes(struct stifb_info *fb, int BufferNumber)
static void
rattlerSetupPlanes(struct stifb_info *fb)
#define HYPER_CMAP_TYPE				0
#define NGLE_CMAP_INDEXED0_TYPE			0
#define NGLE_CMAP_OVERLAY_TYPE			3
typedef union
NgleLutBltCtl;
static NgleLutBltCtl
setHyperLutBltCtl(struct stifb_info *fb, int offsetWithinLut, int length)
static void hyperUndoITE(struct stifb_info *fb)
static void
ngleDepth8_ClearImagePlanes(struct stifb_info *fb)
static void
ngleDepth24_ClearImagePlanes(struct stifb_info *fb)
static void
ngleResetAttrPlanes(struct stifb_info *fb, unsigned int ctlPlaneReg)
static void
ngleClearOverlayPlanes(struct stifb_info *fb, int mask, int data)
static void
hyperResetPlanes(struct stifb_info *fb, int enable)
static void
ngleGetDeviceRomData(struct stifb_info *fb)
#define HYPERBOWL_MODE_FOR_8_OVER_88_LUT0_NO_TRANSPARENCIES	4
#define HYPERBOWL_MODE01_8_24_LUT0_TRANSPARENT_LUT1_OPAQUE	8
#define HYPERBOWL_MODE01_8_24_LUT0_OPAQUE_LUT1_OPAQUE		10
#define HYPERBOWL_MODE2_8_24					15
static void __init
SETUP_HCRX(struct stifb_info *fb)
static int
stifb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp, struct fb_info *info)
static int
stifb_blank(int blank_mode, struct fb_info *info)
static void __init
stifb_init_display(struct stifb_info *fb)
static struct fb_ops stifb_ops = ;
static int __init stifb_init_fb(struct sti_struct *sti, int bpp_pref)
static int stifb_disabled __initdata;
int __init
stifb_setup(char *options);
static int __init stifb_init(void)
static void __exit
stifb_cleanup(void)
int __init
stifb_setup(char *options)
__setup("stifb=", stifb_setup);
module_init(stifb_init);
module_exit(stifb_cleanup);
MODULE_AUTHOR("Helge Deller <deller@gmx.de>, Thomas Bogendoerfer <tsbogend@alpha.franken.de>");
MODULE_DESCRIPTION("Framebuffer driver for HP's NGLE series graphics cards in HP PARISC machines");
MODULE_LICENSE("GPL v2");
