#define DRIVER_AUTHOR "Ludovico Cavedon <cavedon@sssup.it>, " \
"Markus Rechberger <mrechberger@gmail.com>, " \
"Mauro Carvalho Chehab <mchehab@infradead.org>, " \
"Sascha Sommer <saschasommer@freenet.de>"
#define DRIVER_DESC         "Empia em28xx based USB video device driver"
#define EM28XX_VERSION_CODE  KERNEL_VERSION(0, 1, 2)
#define em28xx_videodbg(fmt, arg...) do  while (0)
static unsigned int isoc_debug;
module_param(isoc_debug, int, 0644);
MODULE_PARM_DESC(isoc_debug, "enable debug messages [isoc transfers]");
#define em28xx_isocdbg(fmt, arg...) \
do  while (0)
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static unsigned int video_nr[] = ;
static unsigned int vbi_nr[]   = ;
static unsigned int radio_nr[] = ;
module_param_array(video_nr, int, NULL, 0444);
module_param_array(vbi_nr, int, NULL, 0444);
module_param_array(radio_nr, int, NULL, 0444);
MODULE_PARM_DESC(video_nr, "video device numbers");
MODULE_PARM_DESC(vbi_nr,   "vbi device numbers");
MODULE_PARM_DESC(radio_nr, "radio device numbers");
static unsigned int video_debug;
module_param(video_debug, int, 0644);
MODULE_PARM_DESC(video_debug, "enable debug messages [video]");
static struct em28xx_fmt format[] = ;
static struct v4l2_queryctrl ac97_qctrl[] = ;
static inline void buffer_filled(struct em28xx *dev,
struct em28xx_dmaqueue *dma_q,
struct em28xx_buffer *buf)
static inline void vbi_buffer_filled(struct em28xx *dev,
struct em28xx_dmaqueue *dma_q,
struct em28xx_buffer *buf)
static void em28xx_copy_video(struct em28xx *dev,
struct em28xx_dmaqueue  *dma_q,
struct em28xx_buffer *buf,
unsigned char *p,
unsigned char *outp, unsigned long len)
static void em28xx_copy_vbi(struct em28xx *dev,
struct em28xx_dmaqueue  *dma_q,
struct em28xx_buffer *buf,
unsigned char *p,
unsigned char *outp, unsigned long len)
static inline void print_err_status(struct em28xx *dev,
int packet, int status)
static inline void get_next_buf(struct em28xx_dmaqueue *dma_q,
struct em28xx_buffer **buf)
static inline void vbi_get_next_buf(struct em28xx_dmaqueue *dma_q,
struct em28xx_buffer **buf)
static inline int em28xx_isoc_copy(struct em28xx *dev, struct urb *urb)
static inline int em28xx_isoc_copy_vbi(struct em28xx *dev, struct urb *urb)
static int
buffer_setup(struct videobuf_queue *vq, unsigned int *count, unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct em28xx_buffer *buf)
static int
buffer_prepare(struct videobuf_queue *vq, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops em28xx_video_qops = ;
static void video_mux(struct em28xx *dev, int index)
static int res_get(struct em28xx_fh *fh, unsigned int bit)
static int res_check(struct em28xx_fh *fh, unsigned int bit)
static int res_locked(struct em28xx *dev, unsigned int bit)
static void res_free(struct em28xx_fh *fh, unsigned int bits)
static int get_ressource(struct em28xx_fh *fh)
static int ac97_queryctrl(struct v4l2_queryctrl *qc)
static int ac97_get_ctrl(struct em28xx *dev, struct v4l2_control *ctrl)
static int ac97_set_ctrl(struct em28xx *dev, const struct v4l2_control *ctrl)
static int check_dev(struct em28xx *dev)
static void get_scale(struct em28xx *dev,
unsigned int width, unsigned int height,
unsigned int *hscale, unsigned int *vscale)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static struct em28xx_fmt *format_by_fourcc(unsigned int fourcc)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int em28xx_set_video_format(struct em28xx *dev, unsigned int fourcc,
unsigned width, unsigned height)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_g_std(struct file *file, void *priv, v4l2_std_id *norm)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *norm)
static int vidioc_g_parm(struct file *file, void *priv,
struct v4l2_streamparm *p)
static int vidioc_s_parm(struct file *file, void *priv,
struct v4l2_streamparm *p)
static const char *iname[] = ;
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vidioc_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int check_subdev_ctrl(struct em28xx *dev, int id)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int em28xx_reg_len(int reg)
static int vidioc_g_chip_ident(struct file *file, void *priv,
struct v4l2_dbg_chip_ident *chip)
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
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_sliced_vbi_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_set_sliced_vbi_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_g_fmt_vbi_cap(struct file *file, void *priv,
struct v4l2_format *format)
static int vidioc_s_fmt_vbi_cap(struct file *file, void *priv,
struct v4l2_format *format)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *rb)
static int vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *b)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int radio_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int radio_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int radio_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int radio_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int radio_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int radio_s_audio(struct file *file, void *fh,
struct v4l2_audio *a)
static int radio_s_input(struct file *file, void *fh, unsigned int i)
static int radio_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int em28xx_v4l2_open(struct file *filp)
void em28xx_release_analog_resources(struct em28xx *dev)
static int em28xx_v4l2_close(struct file *filp)
static ssize_t
em28xx_v4l2_read(struct file *filp, char __user *buf, size_t count,
loff_t *pos)
static unsigned int em28xx_v4l2_poll(struct file *filp, poll_table *wait)
static int em28xx_v4l2_mmap(struct file *filp, struct vm_area_struct *vma)
static const struct v4l2_file_operations em28xx_v4l_fops = ;
static const struct v4l2_ioctl_ops video_ioctl_ops = ;
static const struct video_device em28xx_video_template = ;
static const struct v4l2_file_operations radio_fops = ;
static const struct v4l2_ioctl_ops radio_ioctl_ops = ;
static struct video_device em28xx_radio_template = ;
static struct video_device *em28xx_vdev_init(struct em28xx *dev,
const struct video_device *template,
const char *type_name)
int em28xx_register_analog_devices(struct em28xx *dev)
