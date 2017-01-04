#define OMAP24XXCAM_VERSION KERNEL_VERSION(0, 0, 0)
#define RESET_TIMEOUT_NS 10000
static void omap24xxcam_reset(struct omap24xxcam_device *cam);
static int omap24xxcam_sensor_if_enable(struct omap24xxcam_device *cam);
static void omap24xxcam_device_unregister(struct v4l2_int_device *s);
static int omap24xxcam_remove(struct platform_device *pdev);
static int video_nr = -1;
static int capture_mem = 1280 * 960 * 2 * 2;
static struct v4l2_int_device omap24xxcam;
static void omap24xxcam_clock_put(struct omap24xxcam_device *cam)
static int omap24xxcam_clock_get(struct omap24xxcam_device *cam)
static void omap24xxcam_clock_on(struct omap24xxcam_device *cam)
static void omap24xxcam_clock_off(struct omap24xxcam_device *cam)
static void omap24xxcam_core_xclk_set(const struct omap24xxcam_device *cam,
u32 xclk)
static void omap24xxcam_core_hwinit(const struct omap24xxcam_device *cam)
static void omap24xxcam_core_enable(const struct omap24xxcam_device *cam)
static void omap24xxcam_core_disable(const struct omap24xxcam_device *cam)
static void omap24xxcam_core_isr(struct omap24xxcam_device *cam)
static void omap24xxcam_vbq_free_mmap_buffer(struct videobuf_buffer *vb)
static void omap24xxcam_vbq_free_mmap_buffers(struct videobuf_queue *vbq)
static int omap24xxcam_vbq_alloc_mmap_buffer(struct videobuf_buffer *vb)
static int omap24xxcam_vbq_alloc_mmap_buffers(struct videobuf_queue *vbq,
unsigned int count)
static void omap24xxcam_vbq_complete(struct omap24xxcam_sgdma *sgdma,
u32 csr, void *arg)
static void omap24xxcam_vbq_release(struct videobuf_queue *vbq,
struct videobuf_buffer *vb)
static int omap24xxcam_vbq_setup(struct videobuf_queue *vbq, unsigned int *cnt,
unsigned int *size)
static int omap24xxcam_dma_iolock(struct videobuf_queue *vbq,
struct videobuf_dmabuf *dma)
static int omap24xxcam_vbq_prepare(struct videobuf_queue *vbq,
struct videobuf_buffer *vb,
enum v4l2_field field)
static void omap24xxcam_vbq_queue(struct videobuf_queue *vbq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops omap24xxcam_vbq_ops = ;
static void omap24xxcam_poweron_reset(struct omap24xxcam_device *cam)
static void omap24xxcam_hwinit(struct omap24xxcam_device *cam)
static void omap24xxcam_stalled_dma_reset(unsigned long data)
static void omap24xxcam_capture_stop(struct omap24xxcam_device *cam)
static void omap24xxcam_capture_cont(struct omap24xxcam_device *cam)
static ssize_t
omap24xxcam_streaming_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(streaming, S_IRUGO, omap24xxcam_streaming_show, NULL);
static void omap24xxcam_reset(struct omap24xxcam_device *cam)
static irqreturn_t omap24xxcam_isr(int irq, void *arg)
static int omap24xxcam_sensor_if_enable(struct omap24xxcam_device *cam)
static void omap24xxcam_sensor_if_disable(const struct omap24xxcam_device *cam)
static int omap24xxcam_sensor_init(struct omap24xxcam_device *cam)
static void omap24xxcam_sensor_exit(struct omap24xxcam_device *cam)
static void omap24xxcam_sensor_disable(struct omap24xxcam_device *cam)
static int omap24xxcam_sensor_enable(struct omap24xxcam_device *cam)
static void omap24xxcam_sensor_reset_work(struct work_struct *work)
static int vidioc_querycap(struct file *file, void *fh,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_reqbufs(struct file *file, void *fh,
struct v4l2_requestbuffers *b)
static int vidioc_querybuf(struct file *file, void *fh,
struct v4l2_buffer *b)
static int vidioc_qbuf(struct file *file, void *fh, struct v4l2_buffer *b)
static int vidioc_dqbuf(struct file *file, void *fh, struct v4l2_buffer *b)
static int vidioc_streamon(struct file *file, void *fh, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *fh, enum v4l2_buf_type i)
static int vidioc_enum_input(struct file *file, void *fh,
struct v4l2_input *inp)
static int vidioc_g_input(struct file *file, void *fh, unsigned int *i)
static int vidioc_s_input(struct file *file, void *fh, unsigned int i)
static int vidioc_queryctrl(struct file *file, void *fh,
struct v4l2_queryctrl *a)
static int vidioc_g_ctrl(struct file *file, void *fh,
struct v4l2_control *a)
static int vidioc_s_ctrl(struct file *file, void *fh,
struct v4l2_control *a)
static int vidioc_g_parm(struct file *file, void *fh,
struct v4l2_streamparm *a)
static int vidioc_s_parm(struct file *file, void *fh,
struct v4l2_streamparm *a)
static unsigned int omap24xxcam_poll(struct file *file,
struct poll_table_struct *wait)
static int omap24xxcam_mmap_buffers(struct file *file,
struct vm_area_struct *vma)
static int omap24xxcam_mmap(struct file *file, struct vm_area_struct *vma)
static int omap24xxcam_open(struct file *file)
static int omap24xxcam_release(struct file *file)
static struct v4l2_file_operations omap24xxcam_fops = ;
static int omap24xxcam_suspend(struct platform_device *pdev, pm_message_t state)
static int omap24xxcam_resume(struct platform_device *pdev)
static const struct v4l2_ioctl_ops omap24xxcam_ioctl_fops = ;
static int omap24xxcam_device_register(struct v4l2_int_device *s)
static void omap24xxcam_device_unregister(struct v4l2_int_device *s)
static struct v4l2_int_master omap24xxcam_master = ;
static struct v4l2_int_device omap24xxcam = ;
static int __devinit omap24xxcam_probe(struct platform_device *pdev)
static int omap24xxcam_remove(struct platform_device *pdev)
static struct platform_driver omap24xxcam_driver = ;
static int __init omap24xxcam_init(void)
static void __exit omap24xxcam_cleanup(void)
MODULE_AUTHOR("Sakari Ailus <sakari.ailus@nokia.com>");
MODULE_DESCRIPTION("OMAP24xx Video for Linux camera driver");
MODULE_LICENSE("GPL");
module_param(video_nr, int, 0);
MODULE_PARM_DESC(video_nr,
"Minor number for video device (-1 ==> auto assign)");
module_param(capture_mem, int, 0);
MODULE_PARM_DESC(capture_mem, "Maximum amount of memory for capture "
"buffers (default 4800kiB)");
module_init(omap24xxcam_init);
module_exit(omap24xxcam_cleanup);
