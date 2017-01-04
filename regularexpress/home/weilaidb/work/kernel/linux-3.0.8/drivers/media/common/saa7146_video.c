static int max_memory = 32;
module_param(max_memory, int, 0644);
MODULE_PARM_DESC(max_memory, "maximum memory usage for capture buffers (default: 32Mb)");
#define IS_CAPTURE_ACTIVE(fh) \
(((vv->video_status & STATUS_CAPTURE) != 0) && (vv->video_fh == fh))
#define IS_OVERLAY_ACTIVE(fh) \
(((vv->video_status & STATUS_OVERLAY) != 0) && (vv->video_fh == fh))
static struct saa7146_format formats[] = ;
static int NUM_FORMATS = sizeof(formats)/sizeof(struct saa7146_format);
struct saa7146_format* saa7146_format_by_fourcc(struct saa7146_dev *dev, int fourcc)
static int vidioc_try_fmt_vid_overlay(struct file *file, void *fh, struct v4l2_format *f);
int saa7146_start_preview(struct saa7146_fh *fh)
EXPORT_SYMBOL_GPL(saa7146_start_preview);
int saa7146_stop_preview(struct saa7146_fh *fh)
EXPORT_SYMBOL_GPL(saa7146_stop_preview);
static struct v4l2_queryctrl controls[] = ;
static int NUM_CONTROLS = sizeof(controls)/sizeof(struct v4l2_queryctrl);
#define V4L2_CID_PRIVATE_LASTP1      (V4L2_CID_PRIVATE_BASE + 0)
static struct v4l2_queryctrl* ctrl_by_id(int id)
static int saa7146_pgtable_build(struct saa7146_dev *dev, struct saa7146_buf *buf)
static int video_begin(struct saa7146_fh *fh)
static int video_end(struct saa7146_fh *fh, struct file *file)
static int vidioc_querycap(struct file *file, void *fh, struct v4l2_capability *cap)
static int vidioc_g_fbuf(struct file *file, void *fh, struct v4l2_framebuffer *fb)
static int vidioc_s_fbuf(struct file *file, void *fh, struct v4l2_framebuffer *fb)
static int vidioc_enum_fmt_vid_cap(struct file *file, void *fh, struct v4l2_fmtdesc *f)
static int vidioc_queryctrl(struct file *file, void *fh, struct v4l2_queryctrl *c)
static int vidioc_g_ctrl(struct file *file, void *fh, struct v4l2_control *c)
static int vidioc_s_ctrl(struct file *file, void *fh, struct v4l2_control *c)
static int vidioc_g_parm(struct file *file, void *fh,
struct v4l2_streamparm *parm)
static int vidioc_g_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *f)
static int vidioc_g_fmt_vid_overlay(struct file *file, void *fh, struct v4l2_format *f)
static int vidioc_g_fmt_vbi_cap(struct file *file, void *fh, struct v4l2_format *f)
static int vidioc_try_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *f)
static int vidioc_try_fmt_vid_overlay(struct file *file, void *fh, struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *__fh, struct v4l2_format *f)
static int vidioc_s_fmt_vid_overlay(struct file *file, void *__fh, struct v4l2_format *f)
static int vidioc_g_std(struct file *file, void *fh, v4l2_std_id *norm)
static int vidioc_s_std(struct file *file, void *fh, v4l2_std_id *id)
static int vidioc_overlay(struct file *file, void *fh, unsigned int on)
static int vidioc_reqbufs(struct file *file, void *__fh, struct v4l2_requestbuffers *b)
static int vidioc_querybuf(struct file *file, void *__fh, struct v4l2_buffer *buf)
static int vidioc_qbuf(struct file *file, void *__fh, struct v4l2_buffer *buf)
static int vidioc_dqbuf(struct file *file, void *__fh, struct v4l2_buffer *buf)
static int vidioc_streamon(struct file *file, void *__fh, enum v4l2_buf_type type)
static int vidioc_streamoff(struct file *file, void *__fh, enum v4l2_buf_type type)
static int vidioc_g_chip_ident(struct file *file, void *__fh,
struct v4l2_dbg_chip_ident *chip)
const struct v4l2_ioctl_ops saa7146_video_ioctl_ops = ;
static int buffer_activate (struct saa7146_dev *dev,
struct saa7146_buf *buf,
struct saa7146_buf *next)
static void release_all_pagetables(struct saa7146_dev *dev, struct saa7146_buf *buf)
static int buffer_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb, enum v4l2_field field)
static int buffer_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static void buffer_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
static struct videobuf_queue_ops video_qops = ;
static void video_init(struct saa7146_dev *dev, struct saa7146_vv *vv)
static int video_open(struct saa7146_dev *dev, struct file *file)
static void video_close(struct saa7146_dev *dev, struct file *file)
static void video_irq_done(struct saa7146_dev *dev, unsigned long st)
static ssize_t video_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
struct saa7146_use_ops saa7146_video_uops = ;
