MODULE_AUTHOR("Russell Kroll, Quay Lu, Donald Song, Jason Lewis, Scott McGrath, William McGrath");
MODULE_DESCRIPTION("A driver for the Aztech radio card.");
MODULE_LICENSE("GPL");
#define CONFIG_RADIO_AZTECH_PORT -1
static int io = CONFIG_RADIO_AZTECH_PORT;
static int radio_nr = -1;
static int radio_wait_time = 1000;
module_param(io, int, 0);
module_param(radio_nr, int, 0);
MODULE_PARM_DESC(io, "I/O address of the Aztech card (0x350 or 0x358)");
#define RADIO_VERSION KERNEL_VERSION(0, 0, 2)
struct aztech
;
static struct aztech aztech_card;
static int volconvert(int level)
static void send_0_byte(struct aztech *az)
static void send_1_byte(struct aztech *az)
static int az_setvol(struct aztech *az, int vol)
static int az_getsigstr(struct aztech *az)
static int az_getstereo(struct aztech *az)
static int az_setfreq(struct aztech *az, unsigned long frequency)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *v)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
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
static const struct v4l2_file_operations aztech_fops = ;
static const struct v4l2_ioctl_ops aztech_ioctl_ops = ;
static int __init aztech_init(void)
static void __exit aztech_exit(void)
module_init(aztech_init);
module_exit(aztech_exit);
