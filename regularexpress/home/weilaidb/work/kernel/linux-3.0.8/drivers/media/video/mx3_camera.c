#define MX3_CAM_DRV_NAME "mx3-camera"
#define CSI_REG_START		0x60
#define CSI_SENS_CONF		(0x60 - CSI_REG_START)
#define CSI_SENS_FRM_SIZE	(0x64 - CSI_REG_START)
#define CSI_ACT_FRM_SIZE	(0x68 - CSI_REG_START)
#define CSI_OUT_FRM_CTRL	(0x6C - CSI_REG_START)
#define CSI_TST_CTRL		(0x70 - CSI_REG_START)
#define CSI_CCIR_CODE_1		(0x74 - CSI_REG_START)
#define CSI_CCIR_CODE_2		(0x78 - CSI_REG_START)
#define CSI_CCIR_CODE_3		(0x7C - CSI_REG_START)
#define CSI_FLASH_STROBE_1	(0x80 - CSI_REG_START)
#define CSI_FLASH_STROBE_2	(0x84 - CSI_REG_START)
#define CSI_SENS_CONF_VSYNC_POL_SHIFT		0
#define CSI_SENS_CONF_HSYNC_POL_SHIFT		1
#define CSI_SENS_CONF_DATA_POL_SHIFT		2
#define CSI_SENS_CONF_PIX_CLK_POL_SHIFT		3
#define CSI_SENS_CONF_SENS_PRTCL_SHIFT		4
#define CSI_SENS_CONF_SENS_CLKSRC_SHIFT		7
#define CSI_SENS_CONF_DATA_FMT_SHIFT		8
#define CSI_SENS_CONF_DATA_WIDTH_SHIFT		10
#define CSI_SENS_CONF_EXT_VSYNC_SHIFT		15
#define CSI_SENS_CONF_DIVRATIO_SHIFT		16
#define CSI_SENS_CONF_DATA_FMT_RGB_YUV444	(0UL << CSI_SENS_CONF_DATA_FMT_SHIFT)
#define CSI_SENS_CONF_DATA_FMT_YUV422		(2UL << CSI_SENS_CONF_DATA_FMT_SHIFT)
#define CSI_SENS_CONF_DATA_FMT_BAYER		(3UL << CSI_SENS_CONF_DATA_FMT_SHIFT)
#define MAX_VIDEO_MEM 16
enum csi_buffer_state ;
struct mx3_camera_buffer ;
struct mx3_camera_dev ;
struct dma_chan_request ;
static u32 csi_reg_read(struct mx3_camera_dev *mx3, off_t reg)
static void csi_reg_write(struct mx3_camera_dev *mx3, u32 value, off_t reg)
static struct mx3_camera_buffer *to_mx3_vb(struct vb2_buffer *vb)
static void mx3_cam_dma_done(void *arg)
static int mx3_videobuf_setup(struct vb2_queue *vq,
unsigned int *count, unsigned int *num_planes,
unsigned long sizes[], void *alloc_ctxs[])
static int mx3_videobuf_prepare(struct vb2_buffer *vb)
static enum pixel_fmt fourcc_to_ipu_pix(__u32 fourcc)
static void mx3_videobuf_queue(struct vb2_buffer *vb)
static void mx3_videobuf_release(struct vb2_buffer *vb)
static int mx3_videobuf_init(struct vb2_buffer *vb)
static int mx3_stop_streaming(struct vb2_queue *q)
static struct vb2_ops mx3_videobuf_ops = ;
static int mx3_camera_init_videobuf(struct vb2_queue *q,
struct soc_camera_device *icd)
static void mx3_camera_activate(struct mx3_camera_dev *mx3_cam,
struct soc_camera_device *icd)
static int mx3_camera_add_device(struct soc_camera_device *icd)
static void mx3_camera_remove_device(struct soc_camera_device *icd)
static int test_platform_param(struct mx3_camera_dev *mx3_cam,
unsigned char buswidth, unsigned long *flags)
static int mx3_camera_try_bus_param(struct soc_camera_device *icd,
const unsigned int depth)
static bool chan_filter(struct dma_chan *chan, void *arg)
static const struct soc_mbus_pixelfmt mx3_camera_formats[] = ;
static bool mx3_camera_packing_supported(const struct soc_mbus_pixelfmt *fmt)
static int mx3_camera_get_formats(struct soc_camera_device *icd, unsigned int idx,
struct soc_camera_format_xlate *xlate)
static void configure_geometry(struct mx3_camera_dev *mx3_cam,
unsigned int width, unsigned int height,
const struct soc_mbus_pixelfmt *fmt)
static int acquire_dma_channel(struct mx3_camera_dev *mx3_cam)
static inline void stride_align(__u32 *width)
static int mx3_camera_set_crop(struct soc_camera_device *icd,
struct v4l2_crop *a)
static int mx3_camera_set_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int mx3_camera_try_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int mx3_camera_reqbufs(struct soc_camera_device *icd,
struct v4l2_requestbuffers *p)
static unsigned int mx3_camera_poll(struct file *file, poll_table *pt)
static int mx3_camera_querycap(struct soc_camera_host *ici,
struct v4l2_capability *cap)
static int mx3_camera_set_bus_param(struct soc_camera_device *icd, __u32 pixfmt)
static struct soc_camera_host_ops mx3_soc_camera_host_ops = ;
static int __devinit mx3_camera_probe(struct platform_device *pdev)
static int __devexit mx3_camera_remove(struct platform_device *pdev)
static struct platform_driver mx3_camera_driver = ;
static int __init mx3_camera_init(void)
static void __exit mx3_camera_exit(void)
module_init(mx3_camera_init);
module_exit(mx3_camera_exit);
MODULE_DESCRIPTION("i.MX3x SoC Camera Host driver");
MODULE_AUTHOR("Guennadi Liakhovetski <lg@denx.de>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" MX3_CAM_DRV_NAME);
