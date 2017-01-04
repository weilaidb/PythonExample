#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("v4l2 driver module for cx25821 based TV cards");
MODULE_AUTHOR("Hiep Huynh <hiep.huynh@conexant.com>");
MODULE_LICENSE("GPL");
static unsigned int video_nr[] = ;
static unsigned int radio_nr[] = ;
module_param_array(video_nr, int, NULL, 0444);
module_param_array(radio_nr, int, NULL, 0444);
MODULE_PARM_DESC(video_nr, "video device numbers");
MODULE_PARM_DESC(radio_nr, "radio device numbers");
static unsigned int video_debug = VIDEO_DEBUG;
module_param(video_debug, int, 0644);
MODULE_PARM_DESC(video_debug, "enable debug messages [video]");
static unsigned int irq_debug;
module_param(irq_debug, int, 0644);
MODULE_PARM_DESC(irq_debug, "enable debug messages [IRQ handler]");
unsigned int vid_limit = 16;
module_param(vid_limit, int, 0644);
MODULE_PARM_DESC(vid_limit, "capture memory limit in megabytes");
static void cx25821_init_controls(struct cx25821_dev *dev, int chan_num);
static const struct v4l2_file_operations video_fops;
static const struct v4l2_ioctl_ops video_ioctl_ops;
#define FORMAT_FLAGS_PACKED       0x01
struct cx25821_fmt formats[] = ;
int cx25821_get_format_size(void)
struct cx25821_fmt *cx25821_format_by_fourcc(unsigned int fourcc)
void cx25821_dump_video_queue(struct cx25821_dev *dev, struct cx25821_dmaqueue *q)
void cx25821_video_wakeup(struct cx25821_dev *dev, struct cx25821_dmaqueue *q,
u32 count)
int cx25821_set_tvnorm(struct cx25821_dev *dev, v4l2_std_id norm)
struct video_device *cx25821_vdev_init(struct cx25821_dev *dev,
struct pci_dev *pci,
struct video_device *template,
char *type)
int cx25821_res_get(struct cx25821_dev *dev, struct cx25821_fh *fh, unsigned int bit)
int cx25821_res_check(struct cx25821_fh *fh, unsigned int bit)
int cx25821_res_locked(struct cx25821_fh *fh, unsigned int bit)
void cx25821_res_free(struct cx25821_dev *dev, struct cx25821_fh *fh, unsigned int bits)
int cx25821_video_mux(struct cx25821_dev *dev, unsigned int input)
int cx25821_start_video_dma(struct cx25821_dev *dev,
struct cx25821_dmaqueue *q,
struct cx25821_buffer *buf,
struct sram_channel *channel)
int cx25821_restart_video_queue(struct cx25821_dev *dev,
struct cx25821_dmaqueue *q,
struct sram_channel *channel)
void cx25821_vid_timeout(unsigned long data)
int cx25821_video_irq(struct cx25821_dev *dev, int chan_num, u32 status)
void cx25821_videoioctl_unregister(struct cx25821_dev *dev)
void cx25821_video_unregister(struct cx25821_dev *dev, int chan_num)
int cx25821_video_register(struct cx25821_dev *dev)
int cx25821_buffer_setup(struct videobuf_queue *q, unsigned int *count,
unsigned int *size)
int cx25821_buffer_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
void cx25821_buffer_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
struct videobuf_queue *get_queue(struct cx25821_fh *fh)
int cx25821_get_resource(struct cx25821_fh *fh, int resource)
int cx25821_video_mmap(struct file *file, struct vm_area_struct *vma)
static void buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static struct videobuf_queue_ops cx25821_video_qops = ;
static int video_open(struct file *file)
static ssize_t video_read(struct file *file, char __user * data, size_t count,
loff_t *ppos)
static unsigned int video_poll(struct file *file,
struct poll_table_struct *wait)
static int video_release(struct file *file)
static int vidioc_streamon(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_log_status(struct file *file, void *priv)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctl)
int cx25821_vidioc_g_fmt_vid_cap(struct file *file, void *priv, struct v4l2_format *f)
int cx25821_vidioc_try_fmt_vid_cap(struct file *file, void *priv, struct v4l2_format *f)
int cx25821_vidioc_querycap(struct file *file, void *priv, struct v4l2_capability *cap)
int cx25821_vidioc_enum_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_fmtdesc *f)
int cx25821_vidioc_reqbufs(struct file *file, void *priv, struct v4l2_requestbuffers *p)
int cx25821_vidioc_querybuf(struct file *file, void *priv, struct v4l2_buffer *p)
int cx25821_vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *p)
int cx25821_vidioc_g_priority(struct file *file, void *f, enum v4l2_priority *p)
int cx25821_vidioc_s_priority(struct file *file, void *f, enum v4l2_priority prio)
int cx25821_vidioc_s_std(struct file *file, void *priv, v4l2_std_id * tvnorms)
int cx25821_enum_input(struct cx25821_dev *dev, struct v4l2_input *i)
int cx25821_vidioc_enum_input(struct file *file, void *priv, struct v4l2_input *i)
int cx25821_vidioc_g_input(struct file *file, void *priv, unsigned int *i)
int cx25821_vidioc_s_input(struct file *file, void *priv, unsigned int i)
int cx25821_vidioc_g_frequency(struct file *file, void *priv, struct v4l2_frequency *f)
int cx25821_set_freq(struct cx25821_dev *dev, struct v4l2_frequency *f)
int cx25821_vidioc_s_frequency(struct file *file, void *priv, struct v4l2_frequency *f)
int cx25821_vidioc_g_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
int cx25821_vidioc_s_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
int cx25821_vidioc_g_tuner(struct file *file, void *priv, struct v4l2_tuner *t)
int cx25821_vidioc_s_tuner(struct file *file, void *priv, struct v4l2_tuner *t)
static const struct v4l2_queryctrl no_ctl = ;
static struct v4l2_queryctrl cx25821_ctls[] = ;
static const int CX25821_CTLS = ARRAY_SIZE(cx25821_ctls);
static int cx25821_ctrl_query(struct v4l2_queryctrl *qctrl)
int cx25821_vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qctrl)
static const struct v4l2_queryctrl *ctrl_by_id(unsigned int id)
int cx25821_vidioc_g_ctrl(struct file *file, void *priv, struct v4l2_control *ctl)
int cx25821_set_control(struct cx25821_dev *dev,
struct v4l2_control *ctl, int chan_num)
static void cx25821_init_controls(struct cx25821_dev *dev, int chan_num)
int cx25821_vidioc_cropcap(struct file *file, void *priv, struct v4l2_cropcap *cropcap)
int cx25821_vidioc_s_crop(struct file *file, void *priv, struct v4l2_crop *crop)
int cx25821_vidioc_g_crop(struct file *file, void *priv, struct v4l2_crop *crop)
int cx25821_vidioc_querystd(struct file *file, void *priv, v4l2_std_id * norm)
int cx25821_is_valid_width(u32 width, v4l2_std_id tvnorm)
int cx25821_is_valid_height(u32 height, v4l2_std_id tvnorm)
static long video_ioctl_upstream9(struct file *file, unsigned int cmd,
unsigned long arg)
static long video_ioctl_upstream10(struct file *file, unsigned int cmd,
unsigned long arg)
static long video_ioctl_upstream11(struct file *file, unsigned int cmd,
unsigned long arg)
static long video_ioctl_set(struct file *file, unsigned int cmd,
unsigned long arg)
static long cx25821_video_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct v4l2_file_operations video_fops = ;
static const struct v4l2_ioctl_ops video_ioctl_ops = ;
struct video_device cx25821_videoioctl_template = ;
