#define OMAP3_ISP_USER_H
#define VIDIOC_OMAP3ISP_CCDC_CFG \
_IOWR('V', BASE_VIDIOC_PRIVATE + 1, struct omap3isp_ccdc_update_config)
#define VIDIOC_OMAP3ISP_PRV_CFG \
_IOWR('V', BASE_VIDIOC_PRIVATE + 2, struct omap3isp_prev_update_config)
#define VIDIOC_OMAP3ISP_AEWB_CFG \
_IOWR('V', BASE_VIDIOC_PRIVATE + 3, struct omap3isp_h3a_aewb_config)
#define VIDIOC_OMAP3ISP_HIST_CFG \
_IOWR('V', BASE_VIDIOC_PRIVATE + 4, struct omap3isp_hist_config)
#define VIDIOC_OMAP3ISP_AF_CFG \
_IOWR('V', BASE_VIDIOC_PRIVATE + 5, struct omap3isp_h3a_af_config)
#define VIDIOC_OMAP3ISP_STAT_REQ \
_IOWR('V', BASE_VIDIOC_PRIVATE + 6, struct omap3isp_stat_data)
#define VIDIOC_OMAP3ISP_STAT_EN \
_IOWR('V', BASE_VIDIOC_PRIVATE + 7, unsigned long)
#define V4L2_EVENT_OMAP3ISP_CLASS	(V4L2_EVENT_PRIVATE_START | 0x100)
#define V4L2_EVENT_OMAP3ISP_AEWB	(V4L2_EVENT_OMAP3ISP_CLASS | 0x1)
#define V4L2_EVENT_OMAP3ISP_AF		(V4L2_EVENT_OMAP3ISP_CLASS | 0x2)
#define V4L2_EVENT_OMAP3ISP_HIST	(V4L2_EVENT_OMAP3ISP_CLASS | 0x3)
#define V4L2_EVENT_OMAP3ISP_HS_VS	(V4L2_EVENT_OMAP3ISP_CLASS | 0x4)
struct omap3isp_stat_event_status ;
#define OMAP3ISP_AEWB_MAX_SATURATION_LIM	1023
#define OMAP3ISP_AEWB_MIN_WIN_H			2
#define OMAP3ISP_AEWB_MAX_WIN_H			256
#define OMAP3ISP_AEWB_MIN_WIN_W			6
#define OMAP3ISP_AEWB_MAX_WIN_W			256
#define OMAP3ISP_AEWB_MIN_WINVC			1
#define OMAP3ISP_AEWB_MIN_WINHC			1
#define OMAP3ISP_AEWB_MAX_WINVC			128
#define OMAP3ISP_AEWB_MAX_WINHC			36
#define OMAP3ISP_AEWB_MAX_WINSTART		4095
#define OMAP3ISP_AEWB_MIN_SUB_INC		2
#define OMAP3ISP_AEWB_MAX_SUB_INC		32
#define OMAP3ISP_AEWB_MAX_BUF_SIZE		83600
#define OMAP3ISP_AF_IIRSH_MIN			0
#define OMAP3ISP_AF_IIRSH_MAX			4095
#define OMAP3ISP_AF_PAXEL_HORIZONTAL_COUNT_MIN	1
#define OMAP3ISP_AF_PAXEL_HORIZONTAL_COUNT_MAX	36
#define OMAP3ISP_AF_PAXEL_VERTICAL_COUNT_MIN	1
#define OMAP3ISP_AF_PAXEL_VERTICAL_COUNT_MAX	128
#define OMAP3ISP_AF_PAXEL_INCREMENT_MIN		2
#define OMAP3ISP_AF_PAXEL_INCREMENT_MAX		32
#define OMAP3ISP_AF_PAXEL_HEIGHT_MIN		2
#define OMAP3ISP_AF_PAXEL_HEIGHT_MAX		256
#define OMAP3ISP_AF_PAXEL_WIDTH_MIN		16
#define OMAP3ISP_AF_PAXEL_WIDTH_MAX		256
#define OMAP3ISP_AF_PAXEL_HZSTART_MIN		1
#define OMAP3ISP_AF_PAXEL_HZSTART_MAX		4095
#define OMAP3ISP_AF_PAXEL_VTSTART_MIN		0
#define OMAP3ISP_AF_PAXEL_VTSTART_MAX		4095
#define OMAP3ISP_AF_THRESHOLD_MAX		255
#define OMAP3ISP_AF_COEF_MAX			4095
#define OMAP3ISP_AF_PAXEL_SIZE			48
#define OMAP3ISP_AF_MAX_BUF_SIZE		221184
struct omap3isp_h3a_aewb_config ;
struct omap3isp_stat_data ;
#define OMAP3ISP_HIST_BINS_32		0
#define OMAP3ISP_HIST_BINS_64		1
#define OMAP3ISP_HIST_BINS_128		2
#define OMAP3ISP_HIST_BINS_256		3
#define OMAP3ISP_HIST_MEM_SIZE_BINS(n)	((1 << ((n)+5))*4*4)
#define OMAP3ISP_HIST_MEM_SIZE		1024
#define OMAP3ISP_HIST_MIN_REGIONS	1
#define OMAP3ISP_HIST_MAX_REGIONS	4
#define OMAP3ISP_HIST_MAX_WB_GAIN	255
#define OMAP3ISP_HIST_MIN_WB_GAIN	0
#define OMAP3ISP_HIST_MAX_BIT_WIDTH	14
#define OMAP3ISP_HIST_MIN_BIT_WIDTH	8
#define OMAP3ISP_HIST_MAX_WG		4
#define OMAP3ISP_HIST_MAX_BUF_SIZE	4096
#define OMAP3ISP_HIST_SOURCE_CCDC	0
#define OMAP3ISP_HIST_SOURCE_MEM	1
#define OMAP3ISP_HIST_CFA_BAYER		0
#define OMAP3ISP_HIST_CFA_FOVEONX3	1
struct omap3isp_hist_region ;
struct omap3isp_hist_config ;
#define OMAP3ISP_AF_NUM_COEF		11
enum omap3isp_h3a_af_fvmode ;
enum omap3isp_h3a_af_rgbpos ;
struct omap3isp_h3a_af_hmf ;
struct omap3isp_h3a_af_iir ;
struct omap3isp_h3a_af_paxel ;
struct omap3isp_h3a_af_config ;
#define OMAP3ISP_CCDC_ALAW		(1 << 0)
#define OMAP3ISP_CCDC_LPF		(1 << 1)
#define OMAP3ISP_CCDC_BLCLAMP		(1 << 2)
#define OMAP3ISP_CCDC_BCOMP		(1 << 3)
#define OMAP3ISP_CCDC_FPC		(1 << 4)
#define OMAP3ISP_CCDC_CULL		(1 << 5)
#define OMAP3ISP_CCDC_CONFIG_LSC	(1 << 7)
#define OMAP3ISP_CCDC_TBL_LSC		(1 << 8)
#define OMAP3ISP_RGB_MAX		3
enum omap3isp_alaw_ipwidth ;
struct omap3isp_ccdc_lsc_config ;
struct omap3isp_ccdc_bclamp ;
struct omap3isp_ccdc_fpc ;
struct omap3isp_ccdc_blcomp ;
struct omap3isp_ccdc_culling ;
struct omap3isp_ccdc_update_config ;
#define OMAP3ISP_PREV_LUMAENH		(1 << 0)
#define OMAP3ISP_PREV_INVALAW		(1 << 1)
#define OMAP3ISP_PREV_HRZ_MED		(1 << 2)
#define OMAP3ISP_PREV_CFA		(1 << 3)
#define OMAP3ISP_PREV_CHROMA_SUPP	(1 << 4)
#define OMAP3ISP_PREV_WB		(1 << 5)
#define OMAP3ISP_PREV_BLKADJ		(1 << 6)
#define OMAP3ISP_PREV_RGB2RGB		(1 << 7)
#define OMAP3ISP_PREV_COLOR_CONV	(1 << 8)
#define OMAP3ISP_PREV_YC_LIMIT		(1 << 9)
#define OMAP3ISP_PREV_DEFECT_COR	(1 << 10)
#define OMAP3ISP_PREV_GAMMABYPASS	(1 << 11)
#define OMAP3ISP_PREV_DRK_FRM_CAPTURE	(1 << 12)
#define OMAP3ISP_PREV_DRK_FRM_SUBTRACT	(1 << 13)
#define OMAP3ISP_PREV_LENS_SHADING	(1 << 14)
#define OMAP3ISP_PREV_NF		(1 << 15)
#define OMAP3ISP_PREV_GAMMA		(1 << 16)
#define OMAP3ISP_PREV_NF_TBL_SIZE	64
#define OMAP3ISP_PREV_CFA_TBL_SIZE	576
#define OMAP3ISP_PREV_GAMMA_TBL_SIZE	1024
#define OMAP3ISP_PREV_YENH_TBL_SIZE	128
#define OMAP3ISP_PREV_DETECT_CORRECT_CHANNELS	4
struct omap3isp_prev_hmed ;
enum omap3isp_cfa_fmt ;
struct omap3isp_prev_cfa ;
struct omap3isp_prev_csup ;
struct omap3isp_prev_wbal ;
struct omap3isp_prev_blkadj ;
struct omap3isp_prev_rgbtorgb ;
struct omap3isp_prev_csc ;
struct omap3isp_prev_yclimit ;
struct omap3isp_prev_dcor ;
struct omap3isp_prev_nf ;
struct omap3isp_prev_gtables ;
struct omap3isp_prev_luma ;
struct omap3isp_prev_update_config ;
