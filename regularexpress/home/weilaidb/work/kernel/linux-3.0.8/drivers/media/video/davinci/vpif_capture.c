MODULE_DESCRIPTION("TI DaVinci VPIF Capture driver");
MODULE_LICENSE("GPL");
#define vpif_err(fmt, arg...)	v4l2_err(&vpif_obj.v4l2_dev, fmt, ## arg)
#define vpif_dbg(level, debug, fmt, arg...)	\
v4l2_dbg(level, debug, &vpif_obj.v4l2_dev, fmt, ## arg)
static int debug = 1;
static u32 ch0_numbuffers = 3;
static u32 ch1_numbuffers = 3;
static u32 ch0_bufsize = 1920 * 1080 * 2;
static u32 ch1_bufsize = 720 * 576 * 2;
module_param(debug, int, 0644);
module_param(ch0_numbuffers, uint, S_IRUGO);
module_param(ch1_numbuffers, uint, S_IRUGO);
module_param(ch0_bufsize, uint, S_IRUGO);
module_param(ch1_bufsize, uint, S_IRUGO);
MODULE_PARM_DESC(debug, "Debug level 0-1");
MODULE_PARM_DESC(ch2_numbuffers, "Channel0 buffer count (default:3)");
MODULE_PARM_DESC(ch3_numbuffers, "Channel1 buffer count (default:3)");
MODULE_PARM_DESC(ch2_bufsize, "Channel0 buffer size (default:1920 x 1080 x 2)");
MODULE_PARM_DESC(ch3_bufsize, "Channel1 buffer size (default:720 x 576 x 2)");
static struct vpif_config_params config_params = ;
static struct vpif_device vpif_obj = ;
static struct device *vpif_dev;
static inline u32 vpif_uservirt_to_phys(u32 virtp)
static int vpif_buffer_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb,
enum v4l2_field field)
static int vpif_buffer_setup(struct videobuf_queue *q, unsigned int *count,
unsigned int *size)
static void vpif_buffer_queue(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static void vpif_buffer_release(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops video_qops = ;
static u8 channel_first_int[VPIF_NUMBER_OF_OBJECTS][2] =
;
static void vpif_process_buffer_complete(struct common_obj *common)
static void vpif_schedule_next_buffer(struct common_obj *common)
static irqreturn_t vpif_channel_isr(int irq, void *dev_id)
static int vpif_update_std_info(struct channel_obj *ch)
static void vpif_calculate_offsets(struct channel_obj *ch)
static void vpif_config_format(struct channel_obj *ch)
static inline enum v4l2_field vpif_get_default_field(
struct vpif_interface *iface)
static int vpif_check_format(struct channel_obj *ch,
struct v4l2_pix_format *pixfmt,
int update)
static void vpif_config_addr(struct channel_obj *ch, int muxmode)
static int vpif_mmap(struct file *filep, struct vm_area_struct *vma)
static unsigned int vpif_poll(struct file *filep, poll_table * wait)
static int vpif_open(struct file *filep)
static int vpif_release(struct file *filep)
static int vpif_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *reqbuf)
static int vpif_querybuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int vpif_qbuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int vpif_dqbuf(struct file *file, void *priv, struct v4l2_buffer *buf)
static int vpif_streamon(struct file *file, void *priv,
enum v4l2_buf_type buftype)
static int vpif_streamoff(struct file *file, void *priv,
enum v4l2_buf_type buftype)
static struct vpif_subdev_info *vpif_map_sub_device_to_input(
struct channel_obj *ch,
struct vpif_capture_config *vpif_cfg,
int input_index,
int *sub_device_index)
static int vpif_querystd(struct file *file, void *priv, v4l2_std_id *std_id)
static int vpif_g_std(struct file *file, void *priv, v4l2_std_id *std)
static int vpif_s_std(struct file *file, void *priv, v4l2_std_id *std_id)
static int vpif_enum_input(struct file *file, void *priv,
struct v4l2_input *input)
static int vpif_g_input(struct file *file, void *priv, unsigned int *index)
static int vpif_s_input(struct file *file, void *priv, unsigned int index)
static int vpif_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *fmt)
static int vpif_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int vpif_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int vpif_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int vpif_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vpif_g_priority(struct file *file, void *priv,
enum v4l2_priority *prio)
static int vpif_s_priority(struct file *file, void *priv, enum v4l2_priority p)
static int vpif_cropcap(struct file *file, void *priv,
struct v4l2_cropcap *crop)
static int vpif_enum_dv_presets(struct file *file, void *priv,
struct v4l2_dv_enum_preset *preset)
static int vpif_query_dv_preset(struct file *file, void *priv,
struct v4l2_dv_preset *preset)
static int vpif_s_dv_preset(struct file *file, void *priv,
struct v4l2_dv_preset *preset)
static int vpif_g_dv_preset(struct file *file, void *priv,
struct v4l2_dv_preset *preset)
static int vpif_s_dv_timings(struct file *file, void *priv,
struct v4l2_dv_timings *timings)
static int vpif_g_dv_timings(struct file *file, void *priv,
struct v4l2_dv_timings *timings)
static int vpif_g_chip_ident(struct file *file, void *priv,
struct v4l2_dbg_chip_ident *chip)
static int vpif_dbg_g_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vpif_dbg_s_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vpif_log_status(struct file *filep, void *priv)
static const struct v4l2_ioctl_ops vpif_ioctl_ops = ;
static struct v4l2_file_operations vpif_fops = ;
static struct video_device vpif_video_template = ;
static int initialize_vpif(void)
static __init int vpif_probe(struct platform_device *pdev)
static int vpif_remove(struct platform_device *device)
static int
vpif_suspend(struct device *dev)
static int
vpif_resume(struct device *dev)
static const struct dev_pm_ops vpif_dev_pm_ops = ;
static __refdata struct platform_driver vpif_driver = ;
static __init int vpif_init(void)
static void vpif_cleanup(void)
module_init(vpif_init);
module_exit(vpif_cleanup);
