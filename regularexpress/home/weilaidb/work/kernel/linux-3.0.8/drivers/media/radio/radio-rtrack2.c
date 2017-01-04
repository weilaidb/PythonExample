MODULE_AUTHOR("Ben Pfaff");
MODULE_DESCRIPTION("A driver for the RadioTrack II radio card.");
MODULE_LICENSE("GPL");
#define CONFIG_RADIO_RTRACK2_PORT -1
static int io = CONFIG_RADIO_RTRACK2_PORT;
static int radio_nr = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O address of the RadioTrack card (0x20c or 0x30c)");
module_param(radio_nr, int, 0);
#define RADIO_VERSION KERNEL_VERSION(0, 0, 2)
struct rtrack2
;
static struct rtrack2 rtrack2_card;
static void rt_mute(struct rtrack2 *dev)
static void rt_unmute(struct rtrack2 *dev)
static void zero(struct rtrack2 *dev)
static void one(struct rtrack2 *dev)
static int rt_setfreq(struct rtrack2 *dev, unsigned long freq)
static int vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *v)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int rt_getsigstr(struct rtrack2 *dev)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_g_frequency(struct file *file, void *priv,
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
static const struct v4l2_file_operations rtrack2_fops = ;
static const struct v4l2_ioctl_ops rtrack2_ioctl_ops = ;
static int __init rtrack2_init(void)
static void __exit rtrack2_exit(void)
module_init(rtrack2_init);
module_exit(rtrack2_exit);
