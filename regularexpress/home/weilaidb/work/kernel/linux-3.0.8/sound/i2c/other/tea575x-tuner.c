MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Routines for control of TEA5757/5759 Philips AM/FM radio tuner chips");
MODULE_LICENSE("GPL");
static int radio_nr = -1;
module_param(radio_nr, int, 0);
#define RADIO_VERSION KERNEL_VERSION(0, 0, 2)
#define FREQ_LO		 (50UL * 16000)
#define FREQ_HI		(150UL * 16000)
#define TEA575X_BIT_SEARCH	(1<<24)
#define TEA575X_BIT_UPDOWN	(1<<23)
#define TEA575X_BIT_MONO	(1<<22)
#define TEA575X_BIT_BAND_MASK	(3<<20)
#define TEA575X_BIT_BAND_FM	(0<<20)
#define TEA575X_BIT_BAND_MW	(1<<20)
#define TEA575X_BIT_BAND_LW	(1<<21)
#define TEA575X_BIT_BAND_SW	(1<<22)
#define TEA575X_BIT_PORT_0	(1<<19)
#define TEA575X_BIT_PORT_1	(1<<18)
#define TEA575X_BIT_SEARCH_MASK	(3<<16)
#define TEA575X_BIT_SEARCH_5_28	     (0<<16)
#define TEA575X_BIT_SEARCH_10_40     (1<<16)
#define TEA575X_BIT_SEARCH_30_63     (2<<16)
#define TEA575X_BIT_SEARCH_150_1000  (3<<16)
#define TEA575X_BIT_DUMMY	(1<<15)
#define TEA575X_BIT_FREQ_MASK	0x7fff
static struct v4l2_queryctrl radio_qctrl[] = ;
static void snd_tea575x_write(struct snd_tea575x *tea, unsigned int val)
static unsigned int snd_tea575x_read(struct snd_tea575x *tea)
static void snd_tea575x_get_freq(struct snd_tea575x *tea)
static void snd_tea575x_set_freq(struct snd_tea575x *tea)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *v)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int snd_tea575x_exclusive_open(struct file *file)
static int snd_tea575x_exclusive_release(struct file *file)
static const struct v4l2_file_operations tea575x_fops = ;
static const struct v4l2_ioctl_ops tea575x_ioctl_ops = ;
static struct video_device tea575x_radio = ;
int snd_tea575x_init(struct snd_tea575x *tea)
void snd_tea575x_exit(struct snd_tea575x *tea)
static int __init alsa_tea575x_module_init(void)
static void __exit alsa_tea575x_module_exit(void)
module_init(alsa_tea575x_module_init)
module_exit(alsa_tea575x_module_exit)
EXPORT_SYMBOL(snd_tea575x_init);
EXPORT_SYMBOL(snd_tea575x_exit);
