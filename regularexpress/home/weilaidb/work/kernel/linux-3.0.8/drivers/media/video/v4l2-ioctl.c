#define dbgarg(cmd, fmt, arg...) \
do  while (0)
#define dbgarg2(fmt, arg...) \
do  while (0)
#define dbgarg3(fmt, arg...) \
do  while (0)
#define CLEAR_AFTER_FIELD(p, field) \
memset((u8 *)(p) + offsetof(typeof(*(p)), field) + sizeof((p)->field), \
0, sizeof(*(p)) - offsetof(typeof(*(p)), field) - sizeof((p)->field))
struct std_descr ;
static const struct std_descr standards[] = ;
const char *v4l2_norm_to_name(v4l2_std_id id)
EXPORT_SYMBOL(v4l2_norm_to_name);
void v4l2_video_std_frame_period(int id, struct v4l2_fract *frameperiod)
EXPORT_SYMBOL(v4l2_video_std_frame_period);
int v4l2_video_std_construct(struct v4l2_standard *vs,
int id, const char *name)
EXPORT_SYMBOL(v4l2_video_std_construct);
const char *v4l2_field_names[] = ;
EXPORT_SYMBOL(v4l2_field_names);
const char *v4l2_type_names[] = ;
EXPORT_SYMBOL(v4l2_type_names);
static const char *v4l2_memory_names[] = ;
#define prt_names(a, arr) ((((a) >= 0) && ((a) < ARRAY_SIZE(arr))) ? \
arr[a] : "unknown")
static const char *v4l2_ioctls[] = ;
#define V4L2_IOCTLS ARRAY_SIZE(v4l2_ioctls)
void v4l_printk_ioctl(unsigned int cmd)
EXPORT_SYMBOL(v4l_printk_ioctl);
static void dbgbuf(unsigned int cmd, struct video_device *vfd,
struct v4l2_buffer *p)
static inline void dbgrect(struct video_device *vfd, char *s,
struct v4l2_rect *r)
;
static inline void v4l_print_pix_fmt(struct video_device *vfd,
struct v4l2_pix_format *fmt)
;
static inline void v4l_print_pix_fmt_mplane(struct video_device *vfd,
struct v4l2_pix_format_mplane *fmt)
static inline void v4l_print_ext_ctrls(unsigned int cmd,
struct video_device *vfd, struct v4l2_ext_controls *c, int show_vals)
;
static inline int check_ext_ctrls(struct v4l2_ext_controls *c, int allow_priv)
static int check_fmt(const struct v4l2_ioctl_ops *ops, enum v4l2_buf_type type)
static int fmt_sp_to_mp(const struct v4l2_format *f_sp,
struct v4l2_format *f_mp)
static int fmt_mp_to_sp(const struct v4l2_format *f_mp,
struct v4l2_format *f_sp)
static long __video_do_ioctl(struct file *file,
unsigned int cmd, void *arg)
static unsigned long cmd_input_size(unsigned int cmd)
static int check_array_args(unsigned int cmd, void *parg, size_t *array_size,
void * __user *user_ptr, void ***kernel_ptr)
long
video_usercopy(struct file *file, unsigned int cmd, unsigned long arg,
v4l2_kioctl func)
EXPORT_SYMBOL(video_usercopy);
long video_ioctl2(struct file *file,
unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(video_ioctl2);
