#define MIN_VID_BUFFERS		4
#define FRAME_BUF_SIZE		(128 * 1024)
#define MP4_QS			16
static int solo_enc_thread(void *data);
extern unsigned video_nr;
struct solo_enc_fh ;
static const u32 solo_user_ctrls[] = ;
static const u32 solo_mpeg_ctrls[] = ;
static const u32 solo_private_ctrls[] = ;
static const u32 solo_fmtx_ctrls[] = ;
static const u32 *solo_ctrl_classes[] = ;
static int solo_is_motion_on(struct solo_enc_dev *solo_enc)
static void solo_motion_toggle(struct solo_enc_dev *solo_enc, int on)
static void solo_update_mode(struct solo_enc_dev *solo_enc)
static int solo_enc_on(struct solo_enc_fh *fh)
static void solo_enc_off(struct solo_enc_fh *fh)
static int solo_start_fh_thread(struct solo_enc_fh *fh)
static void enc_reset_gop(struct solo_dev *solo_dev, u8 ch)
static int enc_gop_reset(struct solo_dev *solo_dev, u8 ch, u8 vop)
static void enc_write_sg(struct scatterlist *sglist, void *buf, int size)
static int enc_get_mpeg_dma_sg(struct solo_dev *solo_dev,
struct p2m_desc *desc,
struct scatterlist *sglist, int skip,
unsigned int off, unsigned int size)
static int enc_get_mpeg_dma_t(struct solo_dev *solo_dev,
dma_addr_t buf, unsigned int off,
unsigned int size)
static int enc_get_mpeg_dma(struct solo_dev *solo_dev, void *buf,
unsigned int off, unsigned int size)
static int enc_get_jpeg_dma_sg(struct solo_dev *solo_dev,
struct p2m_desc *desc,
struct scatterlist *sglist, int skip,
unsigned int off, unsigned int size)
#define OFF_IN_RANGE(__off, __range, __chk) \
((__off <= __chk) && ((__off + __range) >= __chk))
static void solo_jpeg_header(struct solo_enc_dev *solo_enc,
struct videobuf_dmabuf *vbuf)
static int solo_fill_jpeg(struct solo_enc_fh *fh, struct solo_enc_buf *enc_buf,
struct videobuf_buffer *vb,
struct videobuf_dmabuf *vbuf)
static inline int vop_interlaced(__le32 *vh)
static inline u32 vop_size(__le32 *vh)
static inline u8 vop_hsize(__le32 *vh)
static inline u8 vop_vsize(__le32 *vh)
static void write_bytes(u8 **out, unsigned *bits, const u8 *src, unsigned count)
static void write_bits(u8 **out, unsigned *bits, u32 value, unsigned count)
static void write_ue(u8 **out, unsigned *bits, unsigned value)
static void write_se(u8 **out, unsigned *bits, int value)
static void write_mpeg4_end(u8 **out, unsigned *bits)
static void write_h264_end(u8 **out, unsigned *bits, int align)
static void mpeg4_write_vol(u8 **out, struct solo_dev *solo_dev,
__le32 *vh, unsigned fps, unsigned interval)
static void h264_write_vol(u8 **out, struct solo_dev *solo_dev, __le32 *vh)
static int solo_fill_mpeg(struct solo_enc_fh *fh, struct solo_enc_buf *enc_buf,
struct videobuf_buffer *vb,
struct videobuf_dmabuf *vbuf)
static void solo_enc_fillbuf(struct solo_enc_fh *fh,
struct videobuf_buffer *vb)
static void solo_enc_thread_try(struct solo_enc_fh *fh)
static int solo_enc_thread(void *data)
void solo_motion_isr(struct solo_dev *solo_dev)
void solo_enc_v4l2_isr(struct solo_dev *solo_dev)
static int solo_enc_buf_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static int solo_enc_buf_prepare(struct videobuf_queue *vq,
struct videobuf_buffer *vb,
enum v4l2_field field)
static void solo_enc_buf_queue(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void solo_enc_buf_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops solo_enc_video_qops = ;
static unsigned int solo_enc_poll(struct file *file,
struct poll_table_struct *wait)
static int solo_enc_mmap(struct file *file, struct vm_area_struct *vma)
static int solo_enc_open(struct file *file)
static ssize_t solo_enc_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static int solo_enc_release(struct file *file)
static int solo_enc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int solo_enc_enum_input(struct file *file, void *priv,
struct v4l2_input *input)
static int solo_enc_set_input(struct file *file, void *priv, unsigned int index)
static int solo_enc_get_input(struct file *file, void *priv,
unsigned int *index)
static int solo_enc_enum_fmt_cap(struct file *file, void *priv,
struct v4l2_fmtdesc *f)
static int solo_enc_try_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int solo_enc_set_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int solo_enc_get_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int solo_enc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *req)
static int solo_enc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int solo_enc_qbuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int solo_enc_dqbuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int solo_enc_streamon(struct file *file, void *priv,
enum v4l2_buf_type i)
static int solo_enc_streamoff(struct file *file, void *priv,
enum v4l2_buf_type i)
static int solo_enc_s_std(struct file *file, void *priv, v4l2_std_id *i)
static int solo_enum_framesizes(struct file *file, void *priv,
struct v4l2_frmsizeenum *fsize)
static int solo_enum_frameintervals(struct file *file, void *priv,
struct v4l2_frmivalenum *fintv)
static int solo_g_parm(struct file *file, void *priv,
struct v4l2_streamparm *sp)
static int solo_s_parm(struct file *file, void *priv,
struct v4l2_streamparm *sp)
static int solo_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int solo_querymenu(struct file *file, void *priv,
struct v4l2_querymenu *qmenu)
static int solo_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int solo_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int solo_s_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static int solo_g_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static const struct v4l2_file_operations solo_enc_fops = ;
static const struct v4l2_ioctl_ops solo_enc_ioctl_ops = ;
static struct video_device solo_enc_template = ;
static struct solo_enc_dev *solo_enc_alloc(struct solo_dev *solo_dev, u8 ch)
static void solo_enc_free(struct solo_enc_dev *solo_enc)
int solo_enc_v4l2_init(struct solo_dev *solo_dev)
void solo_enc_v4l2_exit(struct solo_dev *solo_dev)
