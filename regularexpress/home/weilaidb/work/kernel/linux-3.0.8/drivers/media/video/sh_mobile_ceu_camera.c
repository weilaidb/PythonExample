#define CAPSR  0x00
#define CAPCR  0x04
#define CAMCR  0x08
#define CMCYR  0x0c
#define CAMOR  0x10
#define CAPWR  0x14
#define CAIFR  0x18
#define CSTCR  0x20
#define CSECR  0x24
#define CRCNTR 0x28
#define CRCMPR 0x2c
#define CFLCR  0x30
#define CFSZR  0x34
#define CDWDR  0x38
#define CDAYR  0x3c
#define CDACR  0x40
#define CDBYR  0x44
#define CDBCR  0x48
#define CBDSR  0x4c
#define CFWCR  0x5c
#define CLFCR  0x60
#define CDOCR  0x64
#define CDDCR  0x68
#define CDDAR  0x6c
#define CEIER  0x70
#define CETCR  0x74
#define CSTSR  0x7c
#define CSRTR  0x80
#define CDSSR  0x84
#define CDAYR2 0x90
#define CDACR2 0x94
#define CDBYR2 0x98
#define CDBCR2 0x9c
#undef DEBUG_GEOMETRY
#define dev_geo	dev_info
#define dev_geo	dev_dbg
struct sh_mobile_ceu_buffer ;
struct sh_mobile_ceu_dev ;
struct sh_mobile_ceu_cam ;
static struct sh_mobile_ceu_buffer *to_ceu_vb(struct vb2_buffer *vb)
static unsigned long make_bus_param(struct sh_mobile_ceu_dev *pcdev)
static void ceu_write(struct sh_mobile_ceu_dev *priv,
unsigned long reg_offs, u32 data)
static u32 ceu_read(struct sh_mobile_ceu_dev *priv, unsigned long reg_offs)
static int sh_mobile_ceu_soft_reset(struct sh_mobile_ceu_dev *pcdev)
static int sh_mobile_ceu_videobuf_setup(struct vb2_queue *vq,
unsigned int *count, unsigned int *num_planes,
unsigned long sizes[], void *alloc_ctxs[])
#define CEU_CETCR_MAGIC 0x0317f313
#define CEU_CETCR_IGRW (1 << 4)
#define CEU_CEIER_CPEIE (1 << 0)
#define CEU_CEIER_VBP   (1 << 20)
#define CEU_CAPCR_CTNCP (1 << 16)
#define CEU_CEIER_MASK (CEU_CEIER_CPEIE | CEU_CEIER_VBP)
static int sh_mobile_ceu_capture(struct sh_mobile_ceu_dev *pcdev)
static int sh_mobile_ceu_videobuf_prepare(struct vb2_buffer *vb)
static void sh_mobile_ceu_videobuf_queue(struct vb2_buffer *vb)
static void sh_mobile_ceu_videobuf_release(struct vb2_buffer *vb)
static int sh_mobile_ceu_videobuf_init(struct vb2_buffer *vb)
static int sh_mobile_ceu_stop_streaming(struct vb2_queue *q)
static struct vb2_ops sh_mobile_ceu_videobuf_ops = ;
static irqreturn_t sh_mobile_ceu_irq(int irq, void *data)
static int sh_mobile_ceu_add_device(struct soc_camera_device *icd)
static void sh_mobile_ceu_remove_device(struct soc_camera_device *icd)
static unsigned int size_dst(unsigned int src, unsigned int scale)
static u16 calc_scale(unsigned int src, unsigned int *dst)
static void sh_mobile_ceu_set_rect(struct soc_camera_device *icd)
static u32 capture_save_reset(struct sh_mobile_ceu_dev *pcdev)
static void capture_restore(struct sh_mobile_ceu_dev *pcdev, u32 capsr)
static int sh_mobile_ceu_set_bus_param(struct soc_camera_device *icd,
__u32 pixfmt)
static int sh_mobile_ceu_try_bus_param(struct soc_camera_device *icd,
unsigned char buswidth)
static const struct soc_mbus_pixelfmt sh_mobile_ceu_formats[] = ;
static bool sh_mobile_ceu_packing_supported(const struct soc_mbus_pixelfmt *fmt)
static int client_g_rect(struct v4l2_subdev *sd, struct v4l2_rect *rect);
static int sh_mobile_ceu_get_formats(struct soc_camera_device *icd, unsigned int idx,
struct soc_camera_format_xlate *xlate)
static void sh_mobile_ceu_put_formats(struct soc_camera_device *icd)
static bool is_smaller(struct v4l2_rect *r1, struct v4l2_rect *r2)
static bool is_inside(struct v4l2_rect *r1, struct v4l2_rect *r2)
static unsigned int scale_down(unsigned int size, unsigned int scale)
static unsigned int calc_generic_scale(unsigned int input, unsigned int output)
static int client_g_rect(struct v4l2_subdev *sd, struct v4l2_rect *rect)
static void update_subrect(struct sh_mobile_ceu_cam *cam)
static int client_s_crop(struct soc_camera_device *icd, struct v4l2_crop *crop,
struct v4l2_crop *cam_crop)
static int client_s_fmt(struct soc_camera_device *icd,
struct v4l2_mbus_framefmt *mf, bool ceu_can_scale)
static int client_scale(struct soc_camera_device *icd,
struct v4l2_mbus_framefmt *mf,
unsigned int *width, unsigned int *height,
bool ceu_can_scale)
static int sh_mobile_ceu_set_crop(struct soc_camera_device *icd,
struct v4l2_crop *a)
static int sh_mobile_ceu_get_crop(struct soc_camera_device *icd,
struct v4l2_crop *a)
static void calculate_client_output(struct soc_camera_device *icd,
struct v4l2_pix_format *pix, struct v4l2_mbus_framefmt *mf)
static int sh_mobile_ceu_set_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int sh_mobile_ceu_try_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int sh_mobile_ceu_set_livecrop(struct soc_camera_device *icd,
struct v4l2_crop *a)
static unsigned int sh_mobile_ceu_poll(struct file *file, poll_table *pt)
static int sh_mobile_ceu_querycap(struct soc_camera_host *ici,
struct v4l2_capability *cap)
static int sh_mobile_ceu_init_videobuf(struct vb2_queue *q,
struct soc_camera_device *icd)
static int sh_mobile_ceu_get_ctrl(struct soc_camera_device *icd,
struct v4l2_control *ctrl)
static int sh_mobile_ceu_set_ctrl(struct soc_camera_device *icd,
struct v4l2_control *ctrl)
static const struct v4l2_queryctrl sh_mobile_ceu_controls[] = ;
static struct soc_camera_host_ops sh_mobile_ceu_host_ops = ;
struct bus_wait ;
static int bus_notify(struct notifier_block *nb,
unsigned long action, void *data)
static int __devinit sh_mobile_ceu_probe(struct platform_device *pdev)
static int __devexit sh_mobile_ceu_remove(struct platform_device *pdev)
static int sh_mobile_ceu_runtime_nop(struct device *dev)
static const struct dev_pm_ops sh_mobile_ceu_dev_pm_ops = ;
static struct platform_driver sh_mobile_ceu_driver = ;
static int __init sh_mobile_ceu_init(void)
static void __exit sh_mobile_ceu_exit(void)
module_init(sh_mobile_ceu_init);
module_exit(sh_mobile_ceu_exit);
MODULE_DESCRIPTION("SuperH Mobile CEU driver");
MODULE_AUTHOR("Magnus Damm");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:sh_mobile_ceu");
