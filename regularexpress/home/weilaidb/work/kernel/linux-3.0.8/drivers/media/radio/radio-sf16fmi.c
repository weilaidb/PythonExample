MODULE_AUTHOR("Petr Vandrovec, vandrove@vc.cvut.cz and M. Kirkwood");
MODULE_DESCRIPTION("A driver for the SF16-FMI and SF16-FMP radio.");
MODULE_LICENSE("GPL");
static int io = -1;
static int radio_nr = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O address of the SF16-FMI or SF16-FMP card (0x284 or 0x384)");
module_param(radio_nr, int, 0);
#define RADIO_VERSION KERNEL_VERSION(0, 0, 2)
struct fmi
;
static struct fmi fmi_card;
static struct pnp_dev *dev;
bool pnp_attached;
#define RSF16_ENCODE(x)	((x) / 800 + 214)
#define RSF16_MINFREQ (87 * 16000)
#define RSF16_MAXFREQ (108 * 16000)
static void outbits(int bits, unsigned int data, int io)
static inline void fmi_mute(struct fmi *fmi)
static inline void fmi_unmute(struct fmi *fmi)
static inline int fmi_setfreq(struct fmi *fmi, unsigned long freq)
static inline int fmi_getsigstr(struct fmi *fmi)
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
static const struct v4l2_file_operations fmi_fops = ;
static const struct v4l2_ioctl_ops fmi_ioctl_ops = ;
static struct isapnp_device_id id_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(isapnp, id_table);
static int __init isapnp_fmi_probe(void)
static int __init fmi_init(void)
static void __exit fmi_exit(void)
module_init(fmi_init);
module_exit(fmi_exit);
