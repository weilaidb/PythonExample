const struct zoran_format zoran_formats[] = ;
#define NUM_FORMATS ARRAY_SIZE(zoran_formats)
static __u32
zoran_v4l2_calc_bufsize (struct zoran_jpg_settings *settings)
static void v4l_fbuffer_free(struct zoran_fh *fh);
static void jpg_fbuffer_free(struct zoran_fh *fh);
static void map_mode_raw(struct zoran_fh *fh)
static void map_mode_jpg(struct zoran_fh *fh, int play)
static inline const char *mode_name(enum zoran_map_mode mode)
static int v4l_fbuffer_alloc(struct zoran_fh *fh)
static void v4l_fbuffer_free(struct zoran_fh *fh)
static int jpg_fbuffer_alloc(struct zoran_fh *fh)
static void jpg_fbuffer_free(struct zoran_fh *fh)
static int
zoran_v4l_set_format (struct zoran_fh           *fh,
int                        width,
int                        height,
const struct zoran_format *format)
static int zoran_v4l_queue_frame(struct zoran_fh *fh, int num)
static int v4l_sync(struct zoran_fh *fh, int frame)
static int zoran_jpg_queue_frame(struct zoran_fh *fh, int num,
enum zoran_codec_mode mode)
static int jpg_qbuf(struct zoran_fh *fh, int frame, enum zoran_codec_mode mode)
static int jpg_sync(struct zoran_fh *fh, struct zoran_sync *bs)
static void zoran_open_init_session(struct zoran_fh *fh)
static void zoran_close_end_session(struct zoran_fh *fh)
static int zoran_open(struct file *file)
static int
zoran_close(struct file  *file)
static ssize_t
zoran_read (struct file *file,
char        __user *data,
size_t       count,
loff_t      *ppos)
static ssize_t
zoran_write (struct file *file,
const char  __user *data,
size_t       count,
loff_t      *ppos)
static int setup_fbuffer(struct zoran_fh *fh,
void                      *base,
const struct zoran_format *fmt,
int                        width,
int                        height,
int                        bytesperline)
static int setup_window(struct zoran_fh *fh, int x, int y, int width, int height,
struct v4l2_clip __user *clips, int clipcount, void __user *bitmap)
static int setup_overlay(struct zoran_fh *fh, int on)
static int zoran_v4l2_buffer_status(struct zoran_fh *fh,
struct v4l2_buffer *buf, int num)
static int
zoran_set_norm (struct zoran *zr,
v4l2_std_id norm)
static int
zoran_set_input (struct zoran *zr,
int           input)
static int zoran_querycap(struct file *file, void *__fh, struct v4l2_capability *cap)
static int zoran_enum_fmt(struct zoran *zr, struct v4l2_fmtdesc *fmt, int flag)
static int zoran_enum_fmt_vid_cap(struct file *file, void *__fh,
struct v4l2_fmtdesc *f)
static int zoran_enum_fmt_vid_out(struct file *file, void *__fh,
struct v4l2_fmtdesc *f)
static int zoran_enum_fmt_vid_overlay(struct file *file, void *__fh,
struct v4l2_fmtdesc *f)
static int zoran_g_fmt_vid_out(struct file *file, void *__fh,
struct v4l2_format *fmt)
static int zoran_g_fmt_vid_cap(struct file *file, void *__fh,
struct v4l2_format *fmt)
static int zoran_g_fmt_vid_overlay(struct file *file, void *__fh,
struct v4l2_format *fmt)
static int zoran_try_fmt_vid_overlay(struct file *file, void *__fh,
struct v4l2_format *fmt)
static int zoran_try_fmt_vid_out(struct file *file, void *__fh,
struct v4l2_format *fmt)
static int zoran_try_fmt_vid_cap(struct file *file, void *__fh,
struct v4l2_format *fmt)
static int zoran_s_fmt_vid_overlay(struct file *file, void *__fh,
struct v4l2_format *fmt)
static int zoran_s_fmt_vid_out(struct file *file, void *__fh,
struct v4l2_format *fmt)
static int zoran_s_fmt_vid_cap(struct file *file, void *__fh,
struct v4l2_format *fmt)
static int zoran_g_fbuf(struct file *file, void *__fh,
struct v4l2_framebuffer *fb)
static int zoran_s_fbuf(struct file *file, void *__fh,
struct v4l2_framebuffer *fb)
static int zoran_overlay(struct file *file, void *__fh, unsigned int on)
static int zoran_streamoff(struct file *file, void *__fh, enum v4l2_buf_type type);
static int zoran_reqbufs(struct file *file, void *__fh, struct v4l2_requestbuffers *req)
static int zoran_querybuf(struct file *file, void *__fh, struct v4l2_buffer *buf)
static int zoran_qbuf(struct file *file, void *__fh, struct v4l2_buffer *buf)
static int zoran_dqbuf(struct file *file, void *__fh, struct v4l2_buffer *buf)
static int zoran_streamon(struct file *file, void *__fh, enum v4l2_buf_type type)
static int zoran_streamoff(struct file *file, void *__fh, enum v4l2_buf_type type)
static int zoran_queryctrl(struct file *file, void *__fh,
struct v4l2_queryctrl *ctrl)
static int zoran_g_ctrl(struct file *file, void *__fh, struct v4l2_control *ctrl)
static int zoran_s_ctrl(struct file *file, void *__fh, struct v4l2_control *ctrl)
static int zoran_g_std(struct file *file, void *__fh, v4l2_std_id *std)
static int zoran_s_std(struct file *file, void *__fh, v4l2_std_id *std)
static int zoran_enum_input(struct file *file, void *__fh,
struct v4l2_input *inp)
static int zoran_g_input(struct file *file, void *__fh, unsigned int *input)
static int zoran_s_input(struct file *file, void *__fh, unsigned int input)
static int zoran_enum_output(struct file *file, void *__fh,
struct v4l2_output *outp)
static int zoran_g_output(struct file *file, void *__fh, unsigned int *output)
static int zoran_s_output(struct file *file, void *__fh, unsigned int output)
static int zoran_cropcap(struct file *file, void *__fh,
struct v4l2_cropcap *cropcap)
static int zoran_g_crop(struct file *file, void *__fh, struct v4l2_crop *crop)
static int zoran_s_crop(struct file *file, void *__fh, struct v4l2_crop *crop)
static int zoran_g_jpegcomp(struct file *file, void *__fh,
struct v4l2_jpegcompression *params)
static int zoran_s_jpegcomp(struct file *file, void *__fh,
struct v4l2_jpegcompression *params)
static unsigned int
zoran_poll (struct file *file,
poll_table  *wait)
static void
zoran_vm_open (struct vm_area_struct *vma)
static void
zoran_vm_close (struct vm_area_struct *vma)
static const struct vm_operations_struct zoran_vm_ops = ;
static int
zoran_mmap (struct file           *file,
struct vm_area_struct *vma)
static const struct v4l2_ioctl_ops zoran_ioctl_ops = ;
static long zoran_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct v4l2_file_operations zoran_fops = ;
struct video_device zoran_template __devinitdata = ;
