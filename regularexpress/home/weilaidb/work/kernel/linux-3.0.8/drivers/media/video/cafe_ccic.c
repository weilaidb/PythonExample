#define CAFE_VERSION 0x000002
MODULE_AUTHOR("Jonathan Corbet <corbet@lwn.net>");
MODULE_DESCRIPTION("Marvell 88ALP01 CMOS Camera Controller driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("Video");
#define MAX_DMA_BUFS 3
static int alloc_bufs_at_read;
module_param(alloc_bufs_at_read, bool, 0444);
MODULE_PARM_DESC(alloc_bufs_at_read,
"Non-zero value causes DMA buffers to be allocated when the "
"video capture device is read, rather than at module load "
"time.  This saves memory, but decreases the chances of "
"successfully getting those buffers.");
static int n_dma_bufs = 3;
module_param(n_dma_bufs, uint, 0644);
MODULE_PARM_DESC(n_dma_bufs,
"The number of DMA buffers to allocate.  Can be either two "
"(saves memory, makes timing tighter) or three.");
static int dma_buf_size = VGA_WIDTH * VGA_HEIGHT * 2;
module_param(dma_buf_size, uint, 0444);
MODULE_PARM_DESC(dma_buf_size,
"The size of the allocated DMA buffers.  If actual operating "
"parameters require larger buffers, an attempt to reallocate "
"will be made.");
static int min_buffers = 1;
module_param(min_buffers, uint, 0644);
MODULE_PARM_DESC(min_buffers,
"The minimum number of streaming I/O buffers we are willing "
"to work with.");
static int max_buffers = 10;
module_param(max_buffers, uint, 0644);
MODULE_PARM_DESC(max_buffers,
"The maximum number of streaming I/O buffers an application "
"will be allowed to allocate.  These buffers are big and live "
"in vmalloc space.");
static int flip;
module_param(flip, bool, 0444);
MODULE_PARM_DESC(flip,
"If set, the sensor will be instructed to flip the image "
"vertically.");
enum cafe_state ;
struct cafe_sio_buffer ;
struct cafe_camera
;
#define CF_BUF0_VALID	 0
#define CF_BUF1_VALID	 1
#define CF_BUF2_VALID	 2
#define CF_DMA_ACTIVE	 3
#define CF_CONFIG_NEEDED 4
#define sensor_call(cam, o, f, args...) \
v4l2_subdev_call(cam->sensor, o, f, ##args)
static inline struct cafe_camera *to_cam(struct v4l2_device *dev)
static struct cafe_format_struct  cafe_formats[] = ;
#define N_CAFE_FMTS ARRAY_SIZE(cafe_formats)
static struct cafe_format_struct *cafe_find_format(u32 pixelformat)
static void cafe_reset_buffers(struct cafe_camera *cam)
static inline int cafe_needs_config(struct cafe_camera *cam)
static void cafe_set_config_needed(struct cafe_camera *cam, int needed)
#define cam_err(cam, fmt, arg...) \
dev_err(&(cam)->pdev->dev, fmt, ##arg);
#define cam_warn(cam, fmt, arg...) \
dev_warn(&(cam)->pdev->dev, fmt, ##arg);
#define cam_dbg(cam, fmt, arg...) \
dev_dbg(&(cam)->pdev->dev, fmt, ##arg);
static inline void cafe_reg_write(struct cafe_camera *cam, unsigned int reg,
unsigned int val)
static inline unsigned int cafe_reg_read(struct cafe_camera *cam,
unsigned int reg)
static inline void cafe_reg_write_mask(struct cafe_camera *cam, unsigned int reg,
unsigned int val, unsigned int mask)
static inline void cafe_reg_clear_bit(struct cafe_camera *cam,
unsigned int reg, unsigned int val)
static inline void cafe_reg_set_bit(struct cafe_camera *cam,
unsigned int reg, unsigned int val)
#define CAFE_SMBUS_TIMEOUT (HZ)
static int cafe_smbus_write_done(struct cafe_camera *cam)
static int cafe_smbus_write_data(struct cafe_camera *cam,
u16 addr, u8 command, u8 value)
static int cafe_smbus_read_done(struct cafe_camera *cam)
static int cafe_smbus_read_data(struct cafe_camera *cam,
u16 addr, u8 command, u8 *value)
static int cafe_smbus_xfer(struct i2c_adapter *adapter, u16 addr,
unsigned short flags, char rw, u8 command,
int size, union i2c_smbus_data *data)
static void cafe_smbus_enable_irq(struct cafe_camera *cam)
static u32 cafe_smbus_func(struct i2c_adapter *adapter)
static struct i2c_algorithm cafe_smbus_algo = ;
static void cafe_ctlr_stop_dma(struct cafe_camera *cam);
static void cafe_ctlr_power_down(struct cafe_camera *cam);
static int cafe_smbus_setup(struct cafe_camera *cam)
static void cafe_smbus_shutdown(struct cafe_camera *cam)
static void cafe_ctlr_dma(struct cafe_camera *cam)
static void cafe_ctlr_image(struct cafe_camera *cam)
static int cafe_ctlr_configure(struct cafe_camera *cam)
static void cafe_ctlr_irq_enable(struct cafe_camera *cam)
static void cafe_ctlr_irq_disable(struct cafe_camera *cam)
static void cafe_ctlr_start(struct cafe_camera *cam)
static void cafe_ctlr_stop(struct cafe_camera *cam)
static void cafe_ctlr_init(struct cafe_camera *cam)
static void cafe_ctlr_stop_dma(struct cafe_camera *cam)
static void cafe_ctlr_power_up(struct cafe_camera *cam)
static void cafe_ctlr_power_down(struct cafe_camera *cam)
static int __cafe_cam_reset(struct cafe_camera *cam)
static int cafe_cam_init(struct cafe_camera *cam)
static int cafe_cam_set_flip(struct cafe_camera *cam)
static int cafe_cam_configure(struct cafe_camera *cam)
static int cafe_alloc_dma_bufs(struct cafe_camera *cam, int loadtime)
static void cafe_free_dma_bufs(struct cafe_camera *cam)
static ssize_t cafe_deliver_buffer(struct cafe_camera *cam,
char __user *buffer, size_t len, loff_t *pos)
static int cafe_read_setup(struct cafe_camera *cam, enum cafe_state state)
static ssize_t cafe_v4l_read(struct file *filp,
char __user *buffer, size_t len, loff_t *pos)
static int cafe_vidioc_streamon(struct file *filp, void *priv,
enum v4l2_buf_type type)
static int cafe_vidioc_streamoff(struct file *filp, void *priv,
enum v4l2_buf_type type)
static int cafe_setup_siobuf(struct cafe_camera *cam, int index)
static int cafe_free_sio_buffers(struct cafe_camera *cam)
static int cafe_vidioc_reqbufs(struct file *filp, void *priv,
struct v4l2_requestbuffers *req)
static int cafe_vidioc_querybuf(struct file *filp, void *priv,
struct v4l2_buffer *buf)
static int cafe_vidioc_qbuf(struct file *filp, void *priv,
struct v4l2_buffer *buf)
static int cafe_vidioc_dqbuf(struct file *filp, void *priv,
struct v4l2_buffer *buf)
static void cafe_v4l_vm_open(struct vm_area_struct *vma)
static void cafe_v4l_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct cafe_v4l_vm_ops = ;
static int cafe_v4l_mmap(struct file *filp, struct vm_area_struct *vma)
static int cafe_v4l_open(struct file *filp)
static int cafe_v4l_release(struct file *filp)
static unsigned int cafe_v4l_poll(struct file *filp,
struct poll_table_struct *pt)
static int cafe_vidioc_queryctrl(struct file *filp, void *priv,
struct v4l2_queryctrl *qc)
static int cafe_vidioc_g_ctrl(struct file *filp, void *priv,
struct v4l2_control *ctrl)
static int cafe_vidioc_s_ctrl(struct file *filp, void *priv,
struct v4l2_control *ctrl)
static int cafe_vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static const struct v4l2_pix_format cafe_def_pix_format = ;
static const enum v4l2_mbus_pixelcode cafe_def_mbus_code =
V4L2_MBUS_FMT_YUYV8_2X8;
static int cafe_vidioc_enum_fmt_vid_cap(struct file *filp,
void *priv, struct v4l2_fmtdesc *fmt)
static int cafe_vidioc_try_fmt_vid_cap(struct file *filp, void *priv,
struct v4l2_format *fmt)
static int cafe_vidioc_s_fmt_vid_cap(struct file *filp, void *priv,
struct v4l2_format *fmt)
static int cafe_vidioc_g_fmt_vid_cap(struct file *filp, void *priv,
struct v4l2_format *f)
static int cafe_vidioc_enum_input(struct file *filp, void *priv,
struct v4l2_input *input)
static int cafe_vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int cafe_vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int cafe_vidioc_s_std(struct file *filp, void *priv, v4l2_std_id *a)
static int cafe_vidioc_g_parm(struct file *filp, void *priv,
struct v4l2_streamparm *parms)
static int cafe_vidioc_s_parm(struct file *filp, void *priv,
struct v4l2_streamparm *parms)
static int cafe_vidioc_g_chip_ident(struct file *file, void *priv,
struct v4l2_dbg_chip_ident *chip)
static int cafe_vidioc_enum_framesizes(struct file *filp, void *priv,
struct v4l2_frmsizeenum *sizes)
static int cafe_vidioc_enum_frameintervals(struct file *filp, void *priv,
struct v4l2_frmivalenum *interval)
static int cafe_vidioc_g_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int cafe_vidioc_s_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static const struct v4l2_file_operations cafe_v4l_fops = ;
static const struct v4l2_ioctl_ops cafe_v4l_ioctl_ops = ;
static struct video_device cafe_v4l_template = ;
static void cafe_frame_tasklet(unsigned long data)
static void cafe_frame_complete(struct cafe_camera *cam, int frame)
static void cafe_frame_irq(struct cafe_camera *cam, unsigned int irqs)
static irqreturn_t cafe_irq(int irq, void *data)
static const struct dmi_system_id olpc_xo1_dmi[] = ;
static int cafe_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void cafe_shutdown(struct cafe_camera *cam)
static void cafe_pci_remove(struct pci_dev *pdev)
static int cafe_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int cafe_pci_resume(struct pci_dev *pdev)
static struct pci_device_id cafe_ids[] = ;
MODULE_DEVICE_TABLE(pci, cafe_ids);
static struct pci_driver cafe_pci_driver = ;
static int __init cafe_init(void)
static void __exit cafe_exit(void)
module_init(cafe_init);
module_exit(cafe_exit);
