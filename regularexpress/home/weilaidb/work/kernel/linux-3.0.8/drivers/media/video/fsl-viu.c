#define DRV_NAME		"fsl_viu"
#define VIU_MAJOR_VERSION	0
#define VIU_MINOR_VERSION	5
#define VIU_RELEASE		0
#define VIU_VERSION		KERNEL_VERSION(VIU_MAJOR_VERSION, \
VIU_MINOR_VERSION, \
VIU_RELEASE)
#define BUFFER_TIMEOUT		msecs_to_jiffies(500)
#define	VIU_VID_MEM_LIMIT	4
#define VIU_VIDEO_DECODER_ADDR	0x25
static struct v4l2_queryctrl viu_qctrl[] = ;
static int qctl_regs[ARRAY_SIZE(viu_qctrl)];
static int info_level;
#define dprintk(level, fmt, arg...)					\
do  while (0)
struct viu_fmt ;
static struct viu_fmt formats[] = ;
struct viu_dev;
struct viu_buf;
struct viu_buf ;
struct viu_dmaqueue ;
struct viu_status ;
struct viu_reg  __attribute__ ((packed));
struct viu_dev ;
struct viu_fh ;
static struct viu_reg reg_val;
enum status_config ;
#define norm_maxw()	720
#define norm_maxh()	576
#define INT_ALL_STATUS	(INT_FIELD_STATUS | INT_VSYNC_STATUS | \
INT_HSYNC_STATUS | INT_VSTART_STATUS | \
INT_DMA_END_STATUS | INT_ERROR_STATUS)
#define NUM_FORMATS	ARRAY_SIZE(formats)
static irqreturn_t viu_intr(int irq, void *dev_id);
struct viu_fmt *format_by_fourcc(int fourcc)
void viu_start_dma(struct viu_dev *dev)
void viu_stop_dma(struct viu_dev *dev)
static int restart_video_queue(struct viu_dmaqueue *vidq)
static void viu_vid_timeout(unsigned long data)
static int buffer_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct viu_buf *buf)
inline int buffer_activate(struct viu_dev *dev, struct viu_buf *buf)
static int buffer_prepare(struct videobuf_queue *vq,
struct videobuf_buffer *vb,
enum v4l2_field field)
static void buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops viu_video_qops = ;
static int vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_g_fmt_overlay(struct file *file, void *priv,
struct v4l2_format *f)
static int verify_preview(struct viu_dev *dev, struct v4l2_window *win)
inline void viu_activate_overlay(struct viu_reg *viu_reg)
static int viu_setup_preview(struct viu_dev *dev, struct viu_fh *fh)
static int vidioc_s_fmt_overlay(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_overlay(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_overlay(struct file *file, void *priv, unsigned int on)
int vidioc_g_fbuf(struct file *file, void *priv, struct v4l2_framebuffer *arg)
int vidioc_s_fbuf(struct file *file, void *priv, struct v4l2_framebuffer *arg)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_streamon(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
#define decoder_call(viu, o, f, args...) \
v4l2_subdev_call(viu->decoder, o, f, ##args)
static int vidioc_querystd(struct file *file, void *priv, v4l2_std_id *std_id)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *id)
static int vidioc_g_std(struct file *file, void *priv, v4l2_std_id *std_id)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *inp)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
inline void viu_activate_next_buf(struct viu_dev *dev,
struct viu_dmaqueue *viuq)
inline void viu_default_settings(struct viu_reg *viu_reg)
static void viu_overlay_intr(struct viu_dev *dev, u32 status)
static void viu_capture_intr(struct viu_dev *dev, u32 status)
static irqreturn_t viu_intr(int irq, void *dev_id)
static int viu_open(struct file *file)
static ssize_t viu_read(struct file *file, char __user *data, size_t count,
loff_t *ppos)
static unsigned int viu_poll(struct file *file, struct poll_table_struct *wait)
static int viu_release(struct file *file)
void viu_reset(struct viu_reg *reg)
static int viu_mmap(struct file *file, struct vm_area_struct *vma)
static struct v4l2_file_operations viu_fops = ;
static const struct v4l2_ioctl_ops viu_ioctl_ops = ;
static struct video_device viu_template = ;
static int __devinit viu_of_probe(struct platform_device *op)
static int __devexit viu_of_remove(struct platform_device *op)
static int viu_suspend(struct platform_device *op, pm_message_t state)
static int viu_resume(struct platform_device *op)
static struct of_device_id mpc512x_viu_of_match[] = ;
MODULE_DEVICE_TABLE(of, mpc512x_viu_of_match);
static struct platform_driver viu_of_platform_driver = ;
static int __init viu_init(void)
static void __exit viu_exit(void)
module_init(viu_init);
module_exit(viu_exit);
MODULE_DESCRIPTION("Freescale Video-In(VIU)");
MODULE_AUTHOR("Hongjun Chen");
MODULE_LICENSE("GPL");
