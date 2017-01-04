#define	V4L2_MPEG_STREAM_TYPE_MPEG_ELEM   6
#define	V4L2_MPEG_VIDEO_ENCODING_MPEG_4   3
#define call_all(dev, o, f, args...) \
v4l2_device_call_until_err(dev, 0, o, f, ##args)
static void deactivate_buffer(struct go7007_buffer *gobuf)
static void abort_queued(struct go7007 *go)
static int go7007_streamoff(struct go7007 *go)
static int go7007_open(struct file *file)
static int go7007_release(struct file *file)
static u32 get_frame_type_flag(struct go7007_buffer *gobuf, int format)
static int set_capture_size(struct go7007 *go, struct v4l2_format *fmt, int try)
static int mpeg_query_ctrl(struct v4l2_queryctrl *ctrl)
static int mpeg_s_ctrl(struct v4l2_control *ctrl, struct go7007 *go)
static int mpeg_g_ctrl(struct v4l2_control *ctrl, struct go7007 *go)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *fmt)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *req)
static int vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int vidioc_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *query)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_parm(struct file *filp, void *priv,
struct v4l2_streamparm *parm)
static int vidioc_s_parm(struct file *filp, void *priv,
struct v4l2_streamparm *parm)
static int vidioc_enum_framesizes(struct file *filp, void *priv,
struct v4l2_frmsizeenum *fsize)
static int vidioc_enum_frameintervals(struct file *filp, void *priv,
struct v4l2_frmivalenum *fival)
static int vidioc_g_std(struct file *file, void *priv, v4l2_std_id *std)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *std)
static int vidioc_querystd(struct file *file, void *priv, v4l2_std_id *std)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *inp)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *input)
static int vidioc_s_input(struct file *file, void *priv, unsigned int input)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_cropcap(struct file *file, void *priv,
struct v4l2_cropcap *cropcap)
static int vidioc_g_crop(struct file *file, void *priv, struct v4l2_crop *crop)
static int vidioc_s_crop(struct file *file, void *priv, struct v4l2_crop *crop)
static int vidioc_g_jpegcomp(struct file *file, void *priv,
struct v4l2_jpegcompression *params)
static int vidioc_s_jpegcomp(struct file *file, void *priv,
struct v4l2_jpegcompression *params)
static ssize_t go7007_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static void go7007_vm_open(struct vm_area_struct *vma)
static void go7007_vm_close(struct vm_area_struct *vma)
static int go7007_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static struct vm_operations_struct go7007_vm_ops = ;
static int go7007_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int go7007_poll(struct file *file, poll_table *wait)
static void go7007_vfl_release(struct video_device *vfd)
static struct v4l2_file_operations go7007_fops = ;
static const struct v4l2_ioctl_ops video_ioctl_ops = ;
static struct video_device go7007_template = ;
int go7007_v4l2_init(struct go7007 *go)
void go7007_v4l2_remove(struct go7007 *go)
