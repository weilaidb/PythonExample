#define __MATROXFB_H__
#undef MATROXFB_DEBUG
#undef MATROXFB_DEBUG_HEAVY
#undef MATROXFB_DEBUG_LOOP
#undef MATROXFB_DEBUG_REG
#undef MATROXFB_USE_SPINLOCKS
#if defined(CONFIG_PPC_PMAC)
#define DEBUG
#define DBG(x)		printk(KERN_DEBUG "matroxfb: %s\n", (x));
#define DBG_HEAVY(x)	DBG(x)
#define DBG_HEAVY(x)
#define DBG_LOOP(x)	DBG(x)
#define DBG_LOOP(x)
#define DBG_REG(x)	DBG(x)
#define DBG_REG(x)
#define DBG(x)
#define DBG_HEAVY(x)
#define DBG_REG(x)
#define DBG_LOOP(x)
#define dprintk(X...)	printk(X)
#define dprintk(X...)
#define PCI_SS_VENDOR_ID_SIEMENS_NIXDORF	0x110A
#define PCI_SS_VENDOR_ID_MATROX		PCI_VENDOR_ID_MATROX
#define PCI_SS_ID_MATROX_GENERIC		0xFF00
#define PCI_SS_ID_MATROX_PRODUCTIVA_G100_AGP	0xFF01
#define PCI_SS_ID_MATROX_MYSTIQUE_G200_AGP	0xFF02
#define PCI_SS_ID_MATROX_MILLENIUM_G200_AGP	0xFF03
#define PCI_SS_ID_MATROX_MARVEL_G200_AGP	0xFF04
#define PCI_SS_ID_MATROX_MGA_G100_PCI		0xFF05
#define PCI_SS_ID_MATROX_MGA_G100_AGP		0x1001
#define PCI_SS_ID_MATROX_MILLENNIUM_G400_MAX_AGP	0x2179
#define PCI_SS_ID_SIEMENS_MGA_G100_AGP		0x001E
#define PCI_SS_ID_SIEMENS_MGA_G200_AGP		0x0032
#define MX_VISUAL_TRUECOLOR	FB_VISUAL_DIRECTCOLOR
#define MX_VISUAL_DIRECTCOLOR	FB_VISUAL_TRUECOLOR
#define MX_VISUAL_PSEUDOCOLOR	FB_VISUAL_PSEUDOCOLOR
#define CNVT_TOHW(val,width) ((((val)<<(width))+0x7FFF-(val))>>16)
#undef NEED_DAC1064
#if defined(CONFIG_FB_MATROX_MYSTIQUE) || defined(CONFIG_FB_MATROX_G)
#define NEED_DAC1064 1
typedef struct  vaddr_t;
static inline unsigned int mga_readb(vaddr_t va, unsigned int offs)
static inline void mga_writeb(vaddr_t va, unsigned int offs, u_int8_t value)
static inline void mga_writew(vaddr_t va, unsigned int offs, u_int16_t value)
static inline u_int32_t mga_readl(vaddr_t va, unsigned int offs)
static inline void mga_writel(vaddr_t va, unsigned int offs, u_int32_t value)
static inline void mga_memcpy_toio(vaddr_t va, const void* src, int len)
static inline void vaddr_add(vaddr_t* va, unsigned long offs)
static inline void __iomem* vaddr_va(vaddr_t va)
#define MGA_IOREMAP_NORMAL	0
#define MGA_IOREMAP_NOCACHE	1
#define MGA_IOREMAP_FB		MGA_IOREMAP_NOCACHE
#define MGA_IOREMAP_MMIO	MGA_IOREMAP_NOCACHE
static inline int mga_ioremap(unsigned long phys, unsigned long size, int flags, vaddr_t* virt)
static inline void mga_iounmap(vaddr_t va)
struct my_timming ;
enum ;
struct matrox_pll_cache ;
struct matrox_pll_limits ;
struct matrox_pll_features ;
struct matroxfb_par
;
struct matrox_fb_info;
struct matrox_DAC1064_features ;
struct mavenregs ;
struct matrox_crtc2 ;
struct matrox_hw_state ;
struct matrox_accel_data ;
struct v4l2_queryctrl;
struct v4l2_control;
struct matrox_altout ;
#define MATROXFB_SRC_NONE	0
#define MATROXFB_SRC_CRTC1	1
#define MATROXFB_SRC_CRTC2	2
enum mga_chip ;
struct matrox_bios ;
struct matrox_switch;
struct matroxfb_driver;
struct matroxfb_dh_fb_info;
struct matrox_vsync ;
struct matrox_fb_info ;
#define info2minfo(info) container_of(info, struct matrox_fb_info, fbcon)
struct matrox_switch ;
struct matroxfb_driver ;
int matroxfb_register_driver(struct matroxfb_driver* drv);
void matroxfb_unregister_driver(struct matroxfb_driver* drv);
#define PCI_OPTION_REG	0x40
#define   PCI_OPTION_ENABLE_ROM		0x40000000
#define PCI_MGA_INDEX	0x44
#define PCI_MGA_DATA	0x48
#define PCI_OPTION2_REG	0x50
#define PCI_OPTION3_REG	0x54
#define PCI_MEMMISC_REG	0x58
#define M_DWGCTL	0x1C00
#define M_MACCESS	0x1C04
#define M_CTLWTST	0x1C08
#define M_PLNWT		0x1C1C
#define M_BCOL		0x1C20
#define M_FCOL		0x1C24
#define M_SGN		0x1C58
#define M_LEN		0x1C5C
#define M_AR0		0x1C60
#define M_AR1		0x1C64
#define M_AR2		0x1C68
#define M_AR3		0x1C6C
#define M_AR4		0x1C70
#define M_AR5		0x1C74
#define M_AR6		0x1C78
#define M_CXBNDRY	0x1C80
#define M_FXBNDRY	0x1C84
#define M_YDSTLEN	0x1C88
#define M_PITCH		0x1C8C
#define M_YDST		0x1C90
#define M_YDSTORG	0x1C94
#define M_YTOP		0x1C98
#define M_YBOT		0x1C9C
#define M_CACHEFLUSH	0x1FFF
#define M_EXEC		0x0100
#define M_DWG_TRAP	0x04
#define M_DWG_BITBLT	0x08
#define M_DWG_ILOAD	0x09
#define M_DWG_LINEAR	0x0080
#define M_DWG_SOLID	0x0800
#define M_DWG_ARZERO	0x1000
#define M_DWG_SGNZERO	0x2000
#define M_DWG_SHIFTZERO	0x4000
#define M_DWG_REPLACE	0x000C0000
#define M_DWG_REPLACE2	(M_DWG_REPLACE | 0x40)
#define M_DWG_XOR	0x00060010
#define M_DWG_BFCOL	0x04000000
#define M_DWG_BMONOWF	0x08000000
#define M_DWG_TRANSC	0x40000000
#define M_FIFOSTATUS	0x1E10
#define M_STATUS	0x1E14
#define M_ICLEAR	0x1E18
#define M_IEN		0x1E1C
#define M_VCOUNT	0x1E20
#define M_RESET		0x1E40
#define M_MEMRDBK	0x1E44
#define M_AGP2PLL	0x1E4C
#define M_OPMODE	0x1E54
#define     M_OPMODE_DMA_GEN_WRITE	0x00
#define     M_OPMODE_DMA_BLIT		0x04
#define     M_OPMODE_DMA_VECTOR_WRITE	0x08
#define     M_OPMODE_DMA_LE		0x0000
#define     M_OPMODE_DMA_BE_8BPP	0x0000
#define     M_OPMODE_DMA_BE_16BPP	0x0100
#define     M_OPMODE_DMA_BE_32BPP	0x0200
#define     M_OPMODE_DIR_LE		0x000000
#define     M_OPMODE_DIR_BE_8BPP	0x000000
#define     M_OPMODE_DIR_BE_16BPP	0x010000
#define     M_OPMODE_DIR_BE_32BPP	0x020000
#define M_ATTR_INDEX	0x1FC0
#define M_ATTR_DATA	0x1FC1
#define M_MISC_REG	0x1FC2
#define M_3C2_RD	0x1FC2
#define M_SEQ_INDEX	0x1FC4
#define M_SEQ_DATA	0x1FC5
#define     M_SEQ1		0x01
#define        M_SEQ1_SCROFF		0x20
#define M_MISC_REG_READ	0x1FCC
#define M_GRAPHICS_INDEX 0x1FCE
#define M_GRAPHICS_DATA	0x1FCF
#define M_CRTC_INDEX	0x1FD4
#define M_ATTR_RESET	0x1FDA
#define M_3DA_WR	0x1FDA
#define M_INSTS1	0x1FDA
#define M_EXTVGA_INDEX	0x1FDE
#define M_EXTVGA_DATA	0x1FDF
#define M_SRCORG	0x2CB4
#define M_DSTORG	0x2CB8
#define M_RAMDAC_BASE	0x3C00
#define M_DAC_REG	(M_RAMDAC_BASE+0)
#define M_DAC_VAL	(M_RAMDAC_BASE+1)
#define M_PALETTE_MASK	(M_RAMDAC_BASE+2)
#define M_X_INDEX	0x00
#define M_X_DATAREG	0x0A
#define DAC_XGENIOCTRL		0x2A
#define DAC_XGENIODATA		0x2B
#define M_C2CTL		0x3C10
#define MX_OPTION_BSWAP         0x00000000
#define M_OPMODE_4BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_LE | M_OPMODE_DMA_BLIT)
#define M_OPMODE_8BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_LE | M_OPMODE_DMA_BLIT)
#define M_OPMODE_16BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_LE | M_OPMODE_DMA_BLIT)
#define M_OPMODE_24BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_LE | M_OPMODE_DMA_BLIT)
#define M_OPMODE_32BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_LE | M_OPMODE_DMA_BLIT)
#define M_OPMODE_4BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_LE       | M_OPMODE_DMA_BLIT)
#define M_OPMODE_8BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_BE_8BPP  | M_OPMODE_DMA_BLIT)
#define M_OPMODE_16BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_BE_16BPP | M_OPMODE_DMA_BLIT)
#define M_OPMODE_24BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_BE_8BPP  | M_OPMODE_DMA_BLIT)
#define M_OPMODE_32BPP	(M_OPMODE_DMA_LE | M_OPMODE_DIR_BE_32BPP | M_OPMODE_DMA_BLIT)
#error "Byte ordering have to be defined. Cannot continue."
#define mga_inb(addr)		mga_readb(minfo->mmio.vbase, (addr))
#define mga_inl(addr)		mga_readl(minfo->mmio.vbase, (addr))
#define mga_outb(addr,val)	mga_writeb(minfo->mmio.vbase, (addr), (val))
#define mga_outw(addr,val)	mga_writew(minfo->mmio.vbase, (addr), (val))
#define mga_outl(addr,val)	mga_writel(minfo->mmio.vbase, (addr), (val))
#define mga_readr(port,idx)	(mga_outb((port),(idx)), mga_inb((port)+1))
#define mga_setr(addr,port,val)	mga_outw(addr, ((val)<<8) | (port))
#define mga_fifo(n)	do  while ((mga_inl(M_FIFOSTATUS) & 0xFF) < (n))
#define WaitTillIdle()	do  while (mga_inl(M_STATUS) & 0x10000)
#define isInterleave(x)	 (x->interleave)
#define isMillenium(x)	 (x->millenium)
#define isMilleniumII(x) (x->milleniumII)
#define isInterleave(x)  (0)
#define isMillenium(x)	 (0)
#define isMilleniumII(x) (0)
#define matroxfb_DAC_lock()                   spin_lock(&minfo->lock.DAC)
#define matroxfb_DAC_unlock()                 spin_unlock(&minfo->lock.DAC)
#define matroxfb_DAC_lock_irqsave(flags)      spin_lock_irqsave(&minfo->lock.DAC, flags)
#define matroxfb_DAC_unlock_irqrestore(flags) spin_unlock_irqrestore(&minfo->lock.DAC, flags)
extern void matroxfb_DAC_out(const struct matrox_fb_info *minfo, int reg,
int val);
extern int matroxfb_DAC_in(const struct matrox_fb_info *minfo, int reg);
extern void matroxfb_var2my(struct fb_var_screeninfo* fvsi, struct my_timming* mt);
extern int matroxfb_wait_for_sync(struct matrox_fb_info *minfo, u_int32_t crtc);
extern int matroxfb_enable_irq(struct matrox_fb_info *minfo, int reenable);
#define CRITBEGIN  spin_lock_irqsave(&minfo->lock.accel, critflags);
#define CRITEND	   spin_unlock_irqrestore(&minfo->lock.accel, critflags);
#define CRITFLAGS  unsigned long critflags;
#define CRITBEGIN
#define CRITEND
#define CRITFLAGS
