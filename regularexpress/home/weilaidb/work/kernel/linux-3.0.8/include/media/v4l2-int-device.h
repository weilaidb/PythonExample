#define V4L2_INT_DEVICE_H
#define V4L2NAMESIZE 32
enum v4l2_int_type ;
struct v4l2_int_device;
struct v4l2_int_master ;
typedef int (v4l2_int_ioctl_func)(struct v4l2_int_device *);
typedef int (v4l2_int_ioctl_func_0)(struct v4l2_int_device *);
typedef int (v4l2_int_ioctl_func_1)(struct v4l2_int_device *, void *);
struct v4l2_int_ioctl_desc ;
struct v4l2_int_slave ;
struct v4l2_int_device ;
void v4l2_int_device_try_attach_all(void);
int v4l2_int_device_register(struct v4l2_int_device *d);
void v4l2_int_device_unregister(struct v4l2_int_device *d);
int v4l2_int_ioctl_0(struct v4l2_int_device *d, int cmd);
int v4l2_int_ioctl_1(struct v4l2_int_device *d, int cmd, void *arg);
enum v4l2_power ;
enum v4l2_if_type ;
enum v4l2_if_type_bt656_mode ;
struct v4l2_if_type_bt656 ;
struct v4l2_ifparm ;
enum v4l2_int_ioctl_num ;
#define V4L2_INT_WRAPPER_0(name)					\
static inline int vidioc_int_##name(struct v4l2_int_device *d)	\
\
\
static inline struct v4l2_int_ioctl_desc			\
vidioc_int_##name##_cb(int (*func)				\
(struct v4l2_int_device *))		\
#define V4L2_INT_WRAPPER_1(name, arg_type, asterisk)			\
static inline int vidioc_int_##name(struct v4l2_int_device *d,	\
arg_type asterisk arg)	\
\
\
static inline struct v4l2_int_ioctl_desc			\
vidioc_int_##name##_cb(int (*func)				\
(struct v4l2_int_device *,		\
arg_type asterisk))			\
V4L2_INT_WRAPPER_1(enum_fmt_cap, struct v4l2_fmtdesc, *);
V4L2_INT_WRAPPER_1(g_fmt_cap, struct v4l2_format, *);
V4L2_INT_WRAPPER_1(s_fmt_cap, struct v4l2_format, *);
V4L2_INT_WRAPPER_1(try_fmt_cap, struct v4l2_format, *);
V4L2_INT_WRAPPER_1(queryctrl, struct v4l2_queryctrl, *);
V4L2_INT_WRAPPER_1(g_ctrl, struct v4l2_control, *);
V4L2_INT_WRAPPER_1(s_ctrl, struct v4l2_control, *);
V4L2_INT_WRAPPER_1(cropcap, struct v4l2_cropcap, *);
V4L2_INT_WRAPPER_1(g_crop, struct v4l2_crop, *);
V4L2_INT_WRAPPER_1(s_crop, struct v4l2_crop, *);
V4L2_INT_WRAPPER_1(g_parm, struct v4l2_streamparm, *);
V4L2_INT_WRAPPER_1(s_parm, struct v4l2_streamparm, *);
V4L2_INT_WRAPPER_1(querystd, v4l2_std_id, *);
V4L2_INT_WRAPPER_1(s_std, v4l2_std_id, *);
V4L2_INT_WRAPPER_1(s_video_routing, struct v4l2_routing, *);
V4L2_INT_WRAPPER_0(dev_init);
V4L2_INT_WRAPPER_0(dev_exit);
V4L2_INT_WRAPPER_1(s_power, enum v4l2_power, );
V4L2_INT_WRAPPER_1(g_priv, void, *);
V4L2_INT_WRAPPER_1(g_ifparm, struct v4l2_ifparm, *);
V4L2_INT_WRAPPER_1(g_needs_reset, void, *);
V4L2_INT_WRAPPER_1(enum_framesizes, struct v4l2_frmsizeenum, *);
V4L2_INT_WRAPPER_1(enum_frameintervals, struct v4l2_frmivalenum, *);
V4L2_INT_WRAPPER_0(reset);
V4L2_INT_WRAPPER_0(init);
V4L2_INT_WRAPPER_1(g_chip_ident, int, *);
