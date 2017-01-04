#define BUFFER_TIMEOUT     msecs_to_jiffies(2000)
#define TM6000_MIN_BUF 4
#define TM6000_DEF_BUF 8
#define TM6000_MAX_ISO_PACKETS	46
static unsigned int vid_limit = 16;
static int video_nr = -1;
static int radio_nr = -1;
int tm6000_debug;
EXPORT_SYMBOL_GPL(tm6000_debug);
static const struct v4l2_queryctrl no_ctrl = ;
static struct v4l2_queryctrl tm6000_qctrl[] = ;
static const unsigned int CTRLS = ARRAY_SIZE(tm6000_qctrl);
static int qctl_regs[ARRAY_SIZE(tm6000_qctrl)];
static struct tm6000_fmt format[] = ;
static const struct v4l2_queryctrl *ctrl_by_id(unsigned int id)
#define norm_maxw(a) 720
#define norm_maxh(a) 576
#define norm_minw(a) norm_maxw(a)
#define norm_minh(a) norm_maxh(a)
static inline void get_next_buf(struct tm6000_dmaqueue *dma_q,
struct tm6000_buffer   **buf)
static inline void buffer_filled(struct tm6000_core *dev,
struct tm6000_dmaqueue *dma_q,
struct tm6000_buffer *buf)
const char *tm6000_msg_type[] = ;
static int copy_streams(u8 *data, unsigned long len,
struct urb *urb)
static int copy_multiplexed(u8 *ptr, unsigned long len,
struct urb *urb)
static inline void print_err_status(struct tm6000_core *dev,
int packet, int status)
static inline int tm6000_isoc_copy(struct urb *urb)
static void tm6000_irq_callback(struct urb *urb)
static void tm6000_uninit_isoc(struct tm6000_core *dev)
static int tm6000_prepare_isoc(struct tm6000_core *dev)
static int tm6000_start_thread(struct tm6000_core *dev)
static int
buffer_setup(struct videobuf_queue *vq, unsigned int *count, unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct tm6000_buffer *buf)
static int
buffer_prepare(struct videobuf_queue *vq, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static struct videobuf_queue_ops tm6000_video_qops = ;
static bool is_res_read(struct tm6000_core *dev, struct tm6000_fh *fh)
static bool is_res_streaming(struct tm6000_core *dev, struct tm6000_fh *fh)
static bool res_get(struct tm6000_core *dev, struct tm6000_fh *fh,
bool is_res_read)
static void res_free(struct tm6000_core *dev, struct tm6000_fh *fh)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static struct tm6000_fmt *format_by_fourcc(unsigned int fourcc)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_streamon(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_s_std (struct file *file, void *priv, v4l2_std_id *norm)
static const char *iname [] = ;
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int radio_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static int radio_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int radio_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int radio_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int radio_g_input(struct file *filp, void *priv, unsigned int *i)
static int radio_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int radio_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int radio_s_input(struct file *filp, void *priv, unsigned int i)
static int radio_s_std(struct file *file, void *fh, v4l2_std_id *norm)
static int radio_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *c)
static int tm6000_open(struct file *file)
static ssize_t
tm6000_read(struct file *file, char __user *data, size_t count, loff_t *pos)
static unsigned int
tm6000_poll(struct file *file, struct poll_table_struct *wait)
static int tm6000_release(struct file *file)
static int tm6000_mmap(struct file *file, struct vm_area_struct * vma)
static struct v4l2_file_operations tm6000_fops = ;
static const struct v4l2_ioctl_ops video_ioctl_ops = ;
static struct video_device tm6000_template = ;
static const struct v4l2_file_operations radio_fops = ;
static const struct v4l2_ioctl_ops radio_ioctl_ops = ;
struct video_device tm6000_radio_template = ;
static struct video_device *vdev_init(struct tm6000_core *dev,
const struct video_device
*template, const char *type_name)
int tm6000_v4l2_register(struct tm6000_core *dev)
int tm6000_v4l2_unregister(struct tm6000_core *dev)
int tm6000_v4l2_exit(void)
module_param(video_nr, int, 0);
MODULE_PARM_DESC(video_nr, "Allow changing video device number");
module_param_named(debug, tm6000_debug, int, 0444);
MODULE_PARM_DESC(debug, "activates debug info");
module_param(vid_limit, int, 0644);
MODULE_PARM_DESC(vid_limit, "capture memory limit in megabytes");
