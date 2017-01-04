#define VOUER	0
#define VOUCR	4
#define VOUSTR	8
#define VOUVCR	0xc
#define VOUISR	0x10
#define VOUBCR	0x14
#define VOUDPR	0x18
#define VOUDSR	0x1c
#define VOUVPR	0x20
#define VOUIR	0x24
#define VOUSRR	0x28
#define VOUMSR	0x2c
#define VOUHIR	0x30
#define VOUDFR	0x34
#define VOUAD1R	0x38
#define VOUAD2R	0x3c
#define VOUAIR	0x40
#define VOUSWR	0x44
#define VOURCR	0x48
#define VOURPR	0x50
enum sh_vou_status ;
#define VOU_MAX_IMAGE_WIDTH	720
#define VOU_MAX_IMAGE_HEIGHT	576
struct sh_vou_device ;
struct sh_vou_file ;
static void sh_vou_reg_a_write(struct sh_vou_device *vou_dev, unsigned int reg,
u32 value)
static void sh_vou_reg_ab_write(struct sh_vou_device *vou_dev, unsigned int reg,
u32 value)
static void sh_vou_reg_m_write(struct sh_vou_device *vou_dev, unsigned int reg,
u32 value)
static u32 sh_vou_reg_a_read(struct sh_vou_device *vou_dev, unsigned int reg)
static void sh_vou_reg_a_set(struct sh_vou_device *vou_dev, unsigned int reg,
u32 value, u32 mask)
static void sh_vou_reg_b_set(struct sh_vou_device *vou_dev, unsigned int reg,
u32 value, u32 mask)
static void sh_vou_reg_ab_set(struct sh_vou_device *vou_dev, unsigned int reg,
u32 value, u32 mask)
struct sh_vou_fmt ;
static struct sh_vou_fmt vou_fmt[] = ;
static void sh_vou_schedule_next(struct sh_vou_device *vou_dev,
struct videobuf_buffer *vb)
static void sh_vou_stream_start(struct sh_vou_device *vou_dev,
struct videobuf_buffer *vb)
static void free_buffer(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static int sh_vou_buf_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static int sh_vou_buf_prepare(struct videobuf_queue *vq,
struct videobuf_buffer *vb,
enum v4l2_field field)
static void sh_vou_buf_queue(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void sh_vou_buf_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops sh_vou_video_qops = ;
static int sh_vou_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int sh_vou_enum_fmt_vid_out(struct file *file, void  *priv,
struct v4l2_fmtdesc *fmt)
static int sh_vou_g_fmt_vid_out(struct file *file, void *priv,
struct v4l2_format *fmt)
static const unsigned char vou_scale_h_num[] = ;
static const unsigned char vou_scale_h_den[] = ;
static const unsigned char vou_scale_h_fld[] = ;
static const unsigned char vou_scale_v_num[] = ;
static const unsigned char vou_scale_v_den[] = ;
static const unsigned char vou_scale_v_fld[] = ;
static void sh_vou_configure_geometry(struct sh_vou_device *vou_dev,
int pix_idx, int w_idx, int h_idx)
struct sh_vou_geometry ;
static void vou_adjust_input(struct sh_vou_geometry *geo, v4l2_std_id std)
static void vou_adjust_output(struct sh_vou_geometry *geo, v4l2_std_id std)
static int sh_vou_s_fmt_vid_out(struct file *file, void *priv,
struct v4l2_format *fmt)
static int sh_vou_try_fmt_vid_out(struct file *file, void *priv,
struct v4l2_format *fmt)
static int sh_vou_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *req)
static int sh_vou_querybuf(struct file *file, void *priv,
struct v4l2_buffer *b)
static int sh_vou_qbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int sh_vou_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int sh_vou_streamon(struct file *file, void *priv,
enum v4l2_buf_type buftype)
static int sh_vou_streamoff(struct file *file, void *priv,
enum v4l2_buf_type buftype)
static u32 sh_vou_ntsc_mode(enum sh_vou_bus_fmt bus_fmt)
static int sh_vou_s_std(struct file *file, void *priv, v4l2_std_id *std_id)
static int sh_vou_g_std(struct file *file, void *priv, v4l2_std_id *std)
static int sh_vou_g_crop(struct file *file, void *fh, struct v4l2_crop *a)
static int sh_vou_s_crop(struct file *file, void *fh, struct v4l2_crop *a)
static int sh_vou_cropcap(struct file *file, void *priv,
struct v4l2_cropcap *a)
static irqreturn_t sh_vou_isr(int irq, void *dev_id)
static int sh_vou_hw_init(struct sh_vou_device *vou_dev)
static int sh_vou_open(struct file *file)
static int sh_vou_release(struct file *file)
static int sh_vou_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int sh_vou_poll(struct file *file, poll_table *wait)
static int sh_vou_g_chip_ident(struct file *file, void *fh,
struct v4l2_dbg_chip_ident *id)
static int sh_vou_g_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
static int sh_vou_s_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
static const struct v4l2_ioctl_ops sh_vou_ioctl_ops = ;
static const struct v4l2_file_operations sh_vou_fops = ;
static const struct video_device sh_vou_video_template = ;
static int __devinit sh_vou_probe(struct platform_device *pdev)
static int __devexit sh_vou_remove(struct platform_device *pdev)
static struct platform_driver __refdata sh_vou = ;
static int __init sh_vou_init(void)
static void __exit sh_vou_exit(void)
module_init(sh_vou_init);
module_exit(sh_vou_exit);
MODULE_DESCRIPTION("SuperH VOU driver");
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:sh-vou");
