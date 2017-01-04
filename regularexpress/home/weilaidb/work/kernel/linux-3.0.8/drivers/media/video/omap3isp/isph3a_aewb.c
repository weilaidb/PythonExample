static void h3a_aewb_setup_regs(struct ispstat *aewb, void *priv)
static void h3a_aewb_enable(struct ispstat *aewb, int enable)
static int h3a_aewb_busy(struct ispstat *aewb)
static u32 h3a_aewb_get_buf_size(struct omap3isp_h3a_aewb_config *conf)
static int h3a_aewb_validate_params(struct ispstat *aewb, void *new_conf)
static void h3a_aewb_set_params(struct ispstat *aewb, void *new_conf)
static long h3a_aewb_ioctl(struct v4l2_subdev *sd, unsigned int cmd, void *arg)
static const struct ispstat_ops h3a_aewb_ops = ;
static const struct v4l2_subdev_core_ops h3a_aewb_subdev_core_ops = ;
static const struct v4l2_subdev_video_ops h3a_aewb_subdev_video_ops = ;
static const struct v4l2_subdev_ops h3a_aewb_subdev_ops = ;
int omap3isp_h3a_aewb_init(struct isp_device *isp)
void omap3isp_h3a_aewb_cleanup(struct isp_device *isp)
