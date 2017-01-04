#define IS_OUT_OF_BOUNDS(value, min, max)		\
(((value) < (min)) || ((value) > (max)))
static void h3a_af_setup_regs(struct ispstat *af, void *priv)
static void h3a_af_enable(struct ispstat *af, int enable)
static int h3a_af_busy(struct ispstat *af)
static u32 h3a_af_get_buf_size(struct omap3isp_h3a_af_config *conf)
static int h3a_af_validate_params(struct ispstat *af, void *new_conf)
static void h3a_af_set_params(struct ispstat *af, void *new_conf)
static long h3a_af_ioctl(struct v4l2_subdev *sd, unsigned int cmd, void *arg)
static const struct ispstat_ops h3a_af_ops = ;
static const struct v4l2_subdev_core_ops h3a_af_subdev_core_ops = ;
static const struct v4l2_subdev_video_ops h3a_af_subdev_video_ops = ;
static const struct v4l2_subdev_ops h3a_af_subdev_ops = ;
int omap3isp_h3a_af_init(struct isp_device *isp)
void omap3isp_h3a_af_cleanup(struct isp_device *isp)
