u16 cx18_service2vbi(int type)
static int valid_service_line(int field, int line, int is_pal)
static u16 select_service_from_set(int field, int line, u16 set, int is_pal)
void cx18_expand_service_set(struct v4l2_sliced_vbi_format *fmt, int is_pal)
static int check_service_set(struct v4l2_sliced_vbi_format *fmt, int is_pal)
u16 cx18_get_service_set(struct v4l2_sliced_vbi_format *fmt)
static int cx18_g_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *fmt)
static int cx18_g_fmt_vbi_cap(struct file *file, void *fh,
struct v4l2_format *fmt)
static int cx18_g_fmt_sliced_vbi_cap(struct file *file, void *fh,
struct v4l2_format *fmt)
static int cx18_try_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *fmt)
static int cx18_try_fmt_vbi_cap(struct file *file, void *fh,
struct v4l2_format *fmt)
static int cx18_try_fmt_sliced_vbi_cap(struct file *file, void *fh,
struct v4l2_format *fmt)
static int cx18_s_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *fmt)
static int cx18_s_fmt_vbi_cap(struct file *file, void *fh,
struct v4l2_format *fmt)
static int cx18_s_fmt_sliced_vbi_cap(struct file *file, void *fh,
struct v4l2_format *fmt)
static int cx18_g_chip_ident(struct file *file, void *fh,
struct v4l2_dbg_chip_ident *chip)
static int cx18_cxc(struct cx18 *cx, unsigned int cmd, void *arg)
static int cx18_g_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
static int cx18_s_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
static int cx18_querycap(struct file *file, void *fh,
struct v4l2_capability *vcap)
static int cx18_enumaudio(struct file *file, void *fh, struct v4l2_audio *vin)
static int cx18_g_audio(struct file *file, void *fh, struct v4l2_audio *vin)
static int cx18_s_audio(struct file *file, void *fh, struct v4l2_audio *vout)
static int cx18_enum_input(struct file *file, void *fh, struct v4l2_input *vin)
static int cx18_cropcap(struct file *file, void *fh,
struct v4l2_cropcap *cropcap)
static int cx18_s_crop(struct file *file, void *fh, struct v4l2_crop *crop)
static int cx18_g_crop(struct file *file, void *fh, struct v4l2_crop *crop)
static int cx18_enum_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_fmtdesc *fmt)
static int cx18_g_input(struct file *file, void *fh, unsigned int *i)
int cx18_s_input(struct file *file, void *fh, unsigned int inp)
static int cx18_g_frequency(struct file *file, void *fh,
struct v4l2_frequency *vf)
int cx18_s_frequency(struct file *file, void *fh, struct v4l2_frequency *vf)
static int cx18_g_std(struct file *file, void *fh, v4l2_std_id *std)
int cx18_s_std(struct file *file, void *fh, v4l2_std_id *std)
static int cx18_s_tuner(struct file *file, void *fh, struct v4l2_tuner *vt)
static int cx18_g_tuner(struct file *file, void *fh, struct v4l2_tuner *vt)
static int cx18_g_sliced_vbi_cap(struct file *file, void *fh,
struct v4l2_sliced_vbi_cap *cap)
static int _cx18_process_idx_data(struct cx18_buffer *buf,
struct v4l2_enc_idx *idx)
static int cx18_process_idx_data(struct cx18_stream *s, struct cx18_mdl *mdl,
struct v4l2_enc_idx *idx)
static int cx18_g_enc_index(struct file *file, void *fh,
struct v4l2_enc_idx *idx)
static struct videobuf_queue *cx18_vb_queue(struct cx18_open_id *id)
static int cx18_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int cx18_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int cx18_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *rb)
static int cx18_querybuf(struct file *file, void *priv,
struct v4l2_buffer *b)
static int cx18_qbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int cx18_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int cx18_encoder_cmd(struct file *file, void *fh,
struct v4l2_encoder_cmd *enc)
static int cx18_try_encoder_cmd(struct file *file, void *fh,
struct v4l2_encoder_cmd *enc)
static int cx18_log_status(struct file *file, void *fh)
static long cx18_default(struct file *file, void *fh, bool valid_prio,
int cmd, void *arg)
long cx18_v4l2_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static const struct v4l2_ioctl_ops cx18_ioctl_ops = ;
void cx18_set_funcs(struct video_device *vdev)
