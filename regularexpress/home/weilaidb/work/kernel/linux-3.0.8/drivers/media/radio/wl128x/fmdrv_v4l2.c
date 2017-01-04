static struct video_device *gradio_dev;
static u8 radio_disconnected;
static ssize_t fm_v4l2_fops_read(struct file *file, char __user * buf,
size_t count, loff_t *ppos)
static ssize_t fm_v4l2_fops_write(struct file *file, const char __user * buf,
size_t count, loff_t *ppos)
static u32 fm_v4l2_fops_poll(struct file *file, struct poll_table_struct *pts)
static int fm_v4l2_fops_open(struct file *file)
static int fm_v4l2_fops_release(struct file *file)
static int fm_v4l2_vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *capability)
static int fm_g_volatile_ctrl(struct v4l2_ctrl *ctrl)
static int fm_v4l2_s_ctrl(struct v4l2_ctrl *ctrl)
static int fm_v4l2_vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *audio)
static int fm_v4l2_vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *audio)
static int fm_v4l2_vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *tuner)
static int fm_v4l2_vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *tuner)
static int fm_v4l2_vidioc_g_freq(struct file *file, void *priv,
struct v4l2_frequency *freq)
static int fm_v4l2_vidioc_s_freq(struct file *file, void *priv,
struct v4l2_frequency *freq)
static int fm_v4l2_vidioc_s_hw_freq_seek(struct file *file, void *priv,
struct v4l2_hw_freq_seek *seek)
static int fm_v4l2_vidioc_g_modulator(struct file *file, void *priv,
struct v4l2_modulator *mod)
static int fm_v4l2_vidioc_s_modulator(struct file *file, void *priv,
struct v4l2_modulator *mod)
static const struct v4l2_file_operations fm_drv_fops = ;
static const struct v4l2_ctrl_ops fm_ctrl_ops = ;
static const struct v4l2_ioctl_ops fm_drv_ioctl_ops = ;
static struct video_device fm_viddev_template = ;
int fm_v4l2_init_video_device(struct fmdev *fmdev, int radio_nr)
void *fm_v4l2_deinit_video_device(void)
