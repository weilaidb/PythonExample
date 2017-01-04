#define DEFAULT_WIDTH	640
#define DEFAULT_HEIGHT	480
#define is_streaming(ici, icd)				\
(((ici)->ops->init_videobuf) ?			\
(icd)->vb_vidq.streaming :			\
vb2_is_streaming(&(icd)->vb2_vidq))
static LIST_HEAD(hosts);
static LIST_HEAD(devices);
static DEFINE_MUTEX(list_lock);
static int soc_camera_power_set(struct soc_camera_device *icd,
struct soc_camera_link *icl,
int power_on)
const struct soc_camera_format_xlate *soc_camera_xlate_by_fourcc(
struct soc_camera_device *icd, unsigned int fourcc)
EXPORT_SYMBOL(soc_camera_xlate_by_fourcc);
unsigned long soc_camera_apply_sensor_flags(struct soc_camera_link *icl,
unsigned long flags)
EXPORT_SYMBOL(soc_camera_apply_sensor_flags);
#define pixfmtstr(x) (x) & 0xff, ((x) >> 8) & 0xff, ((x) >> 16) & 0xff, \
((x) >> 24) & 0xff
static int soc_camera_try_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int soc_camera_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int soc_camera_enum_input(struct file *file, void *priv,
struct v4l2_input *inp)
static int soc_camera_g_input(struct file *file, void *priv, unsigned int *i)
static int soc_camera_s_input(struct file *file, void *priv, unsigned int i)
static int soc_camera_s_std(struct file *file, void *priv, v4l2_std_id *a)
static int soc_camera_enum_fsizes(struct file *file, void *fh,
struct v4l2_frmsizeenum *fsize)
static int soc_camera_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int soc_camera_querybuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int soc_camera_qbuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int soc_camera_dqbuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int soc_camera_init_user_formats(struct soc_camera_device *icd)
static void soc_camera_free_user_formats(struct soc_camera_device *icd)
static int soc_camera_set_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int soc_camera_open(struct file *file)
static int soc_camera_close(struct file *file)
static ssize_t soc_camera_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static int soc_camera_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int soc_camera_poll(struct file *file, poll_table *pt)
void soc_camera_lock(struct vb2_queue *vq)
EXPORT_SYMBOL(soc_camera_lock);
void soc_camera_unlock(struct vb2_queue *vq)
EXPORT_SYMBOL(soc_camera_unlock);
static struct v4l2_file_operations soc_camera_fops = ;
static int soc_camera_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int soc_camera_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int soc_camera_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int soc_camera_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int soc_camera_streamon(struct file *file, void *priv,
enum v4l2_buf_type i)
static int soc_camera_streamoff(struct file *file, void *priv,
enum v4l2_buf_type i)
static int soc_camera_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int soc_camera_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int soc_camera_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int soc_camera_cropcap(struct file *file, void *fh,
struct v4l2_cropcap *a)
static int soc_camera_g_crop(struct file *file, void *fh,
struct v4l2_crop *a)
static int soc_camera_s_crop(struct file *file, void *fh,
struct v4l2_crop *a)
static int soc_camera_g_parm(struct file *file, void *fh,
struct v4l2_streamparm *a)
static int soc_camera_s_parm(struct file *file, void *fh,
struct v4l2_streamparm *a)
static int soc_camera_g_chip_ident(struct file *file, void *fh,
struct v4l2_dbg_chip_ident *id)
static int soc_camera_g_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
static int soc_camera_s_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
static void scan_add_host(struct soc_camera_host *ici)
static int soc_camera_init_i2c(struct soc_camera_device *icd,
struct soc_camera_link *icl)
static void soc_camera_free_i2c(struct soc_camera_device *icd)
#define soc_camera_init_i2c(icd, icl)	(-ENODEV)
#define soc_camera_free_i2c(icd)	do  while (0)
static int soc_camera_video_start(struct soc_camera_device *icd);
static int video_dev_create(struct soc_camera_device *icd);
static int soc_camera_probe(struct device *dev)
static int soc_camera_remove(struct device *dev)
static int soc_camera_suspend(struct device *dev, pm_message_t state)
static int soc_camera_resume(struct device *dev)
struct bus_type soc_camera_bus_type = ;
EXPORT_SYMBOL_GPL(soc_camera_bus_type);
static struct device_driver ic_drv = ;
static void dummy_release(struct device *dev)
static int default_cropcap(struct soc_camera_device *icd,
struct v4l2_cropcap *a)
static int default_g_crop(struct soc_camera_device *icd, struct v4l2_crop *a)
static int default_s_crop(struct soc_camera_device *icd, struct v4l2_crop *a)
static int default_g_parm(struct soc_camera_device *icd,
struct v4l2_streamparm *parm)
static int default_s_parm(struct soc_camera_device *icd,
struct v4l2_streamparm *parm)
static int default_enum_fsizes(struct soc_camera_device *icd,
struct v4l2_frmsizeenum *fsize)
static void soc_camera_device_init(struct device *dev, void *pdata)
int soc_camera_host_register(struct soc_camera_host *ici)
EXPORT_SYMBOL(soc_camera_host_register);
void soc_camera_host_unregister(struct soc_camera_host *ici)
EXPORT_SYMBOL(soc_camera_host_unregister);
static int soc_camera_device_register(struct soc_camera_device *icd)
static void soc_camera_device_unregister(struct soc_camera_device *icd)
static const struct v4l2_ioctl_ops soc_camera_ioctl_ops = ;
static int video_dev_create(struct soc_camera_device *icd)
static int soc_camera_video_start(struct soc_camera_device *icd)
static int __devinit soc_camera_pdrv_probe(struct platform_device *pdev)
static int __devexit soc_camera_pdrv_remove(struct platform_device *pdev)
static struct platform_driver __refdata soc_camera_pdrv = ;
static int __init soc_camera_init(void)
static void __exit soc_camera_exit(void)
module_init(soc_camera_init);
module_exit(soc_camera_exit);
MODULE_DESCRIPTION("Image capture bus driver");
MODULE_AUTHOR("Guennadi Liakhovetski <kernel@pengutronix.de>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:soc-camera-pdrv");
