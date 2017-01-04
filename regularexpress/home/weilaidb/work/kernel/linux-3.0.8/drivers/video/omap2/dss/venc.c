#define DSS_SUBSYS_NAME "VENC"
#define VENC_REV_ID				0x00
#define VENC_STATUS				0x04
#define VENC_F_CONTROL				0x08
#define VENC_VIDOUT_CTRL			0x10
#define VENC_SYNC_CTRL				0x14
#define VENC_LLEN				0x1C
#define VENC_FLENS				0x20
#define VENC_HFLTR_CTRL				0x24
#define VENC_CC_CARR_WSS_CARR			0x28
#define VENC_C_PHASE				0x2C
#define VENC_GAIN_U				0x30
#define VENC_GAIN_V				0x34
#define VENC_GAIN_Y				0x38
#define VENC_BLACK_LEVEL			0x3C
#define VENC_BLANK_LEVEL			0x40
#define VENC_X_COLOR				0x44
#define VENC_M_CONTROL				0x48
#define VENC_BSTAMP_WSS_DATA			0x4C
#define VENC_S_CARR				0x50
#define VENC_LINE21				0x54
#define VENC_LN_SEL				0x58
#define VENC_L21__WC_CTL			0x5C
#define VENC_HTRIGGER_VTRIGGER			0x60
#define VENC_SAVID__EAVID			0x64
#define VENC_FLEN__FAL				0x68
#define VENC_LAL__PHASE_RESET			0x6C
#define VENC_HS_INT_START_STOP_X		0x70
#define VENC_HS_EXT_START_STOP_X		0x74
#define VENC_VS_INT_START_X			0x78
#define VENC_VS_INT_STOP_X__VS_INT_START_Y	0x7C
#define VENC_VS_INT_STOP_Y__VS_EXT_START_X	0x80
#define VENC_VS_EXT_STOP_X__VS_EXT_START_Y	0x84
#define VENC_VS_EXT_STOP_Y			0x88
#define VENC_AVID_START_STOP_X			0x90
#define VENC_AVID_START_STOP_Y			0x94
#define VENC_FID_INT_START_X__FID_INT_START_Y	0xA0
#define VENC_FID_INT_OFFSET_Y__FID_EXT_START_X	0xA4
#define VENC_FID_EXT_START_Y__FID_EXT_OFFSET_Y	0xA8
#define VENC_TVDETGP_INT_START_STOP_X		0xB0
#define VENC_TVDETGP_INT_START_STOP_Y		0xB4
#define VENC_GEN_CTRL				0xB8
#define VENC_OUTPUT_CONTROL			0xC4
#define VENC_OUTPUT_TEST			0xC8
#define VENC_DAC_B__DAC_C			0xC8
struct venc_config ;
static const struct venc_config venc_config_pal_trm = ;
static const struct venc_config venc_config_ntsc_trm = ;
static const struct venc_config venc_config_pal_bdghi = ;
const struct omap_video_timings omap_dss_pal_timings = ;
EXPORT_SYMBOL(omap_dss_pal_timings);
const struct omap_video_timings omap_dss_ntsc_timings = ;
EXPORT_SYMBOL(omap_dss_ntsc_timings);
static struct  venc;
static inline void venc_write_reg(int idx, u32 val)
static inline u32 venc_read_reg(int idx)
static void venc_write_config(const struct venc_config *config)
static void venc_reset(void)
static void venc_enable_clocks(int enable)
static const struct venc_config *venc_timings_to_config(
struct omap_video_timings *timings)
static void venc_power_on(struct omap_dss_device *dssdev)
static void venc_power_off(struct omap_dss_device *dssdev)
static int venc_panel_probe(struct omap_dss_device *dssdev)
static void venc_panel_remove(struct omap_dss_device *dssdev)
static int venc_panel_enable(struct omap_dss_device *dssdev)
static void venc_panel_disable(struct omap_dss_device *dssdev)
static int venc_panel_suspend(struct omap_dss_device *dssdev)
static int venc_panel_resume(struct omap_dss_device *dssdev)
static enum omap_dss_update_mode venc_get_update_mode(
struct omap_dss_device *dssdev)
static int venc_set_update_mode(struct omap_dss_device *dssdev,
enum omap_dss_update_mode mode)
static void venc_get_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static void venc_set_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static int venc_check_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static u32 venc_get_wss(struct omap_dss_device *dssdev)
static int venc_set_wss(struct omap_dss_device *dssdev,	u32 wss)
static struct omap_dss_driver venc_driver = ;
int venc_init_display(struct omap_dss_device *dssdev)
void venc_dump_regs(struct seq_file *s)
static int omap_venchw_probe(struct platform_device *pdev)
static int omap_venchw_remove(struct platform_device *pdev)
static struct platform_driver omap_venchw_driver = ;
int venc_init_platform_driver(void)
void venc_uninit_platform_driver(void)
