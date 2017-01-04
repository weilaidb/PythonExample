#define DRIVER_VERSION	"v0.01"
#define RADIO_VERSION	KERNEL_VERSION(0, 0, 1)
#define DRIVER_AUTHOR	"Fabio Belavenuto <belavenuto@gmail.com>"
#define DRIVER_DESC	"A driver for the TEA5764 radio chip for EZX Phones."
#define PINFO(format, ...)\
printk(KERN_INFO KBUILD_MODNAME ": "\
DRIVER_VERSION ": " format "\n", ## __VA_ARGS__)
#define PWARN(format, ...)\
printk(KERN_WARNING KBUILD_MODNAME ": "\
DRIVER_VERSION ": " format "\n", ## __VA_ARGS__)
# define PDEBUG(format, ...)\
printk(KERN_DEBUG KBUILD_MODNAME ": "\
DRIVER_VERSION ": " format "\n", ## __VA_ARGS__)
#define FREQ_MIN  87500
#define FREQ_MAX 108000
#define FREQ_MUL 16
#define TEA5764_MANID		0x002b
#define TEA5764_CHIPID		0x5764
#define TEA5764_INTREG_BLMSK	0x0001
#define TEA5764_INTREG_FRRMSK	0x0002
#define TEA5764_INTREG_LEVMSK	0x0008
#define TEA5764_INTREG_IFMSK	0x0010
#define TEA5764_INTREG_BLMFLAG	0x0100
#define TEA5764_INTREG_FRRFLAG	0x0200
#define TEA5764_INTREG_LEVFLAG	0x0800
#define TEA5764_INTREG_IFFLAG	0x1000
#define TEA5764_FRQSET_SUD	0x8000
#define TEA5764_FRQSET_SM	0x4000
#define TEA5764_TNCTRL_PUPD1	0x8000
#define TEA5764_TNCTRL_PUPD0	0x4000
#define TEA5764_TNCTRL_BLIM	0x2000
#define TEA5764_TNCTRL_SWPM	0x1000
#define TEA5764_TNCTRL_IFCTC	0x0800
#define TEA5764_TNCTRL_AFM	0x0400
#define TEA5764_TNCTRL_SMUTE	0x0200
#define TEA5764_TNCTRL_SNC	0x0100
#define TEA5764_TNCTRL_MU	0x0080
#define TEA5764_TNCTRL_SSL1	0x0040
#define TEA5764_TNCTRL_SSL0	0x0020
#define TEA5764_TNCTRL_HLSI	0x0010
#define TEA5764_TNCTRL_MST	0x0008
#define TEA5764_TNCTRL_SWP	0x0004
#define TEA5764_TNCTRL_DTC	0x0002
#define TEA5764_TNCTRL_AHLSI	0x0001
#define TEA5764_TUNCHK_LEVEL(x)	(((x) & 0x00F0) >> 4)
#define TEA5764_TUNCHK_IFCNT(x) (((x) & 0xFE00) >> 9)
#define TEA5764_TUNCHK_TUNTO	0x0100
#define TEA5764_TUNCHK_LD	0x0008
#define TEA5764_TUNCHK_STEREO	0x0004
#define TEA5764_TESTREG_TRIGFR	0x0800
struct tea5764_regs  __attribute__ ((packed));
struct tea5764_write_regs  __attribute__ ((packed));
#define RADIO_TEA5764_XTAL 1
static int radio_nr = -1;
static int use_xtal = RADIO_TEA5764_XTAL;
struct tea5764_device ;
int tea5764_i2c_read(struct tea5764_device *radio)
int tea5764_i2c_write(struct tea5764_device *radio)
static struct v4l2_queryctrl radio_qctrl[] = ;
static void tea5764_power_up(struct tea5764_device *radio)
static void tea5764_power_down(struct tea5764_device *radio)
static void tea5764_set_freq(struct tea5764_device *radio, int freq)
static int tea5764_get_freq(struct tea5764_device *radio)
static void tea5764_tune(struct tea5764_device *radio, int freq)
static void tea5764_set_audout_mode(struct tea5764_device *radio, int audmode)
static int tea5764_get_audout_mode(struct tea5764_device *radio)
static void tea5764_mute(struct tea5764_device *radio, int on)
static int tea5764_is_muted(struct tea5764_device *radio)
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
static const struct v4l2_file_operations tea5764_fops = ;
static const struct v4l2_ioctl_ops tea5764_ioctl_ops = ;
static struct video_device tea5764_radio_template = ;
static int __devinit tea5764_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tea5764_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id tea5764_id[] = ;
MODULE_DEVICE_TABLE(i2c, tea5764_id);
static struct i2c_driver tea5764_i2c_driver = ;
static int __init tea5764_init(void)
static void __exit tea5764_exit(void)
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(use_xtal, int, 1);
MODULE_PARM_DESC(use_xtal, "Chip have a xtal connected in board");
module_param(radio_nr, int, 0);
MODULE_PARM_DESC(radio_nr, "video4linux device number to use");
module_init(tea5764_init);
module_exit(tea5764_exit);
