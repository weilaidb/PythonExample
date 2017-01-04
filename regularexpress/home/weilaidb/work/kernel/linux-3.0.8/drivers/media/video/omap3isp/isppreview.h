#define OMAP3_ISP_PREVIEW_H
#define ISPPRV_BRIGHT_STEP		0x1
#define ISPPRV_BRIGHT_DEF		0x0
#define ISPPRV_BRIGHT_LOW		0x0
#define ISPPRV_BRIGHT_HIGH		0xFF
#define ISPPRV_BRIGHT_UNITS		0x1
#define ISPPRV_CONTRAST_STEP		0x1
#define ISPPRV_CONTRAST_DEF		0x10
#define ISPPRV_CONTRAST_LOW		0x0
#define ISPPRV_CONTRAST_HIGH		0xFF
#define ISPPRV_CONTRAST_UNITS		0x1
#define NO_AVE				0x0
#define AVE_2_PIX			0x1
#define AVE_4_PIX			0x2
#define AVE_8_PIX			0x3
#define PREV_LUMA_ENHANCE		OMAP3ISP_PREV_LUMAENH
#define PREV_INVERSE_ALAW		OMAP3ISP_PREV_INVALAW
#define PREV_HORZ_MEDIAN_FILTER		OMAP3ISP_PREV_HRZ_MED
#define PREV_CFA			OMAP3ISP_PREV_CFA
#define PREV_CHROMA_SUPPRESS		OMAP3ISP_PREV_CHROMA_SUPP
#define PREV_WB				OMAP3ISP_PREV_WB
#define PREV_BLKADJ			OMAP3ISP_PREV_BLKADJ
#define PREV_RGB2RGB			OMAP3ISP_PREV_RGB2RGB
#define PREV_COLOR_CONV			OMAP3ISP_PREV_COLOR_CONV
#define PREV_YCLIMITS			OMAP3ISP_PREV_YC_LIMIT
#define PREV_DEFECT_COR			OMAP3ISP_PREV_DEFECT_COR
#define PREV_GAMMA_BYPASS		OMAP3ISP_PREV_GAMMABYPASS
#define PREV_DARK_FRAME_CAPTURE		OMAP3ISP_PREV_DRK_FRM_CAPTURE
#define PREV_DARK_FRAME_SUBTRACT	OMAP3ISP_PREV_DRK_FRM_SUBTRACT
#define PREV_LENS_SHADING		OMAP3ISP_PREV_LENS_SHADING
#define PREV_NOISE_FILTER		OMAP3ISP_PREV_NF
#define PREV_GAMMA			OMAP3ISP_PREV_GAMMA
#define PREV_CONTRAST			(1 << 17)
#define PREV_BRIGHTNESS			(1 << 18)
#define PREV_AVERAGER			(1 << 19)
#define PREV_FEATURES_END		(1 << 20)
enum preview_input_entity ;
#define PREVIEW_OUTPUT_RESIZER		(1 << 1)
#define PREVIEW_OUTPUT_MEMORY		(1 << 2)
enum preview_ycpos_mode ;
struct prev_params ;
struct isptables_update ;
#define PREV_PAD_SINK			0
#define PREV_PAD_SOURCE			1
#define PREV_PADS_NUM			2
struct isp_prev_device ;
struct isp_device;
int omap3isp_preview_init(struct isp_device *isp);
void omap3isp_preview_cleanup(struct isp_device *isp);
int omap3isp_preview_register_entities(struct isp_prev_device *prv,
struct v4l2_device *vdev);
void omap3isp_preview_unregister_entities(struct isp_prev_device *prv);
void omap3isp_preview_isr_frame_sync(struct isp_prev_device *prev);
void omap3isp_preview_isr(struct isp_prev_device *prev);
int omap3isp_preview_busy(struct isp_prev_device *isp_prev);
void omap3isp_preview_restore_context(struct isp_device *isp);
