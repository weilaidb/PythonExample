unsigned int video_debug;
static unsigned int gbuffers      = 8;
static unsigned int noninterlaced;
static unsigned int gbufsize      = 720*576*4;
static unsigned int gbufsize_max  = 720*576*4;
static char secam[] = "--";
module_param(video_debug, int, 0644);
MODULE_PARM_DESC(video_debug,"enable debug messages [video]");
module_param(gbuffers, int, 0444);
MODULE_PARM_DESC(gbuffers,"number of capture buffers, range 2-32");
module_param(noninterlaced, int, 0644);
MODULE_PARM_DESC(noninterlaced,"capture non interlaced video");
module_param_string(secam, secam, sizeof(secam), 0644);
MODULE_PARM_DESC(secam, "force SECAM variant, either DK,L or Lc");
#define dprintk(fmt, arg...)	if (video_debug&0x04) \
printk(KERN_DEBUG "%s/video: " fmt, dev->name , ## arg)
#define VP_T_CODE_P_NON_INVERTED	0x00
#define VP_T_CODE_P_INVERTED		0x01
#define VP_CLK_CTRL2_NOT_DELAYED	0x00
#define VP_CLK_CTRL2_DELAYED		0x04
#define VP_CLK_CTRL1_NON_INVERTED	0x00
#define VP_CLK_CTRL1_INVERTED		0x02
#define VP_VS_TYPE_MASK			0x07
#define VP_VS_TYPE_OFF			0x00
#define VP_VS_TYPE_V123			0x01
#define VP_VS_TYPE_V_ITU		0x02
#define VP_VS_TYPE_VGATE_L		0x03
#define VP_VS_TYPE_RESERVED1		0x04
#define VP_VS_TYPE_RESERVED2		0x05
#define VP_VS_TYPE_F_ITU		0x06
#define VP_VS_TYPE_SC_FID		0x07
static int video_out[][9] = ;
static struct saa7134_format formats[] = ;
#define FORMATS ARRAY_SIZE(formats)
#define NORM_625_50			\
.h_start       = 0,	\
.h_stop        = 719,	\
.video_v_start = 24,	\
.video_v_stop  = 311,	\
.vbi_v_start_0 = 7,	\
.vbi_v_stop_0  = 22,	\
.vbi_v_start_1 = 319,   \
.src_timing    = 4
#define NORM_525_60			\
.h_start       = 0,	\
.h_stop        = 719,	\
.video_v_start = 23,	\
.video_v_stop  = 262,	\
.vbi_v_start_0 = 10,	\
.vbi_v_stop_0  = 21,	\
.vbi_v_start_1 = 273,	\
.src_timing    = 7
static struct saa7134_tvnorm tvnorms[] = ;
#define TVNORMS ARRAY_SIZE(tvnorms)
#define V4L2_CID_PRIVATE_INVERT      (V4L2_CID_PRIVATE_BASE + 0)
#define V4L2_CID_PRIVATE_Y_ODD       (V4L2_CID_PRIVATE_BASE + 1)
#define V4L2_CID_PRIVATE_Y_EVEN      (V4L2_CID_PRIVATE_BASE + 2)
#define V4L2_CID_PRIVATE_AUTOMUTE    (V4L2_CID_PRIVATE_BASE + 3)
#define V4L2_CID_PRIVATE_LASTP1      (V4L2_CID_PRIVATE_BASE + 4)
static const struct v4l2_queryctrl no_ctrl = ;
static const struct v4l2_queryctrl video_ctrls[] = ;
static const unsigned int CTRLS = ARRAY_SIZE(video_ctrls);
static const struct v4l2_queryctrl* ctrl_by_id(unsigned int id)
static struct saa7134_format* format_by_fourcc(unsigned int fourcc)
static int res_get(struct saa7134_dev *dev, struct saa7134_fh *fh, unsigned int bit)
static int res_check(struct saa7134_fh *fh, unsigned int bit)
static int res_locked(struct saa7134_dev *dev, unsigned int bit)
static
void res_free(struct saa7134_dev *dev, struct saa7134_fh *fh, unsigned int bits)
static void set_tvnorm(struct saa7134_dev *dev, struct saa7134_tvnorm *norm)
static void video_mux(struct saa7134_dev *dev, int input)
static void saa7134_set_decoder(struct saa7134_dev *dev)
void saa7134_set_tvnorm_hw(struct saa7134_dev *dev)
static void set_h_prescale(struct saa7134_dev *dev, int task, int prescale)
static void set_v_scale(struct saa7134_dev *dev, int task, int yscale)
static void set_size(struct saa7134_dev *dev, int task,
int width, int height, int interlace)
struct cliplist ;
static void set_cliplist(struct saa7134_dev *dev, int reg,
struct cliplist *cl, int entries, char *name)
static int clip_range(int val)
static int cliplist_cmp(const void *a, const void *b)
static int setup_clipping(struct saa7134_dev *dev, struct v4l2_clip *clips,
int nclips, int interlace)
static int verify_preview(struct saa7134_dev *dev, struct v4l2_window *win)
static int start_preview(struct saa7134_dev *dev, struct saa7134_fh *fh)
static int stop_preview(struct saa7134_dev *dev, struct saa7134_fh *fh)
static int buffer_activate(struct saa7134_dev *dev,
struct saa7134_buf *buf,
struct saa7134_buf *next)
static int buffer_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb,
enum v4l2_field field)
static int
buffer_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static void buffer_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
static struct videobuf_queue_ops video_qops = ;
int saa7134_g_ctrl_internal(struct saa7134_dev *dev, struct saa7134_fh *fh, struct v4l2_control *c)
EXPORT_SYMBOL_GPL(saa7134_g_ctrl_internal);
static int saa7134_g_ctrl(struct file *file, void *priv, struct v4l2_control *c)
int saa7134_s_ctrl_internal(struct saa7134_dev *dev,  struct saa7134_fh *fh, struct v4l2_control *c)
EXPORT_SYMBOL_GPL(saa7134_s_ctrl_internal);
static int saa7134_s_ctrl(struct file *file, void *f, struct v4l2_control *c)
static struct videobuf_queue* saa7134_queue(struct saa7134_fh *fh)
static int saa7134_resource(struct saa7134_fh *fh)
static int video_open(struct file *file)
static ssize_t
video_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
static unsigned int
video_poll(struct file *file, struct poll_table_struct *wait)
static int video_release(struct file *file)
static int video_mmap(struct file *file, struct vm_area_struct * vma)
static ssize_t radio_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static unsigned int radio_poll(struct file *file, poll_table *wait)
static int saa7134_try_get_set_fmt_vbi_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int saa7134_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int saa7134_g_fmt_vid_overlay(struct file *file, void *priv,
struct v4l2_format *f)
static int saa7134_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int saa7134_try_fmt_vid_overlay(struct file *file, void *priv,
struct v4l2_format *f)
static int saa7134_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int saa7134_s_fmt_vid_overlay(struct file *file, void *priv,
struct v4l2_format *f)
int saa7134_queryctrl(struct file *file, void *priv, struct v4l2_queryctrl *c)
EXPORT_SYMBOL_GPL(saa7134_queryctrl);
static int saa7134_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int saa7134_g_input(struct file *file, void *priv, unsigned int *i)
static int saa7134_s_input(struct file *file, void *priv, unsigned int i)
static int saa7134_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
int saa7134_s_std_internal(struct saa7134_dev *dev, struct saa7134_fh *fh, v4l2_std_id *id)
EXPORT_SYMBOL_GPL(saa7134_s_std_internal);
static int saa7134_s_std(struct file *file, void *priv, v4l2_std_id *id)
static int saa7134_g_std(struct file *file, void *priv, v4l2_std_id *id)
static int saa7134_cropcap(struct file *file, void *priv,
struct v4l2_cropcap *cap)
static int saa7134_g_crop(struct file *file, void *f, struct v4l2_crop *crop)
static int saa7134_s_crop(struct file *file, void *f, struct v4l2_crop *crop)
static int saa7134_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int saa7134_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int saa7134_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int saa7134_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int saa7134_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int saa7134_s_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int saa7134_g_priority(struct file *file, void *f, enum v4l2_priority *p)
static int saa7134_s_priority(struct file *file, void *f,
enum v4l2_priority prio)
static int saa7134_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int saa7134_enum_fmt_vid_overlay(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int saa7134_g_fbuf(struct file *file, void *f,
struct v4l2_framebuffer *fb)
static int saa7134_s_fbuf(struct file *file, void *f,
struct v4l2_framebuffer *fb)
static int saa7134_overlay(struct file *file, void *f, unsigned int on)
static int saa7134_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int saa7134_querybuf(struct file *file, void *priv,
struct v4l2_buffer *b)
static int saa7134_qbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int saa7134_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int saa7134_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int saa7134_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int saa7134_g_parm(struct file *file, void *fh,
struct v4l2_streamparm *parm)
static int vidioc_g_register (struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vidioc_s_register (struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int radio_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static int radio_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int radio_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int radio_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int radio_g_input(struct file *filp, void *priv, unsigned int *i)
static int radio_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int radio_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int radio_s_input(struct file *filp, void *priv, unsigned int i)
static int radio_s_std(struct file *file, void *fh, v4l2_std_id *norm)
static int radio_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *c)
static const struct v4l2_file_operations video_fops =
;
static const struct v4l2_ioctl_ops video_ioctl_ops = ;
static const struct v4l2_file_operations radio_fops = ;
static const struct v4l2_ioctl_ops radio_ioctl_ops = ;
struct video_device saa7134_video_template = ;
struct video_device saa7134_radio_template = ;
int saa7134_video_init1(struct saa7134_dev *dev)
int saa7134_videoport_init(struct saa7134_dev *dev)
int saa7134_video_init2(struct saa7134_dev *dev)
void saa7134_irq_video_signalchange(struct saa7134_dev *dev)
void saa7134_irq_video_done(struct saa7134_dev *dev, unsigned long status)
