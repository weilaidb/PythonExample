#define SOLO_HW_BPL		2048
#define SOLO_DISP_PIX_FIELD	V4L2_FIELD_INTERLACED
#define solo_vlines(__solo)	(__solo->video_vsize * 2)
#define solo_image_size(__solo) (solo_bytesperline(__solo) * \
solo_vlines(__solo))
#define solo_bytesperline(__solo) (__solo->video_hsize * 2)
#define MIN_VID_BUFFERS		4
struct solo_filehandle ;
unsigned video_nr = -1;
module_param(video_nr, uint, 0644);
MODULE_PARM_DESC(video_nr, "videoX start number, -1 is autodetect (default)");
static void erase_on(struct solo_dev *solo_dev)
static int erase_off(struct solo_dev *solo_dev)
void solo_video_in_isr(struct solo_dev *solo_dev)
static void solo_win_setup(struct solo_dev *solo_dev, u8 ch,
int sx, int sy, int ex, int ey, int scale)
static int solo_v4l2_ch_ext_4up(struct solo_dev *solo_dev, u8 idx, int on)
static int solo_v4l2_ch_ext_16up(struct solo_dev *solo_dev, int on)
static int solo_v4l2_ch(struct solo_dev *solo_dev, u8 ch, int on)
static int solo_v4l2_set_ch(struct solo_dev *solo_dev, u8 ch)
static void disp_reset_desc(struct solo_filehandle *fh)
static int disp_flush_descs(struct solo_filehandle *fh)
static int disp_push_desc(struct solo_filehandle *fh, dma_addr_t dma_addr,
u32 ext_addr, int size, int repeat, int ext_size)
static void solo_fillbuf(struct solo_filehandle *fh,
struct videobuf_buffer *vb)
static void solo_thread_try(struct solo_filehandle *fh)
static int solo_thread(void *data)
static int solo_start_thread(struct solo_filehandle *fh)
static void solo_stop_thread(struct solo_filehandle *fh)
static int solo_buf_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static int solo_buf_prepare(struct videobuf_queue *vq,
struct videobuf_buffer *vb, enum v4l2_field field)
static void solo_buf_queue(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void solo_buf_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops solo_video_qops = ;
static unsigned int solo_v4l2_poll(struct file *file,
struct poll_table_struct *wait)
static int solo_v4l2_mmap(struct file *file, struct vm_area_struct *vma)
static int solo_v4l2_open(struct file *file)
static ssize_t solo_v4l2_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static int solo_v4l2_release(struct file *file)
static int solo_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int solo_enum_ext_input(struct solo_dev *solo_dev,
struct v4l2_input *input)
static int solo_enum_input(struct file *file, void *priv,
struct v4l2_input *input)
static int solo_set_input(struct file *file, void *priv, unsigned int index)
static int solo_get_input(struct file *file, void *priv, unsigned int *index)
static int solo_enum_fmt_cap(struct file *file, void *priv,
struct v4l2_fmtdesc *f)
static int solo_try_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int solo_set_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int solo_get_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int solo_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *req)
static int solo_querybuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int solo_qbuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int solo_dqbuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int solo_streamon(struct file *file, void *priv, enum v4l2_buf_type i)
static int solo_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
static int solo_s_std(struct file *file, void *priv, v4l2_std_id *i)
static const u32 solo_motion_ctrls[] = ;
static const u32 *solo_ctrl_classes[] = ;
static int solo_disp_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int solo_disp_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int solo_disp_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static const struct v4l2_file_operations solo_v4l2_fops = ;
static const struct v4l2_ioctl_ops solo_v4l2_ioctl_ops = ;
static struct video_device solo_v4l2_template = ;
int solo_v4l2_init(struct solo_dev *solo_dev)
void solo_v4l2_exit(struct solo_dev *solo_dev)
