MODULE_AUTHOR("Stelian Pop <stelian@popies.net>");
MODULE_DESCRIPTION("v4l2 driver for the MotionEye camera");
MODULE_LICENSE("GPL");
MODULE_VERSION(MEYE_DRIVER_VERSION);
static unsigned int gbuffers = 2;
module_param(gbuffers, int, 0444);
MODULE_PARM_DESC(gbuffers, "number of capture buffers, default is 2 (32 max)");
static unsigned int gbufsize = MEYE_MAX_BUFSIZE;
module_param(gbufsize, int, 0444);
MODULE_PARM_DESC(gbufsize, "size of the capture buffers, default is 614400"
" (will be rounded up to a page multiple)");
static int video_nr = -1;
module_param(video_nr, int, 0444);
MODULE_PARM_DESC(video_nr, "video device to register (0=/dev/video0, etc)");
static struct meye meye;
static void *rvmalloc(unsigned long size)
static void rvfree(void * mem, unsigned long size)
static int ptable_alloc(void)
static void ptable_free(void)
static void ptable_copy(u8 *buf, int start, int size, int pt_pages)
static u16 *jpeg_quantisation_tables(int *length, int quality)
static u16 *jpeg_huffman_tables(int *length)
static inline int mchip_hsize(void)
static inline int mchip_vsize(void)
static void mchip_sync(int reg)
static inline void mchip_set(int reg, u32 v)
static inline u32 mchip_read(int reg)
static inline int mchip_delay(u32 reg, u32 v)
static void mchip_subsample(void)
static void mchip_set_framerate(void)
static void mchip_load_tables(void)
static void mchip_vrj_setup(u8 mode)
static void mchip_dma_setup(dma_addr_t dma_addr)
static int mchip_dma_alloc(void)
static void mchip_dma_free(void)
static void mchip_hic_stop(void)
static u32 mchip_get_frame(void)
static void mchip_free_frame(void)
static void mchip_cont_read_frame(u32 v, u8 *buf, int size)
static int mchip_comp_read_frame(u32 v, u8 *buf, int size)
static void mchip_take_picture(void)
static void mchip_get_picture(u8 *buf, int bufsize)
static void mchip_continuous_start(void)
static int mchip_compress_frame(u8 *buf, int bufsize)
static void mchip_cont_compression_start(void)
static irqreturn_t meye_irq(int irq, void *dev_id)
static int meye_open(struct file *file)
static int meye_release(struct file *file)
static int meyeioc_g_params(struct meye_params *p)
static int meyeioc_s_params(struct meye_params *jp)
static int meyeioc_qbuf_capt(int *nb)
static int meyeioc_sync(struct file *file, void *fh, int *i)
static int meyeioc_stillcapt(void)
static int meyeioc_stilljcapt(int *len)
static int vidioc_querycap(struct file *file, void *fh,
struct v4l2_capability *cap)
static int vidioc_enum_input(struct file *file, void *fh, struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *fh, unsigned int *i)
static int vidioc_s_input(struct file *file, void *fh, unsigned int i)
static int vidioc_queryctrl(struct file *file, void *fh,
struct v4l2_queryctrl *c)
static int vidioc_s_ctrl(struct file *file, void *fh, struct v4l2_control *c)
static int vidioc_g_ctrl(struct file *file, void *fh, struct v4l2_control *c)
static int vidioc_enum_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_fmtdesc *f)
static int vidioc_try_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_g_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_reqbufs(struct file *file, void *fh,
struct v4l2_requestbuffers *req)
static int vidioc_querybuf(struct file *file, void *fh, struct v4l2_buffer *buf)
static int vidioc_qbuf(struct file *file, void *fh, struct v4l2_buffer *buf)
static int vidioc_dqbuf(struct file *file, void *fh, struct v4l2_buffer *buf)
static int vidioc_streamon(struct file *file, void *fh, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *fh, enum v4l2_buf_type i)
static long vidioc_default(struct file *file, void *fh, bool valid_prio,
int cmd, void *arg)
static unsigned int meye_poll(struct file *file, poll_table *wait)
static void meye_vm_open(struct vm_area_struct *vma)
static void meye_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct meye_vm_ops = ;
static int meye_mmap(struct file *file, struct vm_area_struct *vma)
static const struct v4l2_file_operations meye_fops = ;
static const struct v4l2_ioctl_ops meye_ioctl_ops = ;
static struct video_device meye_template = ;
static int meye_suspend(struct pci_dev *pdev, pm_message_t state)
static int meye_resume(struct pci_dev *pdev)
static int __devinit meye_probe(struct pci_dev *pcidev,
const struct pci_device_id *ent)
static void __devexit meye_remove(struct pci_dev *pcidev)
static struct pci_device_id meye_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, meye_pci_tbl);
static struct pci_driver meye_driver = ;
static int __init meye_init(void)
static void __exit meye_exit(void)
module_init(meye_init);
module_exit(meye_exit);
