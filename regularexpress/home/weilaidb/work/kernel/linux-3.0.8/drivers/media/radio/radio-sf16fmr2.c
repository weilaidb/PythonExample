MODULE_AUTHOR("Ziglio Frediano, freddy77@angelfire.com");
MODULE_DESCRIPTION("A driver for the SF16FMR2 radio.");
MODULE_LICENSE("GPL");
static int io = 0x384;
static int radio_nr = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O address of the SF16FMR2 card (should be 0x384, if do not work try 0x284)");
module_param(radio_nr, int, 0);
#define RADIO_VERSION KERNEL_VERSION(0,0,2)
#define AUD_VOL_INDEX 1
#undef DEBUG
# define  debug_print(s) printk s
# define  debug_print(s)
struct fmr2
;
static struct fmr2 fmr2_card;
#define RSF16_ENCODE(x)	((x) / 200 + 856)
#define RSF16_MINFREQ (87 * 16000)
#define RSF16_MAXFREQ (108 * 16000)
static inline void wait(int n, int io)
static void outbits(int bits, unsigned int data, int nWait, int io)
static inline void fmr2_mute(int io)
static inline void fmr2_unmute(int io)
static inline int fmr2_stereo_mode(int io)
static int fmr2_product_info(struct fmr2 *dev)
static inline int fmr2_getsigstr(struct fmr2 *dev)
static int fmr2_setfreq(struct fmr2 *dev)
static int fmr2_setvolume(struct fmr2 *dev)
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
static const struct v4l2_file_operations fmr2_fops = ;
static const struct v4l2_ioctl_ops fmr2_ioctl_ops = ;
static int __init fmr2_init(void)
static void __exit fmr2_exit(void)
module_init(fmr2_init);
module_exit(fmr2_exit);
static int __init fmr2_setup_io(char *str)
__setup("sf16fmr2=", fmr2_setup_io);
