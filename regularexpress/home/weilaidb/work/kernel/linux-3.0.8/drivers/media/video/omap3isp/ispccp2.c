#define CCP2_LCx_CHANS_NUM			3
#define ISPCCP2_DAT_START_MIN			0
#define ISPCCP2_DAT_START_MAX			4095
#define ISPCCP2_DAT_SIZE_MIN			0
#define ISPCCP2_DAT_SIZE_MAX			4095
#define ISPCCP2_VPCLK_FRACDIV			65536
#define ISPCCP2_LCx_CTRL_FORMAT_RAW8_DPCM10_VP	0x12
#define ISPCCP2_LCx_CTRL_FORMAT_RAW10_VP	0x16
#define ISPCCP2_LCM_HSIZE_COUNT_MIN		16
#define ISPCCP2_LCM_HSIZE_COUNT_MAX		8191
#define ISPCCP2_LCM_HSIZE_SKIP_MIN		0
#define ISPCCP2_LCM_HSIZE_SKIP_MAX		8191
#define ISPCCP2_LCM_VSIZE_MIN			1
#define ISPCCP2_LCM_VSIZE_MAX			8191
#define ISPCCP2_LCM_HWORDS_MIN			1
#define ISPCCP2_LCM_HWORDS_MAX			4095
#define ISPCCP2_LCM_CTRL_BURST_SIZE_32X		5
#define ISPCCP2_LCM_CTRL_READ_THROTTLE_FULL	0
#define ISPCCP2_LCM_CTRL_SRC_DECOMPR_DPCM10	2
#define ISPCCP2_LCM_CTRL_SRC_FORMAT_RAW8	2
#define ISPCCP2_LCM_CTRL_SRC_FORMAT_RAW10	3
#define ISPCCP2_LCM_CTRL_DST_FORMAT_RAW10	3
#define ISPCCP2_LCM_CTRL_DST_PORT_VP		0
#define ISPCCP2_LCM_CTRL_DST_PORT_MEM		1
#define BIT_SET(var, shift, mask, val)			\
do  while (0)
#define CCP2_PRINT_REGISTER(isp, name)\
dev_dbg(isp->dev, "###CCP2 " #name "=0x%08x\n", \
isp_reg_readl(isp, OMAP3_ISP_IOMEM_CCP2, ISPCCP2_##name))
static void ccp2_print_status(struct isp_ccp2_device *ccp2)
static void ccp2_reset(struct isp_ccp2_device *ccp2)
static void ccp2_pwr_cfg(struct isp_ccp2_device *ccp2)
static void ccp2_if_enable(struct isp_ccp2_device *ccp2, u8 enable)
static void ccp2_mem_enable(struct isp_ccp2_device *ccp2, u8 enable)
static int ccp2_phyif_config(struct isp_ccp2_device *ccp2,
const struct isp_ccp2_platform_data *pdata)
static void ccp2_vp_config(struct isp_ccp2_device *ccp2,
unsigned int vpclk_div)
static void ccp2_lcx_config(struct isp_ccp2_device *ccp2,
struct isp_interface_lcx_config *config)
static int ccp2_if_configure(struct isp_ccp2_device *ccp2)
static int ccp2_adjust_bandwidth(struct isp_ccp2_device *ccp2)
static void ccp2_mem_configure(struct isp_ccp2_device *ccp2,
struct isp_interface_mem_config *config)
static void ccp2_set_inaddr(struct isp_ccp2_device *ccp2, u32 addr)
static void ccp2_isr_buffer(struct isp_ccp2_device *ccp2)
int omap3isp_ccp2_isr(struct isp_ccp2_device *ccp2)
static const unsigned int ccp2_fmts[] = ;
static struct v4l2_mbus_framefmt *
__ccp2_get_format(struct isp_ccp2_device *ccp2, struct v4l2_subdev_fh *fh,
unsigned int pad, enum v4l2_subdev_format_whence which)
static void ccp2_try_format(struct isp_ccp2_device *ccp2,
struct v4l2_subdev_fh *fh, unsigned int pad,
struct v4l2_mbus_framefmt *fmt,
enum v4l2_subdev_format_whence which)
static int ccp2_enum_mbus_code(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_mbus_code_enum *code)
static int ccp2_enum_frame_size(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_frame_size_enum *fse)
static int ccp2_get_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int ccp2_set_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int ccp2_init_formats(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh)
static int ccp2_s_stream(struct v4l2_subdev *sd, int enable)
static const struct v4l2_subdev_video_ops ccp2_sd_video_ops = ;
static const struct v4l2_subdev_pad_ops ccp2_sd_pad_ops = ;
static const struct v4l2_subdev_ops ccp2_sd_ops = ;
static const struct v4l2_subdev_internal_ops ccp2_sd_internal_ops = ;
static int ccp2_video_queue(struct isp_video *video, struct isp_buffer *buffer)
static const struct isp_video_operations ccp2_video_ops = ;
static int ccp2_link_setup(struct media_entity *entity,
const struct media_pad *local,
const struct media_pad *remote, u32 flags)
static const struct media_entity_operations ccp2_media_ops = ;
static int ccp2_init_entities(struct isp_ccp2_device *ccp2)
void omap3isp_ccp2_unregister_entities(struct isp_ccp2_device *ccp2)
int omap3isp_ccp2_register_entities(struct isp_ccp2_device *ccp2,
struct v4l2_device *vdev)
void omap3isp_ccp2_cleanup(struct isp_device *isp)
int omap3isp_ccp2_init(struct isp_device *isp)
