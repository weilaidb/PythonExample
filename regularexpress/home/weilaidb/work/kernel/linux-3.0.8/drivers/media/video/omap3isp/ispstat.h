#define OMAP3_ISP_STAT_H
#define STAT_MAX_BUFS		5
#define STAT_NEVENTS		8
#define STAT_BUF_DONE		0
#define STAT_NO_BUF		1
#define STAT_BUF_WAITING_DMA	2
struct ispstat;
struct ispstat_buffer ;
struct ispstat_ops ;
enum ispstat_state_t ;
struct ispstat ;
struct ispstat_generic_config ;
int omap3isp_stat_config(struct ispstat *stat, void *new_conf);
int omap3isp_stat_request_statistics(struct ispstat *stat,
struct omap3isp_stat_data *data);
int omap3isp_stat_init(struct ispstat *stat, const char *name,
const struct v4l2_subdev_ops *sd_ops);
void omap3isp_stat_free(struct ispstat *stat);
int omap3isp_stat_subscribe_event(struct v4l2_subdev *subdev,
struct v4l2_fh *fh,
struct v4l2_event_subscription *sub);
int omap3isp_stat_unsubscribe_event(struct v4l2_subdev *subdev,
struct v4l2_fh *fh,
struct v4l2_event_subscription *sub);
int omap3isp_stat_s_stream(struct v4l2_subdev *subdev, int enable);
int omap3isp_stat_busy(struct ispstat *stat);
int omap3isp_stat_pcr_busy(struct ispstat *stat);
void omap3isp_stat_suspend(struct ispstat *stat);
void omap3isp_stat_resume(struct ispstat *stat);
int omap3isp_stat_enable(struct ispstat *stat, u8 enable);
void omap3isp_stat_sbl_overflow(struct ispstat *stat);
void omap3isp_stat_isr(struct ispstat *stat);
void omap3isp_stat_isr_frame_sync(struct ispstat *stat);
void omap3isp_stat_dma_isr(struct ispstat *stat);
int omap3isp_stat_register_entities(struct ispstat *stat,
struct v4l2_device *vdev);
void omap3isp_stat_unregister_entities(struct ispstat *stat);
