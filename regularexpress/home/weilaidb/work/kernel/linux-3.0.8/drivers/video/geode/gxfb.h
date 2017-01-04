#define _GXFB_H_
#define GP_REG_COUNT   (0x50 / 4)
#define DC_REG_COUNT   (0x90 / 4)
#define VP_REG_COUNT   (0x138 / 8)
#define FP_REG_COUNT   (0x68 / 8)
#define DC_PAL_COUNT   0x104
struct gxfb_par ;
unsigned int gx_frame_buffer_size(void);
int gx_line_delta(int xres, int bpp);
void gx_set_mode(struct fb_info *info);
void gx_set_hw_palette_reg(struct fb_info *info, unsigned regno,
unsigned red, unsigned green, unsigned blue);
void gx_set_dclk_frequency(struct fb_info *info);
void gx_configure_display(struct fb_info *info);
int gx_blank_display(struct fb_info *info, int blank_mode);
int gx_powerdown(struct fb_info *info);
int gx_powerup(struct fb_info *info);
enum gp_registers ;
#define GP_BLT_STATUS_BLT_PENDING	(1 << 2)
#define GP_BLT_STATUS_BLT_BUSY		(1 << 0)
enum dc_registers ;
#define DC_UNLOCK_LOCK			0x00000000
#define DC_UNLOCK_UNLOCK		0x00004758
#define DC_GENERAL_CFG_YUVM		(1 << 20)
#define DC_GENERAL_CFG_VDSE		(1 << 19)
#define DC_GENERAL_CFG_DFHPEL_SHIFT	12
#define DC_GENERAL_CFG_DFHPSL_SHIFT	8
#define DC_GENERAL_CFG_DECE		(1 << 6)
#define DC_GENERAL_CFG_CMPE		(1 << 5)
#define DC_GENERAL_CFG_VIDE		(1 << 3)
#define DC_GENERAL_CFG_ICNE		(1 << 2)
#define DC_GENERAL_CFG_CURE		(1 << 1)
#define DC_GENERAL_CFG_DFLE		(1 << 0)
#define DC_DISPLAY_CFG_A20M		(1 << 31)
#define DC_DISPLAY_CFG_A18M		(1 << 30)
#define DC_DISPLAY_CFG_PALB		(1 << 25)
#define DC_DISPLAY_CFG_DISP_MODE_24BPP	(1 << 9)
#define DC_DISPLAY_CFG_DISP_MODE_16BPP	(1 << 8)
#define DC_DISPLAY_CFG_DISP_MODE_8BPP	(0)
#define DC_DISPLAY_CFG_VDEN		(1 << 4)
#define DC_DISPLAY_CFG_GDEN		(1 << 3)
#define DC_DISPLAY_CFG_TGEN		(1 << 0)
enum vp_registers ;
#define VP_VCFG_VID_EN			(1 << 0)
#define VP_DCFG_DAC_VREF		(1 << 26)
#define VP_DCFG_GV_GAM			(1 << 21)
#define VP_DCFG_VG_CK			(1 << 20)
#define VP_DCFG_CRT_SYNC_SKW_DEFAULT	(1 << 16)
#define VP_DCFG_CRT_SYNC_SKW		((1 << 14) | (1 << 15) | (1 << 16))
#define VP_DCFG_CRT_VSYNC_POL		(1 << 9)
#define VP_DCFG_CRT_HSYNC_POL		(1 << 8)
#define VP_DCFG_FP_DATA_EN		(1 << 7)
#define VP_DCFG_FP_PWR_EN		(1 << 6)
#define VP_DCFG_DAC_BL_EN		(1 << 3)
#define VP_DCFG_VSYNC_EN		(1 << 2)
#define VP_DCFG_HSYNC_EN		(1 << 1)
#define VP_DCFG_CRT_EN			(1 << 0)
#define VP_MISC_GAM_EN			(1 << 0)
#define VP_MISC_DACPWRDN		(1 << 10)
#define VP_MISC_APWRDN			(1 << 11)
#define VP_FP_START		0x400
enum fp_registers ;
#define FP_PT1_VSIZE_SHIFT		16
#define FP_PT1_VSIZE_MASK		0x7FF0000
#define FP_PT2_HSP			(1 << 22)
#define FP_PT2_VSP			(1 << 23)
#define FP_PM_P				(1 << 24)
#define FP_PM_PANEL_PWR_UP		(1 << 3)
#define FP_PM_PANEL_PWR_DOWN		(1 << 2)
#define FP_PM_PANEL_OFF			(1 << 1)
#define FP_PM_PANEL_ON			(1 << 0)
#define FP_DFC_NFI			((1 << 4) | (1 << 5) | (1 << 6))
static inline uint32_t read_gp(struct gxfb_par *par, int reg)
static inline void write_gp(struct gxfb_par *par, int reg, uint32_t val)
static inline uint32_t read_dc(struct gxfb_par *par, int reg)
static inline void write_dc(struct gxfb_par *par, int reg, uint32_t val)
static inline uint32_t read_vp(struct gxfb_par *par, int reg)
static inline void write_vp(struct gxfb_par *par, int reg, uint32_t val)
static inline uint32_t read_fp(struct gxfb_par *par, int reg)
static inline void write_fp(struct gxfb_par *par, int reg, uint32_t val)
#define MSR_GLCP_SYS_RSTPLL_DOTPOSTDIV3	(1 << 3)
#define MSR_GLCP_SYS_RSTPLL_DOTPREMULT2	(1 << 2)
#define MSR_GLCP_SYS_RSTPLL_DOTPREDIV2	(1 << 1)
#define MSR_GLCP_DOTPLL_LOCK		(1 << 25)
#define MSR_GLCP_DOTPLL_BYPASS		(1 << 15)
#define MSR_GLCP_DOTPLL_DOTRESET	(1 << 0)
#define MSR_GX_MSR_PADSEL_MASK		0x3FFFFFFF
#define MSR_GX_MSR_PADSEL_TFT		0x1FFFFFFF
#define MSR_GX_GLD_MSR_CONFIG_FP	(1 << 3)
