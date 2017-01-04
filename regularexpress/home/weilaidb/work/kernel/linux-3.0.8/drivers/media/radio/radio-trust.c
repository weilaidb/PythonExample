MODULE_AUTHOR("Eric Lammerts, Russell Kroll, Quay Lu, Donald Song, Jason Lewis, Scott McGrath, William McGrath");
MODULE_DESCRIPTION("A driver for the Trust FM Radio card.");
MODULE_LICENSE("GPL");
#define CONFIG_RADIO_TRUST_PORT -1
static int io = CONFIG_RADIO_TRUST_PORT;
static int radio_nr = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O address of the Trust FM Radio card (0x350 or 0x358)");
module_param(radio_nr, int, 0);
#define RADIO_VERSION KERNEL_VERSION(0, 0, 2)
struct trust ;
static struct trust trust_card;
#define TDA7318_ADDR 0x88
#define TSA6060T_ADDR 0xc4
#define TR_DELAY do  while (0)
#define TR_SET_SCL outb(tr->ioval |= 2, tr->io)
#define TR_CLR_SCL outb(tr->ioval &= 0xfd, tr->io)
#define TR_SET_SDA outb(tr->ioval |= 1, tr->io)
#define TR_CLR_SDA outb(tr->ioval &= 0xfe, tr->io)
static void write_i2c(struct trust *tr, int n, ...)
static void tr_setvol(struct trust *tr, __u16 vol)
static int basstreble2chip[15] = ;
static void tr_setbass(struct trust *tr, __u16 bass)
static void tr_settreble(struct trust *tr, __u16 treble)
static void tr_setstereo(struct trust *tr, int stereo)
static void tr_setmute(struct trust *tr, int mute)
static int tr_getsigstr(struct trust *tr)
static int tr_getstereo(struct trust *tr)
static void tr_setfreq(struct trust *tr, unsigned long f)
static int vidioc_querycap(struct file *file, void *priv,
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
static const struct v4l2_file_operations trust_fops = ;
static const struct v4l2_ioctl_ops trust_ioctl_ops = ;
static int __init trust_init(void)
static void __exit cleanup_trust_module(void)
module_init(trust_init);
module_exit(cleanup_trust_module);
