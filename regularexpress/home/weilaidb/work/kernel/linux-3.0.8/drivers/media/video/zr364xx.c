#define DRIVER_VERSION "v0.73"
#define ZR364XX_VERSION_CODE KERNEL_VERSION(0, 7, 3)
#define DRIVER_AUTHOR "Antoine Jacquet, http:
#define DRIVER_DESC "Zoran 364xx"
#define FRAMES 1
#define MAX_FRAME_SIZE 200000
#define BUFFER_SIZE 0x1000
#define CTRL_TIMEOUT 500
#define ZR364XX_DEF_BUFS	4
#define ZR364XX_READ_IDLE	0
#define ZR364XX_READ_FRAME	1
#define DBG(fmt, args...) \
do  while (0)
#define _DBG DBG
#define _DBG(fmt, args...)
#define METHOD0 0
#define METHOD1 1
#define METHOD2 2
#define METHOD3 3
static int debug;
static int mode;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level");
module_param(mode, int, 0644);
MODULE_PARM_DESC(mode, "0 = 320x240, 1 = 160x120, 2 = 640x480");
static struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
struct zr364xx_mode ;
struct zr364xx_framei ;
struct zr364xx_bufferi ;
struct zr364xx_dmaqueue ;
struct zr364xx_pipeinfo ;
struct zr364xx_fmt ;
static const struct zr364xx_fmt formats[] = ;
struct zr364xx_camera ;
struct zr364xx_buffer ;
static int send_control_msg(struct usb_device *udev, u8 request, u16 value,
u16 index, unsigned char *cp, u16 size)
typedef struct  message;
static unsigned char m0d1[] = ;
static unsigned char m0d2[] = ;
static unsigned char m0d3[] = ;
static message m0[] = ;
static unsigned char m1d1[] = ;
static unsigned char m1d2[] = ;
static message m1[] = ;
static unsigned char m2d1[] = ;
static message m2[] = ;
static message *init[4] = ;
static unsigned char header1[] = ;
static unsigned char header2[] = ;
static unsigned char header3;
static int buffer_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct zr364xx_buffer *buf)
static int buffer_prepare(struct videobuf_queue *vq, struct videobuf_buffer *vb,
enum v4l2_field field)
static void buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops zr364xx_video_qops = ;
static int zr364xx_vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type type);
static ssize_t zr364xx_read(struct file *file, char __user *buf, size_t count,
loff_t * ppos)
static void zr364xx_fillbuff(struct zr364xx_camera *cam,
struct zr364xx_buffer *buf,
int jpgsize)
static int zr364xx_got_frame(struct zr364xx_camera *cam, int jpgsize)
static int zr364xx_read_video_callback(struct zr364xx_camera *cam,
struct zr364xx_pipeinfo *pipe_info,
struct urb *purb)
static int res_get(struct zr364xx_camera *cam)
static inline int res_check(struct zr364xx_camera *cam)
static void res_free(struct zr364xx_camera *cam)
static int zr364xx_vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static int zr364xx_vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int zr364xx_vidioc_g_input(struct file *file, void *priv,
unsigned int *i)
static int zr364xx_vidioc_s_input(struct file *file, void *priv,
unsigned int i)
static int zr364xx_vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *c)
static int zr364xx_vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *c)
static int zr364xx_vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *c)
static int zr364xx_vidioc_enum_fmt_vid_cap(struct file *file,
void *priv, struct v4l2_fmtdesc *f)
static char *decode_fourcc(__u32 pixelformat, char *buf)
static int zr364xx_vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int zr364xx_vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int zr364xx_vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int zr364xx_vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int zr364xx_vidioc_querybuf(struct file *file,
void *priv,
struct v4l2_buffer *p)
static int zr364xx_vidioc_qbuf(struct file *file,
void *priv,
struct v4l2_buffer *p)
static int zr364xx_vidioc_dqbuf(struct file *file,
void *priv,
struct v4l2_buffer *p)
static void read_pipe_completion(struct urb *purb)
static int zr364xx_start_readpipe(struct zr364xx_camera *cam)
static void zr364xx_stop_readpipe(struct zr364xx_camera *cam)
static int zr364xx_start_acquire(struct zr364xx_camera *cam)
static inline int zr364xx_stop_acquire(struct zr364xx_camera *cam)
static int zr364xx_vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int zr364xx_vidioc_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int zr364xx_open(struct file *file)
static void zr364xx_destroy(struct zr364xx_camera *cam)
static int zr364xx_release(struct file *file)
static int zr364xx_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int zr364xx_poll(struct file *file,
struct poll_table_struct *wait)
static const struct v4l2_file_operations zr364xx_fops = ;
static const struct v4l2_ioctl_ops zr364xx_ioctl_ops = ;
static struct video_device zr364xx_template = ;
static int zr364xx_board_init(struct zr364xx_camera *cam)
static int zr364xx_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void zr364xx_disconnect(struct usb_interface *intf)
static struct usb_driver zr364xx_driver = ;
static int __init zr364xx_init(void)
static void __exit zr364xx_exit(void)
module_init(zr364xx_init);
module_exit(zr364xx_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
