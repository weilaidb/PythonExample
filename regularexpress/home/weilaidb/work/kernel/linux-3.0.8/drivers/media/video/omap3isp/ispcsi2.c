static void csi2_if_enable(struct isp_device *isp,
struct isp_csi2_device *csi2, u8 enable)
static void csi2_recv_config(struct isp_device *isp,
struct isp_csi2_device *csi2,
struct isp_csi2_ctrl_cfg *currctrl)
static const unsigned int csi2_input_fmts[] = ;
static const u16 __csi2_fmt_map[2][2][2][2] = ;
static u16 csi2_ctx_map_format(struct isp_csi2_device *csi2)
static void csi2_set_outaddr(struct isp_csi2_device *csi2, u32 addr)
static inline int is_usr_def_mapping(u32 format_id)
static void csi2_ctx_enable(struct isp_device *isp,
struct isp_csi2_device *csi2, u8 ctxnum, u8 enable)
static void csi2_ctx_config(struct isp_device *isp,
struct isp_csi2_device *csi2,
struct isp_csi2_ctx_cfg *ctx)
static void csi2_timing_config(struct isp_device *isp,
struct isp_csi2_device *csi2,
struct isp_csi2_timing_cfg *timing)
static void csi2_irq_ctx_set(struct isp_device *isp,
struct isp_csi2_device *csi2, int enable)
static void csi2_irq_complexio1_set(struct isp_device *isp,
struct isp_csi2_device *csi2, int enable)
static void csi2_irq_status_set(struct isp_device *isp,
struct isp_csi2_device *csi2, int enable)
int omap3isp_csi2_reset(struct isp_csi2_device *csi2)
static int csi2_configure(struct isp_csi2_device *csi2)
#define CSI2_PRINT_REGISTER(isp, regs, name)\
dev_dbg(isp->dev, "###CSI2 " #name "=0x%08x\n", \
isp_reg_readl(isp, regs, ISPCSI2_##name))
static void csi2_print_status(struct isp_csi2_device *csi2)
static void csi2_isr_buffer(struct isp_csi2_device *csi2)
static void csi2_isr_ctx(struct isp_csi2_device *csi2,
struct isp_csi2_ctx_cfg *ctx)
int omap3isp_csi2_isr(struct isp_csi2_device *csi2)
static int csi2_queue(struct isp_video *video, struct isp_buffer *buffer)
static const struct isp_video_operations csi2_ispvideo_ops = ;
static struct v4l2_mbus_framefmt *
__csi2_get_format(struct isp_csi2_device *csi2, struct v4l2_subdev_fh *fh,
unsigned int pad, enum v4l2_subdev_format_whence which)
static void
csi2_try_format(struct isp_csi2_device *csi2, struct v4l2_subdev_fh *fh,
unsigned int pad, struct v4l2_mbus_framefmt *fmt,
enum v4l2_subdev_format_whence which)
static int csi2_enum_mbus_code(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_mbus_code_enum *code)
static int csi2_enum_frame_size(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_frame_size_enum *fse)
static int csi2_get_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int csi2_set_format(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int csi2_init_formats(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh)
static int csi2_set_stream(struct v4l2_subdev *sd, int enable)
static const struct v4l2_subdev_video_ops csi2_video_ops = ;
static const struct v4l2_subdev_pad_ops csi2_pad_ops = ;
static const struct v4l2_subdev_ops csi2_ops = ;
static const struct v4l2_subdev_internal_ops csi2_internal_ops = ;
static int csi2_link_setup(struct media_entity *entity,
const struct media_pad *local,
const struct media_pad *remote, u32 flags)
static const struct media_entity_operations csi2_media_ops = ;
static int csi2_init_entities(struct isp_csi2_device *csi2)
void omap3isp_csi2_unregister_entities(struct isp_csi2_device *csi2)
int omap3isp_csi2_register_entities(struct isp_csi2_device *csi2,
struct v4l2_device *vdev)
void omap3isp_csi2_cleanup(struct isp_device *isp)
int omap3isp_csi2_init(struct isp_device *isp)
