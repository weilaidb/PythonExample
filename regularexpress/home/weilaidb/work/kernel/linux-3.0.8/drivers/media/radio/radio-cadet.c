MODULE_AUTHOR("Fred Gleason, Russell Kroll, Quay Lu, Donald Song, Jason Lewis, Scott McGrath, William McGrath");
MODULE_DESCRIPTION("A driver for the ADS Cadet AM/FM/RDS radio card.");
MODULE_LICENSE("GPL");
static int io = -1;
static int radio_nr = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O address of Cadet card (0x330,0x332,0x334,0x336,0x338,0x33a,0x33c,0x33e)");
module_param(radio_nr, int, 0);
#define CADET_VERSION KERNEL_VERSION(0, 3, 3)
#define RDS_BUFFER 256
#define RDS_RX_FLAG 1
#define MBS_RX_FLAG 2
struct cadet ;
static struct cadet cadet_card;
static __u16 sigtable[2][4] = ;
static int cadet_getstereo(struct cadet *dev)
static unsigned cadet_gettune(struct cadet *dev)
static unsigned cadet_getfreq(struct cadet *dev)
static void cadet_settune(struct cadet *dev, unsigned fifo)
static void cadet_setfreq(struct cadet *dev, unsigned freq)
static int cadet_getvol(struct cadet *dev)
static void cadet_setvol(struct cadet *dev, int vol)
static void cadet_handler(unsigned long data)
static ssize_t cadet_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
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
static int cadet_open(struct file *file)
static int cadet_release(struct file *file)
static unsigned int cadet_poll(struct file *file, struct poll_table_struct *wait)
static const struct v4l2_file_operations cadet_fops = ;
static const struct v4l2_ioctl_ops cadet_ioctl_ops = ;
static struct pnp_device_id cadet_pnp_devices[] = ;
MODULE_DEVICE_TABLE(pnp, cadet_pnp_devices);
static int cadet_pnp_probe(struct pnp_dev *dev, const struct pnp_device_id *dev_id)
static struct pnp_driver cadet_pnp_driver = ;
static struct pnp_driver cadet_pnp_driver;
static void cadet_probe(struct cadet *dev)
static int __init cadet_init(void)
static void __exit cadet_exit(void)
module_init(cadet_init);
module_exit(cadet_exit);
