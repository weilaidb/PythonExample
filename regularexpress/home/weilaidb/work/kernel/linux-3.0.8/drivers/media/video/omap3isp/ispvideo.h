#define OMAP3_ISP_VIDEO_H
#define ISP_VIDEO_DRIVER_NAME		"ispvideo"
#define ISP_VIDEO_DRIVER_VERSION	KERNEL_VERSION(0, 0, 1)
struct isp_device;
struct isp_video;
struct v4l2_mbus_framefmt;
struct v4l2_pix_format;
struct isp_format_info ;
enum isp_pipeline_stream_state ;
enum isp_pipeline_state ;
struct isp_pipeline ;
#define to_isp_pipeline(__e) \
container_of((__e)->pipe, struct isp_pipeline, pipe)
static inline int isp_pipeline_ready(struct isp_pipeline *pipe)
struct isp_buffer ;
#define to_isp_buffer(buf)	container_of(buf, struct isp_buffer, buffer)
enum isp_video_dmaqueue_flags ;
#define isp_video_dmaqueue_flags_clr(video)	\
()
struct isp_video_operations ;
struct isp_video ;
#define to_isp_video(vdev)	container_of(vdev, struct isp_video, video)
struct isp_video_fh ;
#define to_isp_video_fh(fh)	container_of(fh, struct isp_video_fh, vfh)
#define isp_video_queue_to_isp_video_fh(q) \
container_of(q, struct isp_video_fh, queue)
int omap3isp_video_init(struct isp_video *video, const char *name);
int omap3isp_video_register(struct isp_video *video,
struct v4l2_device *vdev);
void omap3isp_video_unregister(struct isp_video *video);
struct isp_buffer *omap3isp_video_buffer_next(struct isp_video *video,
unsigned int error);
void omap3isp_video_resume(struct isp_video *video, int continuous);
struct media_pad *omap3isp_video_remote_pad(struct isp_video *video);
const struct isp_format_info *
omap3isp_video_format_info(enum v4l2_mbus_pixelcode code);
