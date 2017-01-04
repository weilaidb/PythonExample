#define CX23885_FIRM_IMAGE_SIZE 376836
#define CX23885_FIRM_IMAGE_NAME "v4l-cx23885-enc.fw"
static unsigned int mpegbufs = 32;
module_param(mpegbufs, int, 0644);
MODULE_PARM_DESC(mpegbufs, "number of mpeg buffers, range 2-32");
static unsigned int mpeglines = 32;
module_param(mpeglines, int, 0644);
MODULE_PARM_DESC(mpeglines, "number of lines in an MPEG buffer, range 2-32");
static unsigned int mpeglinesize = 512;
module_param(mpeglinesize, int, 0644);
MODULE_PARM_DESC(mpeglinesize,
"number of bytes in each line of an MPEG buffer, range 512-1024");
static unsigned int v4l_debug;
module_param(v4l_debug, int, 0644);
MODULE_PARM_DESC(v4l_debug, "enable V4L debug messages");
#define dprintk(level, fmt, arg...)\
do  while (0)
static struct cx23885_tvnorm cx23885_tvnorms[] = ;
enum cx23885_capture_type ;
enum cx23885_capture_bits ;
enum cx23885_capture_end ;
enum cx23885_framerate ;
enum cx23885_stream_port ;
enum cx23885_data_xfer_status ;
enum cx23885_picture_mask ;
enum cx23885_vbi_mode_bits ;
enum cx23885_vbi_insertion_bits ;
enum cx23885_dma_unit ;
enum cx23885_dma_transfer_status_bits ;
enum cx23885_pause ;
enum cx23885_copyright ;
enum cx23885_notification_type ;
enum cx23885_notification_status ;
enum cx23885_notification_mailbox ;
enum cx23885_field1_lines ;
enum cx23885_field2_lines ;
enum cx23885_custom_data_type ;
enum cx23885_mute ;
enum cx23885_mute_video_mask ;
enum cx23885_mute_video_shift ;
#define IVTV_CMD_HW_BLOCKS_RST 0xFFFFFFFF
#define IVTV_API_STD_TIMEOUT 500
#define IVTV_REG_ENC_SDRAM_REFRESH (0x07F8)
#define IVTV_REG_ENC_SDRAM_PRECHARGE (0x07FC)
#define IVTV_REG_SPU (0x9050)
#define IVTV_REG_HW_BLOCKS (0x9054)
#define IVTV_REG_VPU (0x9058)
#define IVTV_REG_APU (0xA064)
#define MC417_MIWR	0x8000
#define MC417_MIRD	0x4000
#define MC417_MICS	0x2000
#define MC417_MIRDY	0x1000
#define MC417_MIADDR	0x0F00
#define MC417_MIDATA	0x00FF
#define  MCI_MEMORY_DATA_BYTE0          0x000
#define  MCI_MEMORY_DATA_BYTE1          0x100
#define  MCI_MEMORY_DATA_BYTE2          0x200
#define  MCI_MEMORY_DATA_BYTE3          0x300
#define  MCI_MEMORY_ADDRESS_BYTE2       0x400
#define  MCI_MEMORY_ADDRESS_BYTE1       0x500
#define  MCI_MEMORY_ADDRESS_BYTE0       0x600
#define  MCI_REGISTER_DATA_BYTE0        0x800
#define  MCI_REGISTER_DATA_BYTE1        0x900
#define  MCI_REGISTER_DATA_BYTE2        0xA00
#define  MCI_REGISTER_DATA_BYTE3        0xB00
#define  MCI_REGISTER_ADDRESS_BYTE0     0xC00
#define  MCI_REGISTER_ADDRESS_BYTE1     0xD00
#define  MCI_REGISTER_MODE              0xE00
#define  MCI_MODE_REGISTER_READ         0
#define  MCI_MODE_REGISTER_WRITE        1
#define  MCI_MODE_MEMORY_READ           0
#define  MCI_MODE_MEMORY_WRITE          0x40
#define MC417_SPD_CTL(x)	(((x) << 4) & 0x00000030)
#define MC417_GPIO_SEL(x)	(((x) << 1) & 0x00000006)
#define MC417_UART_GPIO_EN	0x00000001
#define MC417_SPD_CTL_SLOW	0x1
#define MC417_SPD_CTL_MEDIUM	0x0
#define MC417_SPD_CTL_FAST	0x3
#define MC417_GPIO_SEL_GPIO3	0x3
#define MC417_GPIO_SEL_GPIO2	0x2
#define MC417_GPIO_SEL_GPIO1	0x1
#define MC417_GPIO_SEL_GPIO0	0x0
void cx23885_mc417_init(struct cx23885_dev *dev)
static int mc417_wait_ready(struct cx23885_dev *dev)
int mc417_register_write(struct cx23885_dev *dev, u16 address, u32 value)
int mc417_register_read(struct cx23885_dev *dev, u16 address, u32 *value)
int mc417_memory_write(struct cx23885_dev *dev, u32 address, u32 value)
int mc417_memory_read(struct cx23885_dev *dev, u32 address, u32 *value)
void mc417_gpio_set(struct cx23885_dev *dev, u32 mask)
void mc417_gpio_clear(struct cx23885_dev *dev, u32 mask)
void mc417_gpio_enable(struct cx23885_dev *dev, u32 mask, int asoutput)
static char *cmd_to_str(int cmd)
static int cx23885_mbox_func(void *priv,
u32 command,
int in,
int out,
u32 data[CX2341X_MBOX_MAX_DATA])
static int cx23885_api_cmd(struct cx23885_dev *dev,
u32 command,
u32 inputcnt,
u32 outputcnt,
...)
static int cx23885_find_mailbox(struct cx23885_dev *dev)
static int cx23885_load_firmware(struct cx23885_dev *dev)
void cx23885_417_check_encoder(struct cx23885_dev *dev)
static void cx23885_codec_settings(struct cx23885_dev *dev)
static int cx23885_initialize_codec(struct cx23885_dev *dev)
static int bb_buf_setup(struct videobuf_queue *q,
unsigned int *count, unsigned int *size)
static int bb_buf_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb, enum v4l2_field field)
static void bb_buf_queue(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static void bb_buf_release(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static struct videobuf_queue_ops cx23885_qops = ;
static const u32 *ctrl_classes[] = ;
static int cx23885_queryctrl(struct cx23885_dev *dev,
struct v4l2_queryctrl *qctrl)
static int cx23885_querymenu(struct cx23885_dev *dev,
struct v4l2_querymenu *qmenu)
static int vidioc_s_std(struct file *file, void *priv, v4l2_std_id *id)
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *file, void *priv, unsigned int i)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctl)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int vidioc_qbuf(struct file *file, void *priv,
struct v4l2_buffer *p)
static int vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_g_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *f)
static int vidioc_s_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *f)
static int vidioc_try_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *f)
static int vidioc_log_status(struct file *file, void *priv)
static int vidioc_querymenu(struct file *file, void *priv,
struct v4l2_querymenu *a)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *c)
static int mpeg_open(struct file *file)
static int mpeg_release(struct file *file)
static ssize_t mpeg_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static unsigned int mpeg_poll(struct file *file,
struct poll_table_struct *wait)
static int mpeg_mmap(struct file *file, struct vm_area_struct *vma)
static struct v4l2_file_operations mpeg_fops = ;
static const struct v4l2_ioctl_ops mpeg_ioctl_ops = ;
static struct video_device cx23885_mpeg_template = ;
void cx23885_417_unregister(struct cx23885_dev *dev)
static struct video_device *cx23885_video_dev_alloc(
struct cx23885_tsport *tsport,
struct pci_dev *pci,
struct video_device *template,
char *type)
int cx23885_417_register(struct cx23885_dev *dev)
