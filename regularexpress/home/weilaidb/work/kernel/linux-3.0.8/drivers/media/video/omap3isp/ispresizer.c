#define MIN_RESIZE_VALUE		64
#define MID_RESIZE_VALUE		512
#define MAX_RESIZE_VALUE		1024
#define MIN_IN_WIDTH			32
#define MIN_IN_HEIGHT			32
#define MAX_IN_WIDTH_MEMORY_MODE	4095
#define MAX_IN_WIDTH_ONTHEFLY_MODE_ES1	1280
#define MAX_IN_WIDTH_ONTHEFLY_MODE_ES2	4095
#define MAX_IN_HEIGHT			4095
#define MIN_OUT_WIDTH			16
#define MIN_OUT_HEIGHT			2
#define MAX_OUT_HEIGHT			4095
#define MAX_4TAP_OUT_WIDTH_ES1		1280
#define MAX_7TAP_OUT_WIDTH_ES1		640
#define MAX_4TAP_OUT_WIDTH_ES2		3312
#define MAX_7TAP_OUT_WIDTH_ES2		1650
#define MAX_4TAP_OUT_WIDTH_3630		4096
#define MAX_7TAP_OUT_WIDTH_3630		2048
#define RESIZE_DIVISOR			256
#define DEFAULT_PHASE			1
static const struct isprsz_coef filter_coefs = ;
static struct v4l2_mbus_framefmt *
__resizer_get_format(struct isp_res_device *res, struct v4l2_subdev_fh *fh,
unsigned int pad, enum v4l2_subdev_format_whence which)
static struct v4l2_rect *
__resizer_get_crop(struct isp_res_device *res, struct v4l2_subdev_fh *fh,
enum v4l2_subdev_format_whence which)
static void resizer_set_filters(struct isp_res_device *res, const u16 *h_coeff,
const u16 *v_coeff)
static void resizer_set_bilinear(struct isp_res_device *res,
enum resizer_chroma_algo type)
static void resizer_set_ycpos(struct isp_res_device *res,
enum v4l2_mbus_pixelcode pixelcode)
static void resizer_set_phase(struct isp_res_device *res, u32 h_phase,
u32 v_phase)
static void resizer_set_luma(struct isp_res_device *res,
struct resizer_luma_yenh *luma)
static void resizer_set_source(struct isp_res_device *res,
enum resizer_input_entity source)
static void resizer_set_ratio(struct isp_res_device *res,
const struct resizer_ratio *ratio)
static void resizer_set_output_size(struct isp_res_device *res,
u32 width, u32 height)
static void resizer_set_output_offset(struct isp_res_device *res, u32 offset)
static void resizer_set_start(struct isp_res_device *res, u32 left, u32 top)
static void resizer_set_input_size(struct isp_res_device *res,
u32 width, u32 height)
static void resizer_set_input_offset(struct isp_res_device *res, u32 offset)
static void resizer_set_intype(struct isp_res_device *res,
enum resizer_colors_type type)
static void __resizer_set_inaddr(struct isp_res_device *res, u32 addr)
void omap3isp_resizer_max_rate(struct isp_res_device *res,
unsigned int *max_rate)
static void resizer_adjust_bandwidth(struct isp_res_device *res)
int omap3isp_resizer_busy(struct isp_res_device *res)
static void resizer_set_inaddr(struct isp_res_device *res, u32 addr)
static void resizer_set_outaddr(struct isp_res_device *res, u32 addr)
#define RSZ_PRINT_REGISTER(isp, name)\
dev_dbg(isp->dev, "###RSZ " #name "=0x%08x\n", \
isp_reg_readl(isp, OMAP3_ISP_IOMEM_RESZ, ISPRSZ_##name))
static void resizer_print_status(struct isp_res_device *res)
static void resizer_calc_ratios(struct isp_res_device *res,
struct v4l2_rect *input,
struct v4l2_mbus_framefmt *output,
struct resizer_ratio *ratio)
static void resizer_set_crop_params(struct isp_res_device *res,
const struct v4l2_mbus_framefmt *input,
const struct v4l2_mbus_framefmt *output)
static void resizer_configure(struct isp_res_device *res)
static void resizer_enable_oneshot(struct isp_res_device *res)
void omap3isp_resizer_isr_frame_sync(struct isp_res_device *res)
static void resizer_isr_buffer(struct isp_res_device *res)
void omap3isp_resizer_isr(struct isp_res_device *res)
static int resizer_video_queue(struct isp_video *video,
struct isp_buffer *buffer)
static const struct isp_video_operations resizer_video_ops = ;
static int resizer_set_stream(struct v4l2_subdev *sd, int enable)
static int resizer_g_crop(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_crop *crop)
static void resizer_try_crop(const struct v4l2_mbus_framefmt *sink,
const struct v4l2_mbus_framefmt *source,
struct v4l2_rect *crop)
static int resizer_s_crop(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_crop *crop)
static const unsigned int resizer_formats[] = ;
static unsigned int resizer_max_in_width(struct isp_res_device *res)
static void resizer_try_format(struct isp_res_device *res,
struct v4l2_subdev_fh *fh, unsigned int pad,
struct v4l2_mbus_framefmt *fmt,
enum v4l2_subdev_format_whence which)
static int resizer_enum_mbus_code(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_mbus_code_enum *code)
static int resizer_enum_frame_size(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_frame_size_enum *fse)
static int resizer_get_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int resizer_set_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int resizer_init_formats(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh)
static const struct v4l2_subdev_video_ops resizer_v4l2_video_ops = ;
static const struct v4l2_subdev_pad_ops resizer_v4l2_pad_ops = ;
static const struct v4l2_subdev_ops resizer_v4l2_ops = ;
static const struct v4l2_subdev_internal_ops resizer_v4l2_internal_ops = ;
static int resizer_link_setup(struct media_entity *entity,
const struct media_pad *local,
const struct media_pad *remote, u32 flags)
static const struct media_entity_operations resizer_media_ops = ;
static int resizer_init_entities(struct isp_res_device *res)
void omap3isp_resizer_unregister_entities(struct isp_res_device *res)
int omap3isp_resizer_register_entities(struct isp_res_device *res,
struct v4l2_device *vdev)
void omap3isp_resizer_cleanup(struct isp_device *isp)
int omap3isp_resizer_init(struct isp_device *isp)
