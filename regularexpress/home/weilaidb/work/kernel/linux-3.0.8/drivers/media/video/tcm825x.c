#define MAX_FPS 30
#define MIN_FPS 8
#define MAX_HALF_FPS (MAX_FPS / 2)
#define HIGH_FPS_MODE_LOWER_LIMIT 14
#define DEFAULT_FPS MAX_HALF_FPS
struct tcm825x_sensor ;
static const struct v4l2_fmtdesc tcm825x_formats[] = ;
#define TCM825X_NUM_CAPTURE_FORMATS	ARRAY_SIZE(tcm825x_formats)
static const struct tcm825x_reg subqcif	=	;
static const struct tcm825x_reg qcif	=	;
static const struct tcm825x_reg cif	=	;
static const struct tcm825x_reg qqvga	=	;
static const struct tcm825x_reg qvga	=	;
static const struct tcm825x_reg vga	=	;
static const struct tcm825x_reg yuv422	=	;
static const struct tcm825x_reg rgb565	=	;
#define V4L2_CID_ALC				V4L2_CID_PRIVATE_BASE
#define V4L2_CID_H_EDGE_EN			V4L2_CID_PRIVATE_BASE + 1
#define V4L2_CID_V_EDGE_EN			V4L2_CID_PRIVATE_BASE + 2
#define V4L2_CID_LENS				V4L2_CID_PRIVATE_BASE + 3
#define V4L2_CID_MAX_EXPOSURE_TIME		V4L2_CID_PRIVATE_BASE + 4
#define V4L2_CID_LAST_PRIV			V4L2_CID_MAX_EXPOSURE_TIME
static struct vcontrol  video_control[] = ;
static const struct tcm825x_reg *tcm825x_siz_reg[NUM_IMAGE_SIZES] =
;
static const struct tcm825x_reg *tcm825x_fmt_reg[NUM_PIXEL_FORMATS] =
;
static int tcm825x_read_reg(struct i2c_client *client, int reg)
static int tcm825x_write_reg(struct i2c_client *client, u8 reg, u8 val)
static int __tcm825x_write_reg_mask(struct i2c_client *client,
u8 reg, u8 val, u8 mask)
#define tcm825x_write_reg_mask(client, regmask, val)			\
__tcm825x_write_reg_mask(client, TCM825X_ADDR((regmask)), val,	\
TCM825X_MASK((regmask)))
static int tcm825x_write_default_regs(struct i2c_client *client,
const struct tcm825x_reg *reglist)
static struct vcontrol *find_vctrl(int id)
static enum image_size tcm825x_find_size(struct v4l2_int_device *s,
unsigned int width,
unsigned int height)
static int tcm825x_configure(struct v4l2_int_device *s)
static int ioctl_queryctrl(struct v4l2_int_device *s,
struct v4l2_queryctrl *qc)
static int ioctl_g_ctrl(struct v4l2_int_device *s,
struct v4l2_control *vc)
static int ioctl_s_ctrl(struct v4l2_int_device *s,
struct v4l2_control *vc)
static int ioctl_enum_fmt_cap(struct v4l2_int_device *s,
struct v4l2_fmtdesc *fmt)
static int ioctl_try_fmt_cap(struct v4l2_int_device *s,
struct v4l2_format *f)
static int ioctl_s_fmt_cap(struct v4l2_int_device *s,
struct v4l2_format *f)
static int ioctl_g_fmt_cap(struct v4l2_int_device *s,
struct v4l2_format *f)
static int ioctl_g_parm(struct v4l2_int_device *s,
struct v4l2_streamparm *a)
static int ioctl_s_parm(struct v4l2_int_device *s,
struct v4l2_streamparm *a)
static int ioctl_s_power(struct v4l2_int_device *s, int on)
static int ioctl_g_ifparm(struct v4l2_int_device *s, struct v4l2_ifparm *p)
static int ioctl_g_needs_reset(struct v4l2_int_device *s, void *buf)
static int ioctl_reset(struct v4l2_int_device *s)
static int ioctl_init(struct v4l2_int_device *s)
static int ioctl_dev_exit(struct v4l2_int_device *s)
static int ioctl_dev_init(struct v4l2_int_device *s)
static struct v4l2_int_ioctl_desc tcm825x_ioctl_desc[] = ;
static struct v4l2_int_slave tcm825x_slave = ;
static struct tcm825x_sensor tcm825x;
static struct v4l2_int_device tcm825x_int_device = ;
static int tcm825x_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int tcm825x_remove(struct i2c_client *client)
static const struct i2c_device_id tcm825x_id[] = ;
MODULE_DEVICE_TABLE(i2c, tcm825x_id);
static struct i2c_driver tcm825x_i2c_driver = ;
static struct tcm825x_sensor tcm825x = ;
static int __init tcm825x_init(void)
static void __exit tcm825x_exit(void)
late_initcall(tcm825x_init);
module_exit(tcm825x_exit);
MODULE_AUTHOR("Sakari Ailus <sakari.ailus@nokia.com>");
MODULE_DESCRIPTION("TCM825x camera sensor driver");
MODULE_LICENSE("GPL");
