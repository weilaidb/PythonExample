MODULE_AUTHOR("Dr. Henrik Seidel");
MODULE_DESCRIPTION("A driver for the Typhoon radio card (a.k.a. EcoRadio).");
MODULE_LICENSE("GPL");
#define CONFIG_RADIO_TYPHOON_PORT -1
#define CONFIG_RADIO_TYPHOON_MUTEFREQ 0
static int io = CONFIG_RADIO_TYPHOON_PORT;
static int radio_nr = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O address of the Typhoon card (0x316 or 0x336)");
module_param(radio_nr, int, 0);
static unsigned long mutefreq = CONFIG_RADIO_TYPHOON_MUTEFREQ;
module_param(mutefreq, ulong, 0);
MODULE_PARM_DESC(mutefreq, "Frequency used when muting the card (in kHz)");
#define RADIO_VERSION KERNEL_VERSION(0, 1, 1)
#define BANNER "Typhoon Radio Card driver v0.1.1\n"
struct typhoon ;
static struct typhoon typhoon_card;
static void typhoon_setvol_generic(struct typhoon *dev, int vol)
static int typhoon_setfreq_generic(struct typhoon *dev,
unsigned long frequency)
static int typhoon_setfreq(struct typhoon *dev, unsigned long frequency)
static void typhoon_mute(struct typhoon *dev)
static void typhoon_unmute(struct typhoon *dev)
static int typhoon_setvol(struct typhoon *dev, int vol)
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
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl (struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_log_status(struct file *file, void *priv)
static const struct v4l2_file_operations typhoon_fops = ;
static const struct v4l2_ioctl_ops typhoon_ioctl_ops = ;
static int __init typhoon_init(void)
static void __exit typhoon_exit(void)
module_init(typhoon_init);
module_exit(typhoon_exit);
