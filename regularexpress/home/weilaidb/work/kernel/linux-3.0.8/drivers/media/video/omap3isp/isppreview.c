static struct omap3isp_prev_rgbtorgb flr_rgb2rgb = ;
static struct omap3isp_prev_csc flr_prev_csc = ;
#define FLR_CFA_GRADTHRS_HORZ	0x28
#define FLR_CFA_GRADTHRS_VERT	0x28
#define FLR_CSUP_GAIN		0x0D
#define FLR_CSUP_THRES		0xEB
#define FLR_NF_STRGTH		0x03
#define FLR_WBAL_DGAIN		0x100
#define FLR_WBAL_COEF		0x20
#define FLR_BLKADJ_BLUE		0x0
#define FLR_BLKADJ_GREEN	0x0
#define FLR_BLKADJ_RED		0x0
#define DEF_DETECT_CORRECT_VAL	0xe
#define PREV_MIN_WIDTH		64
#define PREV_MIN_HEIGHT		8
#define PREV_MAX_HEIGHT		16384
static u32 cfa_coef_table[] = ;
static u32 gamma_table[] = ;
static u32 noise_filter_table[] = ;
static u32 luma_enhance_table[] = ;
static void
preview_enable_invalaw(struct isp_prev_device *prev, u8 enable)
static void
preview_enable_drkframe_capture(struct isp_prev_device *prev, u8 enable)
static void
preview_enable_drkframe(struct isp_prev_device *prev, u8 enable)
static void
preview_config_drkf_shadcomp(struct isp_prev_device *prev,
const void *scomp_shtval)
static void
preview_enable_hmed(struct isp_prev_device *prev, u8 enable)
static void
preview_config_hmed(struct isp_prev_device *prev, const void *prev_hmed)
static void
preview_config_noisefilter(struct isp_prev_device *prev, const void *prev_nf)
static void
preview_config_dcor(struct isp_prev_device *prev, const void *prev_dcor)
static void
preview_config_cfa(struct isp_prev_device *prev, const void *prev_cfa)
static void
preview_config_gammacorrn(struct isp_prev_device *prev, const void *gtable)
static void
preview_config_luma_enhancement(struct isp_prev_device *prev,
const void *ytable)
static void
preview_config_chroma_suppression(struct isp_prev_device *prev,
const void *csup)
static void
preview_enable_noisefilter(struct isp_prev_device *prev, u8 enable)
static void
preview_enable_dcor(struct isp_prev_device *prev, u8 enable)
static void
preview_enable_cfa(struct isp_prev_device *prev, u8 enable)
static void
preview_enable_gammabypass(struct isp_prev_device *prev, u8 enable)
static void
preview_enable_luma_enhancement(struct isp_prev_device *prev, u8 enable)
static void
preview_enable_chroma_suppression(struct isp_prev_device *prev, u8 enable)
static void
preview_config_whitebalance(struct isp_prev_device *prev, const void *prev_wbal)
static void
preview_config_blkadj(struct isp_prev_device *prev, const void *prev_blkadj)
static void
preview_config_rgb_blending(struct isp_prev_device *prev, const void *rgb2rgb)
static void
preview_config_rgb_to_ycbcr(struct isp_prev_device *prev, const void *prev_csc)
static void
preview_update_contrast(struct isp_prev_device *prev, u8 contrast)
static void
preview_config_contrast(struct isp_prev_device *prev, const void *params)
static void
preview_update_brightness(struct isp_prev_device *prev, u8 brightness)
static void
preview_config_brightness(struct isp_prev_device *prev, const void *params)
static void
preview_config_yc_range(struct isp_prev_device *prev, const void *yclimit)
struct preview_update ;
static struct preview_update update_attrs[] = ;
static u32
__preview_get_ptrs(struct prev_params *params, void **param,
struct omap3isp_prev_update_config *configs,
void __user **config, u32 bit)
static int preview_config(struct isp_prev_device *prev,
struct omap3isp_prev_update_config *cfg)
static void preview_setup_hw(struct isp_prev_device *prev)
static void
preview_config_ycpos(struct isp_prev_device *prev,
enum v4l2_mbus_pixelcode pixelcode)
static void preview_config_averager(struct isp_prev_device *prev, u8 average)
static void preview_config_input_size(struct isp_prev_device *prev)
static void
preview_config_inlineoffset(struct isp_prev_device *prev, u32 offset)
static void preview_set_inaddr(struct isp_prev_device *prev, u32 addr)
static void preview_config_outlineoffset(struct isp_prev_device *prev,
u32 offset)
static void preview_set_outaddr(struct isp_prev_device *prev, u32 addr)
static void preview_adjust_bandwidth(struct isp_prev_device *prev)
int omap3isp_preview_busy(struct isp_prev_device *prev)
void omap3isp_preview_restore_context(struct isp_device *isp)
#define PREV_PRINT_REGISTER(isp, name)\
dev_dbg(isp->dev, "###PRV " #name "=0x%08x\n", \
isp_reg_readl(isp, OMAP3_ISP_IOMEM_PREV, ISPPRV_##name))
static void preview_print_status(struct isp_prev_device *prev)
static void preview_init_params(struct isp_prev_device *prev)
static unsigned int preview_max_out_width(struct isp_prev_device *prev)
static void preview_configure(struct isp_prev_device *prev)
static void preview_enable_oneshot(struct isp_prev_device *prev)
void omap3isp_preview_isr_frame_sync(struct isp_prev_device *prev)
static void preview_isr_buffer(struct isp_prev_device *prev)
void omap3isp_preview_isr(struct isp_prev_device *prev)
static int preview_video_queue(struct isp_video *video,
struct isp_buffer *buffer)
static const struct isp_video_operations preview_video_ops = ;
static int preview_s_ctrl(struct v4l2_ctrl *ctrl)
static const struct v4l2_ctrl_ops preview_ctrl_ops = ;
static long preview_ioctl(struct v4l2_subdev *sd, unsigned int cmd, void *arg)
static int preview_set_stream(struct v4l2_subdev *sd, int enable)
static struct v4l2_mbus_framefmt *
__preview_get_format(struct isp_prev_device *prev, struct v4l2_subdev_fh *fh,
unsigned int pad, enum v4l2_subdev_format_whence which)
static const unsigned int preview_input_fmts[] = ;
static const unsigned int preview_output_fmts[] = ;
static void preview_try_format(struct isp_prev_device *prev,
struct v4l2_subdev_fh *fh, unsigned int pad,
struct v4l2_mbus_framefmt *fmt,
enum v4l2_subdev_format_whence which)
static int preview_enum_mbus_code(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_mbus_code_enum *code)
static int preview_enum_frame_size(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_frame_size_enum *fse)
static int preview_get_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int preview_set_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int preview_init_formats(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh)
static const struct v4l2_subdev_core_ops preview_v4l2_core_ops = ;
static const struct v4l2_subdev_video_ops preview_v4l2_video_ops = ;
static const struct v4l2_subdev_pad_ops preview_v4l2_pad_ops = ;
static const struct v4l2_subdev_ops preview_v4l2_ops = ;
static const struct v4l2_subdev_internal_ops preview_v4l2_internal_ops = ;
static int preview_link_setup(struct media_entity *entity,
const struct media_pad *local,
const struct media_pad *remote, u32 flags)
static const struct media_entity_operations preview_media_ops = ;
static int preview_init_entities(struct isp_prev_device *prev)
void omap3isp_preview_unregister_entities(struct isp_prev_device *prev)
int omap3isp_preview_register_entities(struct isp_prev_device *prev,
struct v4l2_device *vdev)
void omap3isp_preview_cleanup(struct isp_device *isp)
int omap3isp_preview_init(struct isp_device *isp)
