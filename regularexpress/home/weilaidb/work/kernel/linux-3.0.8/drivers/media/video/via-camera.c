MODULE_ALIAS("platform:viafb-camera");
MODULE_AUTHOR("Jonathan Corbet <corbet@lwn.net>");
MODULE_DESCRIPTION("VIA framebuffer-based camera controller driver");
MODULE_LICENSE("GPL");
static int flip_image;
module_param(flip_image, bool, 0444);
MODULE_PARM_DESC(flip_image,
"If set, the sensor will be instructed to flip the image "
"vertically.");
static int override_serial;
module_param(override_serial, bool, 0444);
MODULE_PARM_DESC(override_serial,
"The camera driver will normally refuse to load if "
"the XO 1.5 serial port is enabled.  Set this option "
"to force-enable the camera.");
#define VGA_WIDTH	640
#define VGA_HEIGHT	480
#define QCIF_WIDTH	176
#define	QCIF_HEIGHT	144
enum viacam_opstate ;
struct via_camera ;
static struct via_camera *via_cam_info;
#define CF_DMA_ACTIVE	 0
#define CF_CONFIG_NEEDED 1
#define sensor_call(cam, optype, func, args...) \
v4l2_subdev_call(cam->sensor, optype, func, ##args)
#define cam_err(cam, fmt, arg...) \
dev_err(&(cam)->platdev->dev, fmt, ##arg);
#define cam_warn(cam, fmt, arg...) \
dev_warn(&(cam)->platdev->dev, fmt, ##arg);
#define cam_dbg(cam, fmt, arg...) \
dev_dbg(&(cam)->platdev->dev, fmt, ##arg);
static struct via_format  via_formats[] = ;
#define N_VIA_FMTS ARRAY_SIZE(via_formats)
static struct via_format *via_find_format(u32 pixelformat)
static int via_sensor_power_setup(struct via_camera *cam)
static void via_sensor_power_up(struct via_camera *cam)
static void via_sensor_power_down(struct via_camera *cam)
static void via_sensor_power_release(struct via_camera *cam)
static int viacam_set_flip(struct via_camera *cam)
static int viacam_configure_sensor(struct via_camera *cam)
static inline void viacam_write_reg(struct via_camera *cam,
int reg, int value)
static inline int viacam_read_reg(struct via_camera *cam, int reg)
static inline void viacam_write_reg_mask(struct via_camera *cam,
int reg, int value, int mask)
static irqreturn_t viacam_quick_irq(int irq, void *data)
static struct videobuf_buffer *viacam_next_buffer(struct via_camera *cam)
static irqreturn_t viacam_irq(int irq, void *data)
static void viacam_int_enable(struct via_camera *cam)
static void viacam_int_disable(struct via_camera *cam)
static int viacam_ctlr_cbufs(struct via_camera *cam)
static void viacam_set_scale(struct via_camera *cam)
static void viacam_ctlr_image(struct via_camera *cam)
static int viacam_config_controller(struct via_camera *cam)
static void viacam_start_engine(struct via_camera *cam)
static void viacam_stop_engine(struct via_camera *cam)
static int viacam_vb_buf_setup(struct videobuf_queue *q,
unsigned int *count, unsigned int *size)
static int viacam_vb_buf_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb, enum v4l2_field field)
static void viacam_vb_buf_queue(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static void viacam_vb_buf_release(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static const struct videobuf_queue_ops viacam_vb_ops = ;
static int viacam_open(struct file *filp)
static int viacam_release(struct file *filp)
static ssize_t viacam_read(struct file *filp, char __user *buffer,
size_t len, loff_t *pos)
static unsigned int viacam_poll(struct file *filp, struct poll_table_struct *pt)
static int viacam_mmap(struct file *filp, struct vm_area_struct *vma)
static const struct v4l2_file_operations viacam_fops = ;
static int viacam_g_chip_ident(struct file *file, void *priv,
struct v4l2_dbg_chip_ident *ident)
static int viacam_queryctrl(struct file *filp, void *priv,
struct v4l2_queryctrl *qc)
static int viacam_g_ctrl(struct file *filp, void *priv,
struct v4l2_control *ctrl)
static int viacam_s_ctrl(struct file *filp, void *priv,
struct v4l2_control *ctrl)
static int viacam_enum_input(struct file *filp, void *priv,
struct v4l2_input *input)
static int viacam_g_input(struct file *filp, void *priv, unsigned int *i)
static int viacam_s_input(struct file *filp, void *priv, unsigned int i)
static int viacam_s_std(struct file *filp, void *priv, v4l2_std_id *std)
static const struct v4l2_pix_format viacam_def_pix_format = ;
static const enum v4l2_mbus_pixelcode via_def_mbus_code = V4L2_MBUS_FMT_YUYV8_2X8;
static int viacam_enum_fmt_vid_cap(struct file *filp, void *priv,
struct v4l2_fmtdesc *fmt)
static void viacam_fmt_pre(struct v4l2_pix_format *userfmt,
struct v4l2_pix_format *sensorfmt)
static void viacam_fmt_post(struct v4l2_pix_format *userfmt,
struct v4l2_pix_format *sensorfmt)
static int viacam_do_try_fmt(struct via_camera *cam,
struct v4l2_pix_format *upix, struct v4l2_pix_format *spix)
static int viacam_try_fmt_vid_cap(struct file *filp, void *priv,
struct v4l2_format *fmt)
static int viacam_g_fmt_vid_cap(struct file *filp, void *priv,
struct v4l2_format *fmt)
static int viacam_s_fmt_vid_cap(struct file *filp, void *priv,
struct v4l2_format *fmt)
static int viacam_querycap(struct file *filp, void *priv,
struct v4l2_capability *cap)
static int viacam_reqbufs(struct file *filp, void *priv,
struct v4l2_requestbuffers *rb)
static int viacam_querybuf(struct file *filp, void *priv,
struct v4l2_buffer *buf)
static int viacam_qbuf(struct file *filp, void *priv, struct v4l2_buffer *buf)
static int viacam_dqbuf(struct file *filp, void *priv, struct v4l2_buffer *buf)
static int viacam_streamon(struct file *filp, void *priv, enum v4l2_buf_type t)
static int viacam_streamoff(struct file *filp, void *priv, enum v4l2_buf_type t)
static int viacam_g_parm(struct file *filp, void *priv,
struct v4l2_streamparm *parm)
static int viacam_s_parm(struct file *filp, void *priv,
struct v4l2_streamparm *parm)
static int viacam_enum_framesizes(struct file *filp, void *priv,
struct v4l2_frmsizeenum *sizes)
static int viacam_enum_frameintervals(struct file *filp, void *priv,
struct v4l2_frmivalenum *interval)
static const struct v4l2_ioctl_ops viacam_ioctl_ops = ;
static int viacam_suspend(void *priv)
static int viacam_resume(void *priv)
static struct viafb_pm_hooks viacam_pm_hooks = ;
static struct video_device viacam_v4l_template = ;
#define VIACAM_SERIAL_DEVFN 0x88
#define VIACAM_SERIAL_CREG 0x46
#define VIACAM_SERIAL_BIT 0x40
static __devinit bool viacam_serial_is_enabled(void)
static __devinit int viacam_probe(struct platform_device *pdev)
static __devexit int viacam_remove(struct platform_device *pdev)
static struct platform_driver viacam_driver = ;
static int viacam_init(void)
module_init(viacam_init);
static void viacam_exit(void)
module_exit(viacam_exit);
