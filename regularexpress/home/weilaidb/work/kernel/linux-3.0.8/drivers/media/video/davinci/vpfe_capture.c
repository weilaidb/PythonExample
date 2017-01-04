static int debug;
static u32 numbuffers = 3;
static u32 bufsize = (720 * 576 * 2);
module_param(numbuffers, uint, S_IRUGO);
module_param(bufsize, uint, S_IRUGO);
module_param(debug, int, 0644);
MODULE_PARM_DESC(numbuffers, "buffer count (default:3)");
MODULE_PARM_DESC(bufsize, "buffer size in bytes (default:720 x 576 x 2)");
MODULE_PARM_DESC(debug, "Debug level 0-1");
MODULE_DESCRIPTION("VPFE Video for Linux Capture Driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Texas Instruments");
struct vpfe_standard ;
struct ccdc_config ;
static struct vpfe_config_params config_params = ;
static struct ccdc_hw_device *ccdc_dev;
static DEFINE_MUTEX(ccdc_lock);
static struct ccdc_config *ccdc_cfg;
const struct vpfe_standard vpfe_standards[] = ;
static const struct vpfe_pixel_format vpfe_pix_fmts[] = ;
static const struct vpfe_pixel_format *vpfe_lookup_pix_format(u32 pix_format)
int vpfe_register_ccdc_device(struct ccdc_hw_device *dev)
EXPORT_SYMBOL(vpfe_register_ccdc_device);
void vpfe_unregister_ccdc_device(struct ccdc_hw_device *dev)
EXPORT_SYMBOL(vpfe_unregister_ccdc_device);
static int vpfe_get_ccdc_image_format(struct vpfe_device *vpfe_dev,
struct v4l2_format *f)
static int vpfe_config_ccdc_image_format(struct vpfe_device *vpfe_dev)
static int vpfe_config_image_format(struct vpfe_device *vpfe_dev,
const v4l2_std_id *std_id)
static int vpfe_initialize_device(struct vpfe_device *vpfe_dev)
static int vpfe_open(struct file *file)
static void vpfe_schedule_next_buffer(struct vpfe_device *vpfe_dev)
static void vpfe_schedule_bottom_field(struct vpfe_device *vpfe_dev)
static void vpfe_process_buffer_complete(struct vpfe_device *vpfe_dev)
static irqreturn_t vpfe_isr(int irq, void *dev_id)
static irqreturn_t vdint1_isr(int irq, void *dev_id)
static void vpfe_detach_irq(struct vpfe_device *vpfe_dev)
static int vpfe_attach_irq(struct vpfe_device *vpfe_dev)
static void vpfe_stop_ccdc_capture(struct vpfe_device *vpfe_dev)
static int vpfe_release(struct file *file)
static int vpfe_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int vpfe_poll(struct file *file, poll_table *wait)
static const struct v4l2_file_operations vpfe_fops = ;
static const struct vpfe_pixel_format *
vpfe_check_format(struct vpfe_device *vpfe_dev,
struct v4l2_pix_format *pixfmt)
static int vpfe_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vpfe_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int vpfe_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *fmt)
static int vpfe_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int vpfe_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vpfe_get_subdev_input_index(struct vpfe_device *vpfe_dev,
int *subdev_index,
int *subdev_input_index,
int app_input_index)
static int vpfe_get_app_input_index(struct vpfe_device *vpfe_dev,
int *app_input_index)
static int vpfe_enum_input(struct file *file, void *priv,
struct v4l2_input *inp)
static int vpfe_g_input(struct file *file, void *priv, unsigned int *index)
static int vpfe_s_input(struct file *file, void *priv, unsigned int index)
static int vpfe_querystd(struct file *file, void *priv, v4l2_std_id *std_id)
static int vpfe_s_std(struct file *file, void *priv, v4l2_std_id *std_id)
static int vpfe_g_std(struct file *file, void *priv, v4l2_std_id *std_id)
static int vpfe_videobuf_setup(struct videobuf_queue *vq,
unsigned int *count,
unsigned int *size)
static int vpfe_videobuf_prepare(struct videobuf_queue *vq,
struct videobuf_buffer *vb,
enum v4l2_field field)
static void vpfe_videobuf_queue(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void vpfe_videobuf_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops vpfe_videobuf_qops = ;
static int vpfe_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *req_buf)
static int vpfe_querybuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int vpfe_qbuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int vpfe_dqbuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int vpfe_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qctrl)
static int vpfe_g_ctrl(struct file *file, void *priv, struct v4l2_control *ctrl)
static int vpfe_s_ctrl(struct file *file, void *priv, struct v4l2_control *ctrl)
static void vpfe_calculate_offsets(struct vpfe_device *vpfe_dev)
static void vpfe_start_ccdc_capture(struct vpfe_device *vpfe_dev)
static int vpfe_streamon(struct file *file, void *priv,
enum v4l2_buf_type buf_type)
static int vpfe_streamoff(struct file *file, void *priv,
enum v4l2_buf_type buf_type)
static int vpfe_cropcap(struct file *file, void *priv,
struct v4l2_cropcap *crop)
static int vpfe_g_crop(struct file *file, void *priv,
struct v4l2_crop *crop)
static int vpfe_s_crop(struct file *file, void *priv,
struct v4l2_crop *crop)
static long vpfe_param_handler(struct file *file, void *priv,
bool valid_prio, int cmd, void *param)
static const struct v4l2_ioctl_ops vpfe_ioctl_ops = ;
static struct vpfe_device *vpfe_initialize(void)
static __init int vpfe_probe(struct platform_device *pdev)
static int __devexit vpfe_remove(struct platform_device *pdev)
static int vpfe_suspend(struct device *dev)
static int vpfe_resume(struct device *dev)
static const struct dev_pm_ops vpfe_dev_pm_ops = ;
static struct platform_driver vpfe_driver = ;
static __init int vpfe_init(void)
static void vpfe_cleanup(void)
module_init(vpfe_init);
module_exit(vpfe_cleanup);
