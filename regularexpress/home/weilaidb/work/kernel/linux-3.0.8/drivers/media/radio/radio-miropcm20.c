static int radio_nr = -1;
module_param(radio_nr, int, 0);
MODULE_PARM_DESC(radio_nr, "Set radio device number (/dev/radioX).  Default: -1 (autodetect)");
static int mono;
module_param(mono, bool, 0);
MODULE_PARM_DESC(mono, "Force tuner into mono mode.");
struct pcm20 ;
static struct pcm20 pcm20_card = ;
static int pcm20_mute(struct pcm20 *dev, unsigned char mute)
static int pcm20_stereo(struct pcm20 *dev, unsigned char stereo)
static int pcm20_setfreq(struct pcm20 *dev, unsigned long freq)
static const struct v4l2_file_operations pcm20_fops = ;
static int vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *v)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static const struct v4l2_ioctl_ops pcm20_ioctl_ops = ;
static int __init pcm20_init(void)
MODULE_AUTHOR("Ruurd Reitsma, Krzysztof Helt");
MODULE_DESCRIPTION("A driver for the Miro PCM20 radio card.");
MODULE_LICENSE("GPL");
static void __exit pcm20_cleanup(void)
module_init(pcm20_init);
module_exit(pcm20_cleanup);
