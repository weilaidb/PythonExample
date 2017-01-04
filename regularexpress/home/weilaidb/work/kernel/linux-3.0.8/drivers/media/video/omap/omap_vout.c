MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("OMAP Video for Linux Video out driver");
MODULE_LICENSE("GPL");
#define VOUT_NAME		"omap_vout"
enum omap_vout_channels ;
enum dma_channel_state ;
#define QQVGA_WIDTH		160
#define QQVGA_HEIGHT		120
#define VID_MAX_WIDTH		1280
#define VID_MAX_HEIGHT		720
#define VID_MIN_WIDTH		2
#define VID_MIN_HEIGHT		2
#define MAX_PIXELS_PER_LINE     2048
#define VRFB_TX_TIMEOUT         1000
#define VRFB_NUM_BUFS		4
#define OMAP_VOUT_MAX_BUF_SIZE (VID_MAX_WIDTH*VID_MAX_HEIGHT*4)
static struct videobuf_queue_ops video_vbq_ops;
static u32 video1_numbuffers = 3;
static u32 video2_numbuffers = 3;
static u32 video1_bufsize = OMAP_VOUT_MAX_BUF_SIZE;
static u32 video2_bufsize = OMAP_VOUT_MAX_BUF_SIZE;
static u32 vid1_static_vrfb_alloc;
static u32 vid2_static_vrfb_alloc;
static int debug;
module_param(video1_numbuffers, uint, S_IRUGO);
MODULE_PARM_DESC(video1_numbuffers,
"Number of buffers to be allocated at init time for Video1 device.");
module_param(video2_numbuffers, uint, S_IRUGO);
MODULE_PARM_DESC(video2_numbuffers,
"Number of buffers to be allocated at init time for Video2 device.");
module_param(video1_bufsize, uint, S_IRUGO);
MODULE_PARM_DESC(video1_bufsize,
"Size of the buffer to be allocated for video1 device");
module_param(video2_bufsize, uint, S_IRUGO);
MODULE_PARM_DESC(video2_bufsize,
"Size of the buffer to be allocated for video2 device");
module_param(vid1_static_vrfb_alloc, bool, S_IRUGO);
MODULE_PARM_DESC(vid1_static_vrfb_alloc,
"Static allocation of the VRFB buffer for video1 device");
module_param(vid2_static_vrfb_alloc, bool, S_IRUGO);
MODULE_PARM_DESC(vid2_static_vrfb_alloc,
"Static allocation of the VRFB buffer for video2 device");
module_param(debug, bool, S_IRUGO);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
const static struct v4l2_fmtdesc omap_formats[] = ;
#define NUM_OUTPUT_FORMATS (ARRAY_SIZE(omap_formats))
static unsigned long omap_vout_alloc_buffer(u32 buf_size, u32 *phys_addr)
static void omap_vout_free_buffer(unsigned long virtaddr, u32 buf_size)
static int omap_vout_allocate_vrfb_buffers(struct omap_vout_device *vout,
unsigned int *count, int startindex)
static int omap_vout_try_format(struct v4l2_pix_format *pix)
static u32 omap_vout_uservirt_to_phys(u32 virtp)
static void omap_vout_vrfb_dma_tx_callback(int lch, u16 ch_status, void *data)
static void omap_vout_release_vrfb(struct omap_vout_device *vout)
static inline int rotate_90_or_270(const struct omap_vout_device *vout)
static inline int rotation_enabled(const struct omap_vout_device *vout)
static inline int calc_rotation(const struct omap_vout_device *vout)
static void omap_vout_free_buffers(struct omap_vout_device *vout)
static void omap_vout_free_vrfb_buffers(struct omap_vout_device *vout)
static int omap_vout_vrfb_buffer_setup(struct omap_vout_device *vout,
unsigned int *count, unsigned int startindex)
static int v4l2_rot_to_dss_rot(int v4l2_rotation,
enum dss_rotation *rotation, bool mirror)
static int omap_vout_calculate_offset(struct omap_vout_device *vout)
static int video_mode_to_dss_mode(struct omap_vout_device *vout)
int omapvid_setup_overlay(struct omap_vout_device *vout,
struct omap_overlay *ovl, int posx, int posy, int outw,
int outh, u32 addr)
int omapvid_init(struct omap_vout_device *vout, u32 addr)
int omapvid_apply_changes(struct omap_vout_device *vout)
void omap_vout_isr(void *arg, unsigned int irqstatus)
static int omap_vout_buffer_setup(struct videobuf_queue *q, unsigned int *count,
unsigned int *size)
static void omap_vout_free_allbuffers(struct omap_vout_device *vout)
static int omap_vout_buffer_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb,
enum v4l2_field field)
static void omap_vout_buffer_queue(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static void omap_vout_buffer_release(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static void omap_vout_vm_open(struct vm_area_struct *vma)
static void omap_vout_vm_close(struct vm_area_struct *vma)
static struct vm_operations_struct omap_vout_vm_ops = ;
static int omap_vout_mmap(struct file *file, struct vm_area_struct *vma)
static int omap_vout_release(struct file *file)
static int omap_vout_open(struct file *file)
static int vidioc_querycap(struct file *file, void *fh,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_out(struct file *file, void *fh,
struct v4l2_fmtdesc *fmt)
static int vidioc_g_fmt_vid_out(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_out(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_out(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_overlay(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_overlay(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_enum_fmt_vid_overlay(struct file *file, void *fh,
struct v4l2_fmtdesc *fmt)
static int vidioc_g_fmt_vid_overlay(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_cropcap(struct file *file, void *fh,
struct v4l2_cropcap *cropcap)
static int vidioc_g_crop(struct file *file, void *fh, struct v4l2_crop *crop)
static int vidioc_s_crop(struct file *file, void *fh, struct v4l2_crop *crop)
static int vidioc_queryctrl(struct file *file, void *fh,
struct v4l2_queryctrl *ctrl)
static int vidioc_g_ctrl(struct file *file, void *fh, struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *fh, struct v4l2_control *a)
static int vidioc_reqbufs(struct file *file, void *fh,
struct v4l2_requestbuffers *req)
static int vidioc_querybuf(struct file *file, void *fh,
struct v4l2_buffer *b)
static int vidioc_qbuf(struct file *file, void *fh,
struct v4l2_buffer *buffer)
static int vidioc_dqbuf(struct file *file, void *fh, struct v4l2_buffer *b)
static int vidioc_streamon(struct file *file, void *fh, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *fh, enum v4l2_buf_type i)
static int vidioc_s_fbuf(struct file *file, void *fh,
struct v4l2_framebuffer *a)
static int vidioc_g_fbuf(struct file *file, void *fh,
struct v4l2_framebuffer *a)
static const struct v4l2_ioctl_ops vout_ioctl_ops = ;
static const struct v4l2_file_operations omap_vout_fops = ;
static int __init omap_vout_setup_video_data(struct omap_vout_device *vout)
static int __init omap_vout_setup_video_bufs(struct platform_device *pdev,
int vid_num)
static int __init omap_vout_create_video_devices(struct platform_device *pdev)
static void omap_vout_cleanup_device(struct omap_vout_device *vout)
static int omap_vout_remove(struct platform_device *pdev)
static int __init omap_vout_probe(struct platform_device *pdev)
static struct platform_driver omap_vout_driver = ;
static int __init omap_vout_init(void)
static void omap_vout_cleanup(void)
late_initcall(omap_vout_init);
module_exit(omap_vout_cleanup);
