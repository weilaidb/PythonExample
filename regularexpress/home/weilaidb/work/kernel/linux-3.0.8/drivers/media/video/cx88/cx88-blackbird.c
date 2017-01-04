MODULE_DESCRIPTION("driver for cx2388x/cx23416 based mpeg encoder cards");
MODULE_AUTHOR("Jelle Foks <jelle@foks.us>, Gerd Knorr <kraxel@bytesex.org> [SuSE Labs]");
MODULE_LICENSE("GPL");
static unsigned int mpegbufs = 32;
module_param(mpegbufs,int,0644);
MODULE_PARM_DESC(mpegbufs,"number of mpeg buffers, range 2-32");
static unsigned int debug;
module_param(debug,int,0644);
MODULE_PARM_DESC(debug,"enable debug messages [blackbird]");
#define dprintk(level,fmt, arg...)	if (debug >= level) \
printk(KERN_DEBUG "%s/2-bb: " fmt, dev->core->name , ## arg)
#define BLACKBIRD_FIRM_IMAGE_SIZE 376836
#define IVTV_CMD_HW_BLOCKS_RST 0xFFFFFFFF
#define IVTV_API_STD_TIMEOUT 500
enum blackbird_capture_type ;
enum blackbird_capture_bits ;
enum blackbird_capture_end ;
enum blackbird_framerate ;
enum blackbird_stream_port ;
enum blackbird_data_xfer_status ;
enum blackbird_picture_mask ;
enum blackbird_vbi_mode_bits ;
enum blackbird_vbi_insertion_bits ;
enum blackbird_dma_unit ;
enum blackbird_dma_transfer_status_bits ;
enum blackbird_pause ;
enum blackbird_copyright ;
enum blackbird_notification_type ;
enum blackbird_notification_status ;
enum blackbird_notification_mailbox ;
enum blackbird_field1_lines ;
enum blackbird_field2_lines ;
enum blackbird_custom_data_type ;
enum blackbird_mute ;
enum blackbird_mute_video_mask ;
enum blackbird_mute_video_shift ;
#define IVTV_REG_ENC_SDRAM_REFRESH (0x07F8)
#define IVTV_REG_ENC_SDRAM_PRECHARGE (0x07FC)
#define IVTV_REG_SPU (0x9050)
#define IVTV_REG_HW_BLOCKS (0x9054)
#define IVTV_REG_VPU (0x9058)
#define IVTV_REG_APU (0xA064)
static void host_setup(struct cx88_core *core)
#define P1_MDATA0 0x390000
#define P1_MDATA1 0x390001
#define P1_MDATA2 0x390002
#define P1_MDATA3 0x390003
#define P1_MADDR2 0x390004
#define P1_MADDR1 0x390005
#define P1_MADDR0 0x390006
#define P1_RDATA0 0x390008
#define P1_RDATA1 0x390009
#define P1_RDATA2 0x39000A
#define P1_RDATA3 0x39000B
#define P1_RADDR0 0x39000C
#define P1_RADDR1 0x39000D
#define P1_RRDWR  0x39000E
static int wait_ready_gpio0_bit1(struct cx88_core *core, u32 state)
static int memory_write(struct cx88_core *core, u32 address, u32 value)
static int memory_read(struct cx88_core *core, u32 address, u32 *value)
static int register_write(struct cx88_core *core, u32 address, u32 value)
static int register_read(struct cx88_core *core, u32 address, u32 *value)
static int blackbird_mbox_func(void *priv, u32 command, int in, int out, u32 data[CX2341X_MBOX_MAX_DATA])
static int blackbird_api_cmd(struct cx8802_dev *dev, u32 command,
u32 inputcnt, u32 outputcnt, ...)
static int blackbird_find_mailbox(struct cx8802_dev *dev)
static int blackbird_load_firmware(struct cx8802_dev *dev)
static void blackbird_codec_settings(struct cx8802_dev *dev)
static int blackbird_initialize_codec(struct cx8802_dev *dev)
static int blackbird_start_codec(struct file *file, void *priv)
static int blackbird_stop_codec(struct cx8802_dev *dev)
static int bb_buf_setup(struct videobuf_queue *q,
unsigned int *count, unsigned int *size)
static int
bb_buf_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
bb_buf_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void
bb_buf_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
static struct videobuf_queue_ops blackbird_qops = ;
static const u32 *ctrl_classes[] = ;
static int blackbird_queryctrl(struct cx8802_dev *dev, struct v4l2_queryctrl *qctrl)
static int vidioc_querymenu (struct file *file, void *priv,
struct v4l2_querymenu *qmenu)
static int vidioc_querycap (struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_enum_fmt_vid_cap (struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_vid_cap (struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_try_fmt_vid_cap (struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_s_fmt_vid_cap (struct file *file, void *priv,
struct v4l2_format *f)
static int vidioc_reqbufs (struct file *file, void *priv, struct v4l2_requestbuffers *p)
static int vidioc_querybuf (struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_qbuf (struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_dqbuf (struct file *file, void *priv, struct v4l2_buffer *p)
static int vidioc_streamon(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_streamoff(struct file *file, void *priv, enum v4l2_buf_type i)
static int vidioc_g_ext_ctrls (struct file *file, void *priv,
struct v4l2_ext_controls *f)
static int vidioc_s_ext_ctrls (struct file *file, void *priv,
struct v4l2_ext_controls *f)
static int vidioc_try_ext_ctrls (struct file *file, void *priv,
struct v4l2_ext_controls *f)
static int vidioc_s_frequency (struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_log_status (struct file *file, void *priv)
static int vidioc_queryctrl (struct file *file, void *priv,
struct v4l2_queryctrl *qctrl)
static int vidioc_enum_input (struct file *file, void *priv,
struct v4l2_input *i)
static int vidioc_g_ctrl (struct file *file, void *priv,
struct v4l2_control *ctl)
static int vidioc_s_ctrl (struct file *file, void *priv,
struct v4l2_control *ctl)
static int vidioc_g_frequency (struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_g_input (struct file *file, void *priv, unsigned int *i)
static int vidioc_s_input (struct file *file, void *priv, unsigned int i)
static int vidioc_g_tuner (struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_s_tuner (struct file *file, void *priv,
struct v4l2_tuner *t)
static int vidioc_s_std (struct file *file, void *priv, v4l2_std_id *id)
static int mpeg_open(struct file *file)
static int mpeg_release(struct file *file)
static ssize_t
mpeg_read(struct file *file, char __user *data, size_t count, loff_t *ppos)
static unsigned int
mpeg_poll(struct file *file, struct poll_table_struct *wait)
static int
mpeg_mmap(struct file *file, struct vm_area_struct * vma)
static const struct v4l2_file_operations mpeg_fops =
;
static const struct v4l2_ioctl_ops mpeg_ioctl_ops = ;
static struct video_device cx8802_mpeg_template = ;
static int cx8802_blackbird_advise_acquire(struct cx8802_driver *drv)
static int cx8802_blackbird_advise_release(struct cx8802_driver *drv)
static void blackbird_unregister_video(struct cx8802_dev *dev)
static int blackbird_register_video(struct cx8802_dev *dev)
static int cx8802_blackbird_probe(struct cx8802_driver *drv)
static int cx8802_blackbird_remove(struct cx8802_driver *drv)
static struct cx8802_driver cx8802_blackbird_driver = ;
static int __init blackbird_init(void)
static void __exit blackbird_fini(void)
module_init(blackbird_init);
module_exit(blackbird_fini);
module_param_named(video_debug,cx8802_mpeg_template.debug, int, 0644);
MODULE_PARM_DESC(debug,"enable debug messages [video]");
