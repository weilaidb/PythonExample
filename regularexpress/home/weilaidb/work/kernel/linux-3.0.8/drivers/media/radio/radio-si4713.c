static int radio_nr = -1;
module_param(radio_nr, int, 0);
MODULE_PARM_DESC(radio_nr,
"Minor number for radio device (-1 ==> auto assign)");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eduardo Valentin <eduardo.valentin@nokia.com>");
MODULE_DESCRIPTION("Platform driver for Si4713 FM Radio Transmitter");
MODULE_VERSION("0.0.1");
struct radio_si4713_device ;
static const struct v4l2_file_operations radio_si4713_fops = ;
static int radio_si4713_fill_audout(struct v4l2_audioout *vao)
static int radio_si4713_enumaudout(struct file *file, void *priv,
struct v4l2_audioout *vao)
static int radio_si4713_g_audout(struct file *file, void *priv,
struct v4l2_audioout *vao)
static int radio_si4713_s_audout(struct file *file, void *priv,
struct v4l2_audioout *vao)
static int radio_si4713_querycap(struct file *file, void *priv,
struct v4l2_capability *capability)
static int radio_si4713_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static inline struct v4l2_device *get_v4l2_dev(struct file *file)
static int radio_si4713_g_ext_ctrls(struct file *file, void *p,
struct v4l2_ext_controls *vecs)
static int radio_si4713_s_ext_ctrls(struct file *file, void *p,
struct v4l2_ext_controls *vecs)
static int radio_si4713_g_ctrl(struct file *file, void *p,
struct v4l2_control *vc)
static int radio_si4713_s_ctrl(struct file *file, void *p,
struct v4l2_control *vc)
static int radio_si4713_g_modulator(struct file *file, void *p,
struct v4l2_modulator *vm)
static int radio_si4713_s_modulator(struct file *file, void *p,
struct v4l2_modulator *vm)
static int radio_si4713_g_frequency(struct file *file, void *p,
struct v4l2_frequency *vf)
static int radio_si4713_s_frequency(struct file *file, void *p,
struct v4l2_frequency *vf)
static long radio_si4713_default(struct file *file, void *p,
bool valid_prio, int cmd, void *arg)
static struct v4l2_ioctl_ops radio_si4713_ioctl_ops = ;
static struct video_device radio_si4713_vdev_template = ;
static int radio_si4713_pdriver_probe(struct platform_device *pdev)
static int __exit radio_si4713_pdriver_remove(struct platform_device *pdev)
static struct platform_driver radio_si4713_pdriver = ;
static int __init radio_si4713_module_init(void)
static void __exit radio_si4713_module_exit(void)
module_init(radio_si4713_module_init);
module_exit(radio_si4713_module_exit);
