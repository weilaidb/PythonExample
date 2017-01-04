MODULE_AUTHOR("M.Kirkwood");
MODULE_DESCRIPTION("A driver for the RadioTrack/RadioReveal radio card.");
MODULE_LICENSE("GPL");
#define CONFIG_RADIO_RTRACK_PORT -1
static int io = CONFIG_RADIO_RTRACK_PORT;
static int radio_nr = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O address of the RadioTrack card (0x20f or 0x30f)");
module_param(radio_nr, int, 0);
#define RADIO_VERSION KERNEL_VERSION(0, 0, 2)
struct rtrack
;
static struct rtrack rtrack_card;
static void rt_decvol(struct rtrack *rt)
static void rt_incvol(struct rtrack *rt)
static void rt_mute(struct rtrack *rt)
static int rt_setvol(struct rtrack *rt, int vol)
static void send_0_byte(struct rtrack *rt)
static void send_1_byte(struct rtrack *rt)
static int rt_setfreq(struct rtrack *rt, unsigned long freq)
static int rt_getsigstr(struct rtrack *rt)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *v)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_tuner(struct file *file, void *priv,
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
static const struct v4l2_file_operations rtrack_fops = ;
static const struct v4l2_ioctl_ops rtrack_ioctl_ops = ;
static int __init rtrack_init(void)
static void __exit rtrack_exit(void)
module_init(rtrack_init);
module_exit(rtrack_exit);
