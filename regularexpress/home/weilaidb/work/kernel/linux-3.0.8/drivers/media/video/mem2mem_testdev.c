#define MEM2MEM_TEST_MODULE_NAME "mem2mem-testdev"
MODULE_DESCRIPTION("Virtual device for mem2mem framework testing");
MODULE_AUTHOR("Pawel Osciak, <pawel@osciak.com>");
MODULE_LICENSE("GPL");
#define MIN_W 32
#define MIN_H 32
#define MAX_W 640
#define MAX_H 480
#define DIM_ALIGN_MASK 0x08
#define MEM2MEM_CAPTURE	(1 << 0)
#define MEM2MEM_OUTPUT	(1 << 1)
#define MEM2MEM_NAME		"m2m-testdev"
#define MEM2MEM_DEF_NUM_BUFS	VIDEO_MAX_FRAME
#define MEM2MEM_VID_MEM_LIMIT	(16 * 1024 * 1024)
#define MEM2MEM_DEF_TRANSTIME	1000
#define MEM2MEM_DEF_TRANSLEN	1
#define MEM2MEM_COLOR_STEP	(0xff >> 4)
#define MEM2MEM_NUM_TILES	8
#define dprintk(dev, fmt, arg...) \
v4l2_dbg(1, 1, &dev->v4l2_dev, "%s: " fmt, __func__, ## arg)
void m2mtest_dev_release(struct device *dev)
static struct platform_device m2mtest_pdev = ;
struct m2mtest_fmt ;
static struct m2mtest_fmt formats[] = ;
struct m2mtest_q_data ;
enum ;
static struct m2mtest_q_data q_data[2];
static struct m2mtest_q_data *get_q_data(enum v4l2_buf_type type)
#define V4L2_CID_TRANS_TIME_MSEC	V4L2_CID_PRIVATE_BASE
#define V4L2_CID_TRANS_NUM_BUFS		(V4L2_CID_PRIVATE_BASE + 1)
static struct v4l2_queryctrl m2mtest_ctrls[] = ;
#define NUM_FORMATS ARRAY_SIZE(formats)
static struct m2mtest_fmt *find_format(struct v4l2_format *f)
struct m2mtest_dev ;
struct m2mtest_ctx ;
static struct v4l2_queryctrl *get_ctrl(int id)
static int device_process(struct m2mtest_ctx *ctx,
struct vb2_buffer *in_vb,
struct vb2_buffer *out_vb)
static void schedule_irq(struct m2mtest_dev *dev, int msec_timeout)
static int job_ready(void *priv)
static void job_abort(void *priv)
static void m2mtest_lock(void *priv)
static void m2mtest_unlock(void *priv)
static void device_run(void *priv)
static void device_isr(unsigned long priv)
static int vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static int enum_fmt(struct v4l2_fmtdesc *f, u32 type)
static int vidioc_enum_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_fmtdesc *f)
static int vidioc_enum_fmt_vid_out(struct file *file, void *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt(struct m2mtest_ctx *ctx, struct v4l2_format *f)
static int vidioc_g_fmt_vid_out(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt(struct v4l2_format *f, struct m2mtest_fmt *fmt)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_out(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt(struct m2mtest_ctx *ctx, struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_out(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *reqbufs)
static int vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int vidioc_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int check_ctrl_val(struct m2mtest_ctx *ctx, struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static const struct v4l2_ioctl_ops m2mtest_ioctl_ops = ;
static int m2mtest_queue_setup(struct vb2_queue *vq, unsigned int *nbuffers,
unsigned int *nplanes, unsigned long sizes[],
void *alloc_ctxs[])
static int m2mtest_buf_prepare(struct vb2_buffer *vb)
static void m2mtest_buf_queue(struct vb2_buffer *vb)
static struct vb2_ops m2mtest_qops = ;
static int queue_init(void *priv, struct vb2_queue *src_vq, struct vb2_queue *dst_vq)
static int m2mtest_open(struct file *file)
static int m2mtest_release(struct file *file)
static unsigned int m2mtest_poll(struct file *file,
struct poll_table_struct *wait)
static int m2mtest_mmap(struct file *file, struct vm_area_struct *vma)
static const struct v4l2_file_operations m2mtest_fops = ;
static struct video_device m2mtest_videodev = ;
static struct v4l2_m2m_ops m2m_ops = ;
static int m2mtest_probe(struct platform_device *pdev)
static int m2mtest_remove(struct platform_device *pdev)
static struct platform_driver m2mtest_pdrv = ;
static void __exit m2mtest_exit(void)
static int __init m2mtest_init(void)
module_init(m2mtest_init);
module_exit(m2mtest_exit);
