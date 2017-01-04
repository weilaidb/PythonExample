struct crtc ;
struct aty_interrupt ;
struct pll_info ;
typedef struct  __attribute__ ((packed)) PLL_BLOCK_MACH64;
struct pll_514 ;
struct pll_18818 ;
struct pll_ct ;
#define DONT_USE_SPLL 0x1
#define DONT_USE_XDLL 0x2
#define USE_CPUCLK    0x4
#define POWERDOWN_PLL 0x8
union aty_pll ;
struct atyfb_par ;
#define M64_HAS(feature)	((par)->features & (M64F_##feature))
#define M64F_RESET_3D		0x00000001
#define M64F_MAGIC_FIFO		0x00000002
#define M64F_GTB_DSP		0x00000004
#define M64F_FIFO_32		0x00000008
#define M64F_SDRAM_MAGIC_PLL	0x00000010
#define M64F_MAGIC_POSTDIV	0x00000020
#define M64F_INTEGRATED		0x00000040
#define M64F_CT_BUS		0x00000080
#define M64F_VT_BUS		0x00000100
#define M64F_MOBIL_BUS		0x00000200
#define M64F_GX			0x00000400
#define M64F_CT			0x00000800
#define M64F_VT			0x00001000
#define M64F_GT			0x00002000
#define M64F_MAGIC_VRAM_SIZE	0x00004000
#define M64F_G3_PB_1_1		0x00008000
#define M64F_G3_PB_1024x768	0x00010000
#define M64F_EXTRA_BRIGHT	0x00020000
#define M64F_LT_LCD_REGS	0x00040000
#define M64F_XL_DLL		0x00080000
#define M64F_MFB_FORCE_4	0x00100000
#define M64F_HW_TRIPLE		0x00200000
#define M64F_XL_MEM		0x00400000
static inline u32 aty_ld_le32(int regindex, const struct atyfb_par *par)
static inline void aty_st_le32(int regindex, u32 val, const struct atyfb_par *par)
static inline void aty_st_le16(int regindex, u16 val,
const struct atyfb_par *par)
static inline u8 aty_ld_8(int regindex, const struct atyfb_par *par)
static inline void aty_st_8(int regindex, u8 val, const struct atyfb_par *par)
#if defined(CONFIG_PM) || defined(CONFIG_PMAC_BACKLIGHT) || \
defined (CONFIG_FB_ATY_GENERIC_LCD) || defined (CONFIG_FB_ATY_BACKLIGHT)
extern void aty_st_lcd(int index, u32 val, const struct atyfb_par *par);
extern u32 aty_ld_lcd(int index, const struct atyfb_par *par);
struct aty_dac_ops ;
extern const struct aty_dac_ops aty_dac_ibm514;
extern const struct aty_dac_ops aty_dac_ati68860b;
extern const struct aty_dac_ops aty_dac_att21c498;
extern const struct aty_dac_ops aty_dac_unsupported;
extern const struct aty_dac_ops aty_dac_ct;
struct aty_pll_ops ;
extern const struct aty_pll_ops aty_pll_ati18818_1;
extern const struct aty_pll_ops aty_pll_stg1703;
extern const struct aty_pll_ops aty_pll_ch8398;
extern const struct aty_pll_ops aty_pll_att20c408;
extern const struct aty_pll_ops aty_pll_ibm514;
extern const struct aty_pll_ops aty_pll_unsupported;
extern const struct aty_pll_ops aty_pll_ct;
extern void aty_set_pll_ct(const struct fb_info *info, const union aty_pll *pll);
extern u8 aty_ld_pll_ct(int offset, const struct atyfb_par *par);
extern int aty_init_cursor(struct fb_info *info);
static inline void wait_for_fifo(u16 entries, const struct atyfb_par *par)
static inline void wait_for_idle(struct atyfb_par *par)
extern void aty_reset_engine(const struct atyfb_par *par);
extern void aty_init_engine(struct atyfb_par *par, struct fb_info *info);
extern u8   aty_ld_pll_ct(int offset, const struct atyfb_par *par);
void atyfb_copyarea(struct fb_info *info, const struct fb_copyarea *area);
void atyfb_fillrect(struct fb_info *info, const struct fb_fillrect *rect);
void atyfb_imageblit(struct fb_info *info, const struct fb_image *image);
