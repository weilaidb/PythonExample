#define MX2_CAM_DRV_NAME "mx2-camera"
#define MX2_CAM_VERSION_CODE KERNEL_VERSION(0, 0, 5)
#define MX2_CAM_DRIVER_DESCRIPTION "i.MX2x_Camera"
#define CSICR1_RESET_VAL	0x40000800
#define CSICR2_RESET_VAL	0x0
#define CSICR3_RESET_VAL	0x0
#define CSICR1_SWAP16_EN	(1 << 31)
#define CSICR1_EXT_VSYNC	(1 << 30)
#define CSICR1_EOF_INTEN	(1 << 29)
#define CSICR1_PRP_IF_EN	(1 << 28)
#define CSICR1_CCIR_MODE	(1 << 27)
#define CSICR1_COF_INTEN	(1 << 26)
#define CSICR1_SF_OR_INTEN	(1 << 25)
#define CSICR1_RF_OR_INTEN	(1 << 24)
#define CSICR1_STATFF_LEVEL	(3 << 22)
#define CSICR1_STATFF_INTEN	(1 << 21)
#define CSICR1_RXFF_LEVEL(l)	(((l) & 3) << 19)
#define CSICR1_FB2_DMA_INTEN	(1 << 20)
#define CSICR1_FB1_DMA_INTEN	(1 << 19)
#define CSICR1_RXFF_INTEN	(1 << 18)
#define CSICR1_SOF_POL		(1 << 17)
#define CSICR1_SOF_INTEN	(1 << 16)
#define CSICR1_MCLKDIV(d)	(((d) & 0xF) << 12)
#define CSICR1_HSYNC_POL	(1 << 11)
#define CSICR1_CCIR_EN		(1 << 10)
#define CSICR1_MCLKEN		(1 << 9)
#define CSICR1_FCC		(1 << 8)
#define CSICR1_PACK_DIR		(1 << 7)
#define CSICR1_CLR_STATFIFO	(1 << 6)
#define CSICR1_CLR_RXFIFO	(1 << 5)
#define CSICR1_GCLK_MODE	(1 << 4)
#define CSICR1_INV_DATA		(1 << 3)
#define CSICR1_INV_PCLK		(1 << 2)
#define CSICR1_REDGE		(1 << 1)
#define SHIFT_STATFF_LEVEL	22
#define SHIFT_RXFF_LEVEL	19
#define SHIFT_MCLKDIV		12
#define CSICR3_FRMCNT		(0xFFFF << 16)
#define CSICR3_FRMCNT_RST	(1 << 15)
#define CSICR3_DMA_REFLASH_RFF	(1 << 14)
#define CSICR3_DMA_REFLASH_SFF	(1 << 13)
#define CSICR3_DMA_REQ_EN_RFF	(1 << 12)
#define CSICR3_DMA_REQ_EN_SFF	(1 << 11)
#define CSICR3_RXFF_LEVEL(l)	(((l) & 7) << 4)
#define CSICR3_CSI_SUP		(1 << 3)
#define CSICR3_ZERO_PACK_EN	(1 << 2)
#define CSICR3_ECC_INT_EN	(1 << 1)
#define CSICR3_ECC_AUTO_EN	(1 << 0)
#define SHIFT_FRMCNT		16
#define CSISR_SFF_OR_INT	(1 << 25)
#define CSISR_RFF_OR_INT	(1 << 24)
#define CSISR_STATFF_INT	(1 << 21)
#define CSISR_DMA_TSF_FB2_INT	(1 << 20)
#define CSISR_DMA_TSF_FB1_INT	(1 << 19)
#define CSISR_RXFF_INT		(1 << 18)
#define CSISR_EOF_INT		(1 << 17)
#define CSISR_SOF_INT		(1 << 16)
#define CSISR_F2_INT		(1 << 15)
#define CSISR_F1_INT		(1 << 14)
#define CSISR_COF_INT		(1 << 13)
#define CSISR_ECC_INT		(1 << 1)
#define CSISR_DRDY		(1 << 0)
#define CSICR1			0x00
#define CSICR2			0x04
#define CSISR			(cpu_is_mx27() ? 0x08 : 0x18)
#define CSISTATFIFO		0x0c
#define CSIRFIFO		0x10
#define CSIRXCNT		0x14
#define CSICR3			(cpu_is_mx27() ? 0x1C : 0x08)
#define CSIDMASA_STATFIFO	0x20
#define CSIDMATA_STATFIFO	0x24
#define CSIDMASA_FB1		0x28
#define CSIDMASA_FB2		0x2c
#define CSIFBUF_PARA		0x30
#define CSIIMAG_PARA		0x34
#define PRP_CNTL			0x00
#define PRP_INTR_CNTL			0x04
#define PRP_INTRSTATUS			0x08
#define PRP_SOURCE_Y_PTR		0x0c
#define PRP_SOURCE_CB_PTR		0x10
#define PRP_SOURCE_CR_PTR		0x14
#define PRP_DEST_RGB1_PTR		0x18
#define PRP_DEST_RGB2_PTR		0x1c
#define PRP_DEST_Y_PTR			0x20
#define PRP_DEST_CB_PTR			0x24
#define PRP_DEST_CR_PTR			0x28
#define PRP_SRC_FRAME_SIZE		0x2c
#define PRP_DEST_CH1_LINE_STRIDE	0x30
#define PRP_SRC_PIXEL_FORMAT_CNTL	0x34
#define PRP_CH1_PIXEL_FORMAT_CNTL	0x38
#define PRP_CH1_OUT_IMAGE_SIZE		0x3c
#define PRP_CH2_OUT_IMAGE_SIZE		0x40
#define PRP_SRC_LINE_STRIDE		0x44
#define PRP_CSC_COEF_012		0x48
#define PRP_CSC_COEF_345		0x4c
#define PRP_CSC_COEF_678		0x50
#define PRP_CH1_RZ_HORI_COEF1		0x54
#define PRP_CH1_RZ_HORI_COEF2		0x58
#define PRP_CH1_RZ_HORI_VALID		0x5c
#define PRP_CH1_RZ_VERT_COEF1		0x60
#define PRP_CH1_RZ_VERT_COEF2		0x64
#define PRP_CH1_RZ_VERT_VALID		0x68
#define PRP_CH2_RZ_HORI_COEF1		0x6c
#define PRP_CH2_RZ_HORI_COEF2		0x70
#define PRP_CH2_RZ_HORI_VALID		0x74
#define PRP_CH2_RZ_VERT_COEF1		0x78
#define PRP_CH2_RZ_VERT_COEF2		0x7c
#define PRP_CH2_RZ_VERT_VALID		0x80
#define PRP_CNTL_CH1EN		(1 << 0)
#define PRP_CNTL_CH2EN		(1 << 1)
#define PRP_CNTL_CSIEN		(1 << 2)
#define PRP_CNTL_DATA_IN_YUV420	(0 << 3)
#define PRP_CNTL_DATA_IN_YUV422	(1 << 3)
#define PRP_CNTL_DATA_IN_RGB16	(2 << 3)
#define PRP_CNTL_DATA_IN_RGB32	(3 << 3)
#define PRP_CNTL_CH1_OUT_RGB8	(0 << 5)
#define PRP_CNTL_CH1_OUT_RGB16	(1 << 5)
#define PRP_CNTL_CH1_OUT_RGB32	(2 << 5)
#define PRP_CNTL_CH1_OUT_YUV422	(3 << 5)
#define PRP_CNTL_CH2_OUT_YUV420	(0 << 7)
#define PRP_CNTL_CH2_OUT_YUV422 (1 << 7)
#define PRP_CNTL_CH2_OUT_YUV444	(2 << 7)
#define PRP_CNTL_CH1_LEN	(1 << 9)
#define PRP_CNTL_CH2_LEN	(1 << 10)
#define PRP_CNTL_SKIP_FRAME	(1 << 11)
#define PRP_CNTL_SWRST		(1 << 12)
#define PRP_CNTL_CLKEN		(1 << 13)
#define PRP_CNTL_WEN		(1 << 14)
#define PRP_CNTL_CH1BYP		(1 << 15)
#define PRP_CNTL_IN_TSKIP(x)	((x) << 16)
#define PRP_CNTL_CH1_TSKIP(x)	((x) << 19)
#define PRP_CNTL_CH2_TSKIP(x)	((x) << 22)
#define PRP_CNTL_INPUT_FIFO_LEVEL(x)	((x) << 25)
#define PRP_CNTL_RZ_FIFO_LEVEL(x)	((x) << 27)
#define PRP_CNTL_CH2B1EN	(1 << 29)
#define PRP_CNTL_CH2B2EN	(1 << 30)
#define PRP_CNTL_CH2FEN		(1 << 31)
#define PRP_INTR_RDERR		(1 << 0)
#define PRP_INTR_CH1WERR	(1 << 1)
#define PRP_INTR_CH2WERR	(1 << 2)
#define PRP_INTR_CH1FC		(1 << 3)
#define PRP_INTR_CH2FC		(1 << 5)
#define PRP_INTR_LBOVF		(1 << 7)
#define PRP_INTR_CH2OVF		(1 << 8)
#define mx27_camera_emma(pcdev)	(cpu_is_mx27() && pcdev->use_emma)
#define MAX_VIDEO_MEM	16
struct mx2_camera_dev ;
struct mx2_buffer ;
static void mx2_camera_deactivate(struct mx2_camera_dev *pcdev)
static int mx2_camera_add_device(struct soc_camera_device *icd)
static void mx2_camera_remove_device(struct soc_camera_device *icd)
static void mx27_camera_dma_enable(struct mx2_camera_dev *pcdev)
static irqreturn_t mx27_camera_irq(int irq_csi, void *data)
static irqreturn_t mx27_camera_irq(int irq_csi, void *data)
static void mx25_camera_frame_done(struct mx2_camera_dev *pcdev, int fb,
int state)
static irqreturn_t mx25_camera_irq(int irq_csi, void *data)
static int mx2_videobuf_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct mx2_buffer *buf)
static int mx2_videobuf_prepare(struct videobuf_queue *vq,
struct videobuf_buffer *vb, enum v4l2_field field)
static void mx2_videobuf_queue(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void mx2_videobuf_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops mx2_videobuf_ops = ;
static void mx2_camera_init_videobuf(struct videobuf_queue *q,
struct soc_camera_device *icd)
#define MX2_BUS_FLAGS	(SOCAM_DATAWIDTH_8 | \
SOCAM_MASTER | \
SOCAM_VSYNC_ACTIVE_HIGH | \
SOCAM_VSYNC_ACTIVE_LOW | \
SOCAM_HSYNC_ACTIVE_HIGH | \
SOCAM_HSYNC_ACTIVE_LOW | \
SOCAM_PCLK_SAMPLE_RISING | \
SOCAM_PCLK_SAMPLE_FALLING | \
SOCAM_DATA_ACTIVE_HIGH | \
SOCAM_DATA_ACTIVE_LOW)
static int mx27_camera_emma_prp_reset(struct mx2_camera_dev *pcdev)
static void mx27_camera_emma_buf_init(struct soc_camera_device *icd,
int bytesperline)
static int mx2_camera_set_bus_param(struct soc_camera_device *icd,
__u32 pixfmt)
static int mx2_camera_set_crop(struct soc_camera_device *icd,
struct v4l2_crop *a)
static int mx2_camera_set_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int mx2_camera_try_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int mx2_camera_querycap(struct soc_camera_host *ici,
struct v4l2_capability *cap)
static int mx2_camera_reqbufs(struct soc_camera_device *icd,
struct v4l2_requestbuffers *p)
static void mx27_camera_frame_done(struct mx2_camera_dev *pcdev, int state)
static void mx27_camera_dma_err_callback(int channel, void *data, int err)
static void mx27_camera_dma_callback(int channel, void *data)
#define DMA_REQ_CSI_RX          31
static int __devinit mx27_camera_dma_init(struct platform_device *pdev,
struct mx2_camera_dev *pcdev)
static unsigned int mx2_camera_poll(struct file *file, poll_table *pt)
static struct soc_camera_host_ops mx2_soc_camera_host_ops = ;
static void mx27_camera_frame_done_emma(struct mx2_camera_dev *pcdev,
int bufnum, int state)
static irqreturn_t mx27_camera_emma_irq(int irq_emma, void *data)
static int __devinit mx27_camera_emma_init(struct mx2_camera_dev *pcdev)
static int __devinit mx2_camera_probe(struct platform_device *pdev)
static int __devexit mx2_camera_remove(struct platform_device *pdev)
static struct platform_driver mx2_camera_driver = ;
static int __init mx2_camera_init(void)
static void __exit mx2_camera_exit(void)
module_init(mx2_camera_init);
module_exit(mx2_camera_exit);
MODULE_DESCRIPTION("i.MX27/i.MX25 SoC Camera Host driver");
MODULE_AUTHOR("Sascha Hauer <sha@pengutronix.de>");
MODULE_LICENSE("GPL");
