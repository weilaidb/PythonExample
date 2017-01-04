static struct v4l2_queryctrl pwc_controls[] = ;
static void pwc_vidioc_fill_fmt(const struct pwc_device *pdev, struct v4l2_format *f)
static int pwc_vidioc_try_fmt(struct pwc_device *pdev, struct v4l2_format *f)
static int pwc_vidioc_set_fmt(struct pwc_device *pdev, struct v4l2_format *f)
static int pwc_querycap(struct file *file, void *fh, struct v4l2_capability *cap)
static int pwc_enum_input(struct file *file, void *fh, struct v4l2_input *i)
static int pwc_g_input(struct file *file, void *fh, unsigned int *i)
static int pwc_s_input(struct file *file, void *fh, unsigned int i)
static int pwc_queryctrl(struct file *file, void *fh, struct v4l2_queryctrl *c)
static int pwc_g_ctrl(struct file *file, void *fh, struct v4l2_control *c)
static int pwc_s_ctrl(struct file *file, void *fh, struct v4l2_control *c)
static int pwc_enum_fmt_vid_cap(struct file *file, void *fh, struct v4l2_fmtdesc *f)
static int pwc_g_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *f)
static int pwc_try_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *f)
static int pwc_s_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *f)
static int pwc_reqbufs(struct file *file, void *fh, struct v4l2_requestbuffers *rb)
static int pwc_querybuf(struct file *file, void *fh, struct v4l2_buffer *buf)
static int pwc_qbuf(struct file *file, void *fh, struct v4l2_buffer *buf)
static int pwc_dqbuf(struct file *file, void *fh, struct v4l2_buffer *buf)
static int pwc_streamon(struct file *file, void *fh, enum v4l2_buf_type i)
static int pwc_streamoff(struct file *file, void *fh, enum v4l2_buf_type i)
static int pwc_enum_framesizes(struct file *file, void *fh,
struct v4l2_frmsizeenum *fsize)
static int pwc_enum_frameintervals(struct file *file, void *fh,
struct v4l2_frmivalenum *fival)
static long pwc_default(struct file *file, void *fh, bool valid_prio,
int cmd, void *arg)
const struct v4l2_ioctl_ops pwc_ioctl_ops = ;
