#define PXA_CAM_VERSION_CODE KERNEL_VERSION(0, 0, 5)
#define PXA_CAM_DRV_NAME "pxa27x-camera"
#define CICR0		0x0000
#define CICR1		0x0004
#define CICR2		0x0008
#define CICR3		0x000C
#define CICR4		0x0010
#define CISR		0x0014
#define CIFR		0x0018
#define CITOR		0x001C
#define CIBR0		0x0028
#define CIBR1		0x0030
#define CIBR2		0x0038
#define CICR0_DMAEN	(1 << 31)
#define CICR0_PAR_EN	(1 << 30)
#define CICR0_SL_CAP_EN	(1 << 29)
#define CICR0_ENB	(1 << 28)
#define CICR0_DIS	(1 << 27)
#define CICR0_SIM	(0x7 << 24)
#define CICR0_TOM	(1 << 9)
#define CICR0_RDAVM	(1 << 8)
#define CICR0_FEM	(1 << 7)
#define CICR0_EOLM	(1 << 6)
#define CICR0_PERRM	(1 << 5)
#define CICR0_QDM	(1 << 4)
#define CICR0_CDM	(1 << 3)
#define CICR0_SOFM	(1 << 2)
#define CICR0_EOFM	(1 << 1)
#define CICR0_FOM	(1 << 0)
#define CICR1_TBIT	(1 << 31)
#define CICR1_RGBT_CONV	(0x3 << 29)
#define CICR1_PPL	(0x7ff << 15)
#define CICR1_RGB_CONV	(0x7 << 12)
#define CICR1_RGB_F	(1 << 11)
#define CICR1_YCBCR_F	(1 << 10)
#define CICR1_RGB_BPP	(0x7 << 7)
#define CICR1_RAW_BPP	(0x3 << 5)
#define CICR1_COLOR_SP	(0x3 << 3)
#define CICR1_DW	(0x7 << 0)
#define CICR2_BLW	(0xff << 24)
#define CICR2_ELW	(0xff << 16)
#define CICR2_HSW	(0x3f << 10)
#define CICR2_BFPW	(0x3f << 3)
#define CICR2_FSW	(0x7 << 0)
#define CICR3_BFW	(0xff << 24)
#define CICR3_EFW	(0xff << 16)
#define CICR3_VSW	(0x3f << 10)
#define CICR3_BFPW	(0x3f << 3)
#define CICR3_LPF	(0x7ff << 0)
#define CICR4_MCLK_DLY	(0x3 << 24)
#define CICR4_PCLK_EN	(1 << 23)
#define CICR4_PCP	(1 << 22)
#define CICR4_HSP	(1 << 21)
#define CICR4_VSP	(1 << 20)
#define CICR4_MCLK_EN	(1 << 19)
#define CICR4_FR_RATE	(0x7 << 8)
#define CICR4_DIV	(0xff << 0)
#define CISR_FTO	(1 << 15)
#define CISR_RDAV_2	(1 << 14)
#define CISR_RDAV_1	(1 << 13)
#define CISR_RDAV_0	(1 << 12)
#define CISR_FEMPTY_2	(1 << 11)
#define CISR_FEMPTY_1	(1 << 10)
#define CISR_FEMPTY_0	(1 << 9)
#define CISR_EOL	(1 << 8)
#define CISR_PAR_ERR	(1 << 7)
#define CISR_CQD	(1 << 6)
#define CISR_CDD	(1 << 5)
#define CISR_SOF	(1 << 4)
#define CISR_EOF	(1 << 3)
#define CISR_IFO_2	(1 << 2)
#define CISR_IFO_1	(1 << 1)
#define CISR_IFO_0	(1 << 0)
#define CIFR_FLVL2	(0x7f << 23)
#define CIFR_FLVL1	(0x7f << 16)
#define CIFR_FLVL0	(0xff << 8)
#define CIFR_THL_0	(0x3 << 4)
#define CIFR_RESET_F	(1 << 3)
#define CIFR_FEN2	(1 << 2)
#define CIFR_FEN1	(1 << 1)
#define CIFR_FEN0	(1 << 0)
#define CICR0_SIM_MP	(0 << 24)
#define CICR0_SIM_SP	(1 << 24)
#define CICR0_SIM_MS	(2 << 24)
#define CICR0_SIM_EP	(3 << 24)
#define CICR0_SIM_ES	(4 << 24)
#define CICR1_DW_VAL(x)   ((x) & CICR1_DW)
#define CICR1_PPL_VAL(x)  (((x) << 15) & CICR1_PPL)
#define CICR1_COLOR_SP_VAL(x)	(((x) << 3) & CICR1_COLOR_SP)
#define CICR1_RGB_BPP_VAL(x)	(((x) << 7) & CICR1_RGB_BPP)
#define CICR1_RGBT_CONV_VAL(x)	(((x) << 29) & CICR1_RGBT_CONV)
#define CICR2_BLW_VAL(x)  (((x) << 24) & CICR2_BLW)
#define CICR2_ELW_VAL(x)  (((x) << 16) & CICR2_ELW)
#define CICR2_HSW_VAL(x)  (((x) << 10) & CICR2_HSW)
#define CICR2_BFPW_VAL(x) (((x) << 3) & CICR2_BFPW)
#define CICR2_FSW_VAL(x)  (((x) << 0) & CICR2_FSW)
#define CICR3_BFW_VAL(x)  (((x) << 24) & CICR3_BFW)
#define CICR3_EFW_VAL(x)  (((x) << 16) & CICR3_EFW)
#define CICR3_VSW_VAL(x)  (((x) << 11) & CICR3_VSW)
#define CICR3_LPF_VAL(x)  (((x) << 0) & CICR3_LPF)
#define CICR0_IRQ_MASK (CICR0_TOM | CICR0_RDAVM | CICR0_FEM | CICR0_EOLM | \
CICR0_PERRM | CICR0_QDM | CICR0_CDM | CICR0_SOFM | \
CICR0_EOFM | CICR0_FOM)
enum pxa_camera_active_dma ;
struct pxa_cam_dma ;
struct pxa_buffer ;
struct pxa_camera_dev ;
struct pxa_cam ;
static const char *pxa_cam_driver_description = "PXA_Camera";
static unsigned int vid_limit = 16;
static int pxa_videobuf_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct pxa_buffer *buf)
static int calculate_dma_sglen(struct scatterlist *sglist, int sglen,
int sg_first_ofs, int size)
static int pxa_init_dma_channel(struct pxa_camera_dev *pcdev,
struct pxa_buffer *buf,
struct videobuf_dmabuf *dma, int channel,
int cibr, int size,
struct scatterlist **sg_first, int *sg_first_ofs)
static void pxa_videobuf_set_actdma(struct pxa_camera_dev *pcdev,
struct pxa_buffer *buf)
static int pxa_videobuf_prepare(struct videobuf_queue *vq,
struct videobuf_buffer *vb, enum v4l2_field field)
static void pxa_dma_start_channels(struct pxa_camera_dev *pcdev)
static void pxa_dma_stop_channels(struct pxa_camera_dev *pcdev)
static void pxa_dma_add_tail_buf(struct pxa_camera_dev *pcdev,
struct pxa_buffer *buf)
static void pxa_camera_start_capture(struct pxa_camera_dev *pcdev)
static void pxa_camera_stop_capture(struct pxa_camera_dev *pcdev)
static void pxa_videobuf_queue(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void pxa_videobuf_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static void pxa_camera_wakeup(struct pxa_camera_dev *pcdev,
struct videobuf_buffer *vb,
struct pxa_buffer *buf)
static void pxa_camera_check_link_miss(struct pxa_camera_dev *pcdev)
static void pxa_camera_dma_irq(int channel, struct pxa_camera_dev *pcdev,
enum pxa_camera_active_dma act_dma)
static void pxa_camera_dma_irq_y(int channel, void *data)
static void pxa_camera_dma_irq_u(int channel, void *data)
static void pxa_camera_dma_irq_v(int channel, void *data)
static struct videobuf_queue_ops pxa_videobuf_ops = ;
static void pxa_camera_init_videobuf(struct videobuf_queue *q,
struct soc_camera_device *icd)
static u32 mclk_get_divisor(struct platform_device *pdev,
struct pxa_camera_dev *pcdev)
static void recalculate_fifo_timeout(struct pxa_camera_dev *pcdev,
unsigned long pclk)
static void pxa_camera_activate(struct pxa_camera_dev *pcdev)
static void pxa_camera_deactivate(struct pxa_camera_dev *pcdev)
static irqreturn_t pxa_camera_irq(int irq, void *data)
static int pxa_camera_add_device(struct soc_camera_device *icd)
static void pxa_camera_remove_device(struct soc_camera_device *icd)
static int test_platform_param(struct pxa_camera_dev *pcdev,
unsigned char buswidth, unsigned long *flags)
static void pxa_camera_setup_cicr(struct soc_camera_device *icd,
unsigned long flags, __u32 pixfmt)
static int pxa_camera_set_bus_param(struct soc_camera_device *icd, __u32 pixfmt)
static int pxa_camera_try_bus_param(struct soc_camera_device *icd,
unsigned char buswidth)
static const struct soc_mbus_pixelfmt pxa_camera_formats[] = ;
static bool pxa_camera_packing_supported(const struct soc_mbus_pixelfmt *fmt)
static int pxa_camera_get_formats(struct soc_camera_device *icd, unsigned int idx,
struct soc_camera_format_xlate *xlate)
static void pxa_camera_put_formats(struct soc_camera_device *icd)
static int pxa_camera_check_frame(u32 width, u32 height)
static int pxa_camera_set_crop(struct soc_camera_device *icd,
struct v4l2_crop *a)
static int pxa_camera_set_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int pxa_camera_try_fmt(struct soc_camera_device *icd,
struct v4l2_format *f)
static int pxa_camera_reqbufs(struct soc_camera_device *icd,
struct v4l2_requestbuffers *p)
static unsigned int pxa_camera_poll(struct file *file, poll_table *pt)
static int pxa_camera_querycap(struct soc_camera_host *ici,
struct v4l2_capability *cap)
static int pxa_camera_suspend(struct soc_camera_device *icd, pm_message_t state)
static int pxa_camera_resume(struct soc_camera_device *icd)
static struct soc_camera_host_ops pxa_soc_camera_host_ops = ;
static int __devinit pxa_camera_probe(struct platform_device *pdev)
static int __devexit pxa_camera_remove(struct platform_device *pdev)
static struct platform_driver pxa_camera_driver = ;
static int __init pxa_camera_init(void)
static void __exit pxa_camera_exit(void)
module_init(pxa_camera_init);
module_exit(pxa_camera_exit);
MODULE_DESCRIPTION("PXA27x SoC Camera Host driver");
MODULE_AUTHOR("Guennadi Liakhovetski <kernel@pengutronix.de>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" PXA_CAM_DRV_NAME);
