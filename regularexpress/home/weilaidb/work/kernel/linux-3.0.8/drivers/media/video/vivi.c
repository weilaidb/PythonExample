#define VIVI_MODULE_NAME "vivi"
#define WAKE_NUMERATOR 30
#define WAKE_DENOMINATOR 1001
#define BUFFER_TIMEOUT     msecs_to_jiffies(500)
#define MAX_WIDTH 1920
#define MAX_HEIGHT 1200
#define VIVI_MAJOR_VERSION 0
#define VIVI_MINOR_VERSION 8
#define VIVI_RELEASE 0
#define VIVI_VERSION \
KERNEL_VERSION(VIVI_MAJOR_VERSION, VIVI_MINOR_VERSION, VIVI_RELEASE)
MODULE_DESCRIPTION("Video Technology Magazine Virtual Video Capture Board");
MODULE_AUTHOR("Mauro Carvalho Chehab, Ted Walther and John Sokol");
MODULE_LICENSE("Dual BSD/GPL");
static unsigned video_nr = -1;
module_param(video_nr, uint, 0644);
MODULE_PARM_DESC(video_nr, "videoX start number, -1 is autodetect");
static unsigned n_devs = 1;
module_param(n_devs, uint, 0644);
MODULE_PARM_DESC(n_devs, "number of video devices to create");
static unsigned debug;
module_param(debug, uint, 0644);
MODULE_PARM_DESC(debug, "activates debug info");
static unsigned int vid_limit = 16;
module_param(vid_limit, uint, 0644);
MODULE_PARM_DESC(vid_limit, "capture memory limit in megabytes");
static const u8 *font8x16;
#define dprintk(dev, level, fmt, arg...) \
v4l2_dbg(level, debug, &dev->v4l2_dev, fmt, ## arg)
struct vivi_fmt ;
static struct vivi_fmt formats[] = ;
static struct vivi_fmt *get_format(struct v4l2_format *f)
struct vivi_buffer ;
struct vivi_dmaqueue ;
static LIST_HEAD(vivi_devlist);
struct vivi_dev ;
enum colors ;
#define COLOR_WHITE
#define COLOR_AMBER
#define COLOR_CYAN
#define	COLOR_GREEN
#define COLOR_MAGENTA
#define COLOR_RED
#define COLOR_BLUE
#define COLOR_BLACK
struct bar_std ;
static struct bar_std bars[] = ;
#define NUM_INPUTS ARRAY_SIZE(bars)
#define TO_Y(r, g, b) \
(((16829 * r + 33039 * g + 6416 * b  + 32768) >> 16) + 16)
#define TO_V(r, g, b) \
(((28784 * r - 24103 * g - 4681 * b  + 32768) >> 16) + 128)
#define TO_U(r, g, b) \
(((-9714 * r - 19070 * g + 28784 * b + 32768) >> 16) + 128)
static void precalculate_bars(struct vivi_dev *dev)
#define TSTAMP_MIN_Y	24
#define TSTAMP_MAX_Y	(TSTAMP_MIN_Y + 15)
#define TSTAMP_INPUT_X	10
#define TSTAMP_MIN_X	(54 + TSTAMP_INPUT_X)
static void gen_twopix(struct vivi_dev *dev, u8 *buf, int colorpos)
static void precalculate_line(struct vivi_dev *dev)
static void gen_text(struct vivi_dev *dev, char *basep,
int y, int x, char *text)
static void vivi_fillbuff(struct vivi_dev *dev, struct vivi_buffer *buf)
static void vivi_thread_tick(struct vivi_dev *dev)
#define frames_to_ms(frames)					\
((frames * WAKE_NUMERATOR * 1000) / WAKE_DENOMINATOR)
static void vivi_sleep(struct vivi_dev *dev)
static int vivi_thread(void *data)
static int vivi_start_generating(struct vivi_dev *dev)
static void vivi_stop_generating(struct vivi_dev *dev)
static int queue_setup(struct vb2_queue *vq, unsigned int *nbuffers,
unsigned int *nplanes, unsigned long sizes[],
void *alloc_ctxs[])
static int buffer_init(struct vb2_buffer *vb)
static int buffer_prepare(struct vb2_buffer *vb)
static int buffer_finish(struct vb2_buffer *vb)
static void buffer_cleanup(struct vb2_buffer *vb)
static void buffer_queue(struct vb2_buffer *vb)
static int start_streaming(struct vb2_queue *vq)
static int stop_streaming(struct vb2_queue *vq)
static void vivi_lock(struct vb2_queue *vq)
static void vivi_unlock(struct vb2_queue *vq)
static struct vb2_ops vivi_video_qops = ;
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int vidioc_querybuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_streamon(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *i)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *inp)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vivi_s_ctrl(struct v4l2_ctrl *ctrl)
static ssize_t
vivi_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
static unsigned int
vivi_poll(struct file *file, struct poll_table_struct *wait)
static int vivi_close(struct file *file)
static int vivi_mmap(struct file *file, struct vm_area_struct *vma)
static const struct v4l2_ctrl_ops vivi_ctrl_ops = ;
#define VIVI_CID_CUSTOM_BASE	(V4L2_CID_USER_BASE | 0xf000)
static const struct v4l2_ctrl_config vivi_ctrl_button = ;
static const struct v4l2_ctrl_config vivi_ctrl_boolean = ;
static const struct v4l2_ctrl_config vivi_ctrl_int32 = ;
static const struct v4l2_ctrl_config vivi_ctrl_int64 = ;
static const char * const vivi_ctrl_menu_strings[] = ;
static const struct v4l2_ctrl_config vivi_ctrl_menu = ;
static const struct v4l2_ctrl_config vivi_ctrl_string = ;
static const struct v4l2_file_operations vivi_fops = ;
static const struct v4l2_ioctl_ops vivi_ioctl_ops = ;
static struct video_device vivi_template = ;
static int vivi_release(void)
static int __init vivi_create_instance(int inst)
static int __init vivi_init(void)
static void __exit vivi_exit(void)
module_init(vivi_init);
module_exit(vivi_exit);
