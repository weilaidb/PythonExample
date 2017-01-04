static char *fimc_clocks[MAX_FIMC_CLOCKS] = ;
static struct fimc_fmt fimc_formats[] = ;
static struct v4l2_queryctrl fimc_ctrls[] = ;
static struct v4l2_queryctrl *get_ctrl(int id)
int fimc_check_scaler_ratio(int sw, int sh, int dw, int dh, int rot)
static int fimc_get_scaler_factor(u32 src, u32 tar, u32 *ratio, u32 *shift)
int fimc_set_scaler_info(struct fimc_ctx *ctx)
static void fimc_m2m_job_finish(struct fimc_ctx *ctx, int vb_state)
static void fimc_m2m_shutdown(struct fimc_ctx *ctx)
static int stop_streaming(struct vb2_queue *q)
static void fimc_capture_irq_handler(struct fimc_dev *fimc)
static irqreturn_t fimc_isr(int irq, void *priv)
int fimc_prepare_addr(struct fimc_ctx *ctx, struct vb2_buffer *vb,
struct fimc_frame *frame, struct fimc_addr *paddr)
static void fimc_set_yuv_order(struct fimc_ctx *ctx)
static void fimc_prepare_dma_offset(struct fimc_ctx *ctx, struct fimc_frame *f)
int fimc_prepare_config(struct fimc_ctx *ctx, u32 flags)
static void fimc_dma_run(void *priv)
static void fimc_job_abort(void *priv)
static int fimc_queue_setup(struct vb2_queue *vq, unsigned int *num_buffers,
unsigned int *num_planes, unsigned long sizes[],
void *allocators[])
static int fimc_buf_prepare(struct vb2_buffer *vb)
static void fimc_buf_queue(struct vb2_buffer *vb)
static void fimc_lock(struct vb2_queue *vq)
static void fimc_unlock(struct vb2_queue *vq)
static struct vb2_ops fimc_qops = ;
static int fimc_m2m_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
int fimc_vidioc_enum_fmt_mplane(struct file *file, void *priv,
struct v4l2_fmtdesc *f)
int fimc_vidioc_g_fmt_mplane(struct file *file, void *priv,
struct v4l2_format *f)
struct fimc_fmt *find_format(struct v4l2_format *f, unsigned int mask)
struct fimc_fmt *find_mbus_format(struct v4l2_mbus_framefmt *f,
unsigned int mask)
int fimc_vidioc_try_fmt_mplane(struct file *file, void *priv,
struct v4l2_format *f)
static int fimc_m2m_s_fmt_mplane(struct file *file, void *priv,
struct v4l2_format *f)
static int fimc_m2m_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *reqbufs)
static int fimc_m2m_querybuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int fimc_m2m_qbuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int fimc_m2m_dqbuf(struct file *file, void *priv,
struct v4l2_buffer *buf)
static int fimc_m2m_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int fimc_m2m_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
int fimc_vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
int fimc_vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
int check_ctrl_val(struct fimc_ctx *ctx,  struct v4l2_control *ctrl)
int fimc_s_ctrl(struct fimc_ctx *ctx, struct v4l2_control *ctrl)
static int fimc_m2m_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int fimc_m2m_cropcap(struct file *file, void *fh,
struct v4l2_cropcap *cr)
static int fimc_m2m_g_crop(struct file *file, void *fh, struct v4l2_crop *cr)
int fimc_try_crop(struct fimc_ctx *ctx, struct v4l2_crop *cr)
static int fimc_m2m_s_crop(struct file *file, void *fh, struct v4l2_crop *cr)
static const struct v4l2_ioctl_ops fimc_m2m_ioctl_ops = ;
static int queue_init(void *priv, struct vb2_queue *src_vq,
struct vb2_queue *dst_vq)
static int fimc_m2m_open(struct file *file)
static int fimc_m2m_release(struct file *file)
static unsigned int fimc_m2m_poll(struct file *file,
struct poll_table_struct *wait)
static int fimc_m2m_mmap(struct file *file, struct vm_area_struct *vma)
static const struct v4l2_file_operations fimc_m2m_fops = ;
static struct v4l2_m2m_ops m2m_ops = ;
static int fimc_register_m2m_device(struct fimc_dev *fimc)
static void fimc_unregister_m2m_device(struct fimc_dev *fimc)
static void fimc_clk_release(struct fimc_dev *fimc)
static int fimc_clk_get(struct fimc_dev *fimc)
static int fimc_probe(struct platform_device *pdev)
static int __devexit fimc_remove(struct platform_device *pdev)
static struct fimc_pix_limit s5p_pix_limit[4] = ;
static struct samsung_fimc_variant fimc0_variant_s5p = ;
static struct samsung_fimc_variant fimc2_variant_s5p = ;
static struct samsung_fimc_variant fimc0_variant_s5pv210 = ;
static struct samsung_fimc_variant fimc1_variant_s5pv210 = ;
static struct samsung_fimc_variant fimc2_variant_s5pv210 = ;
static struct samsung_fimc_variant fimc0_variant_exynos4 = ;
static struct samsung_fimc_variant fimc2_variant_exynos4 = ;
static struct samsung_fimc_driverdata fimc_drvdata_s5p = ;
static struct samsung_fimc_driverdata fimc_drvdata_s5pv210 = ;
static struct samsung_fimc_driverdata fimc_drvdata_exynos4 = ;
static struct platform_device_id fimc_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, fimc_driver_ids);
static struct platform_driver fimc_driver = ;
static int __init fimc_init(void)
static void __exit fimc_exit(void)
module_init(fimc_init);
module_exit(fimc_exit);
MODULE_AUTHOR("Sylwester Nawrocki <s.nawrocki@samsung.com>");
MODULE_DESCRIPTION("S5P FIMC camera host interface/video postprocessor driver");
MODULE_LICENSE("GPL");
