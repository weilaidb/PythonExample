#define S2255_MAJOR_VERSION	1
#define S2255_MINOR_VERSION	21
#define S2255_RELEASE		0
#define S2255_VERSION		KERNEL_VERSION(S2255_MAJOR_VERSION, \
S2255_MINOR_VERSION, \
S2255_RELEASE)
#define FIRMWARE_FILE_NAME "f2255usb.bin"
#define S2255_DEF_JPEG_QUAL     50
#define S2255_VR_IN		0
#define S2255_VR_OUT		1
#define S2255_VR_FW		0x30
#define S2255_CONFIG_EP         2
#define S2255_DSP_BOOTTIME      800
#define S2255_LOAD_TIMEOUT      (5000 + S2255_DSP_BOOTTIME)
#define S2255_DEF_BUFS          16
#define S2255_SETMODE_TIMEOUT   500
#define S2255_VIDSTATUS_TIMEOUT 350
#define S2255_MARKER_FRAME	cpu_to_le32(0x2255DA4AL)
#define S2255_MARKER_RESPONSE	cpu_to_le32(0x2255ACACL)
#define S2255_RESPONSE_SETMODE  cpu_to_le32(0x01)
#define S2255_RESPONSE_FW       cpu_to_le32(0x10)
#define S2255_RESPONSE_STATUS   cpu_to_le32(0x20)
#define S2255_USB_XFER_SIZE	(16 * 1024)
#define MAX_CHANNELS		4
#define SYS_FRAMES		4
#define SYS_FRAMES_MAXSIZE	(720*288*2*2 + 4096)
#define DEF_USB_BLOCK		S2255_USB_XFER_SIZE
#define LINE_SZ_4CIFS_NTSC	640
#define LINE_SZ_2CIFS_NTSC	640
#define LINE_SZ_1CIFS_NTSC	320
#define LINE_SZ_4CIFS_PAL	704
#define LINE_SZ_2CIFS_PAL	704
#define LINE_SZ_1CIFS_PAL	352
#define NUM_LINES_4CIFS_NTSC	240
#define NUM_LINES_2CIFS_NTSC	240
#define NUM_LINES_1CIFS_NTSC	240
#define NUM_LINES_4CIFS_PAL	288
#define NUM_LINES_2CIFS_PAL	288
#define NUM_LINES_1CIFS_PAL	288
#define LINE_SZ_DEF		640
#define NUM_LINES_DEF		240
#define FORMAT_NTSC	1
#define FORMAT_PAL	2
#define SCALE_4CIFS	1
#define SCALE_2CIFS	2
#define SCALE_1CIFS	3
#define SCALE_4CIFSI	4
#define COLOR_YUVPL	1
#define COLOR_YUVPK	2
#define COLOR_Y8	4
#define COLOR_JPG       5
#define MASK_COLOR       0x000000ff
#define MASK_JPG_QUALITY 0x0000ff00
#define MASK_INPUT_TYPE  0x000f0000
#define FDEC_1		1
#define FDEC_2		2
#define FDEC_3		3
#define FDEC_5		5
#define DEF_SCALE	SCALE_4CIFS
#define DEF_COLOR	COLOR_YUVPL
#define DEF_FDEC	FDEC_1
#define DEF_BRIGHT	0
#define DEF_CONTRAST	0x5c
#define DEF_SATURATION	0x80
#define DEF_HUE		0
#define IN_DATA_TOKEN	cpu_to_le32(0x2255c0de)
#define CMD_2255	cpu_to_le32(0xc2255000)
#define CMD_SET_MODE	cpu_to_le32((CMD_2255 | 0x10))
#define CMD_START	cpu_to_le32((CMD_2255 | 0x20))
#define CMD_STOP	cpu_to_le32((CMD_2255 | 0x30))
#define CMD_STATUS	cpu_to_le32((CMD_2255 | 0x40))
struct s2255_mode ;
#define S2255_READ_IDLE		0
#define S2255_READ_FRAME	1
struct s2255_framei ;
struct s2255_bufferi ;
#define DEF_MODEI_NTSC_CONT
struct s2255_dmaqueue ;
#define S2255_FW_NOTLOADED	0
#define S2255_FW_LOADED_DSPWAIT	1
#define S2255_FW_SUCCESS	2
#define S2255_FW_FAILED		3
#define S2255_FW_DISCONNECTING  4
#define S2255_FW_MARKER		cpu_to_le32(0x22552f2f)
#define S2255_READ_IDLE         0
#define S2255_READ_FRAME        1
struct s2255_fw ;
struct s2255_pipeinfo ;
struct s2255_fmt;
struct s2255_dev;
struct s2255_channel ;
struct s2255_dev ;
static inline struct s2255_dev *to_s2255_dev(struct v4l2_device *v4l2_dev)
struct s2255_fmt ;
struct s2255_buffer ;
struct s2255_fh ;
#define S2255_CUR_USB_FWVER	((3 << 8) | 11)
#define S2255_CUR_DSP_FWVER     10102
#define S2255_MIN_DSP_STATUS      5
#define S2255_MIN_DSP_COLORFILTER 8
#define S2255_NORMS		(V4L2_STD_PAL | V4L2_STD_NTSC)
#define S2255_V4L2_YC_ON  1
#define S2255_V4L2_YC_OFF 0
#define V4L2_CID_PRIVATE_COLORFILTER (V4L2_CID_PRIVATE_BASE + 0)
#define PREFIX_SIZE		512
static unsigned long G_chnmap[MAX_CHANNELS] = ;
static int debug;
static int *s2255_debug = &debug;
static int s2255_start_readpipe(struct s2255_dev *dev);
static void s2255_stop_readpipe(struct s2255_dev *dev);
static int s2255_start_acquire(struct s2255_channel *channel);
static int s2255_stop_acquire(struct s2255_channel *channel);
static void s2255_fillbuff(struct s2255_channel *chn, struct s2255_buffer *buf,
int jpgsize);
static int s2255_set_mode(struct s2255_channel *chan, struct s2255_mode *mode);
static int s2255_board_shutdown(struct s2255_dev *dev);
static void s2255_fwload_start(struct s2255_dev *dev, int reset);
static void s2255_destroy(struct s2255_dev *dev);
static long s2255_vendor_req(struct s2255_dev *dev, unsigned char req,
u16 index, u16 value, void *buf,
s32 buf_len, int bOut);
#define S2255_DRIVER_NAME "s2255"
#define s2255_dev_err(dev, fmt, arg...)					\
dev_err(dev, S2255_DRIVER_NAME " - " fmt, ##arg)
#define dprintk(level, fmt, arg...)					\
do  while (0)
static struct usb_driver s2255_driver;
static unsigned int vid_limit = 16;
static int video_nr = -1;
static int jpeg_enable = 1;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level(0-100) default 0");
module_param(vid_limit, int, 0644);
MODULE_PARM_DESC(vid_limit, "video memory limit(Mb)");
module_param(video_nr, int, 0644);
MODULE_PARM_DESC(video_nr, "start video minor(-1 default autodetect)");
module_param(jpeg_enable, int, 0644);
MODULE_PARM_DESC(jpeg_enable, "Jpeg enable(1-on 0-off) default 1");
#define USB_SENSORAY_VID	0x1943
static struct usb_device_id s2255_table[] = ;
MODULE_DEVICE_TABLE(usb, s2255_table);
#define BUFFER_TIMEOUT msecs_to_jiffies(400)
static const struct s2255_fmt formats[] = ;
static int norm_maxw(struct video_device *vdev)
static int norm_maxh(struct video_device *vdev)
static int norm_minw(struct video_device *vdev)
static int norm_minh(struct video_device *vdev)
static void planar422p_to_yuv_packed(const unsigned char *in,
unsigned char *out,
int width, int height,
int fmt)
static void s2255_reset_dsppower(struct s2255_dev *dev)
static void s2255_timer(unsigned long user_data)
static void s2255_fwchunk_complete(struct urb *urb)
static int s2255_got_frame(struct s2255_channel *channel, int jpgsize)
static const struct s2255_fmt *format_by_fourcc(int fourcc)
static void s2255_fillbuff(struct s2255_channel *channel,
struct s2255_buffer *buf, int jpgsize)
static int buffer_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct s2255_buffer *buf)
static int buffer_prepare(struct videobuf_queue *vq, struct videobuf_buffer *vb,
enum v4l2_field field)
static void buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops s2255_video_qops = ;
static int res_get(struct s2255_fh *fh)
static int res_locked(struct s2255_fh *fh)
static int res_check(struct s2255_fh *fh)
static void res_free(struct s2255_fh *fh)
static int vidioc_querymenu(struct file *file, void *priv,
struct v4l2_querymenu *qmenu)
static int vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int vidioc_querybuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *p)
static int s2255_write_config(struct usb_device *udev, unsigned char *pbuf,
int size)
static u32 get_transfer_size(struct s2255_mode *mode)
static void s2255_print_cfg(struct s2255_dev *sdev, struct s2255_mode *mode)
static int s2255_set_mode(struct s2255_channel *channel,
struct s2255_mode *mode)
static int s2255_cmd_status(struct s2255_channel *channel, u32 *pstatus)
static int vidioc_streamon(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *i)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *inp)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_jpegcomp(struct file *file, void *priv,
struct v4l2_jpegcompression *jc)
static int vidioc_s_jpegcomp(struct file *file, void *priv,
struct v4l2_jpegcompression *jc)
static int vidioc_g_parm(struct file *file, void *priv,
struct v4l2_streamparm *sp)
static int vidioc_s_parm(struct file *file, void *priv,
struct v4l2_streamparm *sp)
static int vidioc_enum_frameintervals(struct file *file, void *priv,
struct v4l2_frmivalenum *fe)
static int s2255_open(struct file *file)
static unsigned int s2255_poll(struct file *file,
struct poll_table_struct *wait)
static void s2255_destroy(struct s2255_dev *dev)
static int s2255_release(struct file *file)
static int s2255_mmap_v4l(struct file *file, struct vm_area_struct *vma)
static const struct v4l2_file_operations s2255_fops_v4l = ;
static const struct v4l2_ioctl_ops s2255_ioctl_ops = ;
static void s2255_video_device_release(struct video_device *vdev)
static struct video_device template = ;
static int s2255_probe_v4l(struct s2255_dev *dev)
static int save_frame(struct s2255_dev *dev, struct s2255_pipeinfo *pipe_info)
static void s2255_read_video_callback(struct s2255_dev *dev,
struct s2255_pipeinfo *pipe_info)
static long s2255_vendor_req(struct s2255_dev *dev, unsigned char Request,
u16 Index, u16 Value, void *TransferBuffer,
s32 TransferBufferLength, int bOut)
static int s2255_get_fx2fw(struct s2255_dev *dev)
static int s2255_create_sys_buffers(struct s2255_channel *channel)
static int s2255_release_sys_buffers(struct s2255_channel *channel)
static int s2255_board_init(struct s2255_dev *dev)
static int s2255_board_shutdown(struct s2255_dev *dev)
static void read_pipe_completion(struct urb *purb)
static int s2255_start_readpipe(struct s2255_dev *dev)
static int s2255_start_acquire(struct s2255_channel *channel)
static int s2255_stop_acquire(struct s2255_channel *channel)
static void s2255_stop_readpipe(struct s2255_dev *dev)
static void s2255_fwload_start(struct s2255_dev *dev, int reset)
static int s2255_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void s2255_disconnect(struct usb_interface *interface)
static struct usb_driver s2255_driver = ;
static int __init usb_s2255_init(void)
static void __exit usb_s2255_exit(void)
module_init(usb_s2255_init);
module_exit(usb_s2255_exit);
MODULE_DESCRIPTION("Sensoray 2255 Video for Linux driver");
MODULE_AUTHOR("Dean Anderson (Sensoray Company Inc.)");
MODULE_LICENSE("GPL");
