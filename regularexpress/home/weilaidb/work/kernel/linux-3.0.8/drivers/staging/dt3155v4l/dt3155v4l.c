#define DT3155_VENDOR_ID 0x8086
#define DT3155_DEVICE_ID 0x1223
#define DT3155_CHUNK_SIZE (1U << 22)
#define DT3155_COH_FLAGS (GFP_KERNEL | GFP_DMA32 | __GFP_COLD | __GFP_NOWARN)
#define DT3155_BUF_SIZE (768 * 576)
static const u8 csr2_init = VT_50HZ;
#define DT3155_CURRENT_NORM V4L2_STD_625_50
static const unsigned int img_width = 768;
static const unsigned int img_height = 576;
static const unsigned int frames_per_sec = 25;
static const struct v4l2_fmtdesc frame_std[] = ;
static const u8 csr2_init = VT_60HZ;
#define DT3155_CURRENT_NORM V4L2_STD_525_60
static const unsigned int img_width = 640;
static const unsigned int img_height = 480;
static const unsigned int frames_per_sec = 30;
static const struct v4l2_fmtdesc frame_std[] = ;
#define NUM_OF_FORMATS ARRAY_SIZE(frame_std)
static u8 config_init = ACQ_MODE_EVEN;
static int
read_i2c_reg(void __iomem *addr, u8 index, u8 *data)
static int
write_i2c_reg(void __iomem *addr, u8 index, u8 data)
static void write_i2c_reg_nowait(void __iomem *addr, u8 index, u8 data)
static int wait_i2c_reg(void __iomem *addr)
static int
dt3155_start_acq(struct dt3155_priv *pd)
static int
dt3155_stop_acq(struct dt3155_priv *pd)
static int
dt3155_buf_setup(struct videobuf_queue *q, unsigned int *count,
unsigned int *size)
static int
dt3155_buf_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
dt3155_buf_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void
dt3155_buf_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
static struct videobuf_queue_ops vbq_ops = ;
static irqreturn_t
dt3155_irq_handler_even(int irq, void *dev_id)
static int
dt3155_threadfn(void *arg)
static int
dt3155_open(struct file *filp)
static int
dt3155_release(struct file *filp)
static ssize_t
dt3155_read(struct file *filp, char __user *user, size_t size, loff_t *loff)
static unsigned int
dt3155_poll(struct file *filp, struct poll_table_struct *polltbl)
static int
dt3155_mmap(struct file *filp, struct vm_area_struct *vma)
static const struct v4l2_file_operations dt3155_fops = ;
static int
dt3155_ioc_streamon(struct file *filp, void *p, enum v4l2_buf_type type)
static int
dt3155_ioc_streamoff(struct file *filp, void *p, enum v4l2_buf_type type)
static int
dt3155_ioc_querycap(struct file *filp, void *p, struct v4l2_capability *cap)
static int
dt3155_ioc_enum_fmt_vid_cap(struct file *filp, void *p, struct v4l2_fmtdesc *f)
static int
dt3155_ioc_g_fmt_vid_cap(struct file *filp, void *p, struct v4l2_format *f)
static int
dt3155_ioc_try_fmt_vid_cap(struct file *filp, void *p, struct v4l2_format *f)
static int
dt3155_ioc_s_fmt_vid_cap(struct file *filp, void *p, struct v4l2_format *f)
static int
dt3155_ioc_reqbufs(struct file *filp, void *p, struct v4l2_requestbuffers *b)
static int
dt3155_ioc_querybuf(struct file *filp, void *p, struct v4l2_buffer *b)
static int
dt3155_ioc_qbuf(struct file *filp, void *p, struct v4l2_buffer *b)
static int
dt3155_ioc_dqbuf(struct file *filp, void *p, struct v4l2_buffer *b)
static int
dt3155_ioc_querystd(struct file *filp, void *p, v4l2_std_id *norm)
static int
dt3155_ioc_g_std(struct file *filp, void *p, v4l2_std_id *norm)
static int
dt3155_ioc_s_std(struct file *filp, void *p, v4l2_std_id *norm)
static int
dt3155_ioc_enum_input(struct file *filp, void *p, struct v4l2_input *input)
static int
dt3155_ioc_g_input(struct file *filp, void *p, unsigned int *i)
static int
dt3155_ioc_s_input(struct file *filp, void *p, unsigned int i)
static int
dt3155_ioc_g_parm(struct file *filp, void *p, struct v4l2_streamparm *parms)
static int
dt3155_ioc_s_parm(struct file *filp, void *p, struct v4l2_streamparm *parms)
static const struct v4l2_ioctl_ops dt3155_ioctl_ops = ;
static int __devinit
dt3155_init_board(struct pci_dev *dev)
static struct video_device dt3155_vdev = ;
struct dma_coherent_mem ;
static int __devinit
dt3155_alloc_coherent(struct device *dev, size_t size, int flags)
static void __devexit
dt3155_free_coherent(struct device *dev)
static int __devinit
dt3155_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit
dt3155_remove(struct pci_dev *dev)
static DEFINE_PCI_DEVICE_TABLE(pci_ids) = ;
MODULE_DEVICE_TABLE(pci, pci_ids);
static struct pci_driver pci_driver = ;
static int __init
dt3155_init_module(void)
static void __exit
dt3155_exit_module(void)
module_init(dt3155_init_module);
module_exit(dt3155_exit_module);
MODULE_DESCRIPTION("video4linux pci-driver for dt3155 frame grabber");
MODULE_AUTHOR("Marin Mitov <mitov@issp.bas.bg>");
MODULE_VERSION(DT3155_VERSION);
MODULE_LICENSE("GPL");
