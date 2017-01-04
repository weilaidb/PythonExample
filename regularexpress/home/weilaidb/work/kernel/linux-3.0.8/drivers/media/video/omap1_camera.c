#define DRIVER_NAME		"omap1-camera"
#define VERSION_CODE		KERNEL_VERSION(0, 0, 1)
#define REG_CTRLCLOCK		0x00
#define REG_IT_STATUS		0x04
#define REG_MODE		0x08
#define REG_STATUS		0x0C
#define REG_CAMDATA		0x10
#define REG_GPIO		0x14
#define REG_PEAK_COUNTER	0x18
#define LCLK_EN			BIT(7)
#define DPLL_EN			BIT(6)
#define MCLK_EN			BIT(5)
#define CAMEXCLK_EN		BIT(4)
#define POLCLK			BIT(3)
#define FOSCMOD_SHIFT		0
#define FOSCMOD_MASK		(0x7 << FOSCMOD_SHIFT)
#define FOSCMOD_12MHz		0x0
#define FOSCMOD_6MHz		0x2
#define FOSCMOD_9_6MHz		0x4
#define FOSCMOD_24MHz		0x5
#define FOSCMOD_8MHz		0x6
#define DATA_TRANSFER		BIT(5)
#define FIFO_FULL		BIT(4)
#define H_DOWN			BIT(3)
#define H_UP			BIT(2)
#define V_DOWN			BIT(1)
#define V_UP			BIT(0)
#define RAZ_FIFO		BIT(18)
#define EN_FIFO_FULL		BIT(17)
#define EN_NIRQ			BIT(16)
#define THRESHOLD_SHIFT		9
#define THRESHOLD_MASK		(0x7f << THRESHOLD_SHIFT)
#define DMA			BIT(8)
#define EN_H_DOWN		BIT(7)
#define EN_H_UP			BIT(6)
#define EN_V_DOWN		BIT(5)
#define EN_V_UP			BIT(4)
#define ORDERCAMD		BIT(3)
#define IRQ_MASK		(EN_V_UP | EN_V_DOWN | EN_H_UP | EN_H_DOWN | \
EN_NIRQ | EN_FIFO_FULL)
#define HSTATUS			BIT(1)
#define VSTATUS			BIT(0)
#define CAM_RST			BIT(0)
#define SOCAM_BUS_FLAGS	(SOCAM_MASTER | \
SOCAM_HSYNC_ACTIVE_HIGH | SOCAM_VSYNC_ACTIVE_HIGH | \
SOCAM_PCLK_SAMPLE_RISING | SOCAM_PCLK_SAMPLE_FALLING | \
SOCAM_DATA_ACTIVE_HIGH | SOCAM_DATAWIDTH_8)
#define FIFO_SIZE		((THRESHOLD_MASK >> THRESHOLD_SHIFT) + 1)
#define FIFO_SHIFT		__fls(FIFO_SIZE)
#define DMA_BURST_SHIFT		(1 + OMAP_DMA_DATA_BURST_4)
#define DMA_BURST_SIZE		(1 << DMA_BURST_SHIFT)
#define DMA_ELEMENT_SHIFT	OMAP_DMA_DATA_TYPE_S32
#define DMA_ELEMENT_SIZE	(1 << DMA_ELEMENT_SHIFT)
#define DMA_FRAME_SHIFT_CONTIG	(FIFO_SHIFT - 1)
#define DMA_FRAME_SHIFT_SG	DMA_BURST_SHIFT
#define DMA_FRAME_SHIFT(x)	((x) == OMAP1_CAM_DMA_CONTIG ? \
DMA_FRAME_SHIFT_CONTIG : \
DMA_FRAME_SHIFT_SG)
#define DMA_FRAME_SIZE(x)	(1 << DMA_FRAME_SHIFT(x))
#define DMA_SYNC		OMAP_DMA_SYNC_FRAME
#define THRESHOLD_LEVEL		DMA_FRAME_SIZE
#define MAX_VIDEO_MEM		4
struct omap1_cam_buf ;
struct omap1_cam_dev ;
static void cam_write(struct omap1_cam_dev *pcdev, u16 reg, u32 val)
static u32 cam_read(struct omap1_cam_dev *pcdev, u16 reg, bool from_cache)
#define CAM_READ(pcdev, reg) \
cam_read(pcdev, REG_##reg, false)
#define CAM_WRITE(pcdev, reg, val) \
cam_write(pcdev, REG_##reg, val)
#define CAM_READ_CACHE(pcdev, reg) \
cam_read(pcdev, REG_##reg, true)
static int omap1_videobuf_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct omap1_cam_buf *buf,
enum omap1_cam_vb_mode vb_mode)
static int omap1_videobuf_prepare(struct videobuf_queue *vq,
struct videobuf_buffer *vb, enum v4l2_field field)
static void set_dma_dest_params(int dma_ch, struct omap1_cam_buf *buf,
enum omap1_cam_vb_mode vb_mode)
static struct omap1_cam_buf *prepare_next_vb(struct omap1_cam_dev *pcdev)
static struct scatterlist *try_next_sgbuf(int dma_ch, struct omap1_cam_buf *buf)
static void start_capture(struct omap1_cam_dev *pcdev)
static void suspend_capture(struct omap1_cam_dev *pcdev)
static void disable_capture(struct omap1_cam_dev *pcdev)
static void omap1_videobuf_queue(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void omap1_videobuf_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void videobuf_done(struct omap1_cam_dev *pcdev,
enum videobuf_state result)
static void dma_isr(int channel, unsigned short status, void *data)
static irqreturn_t cam_isr(int irq, void *data)
static struct videobuf_queue_ops omap1_videobuf_ops = ;
static void sensor_reset(struct omap1_cam_dev *pcdev, bool reset)
static int omap1_cam_add_device(struct soc_camera_device *icd)
static void omap1_cam_remove_device(struct soc_camera_device *icd)
static const struct soc_mbus_lookup omap1_cam_formats[] = ;
static int omap1_cam_get_formats(struct soc_camera_device *icd,
unsigned int idx, struct soc_camera_format_xlate *xlate)
static bool is_dma_aligned(s32 bytes_per_line, unsigned int height,
enum omap1_cam_vb_mode vb_mode)
static int dma_align(int *width, int *height,
const struct soc_mbus_pixelfmt *fmt,
enum omap1_cam_vb_mode vb_mode, bool enlarge)
#define subdev_call_with_sense(pcdev, dev, icd, sd, function, args...)		     \
()
static int set_mbus_format(struct omap1_cam_dev *pcdev, struct device *dev,
struct soc_camera_device *icd, struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf,
const struct soc_camera_format_xlate *xlate)
static int omap1_cam_set_crop(struct soc_camera_device *icd,
struct v4l2_crop *crop)
static int omap1_cam_set_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int omap1_cam_try_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static bool sg_mode;
static int omap1_cam_mmap_mapper(struct videobuf_queue *q,
struct videobuf_buffer *buf,
struct vm_area_struct *vma)
static void omap1_cam_init_videobuf(struct videobuf_queue *q,
struct soc_camera_device *icd)
static int omap1_cam_reqbufs(struct soc_camera_device *icd,
struct v4l2_requestbuffers *p)
static int omap1_cam_querycap(struct soc_camera_host *ici,
struct v4l2_capability *cap)
static int omap1_cam_set_bus_param(struct soc_camera_device *icd,
__u32 pixfmt)
static unsigned int omap1_cam_poll(struct file *file, poll_table *pt)
static struct soc_camera_host_ops omap1_host_ops = ;
static int __init omap1_cam_probe(struct platform_device *pdev)
static int __exit omap1_cam_remove(struct platform_device *pdev)
static struct platform_driver omap1_cam_driver = ;
static int __init omap1_cam_init(void)
module_init(omap1_cam_init);
static void __exit omap1_cam_exit(void)
module_exit(omap1_cam_exit);
module_param(sg_mode, bool, 0644);
MODULE_PARM_DESC(sg_mode, "videobuf mode, 0: dma-contig (default), 1: dma-sg");
MODULE_DESCRIPTION("OMAP1 Camera Interface driver");
MODULE_AUTHOR("Janusz Krzysztofik <jkrzyszt@tis.icnet.pl>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" DRIVER_NAME);
