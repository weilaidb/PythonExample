static long native_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
struct v4l2_clip32 ;
struct v4l2_window32 ;
static int get_v4l2_window32(struct v4l2_window *kp, struct v4l2_window32 __user *up)
static int put_v4l2_window32(struct v4l2_window *kp, struct v4l2_window32 __user *up)
static inline int get_v4l2_pix_format(struct v4l2_pix_format *kp, struct v4l2_pix_format __user *up)
static inline int get_v4l2_pix_format_mplane(struct v4l2_pix_format_mplane *kp,
struct v4l2_pix_format_mplane __user *up)
static inline int put_v4l2_pix_format(struct v4l2_pix_format *kp, struct v4l2_pix_format __user *up)
static inline int put_v4l2_pix_format_mplane(struct v4l2_pix_format_mplane *kp,
struct v4l2_pix_format_mplane __user *up)
static inline int get_v4l2_vbi_format(struct v4l2_vbi_format *kp, struct v4l2_vbi_format __user *up)
static inline int put_v4l2_vbi_format(struct v4l2_vbi_format *kp, struct v4l2_vbi_format __user *up)
static inline int get_v4l2_sliced_vbi_format(struct v4l2_sliced_vbi_format *kp, struct v4l2_sliced_vbi_format __user *up)
static inline int put_v4l2_sliced_vbi_format(struct v4l2_sliced_vbi_format *kp, struct v4l2_sliced_vbi_format __user *up)
struct v4l2_format32 ;
static int get_v4l2_format32(struct v4l2_format *kp, struct v4l2_format32 __user *up)
static int put_v4l2_format32(struct v4l2_format *kp, struct v4l2_format32 __user *up)
struct v4l2_standard32 ;
static int get_v4l2_standard32(struct v4l2_standard *kp, struct v4l2_standard32 __user *up)
static int put_v4l2_standard32(struct v4l2_standard *kp, struct v4l2_standard32 __user *up)
struct v4l2_plane32 ;
struct v4l2_buffer32 ;
static int get_v4l2_plane32(struct v4l2_plane *up, struct v4l2_plane32 *up32,
enum v4l2_memory memory)
static int put_v4l2_plane32(struct v4l2_plane *up, struct v4l2_plane32 *up32,
enum v4l2_memory memory)
static int get_v4l2_buffer32(struct v4l2_buffer *kp, struct v4l2_buffer32 __user *up)
static int put_v4l2_buffer32(struct v4l2_buffer *kp, struct v4l2_buffer32 __user *up)
struct v4l2_framebuffer32 ;
static int get_v4l2_framebuffer32(struct v4l2_framebuffer *kp, struct v4l2_framebuffer32 __user *up)
static int put_v4l2_framebuffer32(struct v4l2_framebuffer *kp, struct v4l2_framebuffer32 __user *up)
struct v4l2_input32  __attribute__ ((packed));
static inline int get_v4l2_input32(struct v4l2_input *kp, struct v4l2_input32 __user *up)
static inline int put_v4l2_input32(struct v4l2_input *kp, struct v4l2_input32 __user *up)
struct v4l2_ext_controls32 ;
struct v4l2_ext_control32  __attribute__ ((packed));
static inline int ctrl_is_pointer(u32 id)
static int get_v4l2_ext_controls32(struct v4l2_ext_controls *kp, struct v4l2_ext_controls32 __user *up)
static int put_v4l2_ext_controls32(struct v4l2_ext_controls *kp, struct v4l2_ext_controls32 __user *up)
#define VIDIOC_G_FMT32		_IOWR('V',  4, struct v4l2_format32)
#define VIDIOC_S_FMT32		_IOWR('V',  5, struct v4l2_format32)
#define VIDIOC_QUERYBUF32	_IOWR('V',  9, struct v4l2_buffer32)
#define VIDIOC_G_FBUF32		_IOR ('V', 10, struct v4l2_framebuffer32)
#define VIDIOC_S_FBUF32		_IOW ('V', 11, struct v4l2_framebuffer32)
#define VIDIOC_QBUF32		_IOWR('V', 15, struct v4l2_buffer32)
#define VIDIOC_DQBUF32		_IOWR('V', 17, struct v4l2_buffer32)
#define VIDIOC_ENUMSTD32	_IOWR('V', 25, struct v4l2_standard32)
#define VIDIOC_ENUMINPUT32	_IOWR('V', 26, struct v4l2_input32)
#define VIDIOC_TRY_FMT32      	_IOWR('V', 64, struct v4l2_format32)
#define VIDIOC_G_EXT_CTRLS32    _IOWR('V', 71, struct v4l2_ext_controls32)
#define VIDIOC_S_EXT_CTRLS32    _IOWR('V', 72, struct v4l2_ext_controls32)
#define VIDIOC_TRY_EXT_CTRLS32  _IOWR('V', 73, struct v4l2_ext_controls32)
#define VIDIOC_OVERLAY32	_IOW ('V', 14, s32)
#define VIDIOC_STREAMON32	_IOW ('V', 18, s32)
#define VIDIOC_STREAMOFF32	_IOW ('V', 19, s32)
#define VIDIOC_G_INPUT32	_IOR ('V', 38, s32)
#define VIDIOC_S_INPUT32	_IOWR('V', 39, s32)
#define VIDIOC_G_OUTPUT32	_IOR ('V', 46, s32)
#define VIDIOC_S_OUTPUT32	_IOWR('V', 47, s32)
static long do_video_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
long v4l2_compat_ioctl32(struct file *file, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL_GPL(v4l2_compat_ioctl32);
MODULE_LICENSE("GPL");
