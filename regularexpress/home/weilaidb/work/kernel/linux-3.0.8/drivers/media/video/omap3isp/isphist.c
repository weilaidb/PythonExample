#define HIST_CONFIG_DMA	1
#define HIST_USING_DMA(hist) ((hist)->dma_ch >= 0)
static void hist_reset_mem(struct ispstat *hist)
static void hist_dma_config(struct ispstat *hist)
static void hist_setup_regs(struct ispstat *hist, void *priv)
static void hist_enable(struct ispstat *hist, int enable)
static int hist_busy(struct ispstat *hist)
static void hist_dma_cb(int lch, u16 ch_status, void *data)
static int hist_buf_dma(struct ispstat *hist)
static int hist_buf_pio(struct ispstat *hist)
static int hist_buf_process(struct ispstat *hist)
static u32 hist_get_buf_size(struct omap3isp_hist_config *conf)
static int hist_validate_params(struct ispstat *hist, void *new_conf)
static int hist_comp_params(struct ispstat *hist,
struct omap3isp_hist_config *user_cfg)
static void hist_set_params(struct ispstat *hist, void *new_conf)
static long hist_ioctl(struct v4l2_subdev *sd, unsigned int cmd, void *arg)
static const struct ispstat_ops hist_ops = ;
static const struct v4l2_subdev_core_ops hist_subdev_core_ops = ;
static const struct v4l2_subdev_video_ops hist_subdev_video_ops = ;
static const struct v4l2_subdev_ops hist_subdev_ops = ;
int omap3isp_hist_init(struct isp_device *isp)
void omap3isp_hist_cleanup(struct isp_device *isp)
