#define DRIVER_NAME			"timb-video"
#define TIMBLOGIWIN_NAME		"Timberdale Video-In"
#define TIMBLOGIW_VERSION_CODE		0x04
#define TIMBLOGIW_LINES_PER_DESC	44
#define TIMBLOGIW_MAX_VIDEO_MEM		16
#define TIMBLOGIW_HAS_DECODER(lw)	(lw->pdata.encoder.module_name)
struct timblogiw ;
struct timblogiw_tvnorm ;
struct timblogiw_fh ;
struct timblogiw_buffer ;
const struct timblogiw_tvnorm timblogiw_tvnorms[] = ;
static int timblogiw_bytes_per_line(const struct timblogiw_tvnorm *norm)
static int timblogiw_frame_size(const struct timblogiw_tvnorm *norm)
static const struct timblogiw_tvnorm *timblogiw_get_norm(const v4l2_std_id std)
static void timblogiw_dma_cb(void *data)
static bool timblogiw_dma_filter_fn(struct dma_chan *chan, void *filter_param)
static int timblogiw_g_fmt(struct file *file, void  *priv,
struct v4l2_format *format)
static int timblogiw_try_fmt(struct file *file, void  *priv,
struct v4l2_format *format)
static int timblogiw_s_fmt(struct file *file, void  *priv,
struct v4l2_format *format)
static int timblogiw_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int timblogiw_enum_fmt(struct file *file, void  *priv,
struct v4l2_fmtdesc *fmt)
static int timblogiw_g_parm(struct file *file, void *priv,
struct v4l2_streamparm *sp)
static int timblogiw_reqbufs(struct file *file, void  *priv,
struct v4l2_requestbuffers *rb)
static int timblogiw_querybuf(struct file *file, void  *priv,
struct v4l2_buffer *b)
static int timblogiw_qbuf(struct file *file, void  *priv, struct v4l2_buffer *b)
static int timblogiw_dqbuf(struct file *file, void  *priv,
struct v4l2_buffer *b)
static int timblogiw_g_std(struct file *file, void  *priv, v4l2_std_id *std)
static int timblogiw_s_std(struct file *file, void  *priv, v4l2_std_id *std)
static int timblogiw_enuminput(struct file *file, void  *priv,
struct v4l2_input *inp)
static int timblogiw_g_input(struct file *file, void  *priv,
unsigned int *input)
static int timblogiw_s_input(struct file *file, void  *priv, unsigned int input)
static int timblogiw_streamon(struct file *file, void  *priv, unsigned int type)
static int timblogiw_streamoff(struct file *file, void  *priv,
unsigned int type)
static int timblogiw_querystd(struct file *file, void  *priv, v4l2_std_id *std)
static int timblogiw_enum_framesizes(struct file *file, void  *priv,
struct v4l2_frmsizeenum *fsize)
static int buffer_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static int buffer_prepare(struct videobuf_queue *vq, struct videobuf_buffer *vb,
enum v4l2_field field)
static void buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops timblogiw_video_qops = ;
static int timblogiw_open(struct file *file)
static int timblogiw_close(struct file *file)
static ssize_t timblogiw_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static unsigned int timblogiw_poll(struct file *file,
struct poll_table_struct *wait)
static int timblogiw_mmap(struct file *file, struct vm_area_struct *vma)
static __devinitconst struct v4l2_ioctl_ops timblogiw_ioctl_ops = ;
static __devinitconst struct v4l2_file_operations timblogiw_fops = ;
static __devinitconst struct video_device timblogiw_template = ;
static int __devinit timblogiw_probe(struct platform_device *pdev)
static int __devexit timblogiw_remove(struct platform_device *pdev)
static struct platform_driver timblogiw_platform_driver = ;
static int __init timblogiw_init(void)
static void __exit timblogiw_exit(void)
module_init(timblogiw_init);
module_exit(timblogiw_exit);
MODULE_DESCRIPTION(TIMBLOGIWIN_NAME);
MODULE_AUTHOR("Pelagicore AB <info@pelagicore.com>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:"DRIVER_NAME);
