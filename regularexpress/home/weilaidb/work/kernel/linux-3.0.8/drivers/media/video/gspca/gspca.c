#define MODULE_NAME "gspca"
#if defined(CONFIG_INPUT) || defined(CONFIG_INPUT_MODULE)
#define DEF_NURBS 3
#if DEF_NURBS > MAX_NURBS
#error "DEF_NURBS too big"
MODULE_AUTHOR("Jean-François Moine <http:
MODULE_DESCRIPTION("GSPCA USB Camera Driver");
MODULE_LICENSE("GPL");
#define DRIVER_VERSION_NUMBER	KERNEL_VERSION(2, 13, 0)
int gspca_debug = D_ERR | D_PROBE;
EXPORT_SYMBOL(gspca_debug);
static void PDEBUG_MODE(char *txt, __u32 pixfmt, int w, int h)
#define PDEBUG_MODE(txt, pixfmt, w, h)
#define GSPCA_MEMORY_NO 0
#define GSPCA_MEMORY_READ 7
#define BUF_ALL_FLAGS (V4L2_BUF_FLAG_QUEUED | V4L2_BUF_FLAG_DONE)
static void gspca_vm_open(struct vm_area_struct *vma)
static void gspca_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct gspca_vm_ops = ;
#if defined(CONFIG_INPUT) || defined(CONFIG_INPUT_MODULE)
static void int_irq(struct urb *urb)
static int gspca_input_connect(struct gspca_dev *dev)
static int alloc_and_submit_int_urb(struct gspca_dev *gspca_dev,
struct usb_endpoint_descriptor *ep)
static void gspca_input_create_urb(struct gspca_dev *gspca_dev)
static void gspca_input_destroy_urb(struct gspca_dev *gspca_dev)
static inline void gspca_input_destroy_urb(struct gspca_dev *gspca_dev)
static inline void gspca_input_create_urb(struct gspca_dev *gspca_dev)
static inline int gspca_input_connect(struct gspca_dev *dev)
static void fill_frame(struct gspca_dev *gspca_dev,
struct urb *urb)
static void isoc_irq(struct urb *urb)
static void bulk_irq(struct urb *urb)
void gspca_frame_add(struct gspca_dev *gspca_dev,
enum gspca_packet_type packet_type,
const u8 *data,
int len)
EXPORT_SYMBOL(gspca_frame_add);
static int gspca_is_compressed(__u32 format)
static int frame_alloc(struct gspca_dev *gspca_dev, struct file *file,
enum v4l2_memory memory, unsigned int count)
static void frame_free(struct gspca_dev *gspca_dev)
static void destroy_urbs(struct gspca_dev *gspca_dev)
static int gspca_set_alt0(struct gspca_dev *gspca_dev)
static void gspca_stream_off(struct gspca_dev *gspca_dev)
static struct usb_host_endpoint *alt_xfer(struct usb_host_interface *alt,
int xfer)
static struct usb_host_endpoint *get_ep(struct gspca_dev *gspca_dev)
static int create_urbs(struct gspca_dev *gspca_dev,
struct usb_host_endpoint *ep)
static int gspca_init_transfer(struct gspca_dev *gspca_dev)
static void gspca_set_default_mode(struct gspca_dev *gspca_dev)
static int wxh_to_mode(struct gspca_dev *gspca_dev,
int width, int height)
static int gspca_get_mode(struct gspca_dev *gspca_dev,
int mode,
int pixfmt)
static int vidioc_g_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vidioc_s_register(struct file *file, void *priv,
struct v4l2_dbg_register *reg)
static int vidioc_g_chip_ident(struct file *file, void *priv,
struct v4l2_dbg_chip_ident *chip)
static int vidioc_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *fmtdesc)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int try_fmt_vid_cap(struct gspca_dev *gspca_dev,
struct v4l2_format *fmt)
static int vidioc_try_fmt_vid_cap(struct file *file,
void *priv,
struct v4l2_format *fmt)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *fmt)
static int vidioc_enum_framesizes(struct file *file, void *priv,
struct v4l2_frmsizeenum *fsize)
static int vidioc_enum_frameintervals(struct file *filp, void *priv,
struct v4l2_frmivalenum *fival)
static void gspca_release(struct video_device *vfd)
static int dev_open(struct file *file)
static int dev_close(struct file *file)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int get_ctrl(struct gspca_dev *gspca_dev,
int id)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *q_ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_querymenu(struct file *file, void *priv,
struct v4l2_querymenu *qmenu)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *input)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *rb)
static int vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *v4l2_buf)
static int vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type buf_type)
static int vidioc_streamoff(struct file *file, void *priv,
enum v4l2_buf_type buf_type)
static int vidioc_g_jpegcomp(struct file *file, void *priv,
struct v4l2_jpegcompression *jpegcomp)
static int vidioc_s_jpegcomp(struct file *file, void *priv,
struct v4l2_jpegcompression *jpegcomp)
static int vidioc_g_parm(struct file *filp, void *priv,
struct v4l2_streamparm *parm)
static int vidioc_s_parm(struct file *filp, void *priv,
struct v4l2_streamparm *parm)
static int dev_mmap(struct file *file, struct vm_area_struct *vma)
static int frame_ready_nolock(struct gspca_dev *gspca_dev, struct file *file,
enum v4l2_memory memory)
static int frame_ready(struct gspca_dev *gspca_dev, struct file *file,
enum v4l2_memory memory)
static int vidioc_dqbuf(struct file *file, void *priv,
struct v4l2_buffer *v4l2_buf)
static int vidioc_qbuf(struct file *file, void *priv,
struct v4l2_buffer *v4l2_buf)
static int read_alloc(struct gspca_dev *gspca_dev,
struct file *file)
static unsigned int dev_poll(struct file *file, poll_table *wait)
static ssize_t dev_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static struct v4l2_file_operations dev_fops = ;
static const struct v4l2_ioctl_ops dev_ioctl_ops = ;
static const struct video_device gspca_template = ;
static void ctrls_init(struct gspca_dev *gspca_dev)
int gspca_dev_probe2(struct usb_interface *intf,
const struct usb_device_id *id,
const struct sd_desc *sd_desc,
int dev_size,
struct module *module)
EXPORT_SYMBOL(gspca_dev_probe2);
int gspca_dev_probe(struct usb_interface *intf,
const struct usb_device_id *id,
const struct sd_desc *sd_desc,
int dev_size,
struct module *module)
EXPORT_SYMBOL(gspca_dev_probe);
void gspca_disconnect(struct usb_interface *intf)
EXPORT_SYMBOL(gspca_disconnect);
int gspca_suspend(struct usb_interface *intf, pm_message_t message)
EXPORT_SYMBOL(gspca_suspend);
int gspca_resume(struct usb_interface *intf)
EXPORT_SYMBOL(gspca_resume);
int gspca_auto_gain_n_exposure(struct gspca_dev *gspca_dev, int avg_lum,
int desired_avg_lum, int deadzone, int gain_knee, int exposure_knee)
EXPORT_SYMBOL(gspca_auto_gain_n_exposure);
static int __init gspca_init(void)
static void __exit gspca_exit(void)
module_init(gspca_init);
module_exit(gspca_exit);
module_param_named(debug, gspca_debug, int, 0644);
MODULE_PARM_DESC(debug,
"Debug (bit) 0x01:error 0x02:probe 0x04:config"
" 0x08:stream 0x10:frame 0x20:packet"
" 0x0100: v4l2");
