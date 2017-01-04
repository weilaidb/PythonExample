static struct saa7164_tvnorm saa7164_tvnorms[] = ;
static const u32 saa7164_v4l2_ctrls[] = ;
static void saa7164_vbi_configure(struct saa7164_port *port)
static int saa7164_vbi_buffers_dealloc(struct saa7164_port *port)
static int saa7164_vbi_buffers_alloc(struct saa7164_port *port)
static int saa7164_vbi_initialize(struct saa7164_port *port)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *id)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctl)
static int saa7164_get_ctrl(struct saa7164_port *port,
struct v4l2_ext_control *ctrl)
static int vidioc_g_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static int saa7164_try_ctrl(struct v4l2_ext_control *ctrl, int ac3)
static int vidioc_try_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static int saa7164_set_ctrl(struct saa7164_port *port,
struct v4l2_ext_control *ctrl)
static int vidioc_s_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_log_status(struct file *file, void *priv)
static int fill_queryctrl(struct saa7164_vbi_params *params,
struct v4l2_queryctrl *c)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *c)
static int saa7164_vbi_stop_port(struct saa7164_port *port)
static int saa7164_vbi_acquire_port(struct saa7164_port *port)
static int saa7164_vbi_pause_port(struct saa7164_port *port)
static int saa7164_vbi_stop_streaming(struct saa7164_port *port)
static int saa7164_vbi_start_streaming(struct saa7164_port *port)
int saa7164_vbi_fmt(struct file *file, void *priv, struct v4l2_format *f)
static int fops_open(struct file *file)
static int fops_release(struct file *file)
struct saa7164_user_buffer *saa7164_vbi_next_buf(struct saa7164_port *port)
static ssize_t fops_read(struct file *file, char __user *buffer,
size_t count, loff_t *pos)
static unsigned int fops_poll(struct file *file, poll_table *wait)
static const struct v4l2_file_operations vbi_fops = ;
static const struct v4l2_ioctl_ops vbi_ioctl_ops = ;
static struct video_device saa7164_vbi_template = ;
static struct video_device *saa7164_vbi_alloc(
struct saa7164_port *port,
struct pci_dev *pci,
struct video_device *template,
char *type)
int saa7164_vbi_register(struct saa7164_port *port)
void saa7164_vbi_unregister(struct saa7164_port *port)
