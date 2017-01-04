static DEFINE_MUTEX(au0828_sysfs_lock);
#define AU0828_VERSION_CODE KERNEL_VERSION(0, 0, 1)
static unsigned int isoc_debug;
module_param(isoc_debug, int, 0644);
MODULE_PARM_DESC(isoc_debug, "enable debug messages [isoc transfers]");
#define au0828_isocdbg(fmt, arg...) \
do  while (0)
static inline void print_err_status(struct au0828_dev *dev,
int packet, int status)
static int check_dev(struct au0828_dev *dev)
static void au0828_irq_callback(struct urb *urb)
void au0828_uninit_isoc(struct au0828_dev *dev)
int au0828_init_isoc(struct au0828_dev *dev, int max_packets,
int num_bufs, int max_pkt_size,
int (*isoc_copy) (struct au0828_dev *dev, struct urb *urb))
static inline void buffer_filled(struct au0828_dev *dev,
struct au0828_dmaqueue *dma_q,
struct au0828_buffer *buf)
static inline void vbi_buffer_filled(struct au0828_dev *dev,
struct au0828_dmaqueue *dma_q,
struct au0828_buffer *buf)
static void au0828_copy_video(struct au0828_dev *dev,
struct au0828_dmaqueue  *dma_q,
struct au0828_buffer *buf,
unsigned char *p,
unsigned char *outp, unsigned long len)
static inline void get_next_buf(struct au0828_dmaqueue *dma_q,
struct au0828_buffer **buf)
static void au0828_copy_vbi(struct au0828_dev *dev,
struct au0828_dmaqueue  *dma_q,
struct au0828_buffer *buf,
unsigned char *p,
unsigned char *outp, unsigned long len)
static inline void vbi_get_next_buf(struct au0828_dmaqueue *dma_q,
struct au0828_buffer **buf)
static inline int au0828_isoc_copy(struct au0828_dev *dev, struct urb *urb)
static int
buffer_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct au0828_buffer *buf)
static int
buffer_prepare(struct videobuf_queue *vq, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops au0828_video_qops = ;
static int au0828_i2s_init(struct au0828_dev *dev)
int au0828_analog_stream_enable(struct au0828_dev *d)
int au0828_analog_stream_disable(struct au0828_dev *d)
void au0828_analog_stream_reset(struct au0828_dev *dev)
static int au0828_stream_interrupt(struct au0828_dev *dev)
void au0828_analog_unregister(struct au0828_dev *dev)
static int res_get(struct au0828_fh *fh, unsigned int bit)
static int res_check(struct au0828_fh *fh, unsigned int bit)
static int res_locked(struct au0828_dev *dev, unsigned int bit)
static void res_free(struct au0828_fh *fh, unsigned int bits)
static int get_ressource(struct au0828_fh *fh)
void au0828_vid_buffer_timeout(unsigned long data)
void au0828_vbi_buffer_timeout(unsigned long data)
static int au0828_v4l2_open(struct file *filp)
static int au0828_v4l2_close(struct file *filp)
static ssize_t au0828_v4l2_read(struct file *filp, char __user *buf,
size_t count, loff_t *pos)
static unsigned int au0828_v4l2_poll(struct file *filp, poll_table *wait)
static int au0828_v4l2_mmap(struct file *filp, struct vm_area_struct *vma)
static int au0828_set_format(struct au0828_dev *dev, unsigned int cmd,
struct v4l2_format *format)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
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
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id * norm)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *input)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int index)
static int vidioc_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_tuner(struct file *file, void *priv, struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *freq)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *freq)
static int vidioc_g_fmt_vbi_cap(struct file *file, void *priv,
struct v4l2_format *format)
static int vidioc_g_chip_ident(struct file *file, void *priv,
struct v4l2_dbg_chip_ident *chip)
static int vidioc_cropcap(struct file *file, void *priv,
struct v4l2_cropcap *cc)
static int vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int vidioc_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int vidioc_g_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vidioc_s_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *rb)
static int vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *b)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static struct v4l2_file_operations au0828_v4l_fops = ;
static const struct v4l2_ioctl_ops video_ioctl_ops = ;
static const struct video_device au0828_video_template = ;
int au0828_analog_register(struct au0828_dev *dev,
struct usb_interface *interface)
