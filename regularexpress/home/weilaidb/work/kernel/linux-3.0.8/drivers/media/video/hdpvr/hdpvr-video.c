#define BULK_URB_TIMEOUT   90
#define print_buffer_status()
struct hdpvr_fh ;
static uint list_size(struct list_head *list)
static void hdpvr_read_bulk_callback(struct urb *urb)
int hdpvr_cancel_queue(struct hdpvr_device *dev)
static int hdpvr_free_queue(struct list_head *q)
int hdpvr_free_buffers(struct hdpvr_device *dev)
int hdpvr_alloc_buffers(struct hdpvr_device *dev, uint count)
static int hdpvr_submit_buffers(struct hdpvr_device *dev)
static struct hdpvr_buffer *hdpvr_get_next_buffer(struct hdpvr_device *dev)
static void hdpvr_transmit_buffers(struct work_struct *work)
static int hdpvr_start_streaming(struct hdpvr_device *dev)
static int hdpvr_stop_streaming(struct hdpvr_device *dev)
static int hdpvr_open(struct file *file)
static int hdpvr_release(struct file *file)
static ssize_t hdpvr_read(struct file *file, char __user *buffer, size_t count,
loff_t *pos)
static unsigned int hdpvr_poll(struct file *filp, poll_table *wait)
static const struct v4l2_file_operations hdpvr_fops = ;
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int vidioc_s_std(struct file *file, void *private_data,
v4l2_std_id *std)
static const char *iname[] = ;
static int vidioc_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int vidioc_s_input(struct file *file, void *private_data,
unsigned int index)
static int vidioc_g_input(struct file *file, void *private_data,
unsigned int *index)
static const char *audio_iname[] = ;
static int vidioc_enumaudio(struct file *file, void *priv,
struct v4l2_audio *audio)
static int vidioc_s_audio(struct file *file, void *private_data,
struct v4l2_audio *audio)
static int vidioc_g_audio(struct file *file, void *private_data,
struct v4l2_audio *audio)
static const s32 supported_v4l2_ctrls[] = ;
static int fill_queryctrl(struct hdpvr_options *opt, struct v4l2_queryctrl *qc,
int ac3)
static int vidioc_queryctrl(struct file *file, void *private_data,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *private_data,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *private_data,
struct v4l2_control *ctrl)
static int hdpvr_get_ctrl(struct hdpvr_options *opt,
struct v4l2_ext_control *ctrl)
static int vidioc_g_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static int hdpvr_try_ctrl(struct v4l2_ext_control *ctrl, int ac3)
static int vidioc_try_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static int hdpvr_set_ctrl(struct hdpvr_device *dev,
struct v4l2_ext_control *ctrl)
static int vidioc_s_ext_ctrls(struct file *file, void *priv,
struct v4l2_ext_controls *ctrls)
static int vidioc_enum_fmt_vid_cap(struct file *file, void *private_data,
struct v4l2_fmtdesc *f)
static int vidioc_g_fmt_vid_cap(struct file *file, void *private_data,
struct v4l2_format *f)
static int vidioc_encoder_cmd(struct file *filp, void *priv,
struct v4l2_encoder_cmd *a)
static int vidioc_try_encoder_cmd(struct file *filp, void *priv,
struct v4l2_encoder_cmd *a)
static const struct v4l2_ioctl_ops hdpvr_ioctl_ops = ;
static void hdpvr_device_release(struct video_device *vdev)
static const struct video_device hdpvr_video_template = ;
int hdpvr_register_videodev(struct hdpvr_device *dev, struct device *parent,
int devnum)
