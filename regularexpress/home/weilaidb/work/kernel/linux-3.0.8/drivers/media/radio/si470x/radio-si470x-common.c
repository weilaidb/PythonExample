static unsigned short space = 2;
module_param(space, ushort, 0444);
MODULE_PARM_DESC(space, "Spacing: 0=200kHz 1=100kHz *2=50kHz*");
static unsigned short band = 1;
module_param(band, ushort, 0444);
MODULE_PARM_DESC(band, "Band: 0=87.5..108MHz *1=76..108MHz* 2=76..90MHz");
static unsigned short de = 1;
module_param(de, ushort, 0444);
MODULE_PARM_DESC(de, "De-emphasis: 0=75us *1=50us*");
static unsigned int tune_timeout = 3000;
module_param(tune_timeout, uint, 0644);
MODULE_PARM_DESC(tune_timeout, "Tune timeout: *3000*");
static unsigned int seek_timeout = 5000;
module_param(seek_timeout, uint, 0644);
MODULE_PARM_DESC(seek_timeout, "Seek timeout: *5000*");
static int si470x_set_chan(struct si470x_device *radio, unsigned short chan)
static int si470x_get_freq(struct si470x_device *radio, unsigned int *freq)
int si470x_set_freq(struct si470x_device *radio, unsigned int freq)
static int si470x_set_seek(struct si470x_device *radio,
unsigned int wrap_around, unsigned int seek_upward)
int si470x_start(struct si470x_device *radio)
int si470x_stop(struct si470x_device *radio)
static int si470x_rds_on(struct si470x_device *radio)
static ssize_t si470x_fops_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int si470x_fops_poll(struct file *file,
struct poll_table_struct *pts)
static const struct v4l2_file_operations si470x_fops = ;
static int si470x_vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int si470x_vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int si470x_vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int si470x_vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *audio)
static int si470x_vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *tuner)
static int si470x_vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *tuner)
static int si470x_vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *freq)
static int si470x_vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *freq)
static int si470x_vidioc_s_hw_freq_seek(struct file *file, void *priv,
struct v4l2_hw_freq_seek *seek)
static const struct v4l2_ioctl_ops si470x_ioctl_ops = ;
struct video_device si470x_viddev_template = ;
