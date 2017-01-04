#define _LXFB_H_
#define GP_REG_COUNT	(0x7c / 4)
#define DC_REG_COUNT	(0xf0 / 4)
#define VP_REG_COUNT	(0x158 / 8)
#define FP_REG_COUNT	(0x60 / 8)
#define DC_PAL_COUNT	0x104
#define DC_HFILT_COUNT	0x100
#define DC_VFILT_COUNT	0x100
#define VP_COEFF_SIZE	0x1000
#define VP_PAL_COUNT	0x100
#define OUTPUT_CRT   0x01
#define OUTPUT_PANEL 0x02
struct lxfb_par ;
static inline unsigned int lx_get_pitch(unsigned int xres, int bpp)
void lx_set_mode(struct fb_info *);
unsigned int lx_framebuffer_size(void);
int lx_blank_display(struct fb_info *, int);
void lx_set_palette_reg(struct fb_info *, unsigned int, unsigned int,
unsigned int, unsigned int);
int lx_powerdown(struct fb_info *info);
int lx_powerup(struct fb_info *info);
enum gp_registers ;
#define GP_BLT_STATUS_CE		(1 << 4)
#define GP_BLT_STATUS_PB		(1 << 0)
enum dc_registers ;
#define DC_UNLOCK_LOCK			0x00000000
#define DC_UNLOCK_UNLOCK		0x00004758
#define DC_GENERAL_CFG_FDTY		(1 << 17)
#define DC_GENERAL_CFG_DFHPEL_SHIFT	(12)
#define DC_GENERAL_CFG_DFHPSL_SHIFT	(8)
#define DC_GENERAL_CFG_VGAE		(1 << 7)
#define DC_GENERAL_CFG_DECE		(1 << 6)
#define DC_GENERAL_CFG_CMPE		(1 << 5)
#define DC_GENERAL_CFG_VIDE		(1 << 3)
#define DC_GENERAL_CFG_DFLE		(1 << 0)
#define DC_DISPLAY_CFG_VISL		(1 << 27)
#define DC_DISPLAY_CFG_PALB		(1 << 25)
#define DC_DISPLAY_CFG_DCEN		(1 << 24)
#define DC_DISPLAY_CFG_DISP_MODE_24BPP	(1 << 9)
#define DC_DISPLAY_CFG_DISP_MODE_16BPP	(1 << 8)
#define DC_DISPLAY_CFG_DISP_MODE_8BPP	(0)
#define DC_DISPLAY_CFG_TRUP		(1 << 6)
#define DC_DISPLAY_CFG_VDEN		(1 << 4)
#define DC_DISPLAY_CFG_GDEN		(1 << 3)
#define DC_DISPLAY_CFG_TGEN		(1 << 0)
#define DC_DV_TOP_DV_TOP_EN		(1 << 0)
#define DC_DV_CTL_DV_LINE_SIZE		((1 << 10) | (1 << 11))
#define DC_DV_CTL_DV_LINE_SIZE_1K	(0)
#define DC_DV_CTL_DV_LINE_SIZE_2K	(1 << 10)
#define DC_DV_CTL_DV_LINE_SIZE_4K	(1 << 11)
#define DC_DV_CTL_DV_LINE_SIZE_8K	((1 << 10) | (1 << 11))
#define DC_DV_CTL_CLEAR_DV_RAM		(1 << 0)
#define DC_IRQ_FILT_CTL_H_FILT_SEL	(1 << 10)
#define DC_CLR_KEY_CLR_KEY_EN		(1 << 24)
#define DC_IRQ_VIP_VSYNC_IRQ_STATUS	(1 << 21)
#define DC_IRQ_STATUS			(1 << 20)
#define DC_IRQ_VIP_VSYNC_LOSS_IRQ_MASK	(1 << 1)
#define DC_IRQ_MASK			(1 << 0)
#define DC_GENLK_CTL_FLICK_SEL_MASK	(0x0F << 28)
#define DC_GENLK_CTL_ALPHA_FLICK_EN	(1 << 25)
#define DC_GENLK_CTL_FLICK_EN		(1 << 24)
#define DC_GENLK_CTL_GENLK_EN		(1 << 18)
enum vp_registers ;
#define VP_VCFG_VID_EN			(1 << 0)
#define VP_DCFG_GV_GAM			(1 << 21)
#define VP_DCFG_PWR_SEQ_DELAY		((1 << 17) | (1 << 18) | (1 << 19))
#define VP_DCFG_PWR_SEQ_DELAY_DEFAULT	(1 << 19)
#define VP_DCFG_CRT_SYNC_SKW		((1 << 14) | (1 << 15) | (1 << 16))
#define VP_DCFG_CRT_SYNC_SKW_DEFAULT	(1 << 16)
#define VP_DCFG_CRT_VSYNC_POL		(1 << 9)
#define VP_DCFG_CRT_HSYNC_POL		(1 << 8)
#define VP_DCFG_DAC_BL_EN		(1 << 3)
#define VP_DCFG_VSYNC_EN		(1 << 2)
#define VP_DCFG_HSYNC_EN		(1 << 1)
#define VP_DCFG_CRT_EN			(1 << 0)
#define VP_MISC_APWRDN			(1 << 11)
#define VP_MISC_DACPWRDN		(1 << 10)
#define VP_MISC_BYP_BOTH		(1 << 0)
#define VP_FP_START	0x400
enum fp_registers ;
#define FP_PT2_HSP			(1 << 22)
#define FP_PT2_VSP			(1 << 23)
#define FP_PT2_SCRC			(1 << 27)
#define FP_PM_P				(1 << 24)
#define FP_PM_PANEL_PWR_UP		(1 << 3)
#define FP_PM_PANEL_PWR_DOWN		(1 << 2)
#define FP_PM_PANEL_OFF			(1 << 1)
#define FP_PM_PANEL_ON			(1 << 0)
#define FP_DFC_BC			((1 << 4) | (1 << 5) | (1 << 6))
static inline uint32_t read_gp(struct lxfb_par *par, int reg)
static inline void write_gp(struct lxfb_par *par, int reg, uint32_t val)
static inline uint32_t read_dc(struct lxfb_par *par, int reg)
static inline void write_dc(struct lxfb_par *par, int reg, uint32_t val)
static inline uint32_t read_vp(struct lxfb_par *par, int reg)
static inline void write_vp(struct lxfb_par *par, int reg, uint32_t val)
static inline uint32_t read_fp(struct lxfb_par *par, int reg)
static inline void write_fp(struct lxfb_par *par, int reg, uint32_t val)
#define MSR_GLCP_DOTPLL_LOCK		(1 << 25)
#define MSR_GLCP_DOTPLL_HALFPIX		(1 << 24)
#define MSR_GLCP_DOTPLL_BYPASS		(1 << 15)
#define MSR_GLCP_DOTPLL_DOTRESET	(1 << 0)
#define MSR_LX_GLD_MSR_CONFIG_FMT	((1 << 3) | (1 << 4) | (1 << 5))
#define MSR_LX_GLD_MSR_CONFIG_FMT_FP	(1 << 3)
#define MSR_LX_GLD_MSR_CONFIG_FMT_CRT	(0)
#define MSR_LX_GLD_MSR_CONFIG_FPC	(1 << 15)
#define MSR_LX_MSR_PADSEL_TFT_SEL_LOW	0xDFFFFFFF
#define MSR_LX_MSR_PADSEL_TFT_SEL_HIGH	0x0000003F
#define MSR_LX_SPARE_MSR_DIS_CFIFO_HGO	(1 << 11)
#define MSR_LX_SPARE_MSR_VFIFO_ARB_SEL	(1 << 10)
#define MSR_LX_SPARE_MSR_WM_LPEN_OVRD	(1 << 9)
#define MSR_LX_SPARE_MSR_LOAD_WM_LPEN_M	(1 << 8)
#define MSR_LX_SPARE_MSR_DIS_INIT_V_PRI	(1 << 7)
#define MSR_LX_SPARE_MSR_DIS_VIFO_WM	(1 << 6)
#define MSR_LX_SPARE_MSR_DIS_CWD_CHECK	(1 << 5)
#define MSR_LX_SPARE_MSR_PIX8_PAN_FIX	(1 << 4)
#define MSR_LX_SPARE_MSR_FIRST_REQ_MASK	(1 << 1)
