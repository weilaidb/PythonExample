MODULE_AUTHOR("R.OFFERMANNS & others");
MODULE_DESCRIPTION("A driver for the TerraTec ActiveRadio Standalone radio card.");
MODULE_LICENSE("GPL");
#define CONFIG_RADIO_TERRATEC_PORT 0x590
static int io = CONFIG_RADIO_TERRATEC_PORT;
static int radio_nr = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O address of the TerraTec ActiveRadio card (0x590 or 0x591)");
module_param(radio_nr, int, 0);
#define RADIO_VERSION KERNEL_VERSION(0, 0, 2)
static struct v4l2_queryctrl radio_qctrl[] = ;
#define WRT_DIS 	0x00
#define CLK_OFF		0x00
#define IIC_DATA	0x01
#define IIC_CLK		0x02
#define DATA		0x04
#define CLK_ON 		0x08
#define WRT_EN		0x10
struct terratec
;
static struct terratec terratec_card;
static void tt_write_vol(struct terratec *tt, int volume)
static void tt_mute(struct terratec *tt)
static int tt_setvol(struct terratec *tt, int vol)
static int tt_setfreq(struct terratec *tt, unsigned long freq1)
static int tt_getsigstr(struct terratec *tt)
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
static const struct v4l2_file_operations terratec_fops = ;
static const struct v4l2_ioctl_ops terratec_ioctl_ops = ;
static int __init terratec_init(void)
static void __exit terratec_exit(void)
module_init(terratec_init);
module_exit(terratec_exit);
