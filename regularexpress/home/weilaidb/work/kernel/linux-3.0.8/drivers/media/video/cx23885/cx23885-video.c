MODULE_DESCRIPTION("v4l2 driver module for cx23885 based TV cards");
MODULE_AUTHOR("Steven Toth <stoth@linuxtv.org>");
MODULE_LICENSE("GPL");
static unsigned int video_nr[] = ;
static unsigned int vbi_nr[]   = ;
static unsigned int radio_nr[] = ;
module_param_array(video_nr, int, NULL, 0444);
module_param_array(vbi_nr,   int, NULL, 0444);
module_param_array(radio_nr, int, NULL, 0444);
MODULE_PARM_DESC(video_nr, "video device numbers");
MODULE_PARM_DESC(vbi_nr, "vbi device numbers");
MODULE_PARM_DESC(radio_nr, "radio device numbers");
static unsigned int video_debug;
module_param(video_debug, int, 0644);
MODULE_PARM_DESC(video_debug, "enable debug messages [video]");
static unsigned int irq_debug;
module_param(irq_debug, int, 0644);
MODULE_PARM_DESC(irq_debug, "enable debug messages [IRQ handler]");
static unsigned int vid_limit = 16;
module_param(vid_limit, int, 0644);
MODULE_PARM_DESC(vid_limit, "capture memory limit in megabytes");
#define dprintk(level, fmt, arg...)\
do  while (0)
#define FORMAT_FLAGS_PACKED       0x01
static struct cx23885_fmt formats[] = ;
static struct cx23885_fmt *format_by_fourcc(unsigned int fourcc)
static const struct v4l2_queryctrl no_ctl = ;
static struct cx23885_ctrl cx23885_ctls[] = ;
static const int CX23885_CTLS = ARRAY_SIZE(cx23885_ctls);
static const u32 cx23885_user_ctrls[] = ;
static const u32 *ctrl_classes[] = ;
static void cx23885_video_wakeup(struct cx23885_dev *dev,
struct cx23885_dmaqueue *q, u32 count)
static int cx23885_set_tvnorm(struct cx23885_dev *dev, v4l2_std_id norm)
static struct video_device *cx23885_vdev_init(struct cx23885_dev *dev,
struct pci_dev *pci,
struct video_device *template,
char *type)
static int cx23885_ctrl_query(struct v4l2_queryctrl *qctrl)
static int res_get(struct cx23885_dev *dev, struct cx23885_fh *fh,
unsigned int bit)
static int res_check(struct cx23885_fh *fh, unsigned int bit)
static int res_locked(struct cx23885_dev *dev, unsigned int bit)
static void res_free(struct cx23885_dev *dev, struct cx23885_fh *fh,
unsigned int bits)
static int cx23885_video_mux(struct cx23885_dev *dev, unsigned int input)
static int cx23885_set_scale(struct cx23885_dev *dev, unsigned int width,
unsigned int height, enum v4l2_field field)
static int cx23885_start_video_dma(struct cx23885_dev *dev,
struct cx23885_dmaqueue *q,
struct cx23885_buffer *buf)
static int cx23885_restart_video_queue(struct cx23885_dev *dev,
struct cx23885_dmaqueue *q)
static int buffer_setup(struct videobuf_queue *q, unsigned int *count,
unsigned int *size)
static int buffer_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static void buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops cx23885_video_qops = ;
static struct videobuf_queue *get_queue(struct cx23885_fh *fh)
static int get_resource(struct cx23885_fh *fh)
static int video_open(struct file *file)
static ssize_t video_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static unsigned int video_poll(struct file *file,
struct poll_table_struct *wait)
static int video_release(struct file *file)
static int video_mmap(struct file *file, struct vm_area_struct *vma)
static int cx23885_get_control(struct cx23885_dev *dev,
struct v4l2_control *ctl)
static int cx23885_set_control(struct cx23885_dev *dev,
struct v4l2_control *ctl)
static void init_controls(struct cx23885_dev *dev)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int vidioc_qbuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int vidioc_dqbuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *tvnorms)
static int cx23885_enum_input(struct cx23885_dev *dev, struct v4l2_input *i)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vidioc_log_status(struct file *file, void *priv)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qctrl)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctl)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int cx23885_set_freq(struct cx23885_dev *dev, struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static void cx23885_vid_timeout(unsigned long data)
int cx23885_video_irq(struct cx23885_dev *dev, u32 status)
static const struct v4l2_file_operations video_fops = ;
static const struct v4l2_ioctl_ops video_ioctl_ops = ;
static struct video_device cx23885_vbi_template;
static struct video_device cx23885_video_template = ;
static const struct v4l2_file_operations radio_fops = ;
void cx23885_video_unregister(struct cx23885_dev *dev)
int cx23885_video_register(struct cx23885_dev *dev)
