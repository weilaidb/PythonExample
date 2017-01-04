#define CSICR1		0x00
#define CSISR		0x08
#define CSIRXR		0x10
#define CSICR1_RXFF_LEVEL(x)	(((x) & 0x3) << 19)
#define CSICR1_SOF_POL		(1 << 17)
#define CSICR1_SOF_INTEN	(1 << 16)
#define CSICR1_MCLKDIV(x)	(((x) & 0xf) << 12)
#define CSICR1_MCLKEN		(1 << 9)
#define CSICR1_FCC		(1 << 8)
#define CSICR1_BIG_ENDIAN	(1 << 7)
#define CSICR1_CLR_RXFIFO	(1 << 5)
#define CSICR1_GCLK_MODE	(1 << 4)
#define CSICR1_DATA_POL		(1 << 2)
#define CSICR1_REDGE		(1 << 1)
#define CSICR1_EN		(1 << 0)
#define CSISR_SFF_OR_INT	(1 << 25)
#define CSISR_RFF_OR_INT	(1 << 24)
#define CSISR_STATFF_INT	(1 << 21)
#define CSISR_RXFF_INT		(1 << 18)
#define CSISR_SOF_INT		(1 << 16)
#define CSISR_DRDY		(1 << 0)
#define VERSION_CODE KERNEL_VERSION(0, 0, 1)
#define DRIVER_NAME "mx1-camera"
#define CSI_IRQ_MASK	(CSISR_SFF_OR_INT | CSISR_RFF_OR_INT | \
CSISR_STATFF_INT | CSISR_RXFF_INT | CSISR_SOF_INT)
#define CSI_BUS_FLAGS	(SOCAM_MASTER | SOCAM_HSYNC_ACTIVE_HIGH | \
SOCAM_VSYNC_ACTIVE_HIGH | SOCAM_VSYNC_ACTIVE_LOW | \
SOCAM_PCLK_SAMPLE_RISING | SOCAM_PCLK_SAMPLE_FALLING | \
SOCAM_DATA_ACTIVE_HIGH | SOCAM_DATA_ACTIVE_LOW | \
SOCAM_DATAWIDTH_8)
#define MAX_VIDEO_MEM 16
struct mx1_buffer ;
struct mx1_camera_dev ;
static int mx1_videobuf_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct mx1_buffer *buf)
static int mx1_videobuf_prepare(struct videobuf_queue *vq,
struct videobuf_buffer *vb, enum v4l2_field field)
static int mx1_camera_setup_dma(struct mx1_camera_dev *pcdev)
static void mx1_videobuf_queue(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void mx1_videobuf_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void mx1_camera_wakeup(struct mx1_camera_dev *pcdev,
struct videobuf_buffer *vb,
struct mx1_buffer *buf)
static void mx1_camera_dma_irq(int channel, void *data)
static struct videobuf_queue_ops mx1_videobuf_ops = ;
static void mx1_camera_init_videobuf(struct videobuf_queue *q,
struct soc_camera_device *icd)
static int mclk_get_divisor(struct mx1_camera_dev *pcdev)
static void mx1_camera_activate(struct mx1_camera_dev *pcdev)
static void mx1_camera_deactivate(struct mx1_camera_dev *pcdev)
static int mx1_camera_add_device(struct soc_camera_device *icd)
static void mx1_camera_remove_device(struct soc_camera_device *icd)
static int mx1_camera_set_crop(struct soc_camera_device *icd,
struct v4l2_crop *a)
static int mx1_camera_set_bus_param(struct soc_camera_device *icd, __u32 pixfmt)
static int mx1_camera_set_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int mx1_camera_try_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int mx1_camera_reqbufs(struct soc_camera_device *icd,
struct v4l2_requestbuffers *p)
static unsigned int mx1_camera_poll(struct file *file, poll_table *pt)
static int mx1_camera_querycap(struct soc_camera_host *ici,
struct v4l2_capability *cap)
static struct soc_camera_host_ops mx1_soc_camera_host_ops = ;
static struct fiq_handler fh = ;
static int __init mx1_camera_probe(struct platform_device *pdev)
static int __exit mx1_camera_remove(struct platform_device *pdev)
static struct platform_driver mx1_camera_driver = ;
static int __init mx1_camera_init(void)
static void __exit mx1_camera_exit(void)
module_init(mx1_camera_init);
module_exit(mx1_camera_exit);
MODULE_DESCRIPTION("i.MX1/i.MXL SoC Camera Host driver");
MODULE_AUTHOR("Paulius Zaleckas <paulius.zaleckas@teltonika.lt>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" DRIVER_NAME);
