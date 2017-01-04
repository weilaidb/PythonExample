static struct isp_format_info formats[] = ;
const struct isp_format_info *
omap3isp_video_format_info(enum v4l2_mbus_pixelcode code)
static bool isp_video_is_shiftable(enum v4l2_mbus_pixelcode in,
enum v4l2_mbus_pixelcode out,
unsigned int additional_shift)
static unsigned int isp_video_mbus_to_pix(const struct isp_video *video,
const struct v4l2_mbus_framefmt *mbus,
struct v4l2_pix_format *pix)
static void isp_video_pix_to_mbus(const struct v4l2_pix_format *pix,
struct v4l2_mbus_framefmt *mbus)
static struct v4l2_subdev *
isp_video_remote_subdev(struct isp_video *video, u32 *pad)
static struct isp_video *
isp_video_far_end(struct isp_video *video)
static int isp_video_validate_pipeline(struct isp_pipeline *pipe)
static int
__isp_video_get_format(struct isp_video *video, struct v4l2_format *format)
static int
isp_video_check_format(struct isp_video *video, struct isp_video_fh *vfh)
#define IOMMU_FLAG	(IOVMF_ENDIAN_LITTLE | IOVMF_ELSZ_8)
static dma_addr_t
ispmmu_vmap(struct isp_device *isp, const struct scatterlist *sglist, int sglen)
static void ispmmu_vunmap(struct isp_device *isp, dma_addr_t da)
static void isp_video_queue_prepare(struct isp_video_queue *queue,
unsigned int *nbuffers, unsigned int *size)
static void isp_video_buffer_cleanup(struct isp_video_buffer *buf)
static int isp_video_buffer_prepare(struct isp_video_buffer *buf)
static void isp_video_buffer_queue(struct isp_video_buffer *buf)
static const struct isp_video_queue_operations isp_video_queue_ops = ;
struct isp_buffer *omap3isp_video_buffer_next(struct isp_video *video,
unsigned int error)
void omap3isp_video_resume(struct isp_video *video, int continuous)
static int
isp_video_querycap(struct file *file, void *fh, struct v4l2_capability *cap)
static int
isp_video_get_format(struct file *file, void *fh, struct v4l2_format *format)
static int
isp_video_set_format(struct file *file, void *fh, struct v4l2_format *format)
static int
isp_video_try_format(struct file *file, void *fh, struct v4l2_format *format)
static int
isp_video_cropcap(struct file *file, void *fh, struct v4l2_cropcap *cropcap)
static int
isp_video_get_crop(struct file *file, void *fh, struct v4l2_crop *crop)
static int
isp_video_set_crop(struct file *file, void *fh, struct v4l2_crop *crop)
static int
isp_video_get_param(struct file *file, void *fh, struct v4l2_streamparm *a)
static int
isp_video_set_param(struct file *file, void *fh, struct v4l2_streamparm *a)
static int
isp_video_reqbufs(struct file *file, void *fh, struct v4l2_requestbuffers *rb)
static int
isp_video_querybuf(struct file *file, void *fh, struct v4l2_buffer *b)
static int
isp_video_qbuf(struct file *file, void *fh, struct v4l2_buffer *b)
static int
isp_video_dqbuf(struct file *file, void *fh, struct v4l2_buffer *b)
static int
isp_video_streamon(struct file *file, void *fh, enum v4l2_buf_type type)
static int
isp_video_streamoff(struct file *file, void *fh, enum v4l2_buf_type type)
static int
isp_video_enum_input(struct file *file, void *fh, struct v4l2_input *input)
static int
isp_video_g_input(struct file *file, void *fh, unsigned int *input)
static int
isp_video_s_input(struct file *file, void *fh, unsigned int input)
static const struct v4l2_ioctl_ops isp_video_ioctl_ops = ;
static int isp_video_open(struct file *file)
static int isp_video_release(struct file *file)
static unsigned int isp_video_poll(struct file *file, poll_table *wait)
static int isp_video_mmap(struct file *file, struct vm_area_struct *vma)
static struct v4l2_file_operations isp_video_fops = ;
static const struct isp_video_operations isp_video_dummy_ops = ;
int omap3isp_video_init(struct isp_video *video, const char *name)
int omap3isp_video_register(struct isp_video *video, struct v4l2_device *vdev)
void omap3isp_video_unregister(struct isp_video *video)
