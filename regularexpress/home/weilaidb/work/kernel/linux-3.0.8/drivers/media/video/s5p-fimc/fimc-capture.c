static struct v4l2_subdev *fimc_subdev_register(struct fimc_dev *fimc,
struct s5p_fimc_isp_info *isp_info)
static void fimc_subdev_unregister(struct fimc_dev *fimc)
static int fimc_subdev_attach(struct fimc_dev *fimc, int index)
static int fimc_isp_subdev_init(struct fimc_dev *fimc, unsigned int index)
static int fimc_stop_capture(struct fimc_dev *fimc)
static int start_streaming(struct vb2_queue *q)
static int stop_streaming(struct vb2_queue *q)
static unsigned int get_plane_size(struct fimc_frame *fr, unsigned int plane)
static int queue_setup(struct vb2_queue *vq, unsigned int *num_buffers,
unsigned int *num_planes, unsigned long sizes[],
void *allocators[])
static int buffer_prepare(struct vb2_buffer *vb)
static void buffer_queue(struct vb2_buffer *vb)
static void fimc_lock(struct vb2_queue *vq)
static void fimc_unlock(struct vb2_queue *vq)
static struct vb2_ops fimc_capture_qops = ;
static int fimc_capture_open(struct file *file)
static int fimc_capture_close(struct file *file)
static unsigned int fimc_capture_poll(struct file *file,
struct poll_table_struct *wait)
static int fimc_capture_mmap(struct file *file, struct vm_area_struct *vma)
static const struct v4l2_file_operations fimc_capture_fops = ;
static int fimc_vidioc_querycap_capture(struct file *file, void *priv,
struct v4l2_capability *cap)
static int sync_capture_fmt(struct fimc_ctx *ctx)
static int fimc_cap_s_fmt_mplane(struct file *file, void *priv,
struct v4l2_format *f)
static int fimc_cap_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int fimc_cap_s_input(struct file *file, void *priv,
unsigned int i)
static int fimc_cap_g_input(struct file *file, void *priv,
unsigned int *i)
static int fimc_cap_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int fimc_cap_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int fimc_cap_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *reqbufs)
static int fimc_cap_querybuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int fimc_cap_qbuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int fimc_cap_dqbuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int fimc_cap_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int fimc_cap_cropcap(struct file *file, void *fh,
struct v4l2_cropcap *cr)
static int fimc_cap_g_crop(struct file *file, void *fh, struct v4l2_crop *cr)
static int fimc_cap_s_crop(struct file *file, void *fh,
struct v4l2_crop *cr)
static const struct v4l2_ioctl_ops fimc_capture_ioctl_ops = ;
int fimc_register_capture_device(struct fimc_dev *fimc)
void fimc_unregister_capture_device(struct fimc_dev *fimc)
