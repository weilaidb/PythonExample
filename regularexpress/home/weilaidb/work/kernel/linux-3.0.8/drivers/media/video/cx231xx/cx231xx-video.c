#define CX231XX_VERSION_CODE            KERNEL_VERSION(0, 0, 1)
#define DRIVER_AUTHOR   "Srinivasa Deevi <srinivasa.deevi@conexant.com>"
#define DRIVER_DESC     "Conexant cx231xx based USB video device driver"
#define cx231xx_videodbg(fmt, arg...) do  while (0)
static unsigned int isoc_debug;
module_param(isoc_debug, int, 0644);
MODULE_PARM_DESC(isoc_debug, "enable debug messages [isoc transfers]");
#define cx231xx_isocdbg(fmt, arg...) \
do  while (0)
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static unsigned int card[]     = ;
static unsigned int video_nr[] = ;
static unsigned int vbi_nr[]   = ;
static unsigned int radio_nr[] = ;
module_param_array(card, int, NULL, 0444);
module_param_array(video_nr, int, NULL, 0444);
module_param_array(vbi_nr, int, NULL, 0444);
module_param_array(radio_nr, int, NULL, 0444);
MODULE_PARM_DESC(card, "card type");
MODULE_PARM_DESC(video_nr, "video device numbers");
MODULE_PARM_DESC(vbi_nr, "vbi device numbers");
MODULE_PARM_DESC(radio_nr, "radio device numbers");
static unsigned int video_debug;
module_param(video_debug, int, 0644);
MODULE_PARM_DESC(video_debug, "enable debug messages [video]");
static struct cx231xx_fmt format[] = ;
static const struct v4l2_queryctrl no_ctl = ;
static struct cx231xx_ctrl cx231xx_ctls[] = ;
static const int CX231XX_CTLS = ARRAY_SIZE(cx231xx_ctls);
static const u32 cx231xx_user_ctrls[] = ;
static const u32 *ctrl_classes[] = ;
static inline void buffer_filled(struct cx231xx *dev,
struct cx231xx_dmaqueue *dma_q,
struct cx231xx_buffer *buf)
static inline void print_err_status(struct cx231xx *dev, int packet, int status)
static inline void get_next_buf(struct cx231xx_dmaqueue *dma_q,
struct cx231xx_buffer **buf)
static inline int cx231xx_isoc_copy(struct cx231xx *dev, struct urb *urb)
static inline int cx231xx_bulk_copy(struct cx231xx *dev, struct urb *urb)
u8 cx231xx_find_boundary_SAV_EAV(u8 *p_buffer, u8 *partial_buf,
u32 *p_bytes_used)
u8 cx231xx_find_next_SAV_EAV(u8 *p_buffer, u32 buffer_size, u32 *p_bytes_used)
u32 cx231xx_get_video_line(struct cx231xx *dev,
struct cx231xx_dmaqueue *dma_q, u8 sav_eav,
u8 *p_buffer, u32 buffer_size)
u32 cx231xx_copy_video_line(struct cx231xx *dev,
struct cx231xx_dmaqueue *dma_q, u8 *p_line,
u32 length, int field_number)
void cx231xx_reset_video_buffer(struct cx231xx *dev,
struct cx231xx_dmaqueue *dma_q)
int cx231xx_do_copy(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q,
u8 *p_buffer, u32 bytes_to_copy)
void cx231xx_swab(u16 *from, u16 *to, u16 len)
u8 cx231xx_is_buffer_done(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q)
static int
buffer_setup(struct videobuf_queue *vq, unsigned int *count, unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct cx231xx_buffer *buf)
static int
buffer_prepare(struct videobuf_queue *vq, struct videobuf_buffer *vb,
enum v4l2_field field)
static void buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops cx231xx_video_qops = ;
void video_mux(struct cx231xx *dev, int index)
static int res_get(struct cx231xx_fh *fh)
static int res_check(struct cx231xx_fh *fh)
static void res_free(struct cx231xx_fh *fh)
static int check_dev(struct cx231xx *dev)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static struct cx231xx_fmt *format_by_fourcc(unsigned int fourcc)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_g_std(struct file *file, void *priv, v4l2_std_id *id)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *norm)
static const char *iname[] = ;
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vidioc_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_tuner(struct file *file, void *priv, struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *priv, struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_g_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vidioc_s_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vidioc_cropcap(struct file *file, void *priv,
struct v4l2_cropcap *cc)
static int vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int vidioc_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_sliced_vbi_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_set_sliced_vbi_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_g_fmt_vbi_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_vbi_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *rb)
static int vidioc_querybuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int radio_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static int radio_g_tuner(struct file *file, void *priv, struct v4l2_tuner *t)
static int radio_enum_input(struct file *file, void *priv, struct v4l2_input *i)
static int radio_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int radio_s_tuner(struct file *file, void *priv, struct v4l2_tuner *t)
static int radio_s_audio(struct file *file, void *fh, struct v4l2_audio *a)
static int radio_s_input(struct file *file, void *fh, unsigned int i)
static int radio_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *c)
static int cx231xx_v4l2_open(struct file *filp)
void cx231xx_release_analog_resources(struct cx231xx *dev)
static int cx231xx_v4l2_close(struct file *filp)
static ssize_t
cx231xx_v4l2_read(struct file *filp, char __user *buf, size_t count,
loff_t *pos)
static unsigned int cx231xx_v4l2_poll(struct file *filp, poll_table *wait)
static int cx231xx_v4l2_mmap(struct file *filp, struct vm_area_struct *vma)
static const struct v4l2_file_operations cx231xx_v4l_fops = ;
static const struct v4l2_ioctl_ops video_ioctl_ops = ;
static struct video_device cx231xx_vbi_template;
static const struct video_device cx231xx_video_template = ;
static const struct v4l2_file_operations radio_fops = ;
static const struct v4l2_ioctl_ops radio_ioctl_ops = ;
static struct video_device cx231xx_radio_template = ;
static struct video_device *cx231xx_vdev_init(struct cx231xx *dev,
const struct video_device
*template, const char *type_name)
int cx231xx_register_analog_devices(struct cx231xx *dev)
