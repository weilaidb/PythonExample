MODULE_AUTHOR("Gerd Knorr <kraxel@bytesex.org> [SuSE Labs]");
MODULE_LICENSE("GPL");
static unsigned int empress_nr[] = ;
module_param_array(empress_nr, int, NULL, 0444);
MODULE_PARM_DESC(empress_nr,"ts device number");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug,"enable debug messages");
#define dprintk(fmt, arg...)	if (debug)			\
printk(KERN_DEBUG "%s/empress: " fmt, dev->name , ## arg)
static void ts_reset_encoder(struct saa7134_dev* dev)
static int ts_init_encoder(struct saa7134_dev* dev)
static int ts_open(struct file *file)
static int ts_release(struct file *file)
static ssize_t
ts_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
static unsigned int
ts_poll(struct file *file, struct poll_table_struct *wait)
static int
ts_mmap(struct file *file, struct vm_area_struct * vma)
static int empress_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int empress_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int empress_g_input(struct file *file, void *priv, unsigned int *i)
static int empress_s_input(struct file *file, void *priv, unsigned int i)
static int empress_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int empress_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int empress_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int empress_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int empress_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int empress_querybuf(struct file *file, void *priv,
struct v4l2_buffer *b)
static int empress_qbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int empress_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int empress_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int empress_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int empress_s_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static int empress_g_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static int empress_g_ctrl(struct file *file, void *priv,
struct v4l2_control *c)
static int empress_s_ctrl(struct file *file, void *priv,
struct v4l2_control *c)
static int empress_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *c)
static int empress_querymenu(struct file *file, void *priv,
struct v4l2_querymenu *c)
static int empress_g_chip_ident(struct file *file, void *fh,
struct v4l2_dbg_chip_ident *chip)
static int empress_s_std(struct file *file, void *priv, v4l2_std_id *id)
static int empress_g_std(struct file *file, void *priv, v4l2_std_id *id)
static const struct v4l2_file_operations ts_fops =
;
static const struct v4l2_ioctl_ops ts_ioctl_ops = ;
static struct video_device saa7134_empress_template = ;
static void empress_signal_update(struct work_struct *work)
static void empress_signal_change(struct saa7134_dev *dev)
static int empress_init(struct saa7134_dev *dev)
static int empress_fini(struct saa7134_dev *dev)
static struct saa7134_mpeg_ops empress_ops = ;
static int __init empress_register(void)
static void __exit empress_unregister(void)
module_init(empress_register);
module_exit(empress_unregister);
