#define DRIVER_NAME "timb-radio"
struct timbradio ;
static int timbradio_vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *v)
static int timbradio_vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int timbradio_vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int timbradio_vidioc_g_input(struct file *filp, void *priv,
unsigned int *i)
static int timbradio_vidioc_s_input(struct file *filp, void *priv,
unsigned int i)
static int timbradio_vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int timbradio_vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int timbradio_vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int timbradio_vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int timbradio_vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int timbradio_vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int timbradio_vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static const struct v4l2_ioctl_ops timbradio_ioctl_ops = ;
static const struct v4l2_file_operations timbradio_fops = ;
static int __devinit timbradio_probe(struct platform_device *pdev)
static int __devexit timbradio_remove(struct platform_device *pdev)
static struct platform_driver timbradio_platform_driver = ;
static int __init timbradio_init(void)
static void __exit timbradio_exit(void)
module_init(timbradio_init);
module_exit(timbradio_exit);
MODULE_DESCRIPTION("Timberdale Radio driver");
MODULE_AUTHOR("Mocean Laboratories <info@mocean-labs.com>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:"DRIVER_NAME);
